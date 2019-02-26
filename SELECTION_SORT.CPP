#include <iostream>
using namespace std;

//first_part_started

int selectionSort ( int A[], int N)

{
int I , J, Smallsub, Temp;
for( I=0 ; I < N-1 ; I++)
 {
 Smallsub = I;

//Second_part_started

 for( J=I+1 ; J < N ; J++)
  {
  if ( A[J] < A[Smallsub] )
  Smallsub = J;
  }

 //Third_part_started

 Temp = A[I];
 A[I] = A[Smallsub];
 A[Smallsub] = Temp;
 }
}

//fourth_part_started

void displayArray(int A[],int N)
{
 int I;
 for(I=0;I<N;I++)
  cout<<A[I]<<" "; cout<<"\n";

 }

 //fifth_part_started___last_part:

 int main() {

 int N;
 cout<<"enter size of array\n"; cin>>N;
 int A[N],I;
 cout<<"enter elements of array\n";

 for(I=0;I<N;I++)
 cin>>A[I]; cout<<"Array before sorting\n";

 displayArray(A,N);

 selectionSort(A,N);

 cout<<"Array after sorting\n";
 displayArray(A,N);
 return 0;
}
