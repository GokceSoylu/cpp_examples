#include <iostream>
void fix(int[],int);
int main()
{
    using namespace std;
    bool x;
    int a[]={1,2,3,1,4,2,5,2,7,3,6,NULL},i,j;
    cout<<"dizinin elemanları"<<endl;
    for(i=0;i<11;i++) cout<<a[i];
    cout<<endl;
    for(i=0;a[i]!=NULL;i++)
    {   
        x=false;
        for(j=i+1;a[j]!=NULL;j++)
            if(a[i]==a[j])
            {
                fix(a,j);
                x=true;
            }
        if(x==true)cout<<" "<<a[i];
    }

}
void fix(int a[], int j)
{
    for(;a[j]!=NULL;j++) 
        a[j]=a[j+1];
}