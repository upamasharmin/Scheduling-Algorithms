#include<iostream.h>
using namespace std;
int main(){
int n,bt[10],wt[10],tat[10],avwt=0,avtat=0,i,j;
cout<<"Enter total number of processes:";
cin>>n;
cout<<"nEnter process burst timing;
for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];

    }
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    cout<<"nProcess burst time waiting time turn around time";
    for(i=0;i<n;i++)
    {

        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<"nP["<<i+1<<"]"<<"tt"<<bt[i]<<"tt"<<wt[i]<<"tt"<<tat[i];
    }
    avwt/=i;
    avtat/=i;
    cout<<"nAverage waiting time:"<<avwt;
    cout<<"nAverage turn around time:"<<avtat;
    return 0;
}
