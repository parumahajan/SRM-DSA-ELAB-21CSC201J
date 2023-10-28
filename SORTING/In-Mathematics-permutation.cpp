#include<iostream>
using namespace std;
int MEGA_SALE(int [],int ,int ) ;
void bubble_sort(int [],int ) ;
int minof(int ,int ) ;
int main()
 {
 int t,arr[100],no,i,k ;
 cin>>t ;
 while(t--)
 {
     cin>>no ;
     cin>>k ;
     for(i=0;i<no;i++)
         cin>>arr[i] ;

     no=MEGA_SALE(arr,no,k) ;
     cout<<abs(no)<<endl ;
 }
 return 0;
}

int MEGA_SALE(int arr[],int no,int k)
{
    int i ;
    bubble_sort(arr,no) ;
 
    int sum=0 ;
    for(i=0;i<k;i++)
        sum=minof(sum,sum+arr[i]) ;

    return sum ;
}

void bubble_sort(int arr[],int no)
{
    int i,j,temp ;
    for(i=0;i<no-1;i++)
    {
        for(j=0;j<no-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j] ;
                arr[j]=arr[j+1] ;
                arr[j+1]=temp ;
            }
        }
    }
}

int minof(int a,int b)
{
    return a>b?b:a ;
}