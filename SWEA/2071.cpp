#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int TestCase;
  cin >> TestCase;
  for(int tc = 1; tc <= TestCase; tc++){
    int sum = 0;
    for(int i = 0; i < 10; i++){
      int num;
      cin >> num;
      sum+=num;
    }
    double avg = sum / double(10);
    cout<<'#'<<tc<<' '<<round(avg)<<'\n';
  }
}
