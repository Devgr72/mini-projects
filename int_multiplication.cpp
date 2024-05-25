#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int int_mul(string a,string b){
  int n = a.size();
    int m = b.size();

    int h = n / 2;
    string al = a.substr(0, h);
    string ar = a.substr(h);
    string bl = b.substr(0, h);
    string br = b.substr(h);

    if (n == 1 && m == 1) {
        int a1 = stoi(a);
        int b1 = stoi(b);
        return a1 * b1;
    }
   
    int x1 = int_mul(al, bl);
    int x2 = int_mul(al, br);
    int x3 = int_mul(ar, bl);
    int x4 = int_mul(ar, br);
  
    return x1 * pow(10, 2 * (n - h)) + (x2 + x3) * pow(10, n - h) + x4;
}

int main(){
  string n1,n2;
  cout<<"enter 1st number:"<<endl;
  cin>>n1;
  cout<<"enter 2nd number:"<<endl;
  cin>>n2;

  int res = int_mul(n1,n2);

  cout<<"RESULT IS : "<<res;
  
  return 0;
}
