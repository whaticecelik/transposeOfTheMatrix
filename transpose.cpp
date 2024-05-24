#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cout<< "Please enter the number of rows in your matrix: ";
  cin >> a;
  cout<< "Please enter the number of columns in your matrix: ";
  cin >> b;
  int mat[a][b];
  for(int i = 0; i< a; i++){
    cout<<"Enter the elements of the " << i+1 <<" st/nd/th row separated by spaces: ";
    for(int j =0; j<b; j++){
      cin>>mat[i][j];
    }
  }
   cout << "The transpose of the matrix you entered:" << endl;
    for (int i = 0; i < b; i++) { cout << "|";
        for (int j = 0; j < a; j++) {
         
            cout << " "  << mat[j][i] << " " ;
        }
        cout << "|";
        cout << endl;
    }
  return 0;
}