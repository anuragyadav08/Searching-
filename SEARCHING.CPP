
#include <iostream>

using namespace std;

void Binary(int arr[],int size)
{
    //*****Sorting Array*****
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {  
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
   //*****Finding Positin*****
   int l,r,mid,key;
   l=0;
   r=size;
   cout<<"Enter Element To Search : ";
   cin>>key;
   while(l<=r)
   {
       mid=(r+l)/2;
       if(arr[mid]==key)
       {
           cout<<"Element Found at Position : "<<mid+1;
           break;
       }
       else if(arr[mid]<key)
       {
           l=mid+1;
       }
       else
       {
           r=mid-1;
       }
   }
   if(l>r)
   {
       cout<<"Element Not Found !";
   }
}
void Linear(int arr[],int size)
{
    int count=0,i,key;
    cout<<"Enter Element To Search : ";
   cin>>key;
   for( i=0;i<size;i++)
   {
       if(arr[i]==key)
       {
           cout<<"Element Found At Position : "<<i+1;
           count=1;
           break;
       }
   }
   if(count==0)
   {
       cout<<"Element Not Found !";
   }
}
int main()
{
    int arr[100],size,ch;
    cout<<"Enter Size of Array : ";
    cin>>size;
    cout<<"Enter Array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Choice : \n1 : Linear Search\n2 : Binary Search \n";
    cout<<"Enter Choice :";
    cin>>ch;
    if(ch==1)
    {
        Linear(arr,size);
    }
    else if(ch==2)
    {
       Binary(arr,size); 
    }
    else
    {
        cout<<"Invalid Choice !";
    }

    return 0;
}

