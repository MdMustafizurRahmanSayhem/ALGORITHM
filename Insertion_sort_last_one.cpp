#include <iostream>

using namespace std;

//first_part_started

void insertion_sort(int A[], int N)
{
    int I,J,Temp;
    for (I = 2; I < N; I++) {
        J = I;
        //second_part_started
        while ((J > 1) && (A[J] < A[J-1])) {
            Temp = A[J];
            A[J] = A[J - 1];
            A[J - 1] = Temp;

            //third_part
            J=J-1;
        }
    }
}

//fourth_part_started

void print_array(int array[], int N)
{
    int J;
    for (J = 1; J < N; J++)
    {
        cout << array[J] << endl;
    }
}

//fifth_part_started_last_part
int main()
{
    int array[] = {4,6,3,7,5,9,2,8,1,10};
    insertion_sort(array,10);
    print_array(array,10);
    return 0;
}
