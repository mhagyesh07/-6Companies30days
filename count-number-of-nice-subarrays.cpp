class Solution {
public:
    int f(vector<int>&a,int k)
    {   
        if(k<0) return 0;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]&1)
            {
                a[i]=1;
            }dd
            else
            {
                a[i]=0;
            }
        }
        int i=0,j=0;
        int s=0,c=0;
        while(j<n)
        {
            s+=a[j];
            while(s>k)
            {
                s-=a[i];
                i++;
            }
            c=c+j-i+1;
            j++;
        }
        return c;
    }
    int numberOfSubarrays(vector<int>&a, int k) {
        return f(a,k)-f(a,k-1);
    }
};
