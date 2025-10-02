#include <iostream>
#include <iomanip>
//#define size 10

using namespace std;

int main(int argc,char *argv[]){

int size=argc-1;
//cout<<"How many numbers? ";
//cin>>size;

int *pa, *pb, i, temp;
int *a =new int[size];
pa = &a[0]; //pa =a;

//arr input
for(int i=0; i<size;i++){
  *a=atoi(argv[i+1]);
  a++;
}

//cout<<"Original: ";
for (i=0; i<size-1; i++ ,pa++){
   //cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
//cout<<setw(3)<<*pa<<endl;

//assigns pb to last position and reset pa to 1st position
pb = pa;
pa -= (size-1);

for (i=0; i<size/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}

//reset pa to 1st position
pa -= size/2;

//cout<<"Reversed: ";
for (i=0; i<size-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

delete []a;
return 0;
}
