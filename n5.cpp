#include <iostream>
#include <cmath>
using namespace std;

void Continuous_knapsack( int** a, int n, double* b, int W, int S)
{
  double max = 0;
  int m;
  for (int i = 0; i < n; i++ )
  if ( max < a[i][2] & a[i][0]!=0)
{
    max = a[i][2];
    m = i;
}
  if (a[m][0] < W)
{
    b[m]=1;
    a[m][0]=0;
    Continuous_knapsack ( a, n, b, W-a[m][0], a[m][1]);
}
  else {
    b[m] = round((W/a[m][0])*100)/100;
    S+=b[m]*a[m][1];
    for (int i = 0; i < n; i++)
        cout<<b[i]<<' ';
    cout<<S;
}
}
int main()
{
   int W;
   int n;
   cin>>W>>n;
   double* b = new double [n];
   int** a = new int *[3];
   for (int i = 0; i < 3; i++)
    a[i] = new int[n];
   for (int i = 0; i < n; i++){
    cin>>a[i][0]>>a[i][1];
    a[i][2] = (a[i][1]*100)/a[i][0];
    b[i]=0;
   }
Continuous_knapsack( a, n, b, W, 0);
    return 0;
}
