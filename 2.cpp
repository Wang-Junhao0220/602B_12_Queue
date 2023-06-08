#include<bits/stdc++.h>
#define N 100001
using namespace std;
int n,k,p,c=0;
bool a[N],b[N];
int main()
{
    cin>>n>>k>>p;
    int m=k/n,i=1;
    while(c<m)
    {
        for(int j=1;j<=n;j++)
        {
            b[i]=true;
            if(j==n)
            {
                c++;
                a[i]=true;
                if(c==m) break;
            }
            int l=0;
            while(l<p)
            {
                i=i%k+1;
                while(b[i]) i=i%k+1;
                l++;
            }
            i=i%k+1;
            while(b[i]) i=i%k+1;
        }
    }
    for(int j=1;j<=k;j++)
        if(a[j])
//            printf("%d\n",i);
            cout<<j<<endl;
    return 0;
}
