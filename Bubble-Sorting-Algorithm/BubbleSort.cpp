#include <iostream>

int* BubbleSort(int arr[], int size);

void printArr(int* arr, int size);


int main(void)
{   
    // Testing the sorting algorithm 

    int unsorted[9] = {6, 5, 2, 3, 7, 1, 4, 9, 8};
    int size = 9;

    int* sorted = BubbleSort(unsorted, size);

    printArr(sorted, size);


}

int* BubbleSort(int* arr, int size)
{
    int temp;

    for(int i = 0; i < (size-1) ; i++)
    {
        for(int j = 0; j < (size-1)-i ;j++)

        {   // Switching 'decreasingly sorted values'

            if (arr[j] > arr[j+1]) 
            {   

                temp = arr[j+1];
                
                arr[j+1] = arr[j];

                arr[j] = temp;
            } 
           
        }
    } 
    return arr; 

}

void printArr(int* arr, int size)    
{
  for (int i = 0 ; i < size-1; i++)
  {
    std::cout << arr[i] << ", ";
  }
   std::cout << arr[size-1];
}