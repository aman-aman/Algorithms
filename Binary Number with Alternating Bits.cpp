//aman kumar jha
class Solution {
public:
    bool allset(unsigned int n)
    {
        if((n+1)&n==0)
            return true;
        return false;
    }
    bool allbitalter(unsigned int n)
    {
        unsigned int num=n ^ (n>>1);
        return allset(num);
    }
    bool hasAlternatingBits(int n)
    {
        unsigned int val=n;
        if(allbitalter(val))
            return true;
        return false;
    }
};
