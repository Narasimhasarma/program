#include<iostream>
#include<cmath>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string direction[10000];
    long int distance[10000];
    long int n,i=0,x_cor=0,y_cor=0,origin_x=0,origin_y=0;
    float dist;
    cin>>n;
    {
        cin>>direction[i]>>distance[i];
}
for(i=0;i<n;i++)
{
        if (direction[i]=="up")
            y_cor=y_cor+distance[i];
        else if(direction[i]=="down")
                y_cor=y_cor-distance[i];
        else if(direction[i]=="left")
            x_cor=x_cor-distance[i];
         else
            x_cor=x_cor+distance[i];

}
dist=sqrt((x_cor-origin_x)*(x_cor-origin_x)+((y_cor-origin_y)*(y_cor-origin_y)));
cout<<dist;
return 0;
}



