
#include <iostream>
using namespace std;

//first_part_started
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//second_part_started

void bubbleSort(int A[], int N)
{
   int I, J;
   bool swapped;
   for (I = 0; I < N-1; I++)

    //third_part_started
   {
     swapped = false;
     for (J = 0; J < N-I-1; J++)
     {
        if (A[J] > A[J+1])
        {
           swap(&A[J], &A[J+1]);
           swapped = true;
        }
     }


     if (swapped == false)
        break;
   }
}

//fourth_part_started

void printArray(int A[], int size)
{
    int I;
    for (I=0; I < size; I++)

         cout<< A[I]<<endl;

}

//fifth_part_started_last_part
int main()
{
    int A[]={5,6,8,9,10,1,7} ;
    int N = sizeof(A)/sizeof(A[0]);
    bubbleSort(A,N);

    cout<<"Sorted array:"<<endl;
    printArray(A,N);
    return 0;
}
