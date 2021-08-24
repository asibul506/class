#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    deque<int>dq;
    dq.push_back(2);
    dq.push_back(2);
    dq.push_back(3);

    for(int i=0;i<dq.size();i++)
    {
        cout<<dq[i]<<" ";
        sum+=dq[i];

    }
    cout<<endl;
    cout<<sum<<endl;
}
