#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // if determinant is 0, the matrix is not invertible and if it is not 0, the matrix is invertible - tutorialspoint.com

  
  int InverseMat[2][2] = { {0, 1},
                           {1, 0} };

  int determinant = (InverseMat[0][0] * InverseMat[1][1]) - (InverseMat[1][0] * InverseMat[0][1]);
double temp = (1/determinant);
  if(determinant == 0){
    cout << "The inverse does not exist, your matrix is a singular matrix." << endl;
    }
    else{
      InverseMat[0][0] = temp * InverseMat[1][1];
      InverseMat[0][1] = temp * -1 * InverseMat[0][1];
      InverseMat[1][0] = temp * -1 * InverseMat[1][0];
      InverseMat[1][1] = temp * InverseMat[0][0];

      cout << "The inverse of your matrix exists";

  }


  
}