#include <iostream>
 
using namespace std;
 
int main()
{
int a[] = {546, 95803, 7843, 7387, 982, 23, 984, 4527354, 789, 10};
 for (int i = 0; i < 10; i++)
{
 cout<<a[i]<<" ";
}

cout<<"\n";

int b[10];
for (int i = 0; i < 10; i++)
{
    b[i]=-10+rand()%21;
    cout<<b[i]<<" ";
}

cout<<"\n";

int c[5];
for (int i = 0; i < 5; i++)
{
    cin>>c[i];
}

cout<<"\n";
 
 int d[10];
for (int i = 0; i < 10; i++)
{
    d[i]=-10+rand()%21;
    if (i%2==0) {
    d[i]=3*d[i];}
    else 
    { d[i]=5*d[i];
    }
    cout<<d[i]<<" ";
}
 
cout<<"\n";

int s, e[5][5];
for (int i = 0; i < 5; i++ )
{
    
    for (int j = 0; j < 5; j++ )
    {
        e[i][j]=-10+rand()%21;  
        cout<<e[i][j]<<" ";
    }
   cout<<"\n"; 
}

cout<<"\n";

s=0;
for (int i = 0; i < 5; i++ )
{
    
    for (int j = 0; j < 5; j++ )
    {
        s+=e[i][j];
        
    }
   cout<<s<<endl;
   s=0;
}

for (int i = 0; i < 5; i++ )
{
    
    for (int j = 0; j < 5; j++ )
    {
        if (e[i][j]<0)
        {
            e[i][j]=0;
        } 
        cout<<e[i][j]<<" ";
        
    }
   cout<<"\n"; 
}
return 0;
}
 