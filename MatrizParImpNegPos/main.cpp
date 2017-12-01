#include <iostream>
#include <stdlib.h>//Library to use the random class
#include <stdio.h>//Library to use printf

using namespace std;

int main()
{

    int i;//Variable to columns of the matrix
	int j;//Variable to rows of the matrix
    int n;//Variable to define the matrix
    int positive_numbers_counter=0;
    int negative_numbers_counter=0;
    int even_numbers_counter=0;
    int odd_numbers_counter=0;

	cout<< "Defina el tamaño de la matriz"<<endl;
    cin>>n;//Read the length of the matrix
    int numbers[n][n];
    cout<<"Introduzca los numeros: ";

    for(i =0; i<n;i++)
    {
    	for(j=0; j<n;j++)
    	{
    		numbers[i][j]=rand()%9-5;
    	}

    }

    cout<<"La matriz original es"<<endl;

    //Print the original matrix
    for(i =0; i<n;i++)
    {
            	for(j=0; j<n;j++)
            	{
            		cout<<numbers[j][i]<<" ";
            	}
                   cout<<""<<endl;
    }


     //Add odd, even, positive and negative to respective counters
     for ( i=0; i<n;i++) {
			for( j=0;j<n;j++) {
				if (numbers[i][j]>=0) {//positive numbers
					positive_numbers_counter +=1;
				}else {
					negative_numbers_counter+=1;//negative numbers
				}if(numbers[i][j]%2==0) {
					even_numbers_counter+=1;//even numbers
				}else {
					odd_numbers_counter+=1;//odd numbers
				}
			}
		}


		cout<<""<<endl;


		cout<<"Hay "<<positive_numbers_counter<<" numeros positivos y son: "<<endl;
		//Show in the console, the positive numbers
		for ( i=0; i<n;i++) {
			for( j=0;j<n;j++) {
				if (numbers[i][j]>=0) {
					cout<<numbers[i][j]<<" "<<endl;
				}
			}
		}

		cout<<""<<endl;
		
		//Print negative numbers
		cout<<"\nHay "<<negative_numbers_counter<<" numeros negativos y son: "<<endl;
		for ( i=0; i<n;i++) {
			for( j=0;j<n;j++) {
				if (numbers[i][j]<0) {
					cout<<numbers[i][j]<<" "<<endl;
				}
			}
		}

		cout<<""<<endl;

		//Print even numbers
		cout<<"\nHay "<<even_numbers_counter<<" numeros pares y son: "<<endl;
		for ( i=0; i<n;i++) {
			for( j=0;j<n;j++) {
				if (numbers[i][j]%2==0) {
					cout<<numbers[i][j]<<" "<<endl;
				}
			}
		}

		cout<<""<<endl;

		//Print odd numbers
		cout<<"\nHay "<<odd_numbers_counter<<" numeros impares y son: "<<endl;
		for ( i=0; i<n;i++) {
			for( j=0;j<n;j++) {
				if (numbers[i][j]%2!=0) {
					cout<<numbers[i][j]<<" "<<endl;
				}
			}
		}
    return 0;
}
