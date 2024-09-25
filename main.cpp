//Selection Sort
//Es un algoritmo de ordenamiento que consiste en dividir la lista de elementos en dos partes: una parte ordenada y otra desordenada.
//El algoritmo busca el menor elemento de la parte desordenada y lo intercambia con el primer elemento de la parte desordenada.
//El algoritmo se repite hasta que la parte desordenada quede vacía.
//El orden de complejidad de este algoritmo es O(n^2).

#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b){ //Funcion que recibe dos enteros por referencia
    int temp = a; //Variable temporal que guarda el valor de a
    a = b; //a toma el valor de b
    b = temp; //b toma el valor de temp
}

void selectionSort(vector<int> &vec){ //Funcion que recibe un vector de enteros
    int n = vec.size(); //Variable n que guarda el tamaño del vector

    for(int i=0; i<n-1; i++){ //Ciclo que recorre el vector
        int minVal= i; //Variable que guarda el valor minimo
        for(int j = i+1; j < n;  j++){ //Ciclo que recorre el vector despues del elemento i
            if (vec[j] < vec[minVal]){ //Condicion que compara si el elemento j es menor al elemento minVal
                minVal = j; //Si se cumple la condicion, minVal toma el valor de j
            }
        }
        if (minVal != i){ //Condicion que compara si minVal es diferente de i
            swap(vec[i], vec[minVal]); //Si se cumple la condicion, se intercambian los valores de vec[i] y vec[minVal]
        }
    }
}

int main(){ 

    vector<int> vec = {2, 18, 33, 3, 10}; //Vector de enteros


    cout << endl << endl << "Vector desordenado: " << endl;
    for(int num: vec){
        cout << num << ", ";
    }

    selectionSort(vec); //Llamada a la funcion selectionSort

    cout << endl << endl <<"Vector ordenado: " << endl;
    for(int num: vec){
        cout << num << ", ";
    }

    return 0;
}