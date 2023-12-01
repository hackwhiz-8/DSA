// C program to illustrate macros
#include<iostream>
 using namespace std;
// Macro definition
#define AREA(b1,b2) (b1*b2)
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138
#define ele 1,\
            2,\
            3
            \
#define min(a, b) (((a) < (b)) ? (a) : (b))
 
// Driver Code
int main()
{
    // Given lengths l1 and l2
    int b1 = 10, b2 = 5, area;
 
    // Find the area using macros
    area = AREA(b1, b2);
 
    // Print the area
    cout<<area<<endl;

    cout<<INSTAGRAM<<endl;

    int arr[]= {ele};
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   int a = 10,b = 20;
    cout<<min(a,b)<<endl;
 
    return 0;
}