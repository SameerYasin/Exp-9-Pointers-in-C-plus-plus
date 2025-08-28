//Sameer Yasin exp-9
//24070123092
#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the Elements of the array: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    cout<<"The Array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"\nThe reversed array is: ";
    int* arr1 = arr; // pointer to first element
    for(int i=4;i>=0;i--)
    {
        cout<<*(arr1+i)<<" ";
    }

    return 0;
}

/*
Output:
Enter the Elements of the array: 2
3
4
5
6
The Array is: 2 3 4 5 6 
The reversed array is: 6 5 4 3 2
*/
