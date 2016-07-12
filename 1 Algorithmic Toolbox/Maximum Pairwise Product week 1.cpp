#include <iostream>
#include <vector>
#define ll long long
using std::vector;
using std::cin;
using std::cout;
using namespace std;
//ll MaxPairwiseProduct(const vector<int>& numbers) {
//  ll result = 0;
//  int n = numbers.size();
//  for (int i = 0; i < n; ++i) {
//    for (int j = i + 1; j < n; ++j) {
//      if (numbers[i] * numbers[j] > result) {
//        result = (ll)numbers[i] * (ll)numbers[j];
//      }
//    }
//  }
//  return result;
//}
int MaxOfArray( vector<int>& numbers) {
    int maxIndex=0;
    int s=numbers.size();
    for(int i=1;i<s; i++)
    {
        if(numbers[maxIndex]<numbers[i]){
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main() {
    int n,x,y;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    int f=MaxOfArray(numbers);
//    cout<<f<<endl;
//    return 0;
    x=numbers[f];
    numbers[f]=-1;
    y=numbers[MaxOfArray(numbers)];
    cout<<x*y;
    return 0;
}
