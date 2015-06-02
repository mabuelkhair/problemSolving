#include<bits/stdc++.h>
using namespace std;
long long m_w, m_z;
int get_random()
{
m_z = 36969 * (m_z & 65535) + (m_z >> 16);
m_w = 18000 * (m_w & 65535) + (m_w >> 16);
long long res = (m_z << 16) + m_w;
return res % 1000000000;
}
vector<int>r;
vector<int>l;
vector<int>dq;
int partation(int target,int end,vector<int>&arr)
{
    int pivot=rand()%end;
    pivot=arr[pivot];
        int idx=0;
        int rr=0,ll=0;
        bool check=0;
        for(int i=0;i<end;i++)
        {
            if(arr[i]<pivot)
                l[ll]=arr[i],idx++,ll++;
            else
                if(arr[i]>pivot||(arr[i]==pivot&&check))
                r[rr]=arr[i],rr++;

        	if(arr[i]==pivot)
        		check=1;
        }
        if(idx==target-1)
            return pivot;


        if(idx>=target)
        {
            return partation(target,ll,l);
        }

        else
            return partation(target-idx-1,rr,r);

}

int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k>>m_w>>m_z;
        dq.resize(n);
        r.resize(n);
        l.resize(n);
        for(int i=0;i<n;i++)
        {
            dq[i]=get_random();
        }
            cout<<partation(k,n,dq)<<endl;
    }


    return 0;
}
