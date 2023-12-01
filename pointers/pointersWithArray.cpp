#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
           
           int arr[10]={1,5,3,4,5,6,7};

        //    cout<<"the address of arr "<<arr<<endl;
        //    cout<<"the address of arr "<<&arr[0]<<endl;

        //    cout<<"star pointer array "<<*arr<<endl;
        //    cout<<"*(arr+1) "<<*(arr+1)<<endl;//by adding one added to the index 
        //    cout<<"*arr + 1 "<<*arr + 1<<endl;

        //    cout<<" "<<6[arr]<<endl;
         
        //    cout<<sizeof(arr)<<endl;
        //    cout<<sizeof(*arr)<<endl;
        //    cout<<sizeof(&arr)<<endl;

           int *ptr = &arr[0];
        //    cout<<sizeof(ptr)<<endl;
        //    cout<<sizeof(&ptr)<<endl;
        //    cout<<sizeof(*ptr)<<endl;
        
//  & operater - address will be diffrent in both case 

        //   int *ptr = &arr[0];
          cout<<"-> "<<&arr[0]<<endl;
           cout<<"-> "<<&ptr<<endl;

//     int arr2[10]= {1,2,3,4,5,6,7,8};
//     //error 
//    //  arr = arr + 1;

//     int *ptr2= &arr[0];
//      cout<<ptr2<<endl;
//     ptr2  = ptr2 + 6 ;
//     cout<<*ptr2<<endl;
  
    return 0;
}
