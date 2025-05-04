#include <bits/stdc++.h>

using namespace std;


void SquareofStars(int num) {

/**
      Square of Stars
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *
**/
     for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << "* " ;
        }
        cout << endl;
    }

}

/**
 *      Right-Angled Triangle
            *
            * *
            * * *
            * * * *
            * * * * *
**/

void RightAngleTriangle(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<=i) {
                cout << "* " ;
            }
            else {
                cout << " " ;
            }
        }
        cout << endl;
    }
}

/**
 *  Inverted Triangle

        * * * * *
        * * * *
        * * *
        * *
        *

 * @return
 */

void InvertedTriangle(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<= num-i) {
                cout << "* " ;
            }
            else {
                cout << " " ;
            }
        }
        cout << endl;
    }
}
/*
 * Right-Angled Triangle (Inverted) with Spaces

                        *
                      * *
                    * * *
                  * * * *
                * * * * *
 */

void RightAngleTriangleWithSpaces(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j>= num-i) {
                cout << "* " ;
            }
            else {
                cout << "  " ;
            }
        }
        cout << endl;
    }
}


/**
 *          Pyramid Pattern
 *
                    *
                  * * *
                * * * * *
              * * * * * * *
            * * * * * * * * *
 *
 * @return
 **/

void  Pyramid(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j < num*2; j++) {
            if (j<= num && i+j>num) {
                cout << "*" <<" " ;
            }
            else if (j>num && j-i <= num-1) {
                cout << "*" <<" " ;
            }
            else {
                cout << "  " ;
            }

        }
        cout << endl;
    }
}

/**
 *          Inverted Pyramid
 *
            * * * * * * * * *
              * * * * * * *
                * * * * *
                  * * *
                    *
 * @param num
 */
void InvertedPyramid(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num*2; j++) {
            if (j<= num and j>=i) {
                cout << "*" <<" " ;
            }
            else if (j>num and j<=(num*2)-i) {
                cout << "*" <<" " ;
            }
            else {
                cout << "  " ;
            }
        }
        cout << endl;
    }
}

/*
 *         Number Triangle
                1
                1 2
                1 2 3
                1 2 3 4
                1 2 3 4 5
 */

void NumberTriangle(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<=i) {
                cout << j <<" " ;
            }
            else {
                cout << " " ;
            }
        }
        cout << endl;
    }
}

/*
 *         Floyd’s Triangle
                1
                2 3
                4 5 6
                7 8 9 10
                11 12 13 14 15
 */
void FloydsTriangle(int num) {
    int initalNum = 1;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j<=i) {
                cout << initalNum <<" " ;

                initalNum++;
            }
            else {
                cout << " " ;
            }
        }
        cout << endl;
    }
}

void AlphabetTriangle(int num) {
    char initalChar = 'A';
    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < num; j++) {
            char tempChar = (char)initalChar+j;
            if (j<i) {
                cout << tempChar <<" " ;
            }
            else {
                cout << " " ;
            }
        }
        cout << endl;
    }
}


/**
 *          Butterfly Pattern

            *               *
            * *           * *
            * * *       * * *
            * * * *   * * * *
            * * * * * * * * *
            * * * *   * * * *
            * * *       * * *
            * *           * *
            *               *

 * @param num
 */
void Butterfly(int num) {
    for (int i = 1; i < num*2; i++) {
        for (int j = 1; j < num*2; j++) {
            if (i<=num) {
                if (j<=i|| i+j>= num*2) {
                    cout << '*' <<" " ;
                }
                else {
                    cout << "  " ;
                }
            }
            if (i>num) {
                if (i+j<= num*2||j>=i) {
                    cout << '*' <<" " ;
                }
                else {
                    cout << "  " ;
                }
            }
        }
        cout << endl;
    }
}

void Diamond(int num) {
    for (int i = 1; i < num*2; i++) {
        for (int j = 1; j < num*2; j++) {
            if (i<=num) {
                if (i+j>= num+1 && j<=num) {
                    cout << '*' <<" " ;
                }
                else if (j>num && j-i <= num-1) {
                    cout << '*' <<" " ;
                }
                else {
                    cout << "  " ;
                }
            }
            if (i>num) {
                if (i-j<= num-1 &&j<=num) {
                    cout << '*' <<" " ;
                }
                else if (j>num && j+i <= (num*3)-1) {
                    cout << '*' <<" " ;
                }
                else {
                    cout << "  " ;
                }
            }
        }
        cout << endl;
    }
}

void ZigZag(int num) {
    for (int i = 1; i <= num ; i++) {
        for (int j = 1; j <= (num*2)+1; j++) {
            if (i+j>= num+1 && i+j<=((num+1)*2) && (i+j)%2==0 ) {
                cout << '*' <<" " ;
            }
            else {
                cout << "  " ;
            }
        }
        cout << endl;
    }

}


void CharacterPyramid(int num) {


    for (int i = 1; i <= num; i++) {
        char initalChar = (char)'A'-1;
        for (int j = 1; j < num*2; j++) {
            if (j<=num&& i+j>=num+1 ) {
                initalChar++;
                cout << initalChar <<" " ;

            }
            else if (j>num && j-i <= num-1) {
                initalChar--;;
                cout << initalChar <<" " ;
            }
            else {
                cout << "  " ;
            }
        }
        cout << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    // SquareofStars(num);
    // RightAngleTriangle(num);
    // InvertedTriangle(num);
    // RightAngleTriangleWithSpaces(num);
    // Pyramid(num);
    // InvertedPyramid(num);
    // NumberTriangle(num);
    // FloydsTriangle(num);
    // AlphabetTriangle(num);
    // Butterfly(num);
    // Diamond(num);
    // ZigZag(num);
    CharacterPyramid(num);
 return 0;

}