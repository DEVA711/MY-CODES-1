
/* #include <iostream>
using namespace std;
//selection sort
int main()
{
    // sotmaar uss array ka naam hai jise sort marna hai
    int sotmaar[100000];
    // n size hai
    int n;
    // temp swap maarne ke liye just aise hi banaya
    int temp;
    // mood aise hi bna diya ki agar manual swap krna ya swap func use krna
    int mood;
    // mini minimum index hai
    int mini;
    cin>>n;
    for(int i=0;i<n;i++)
    {cin>>sotmaar[i];}
    cin>>mood;
    for (int i = 0; i <n-1 ; i++)
    { mini=i; 
    for (int j = i+1; j < n; j++)
    { 
        if (sotmaar[j]<sotmaar[mini])
        {
          mini=j;
             }
    }
    // store array in another array element not any random integer saale
   if (mood==1)
   swap(sotmaar[i],sotmaar[mini]);
  if(mood==0)
  { temp=sotmaar[i];
   sotmaar[i]=sotmaar[mini];
   sotmaar[mini]=temp;}
    
    }
    for (int i = 0; i < n; i++)
    {
       cout<<sotmaar[i]<<" ";
    }
    // now u get the sorted array
    
}  */

//sare sort ek saath
#include <iostream>
using namespace std;
//selection_sort mai humpehle element ko min bolke aage minimum dhoondte hain aur phir dono ko swap krdete hain
void selection_sort(int arr[],int n)
{ int mini;
  for (int i = 0; i < n-1; i++)
  {
    mini=i;
    for (int j = i+1; j < n  ; j++)
    {
       if (arr[j]<arr[mini])
       {
         mini=j;
       }
       
    }
    swap(arr[mini],arr[i]);

    
  }
  



}
//bubble_sort mai hum rounds of swapping chalate hain aur har round mai prev and next element mai condition anusar swap krte hain ya nhi krte
void bubble_sort(int arr[],int n)
{
  for(int i=1;i<n ;i++)
  {
    bool swapped=0;
    for(int j=0;j<n-i;j++)
   { if(arr[j]>arr[j+1])
  {swap(arr[j],arr[j+1]);
    swapped=1;} }
    if (swapped==0)
{break;}

  }


}
//insertion_sort
void insertion_sort(int arr[],int n)
{
   for (int i = 0; i < n; i++)
   {
    int j=i;
   while(j>0&&arr[j-1]>arr[j])
   {swap(arr[j-1],arr[j]);
   j--;}
    
   }
   }
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 
 selection_sort(arr,n);
 for(int j=0;j<n;j++)
 {cout<<arr[j]<<" ";}
 
}
