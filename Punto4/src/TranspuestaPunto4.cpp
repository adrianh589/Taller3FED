/*
 * TranspuestaPunto4.cpp
 *
 *  Created on: 14/11/2017
 *      Author: Adrian Hoyos
 */

#include <iostream>
using namespace std;

int main()

{
    int i;//Variable to columns of the matrix
    int j;//Variable to rows of the matrix
    int n;//Variable to define the matrix
    int number;//Variable to read numbers
    cout<< "Defina el tamaño de la matriz"<<endl;

    cin>>n;//Read the length of the matrix
    int matriz[n][n];
    cout<<"Introduzca los numeros "<<n*n<<" numeros";

    for(i =0; i<n;i++)
    {
        for(j=0; j<n;j++)
        {
            cin>>number;//Read the numbers in the console.
            matriz[i][j]=number;//Add to the matrix the numbers
            cin.ignore(1);//Ignore the commas
        }

    }

    cout<<"La matriz original es"<<endl;

    //Print the original matrix
    for(i =0; i<n;i++)
    {
            for(j=0; j<n;j++)
            {
                cout<<matriz[i][j]<<" ";
            }
               cout<<""<<endl;
    }

    cout<<"La transpuesta de esta matriz es"<<endl;

    //Print the transpose of the matrix
    for(i =0; i<n;i++)
    {
            for(j=0; j<n;j++)
            {
                cout<<matriz[j][i]<<" ";
            }
                 cout<<""<<endl;
     }

    return 0;

    }
