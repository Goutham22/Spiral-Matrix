#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n to generate Spiral Matrix" << endl;
  cin >> n;
  
  if(n <= 0)  
  {
    cout << "Invalid number" << endl;
    return 0;
  }
  
  int a[n][n];
  
  int num = 1;
  int last = n-1;
  int first = 0;

  for(int i=0; i<n; i++)
  {
    for(int j=i; j<=last; j++)
      a[i][j] = num++;

    for(int k=i+1; k<=last; k++)
      a[k][last] = num++;

    for(int l=last-1; l>=first; l--)
      a[last][l] = num++;

    for(int m=last-1; m>first; m--)
      a[m][first] = num++;

    --last;
    ++first;
  }
  
  int width = int(log10(n*n)) + 1;  

  cout << "Spiral Matrix for value " << n << " is" << endl; 
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      cout.setf(ios::right, ios::adjustfield);
      cout.width(width);
      cout << a[i][j] << " ";      
    }

    cout << endl;
  }
  return 0;
}
