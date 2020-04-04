#define ll long long
#define mod 1000000007
//count number of inversion in an array

int merge(vector<int> &arr,int l, int m, int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    int inv=0;
    for (int i=0;i<n1;i++)
        L[i]=arr[l+i];

    for (int i=0;i<n2;i++)
        R[i]=arr[m+1+i];

    int i=0,j=0,k=l;

    while(i<n1&&j<n2)
    {
        if (L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
            inv=inv+(n1-i);
            inv=inv%mod;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }

    return inv%mod;
}

int getcount(vector<int> &a,int l,int r)
{
    if(l>=r)
    {
        return 0;
    }
    int m=l+(r-l)/2;
    return getcount(a,l,m)+getcount(a,m+1,r)+merge(a,l,m,r);
}
int Solution::solve(vector<int> &a) {

    int cnt=0;
    return getcount(a,0,a.size()-1)%mod;
}
