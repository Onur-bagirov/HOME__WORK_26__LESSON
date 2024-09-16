#include <iostream>

using namespace std;

int* saveMemory(int size)
{
    return new int[size];
}

void random_Array(int* array, int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
    }
}

void print_Array(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ",";
    }
    cout << endl;
}

void delete_Array(int* array)
{
    delete[] array;
}

int* add_number_end(int* array, int& size, int number)
{
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100 + 1;
    }

    int* Array_Five = new int[size + 1];
    for (int i = 0; i < size; i++) {
        Array_Five[i] = array[i];
    }

    Array_Five[size] = number;
    size += 1;

    delete[] array;

    return Array_Five;
}

int* add_number_index(int* array, int& size, int index, int number)
{
    int* Array_Six = new int[size + 1]; 

    for (int i = 0; i < size; i++) 
    {
        array[i] = rand() % 100 + 1;
    }

    for (int i = 0, j = 0; i < size + 1; i++)
    {
        if (i == index) 
        {
            Array_Six[i] = number;
        }
        else 
        {
            Array_Six[i] = array[j++];
        }
    }

    size++;  
    delete[] array;
    return Array_Six; 
}

int* delete_number_index(int* array, int& size, int index)
{
    srand(time(NULL));

    int* Array_Seven = new int[size - 1];

    for (int i = 0; i < size; i++) 
    {
        array[i] = rand() % 101;
    }

    for (int i = 0, j = 0; i < size; i++) 
    {
        if (i == index) {
            continue;
        }
        Array_Seven[j++] = array[i];
    }

    size--;

    delete[] array;

    return Array_Seven;
}


//int* add_block_end(int* array, int& size, int* block, int block_size)
//{
//    srand(time(NULL));
//
//    int* Array_eight = new int[size + block_size];
//
//    for (int i = 0; i < size; i++)
//    {
//        array[i] = rand() % 101;
//    }
//
//    for (int i = 0; i < size; i++) 
//    {
//        Array_eight[i] = array[i];
//    }
//
//    for (int i = 0; i < block_size; i++) 
//    {
//        Array_eight[size + i] = block[i];
//    }
//
//    size += block_size;
//
//    delete[] array;
//
//    return Array_eight;
//}

int* add_index_block(int array[], int& size, int index, int* block, int block_Size)
{
    int* Array_Nune = new int[size + block_Size];

    for (int i = 0; i <= index; i++) 
    {
        Array_Nune[i] = array[i];
    }

    for (int i = 0; i < block_Size; i++) {
        Array_Nune[index + 1 + i] = block[i];
    }

    for (int i = index + 1; i < size; i++) {
        Array_Nune[i + block_Size] = array[i];
    }

    size += block_Size;

    delete[] array;

    return Array_Nune;
}

int main()
{
    int size_one;

    cout << "Enter size: ";
    cin >> size_one;

    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    int* Array_One = saveMemory(size_one);

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 2 - 3";
    cout << "\n\n\n\n";

    random_Array(Array_One, size_one);

    cout << "Dinamik Array :";
    print_Array(Array_One, size_one);

    delete[] Array_One;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    //delete_Array(Array_One);

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";

    int number_five;
    cout << "Enter number : ";
    cin >> number_five;

    int* array = new int[size_one];

    array = add_number_end(array, size_one, number_five);

    cout << "Array : ";
    for (int i = 0; i < size_one; i++) 
    {
        cout << array[i] << ",";
    }
    cout << endl;

    delete[] array;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";

    int* array_six = new int[size_one];

    int index_six;
    int number_six;

    cout << "Enter index: ";
    cin >> index_six;

    cout << "Enter number: ";
    cin >> number_six;

    array_six = add_number_index(array_six, size_one, index_six, number_six);

    cout << "Array : ";
    print_Array(array_six, size_one);

    delete[] array_six;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";

    int* array_seven = new int[size_one];  

    int index_seven;

    cout << "Enter index to delete: ";
    cin >> index_seven;

    array_seven = delete_number_index(array_seven, size_one, index_seven);

    cout << "Array after deleting the element: ";
    print_Array(array_seven, size_one);

    delete[] array_seven;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 8";
    cout << "\n\n\n\n";

    //int block_size = 3;
    //int* block = new int[block_size] {2, 4, 5};

    //array = add_block_end(array, size_one, block, block_size);
    //print_array(array, size_one);

    //delete[] block;
    //delete[] array;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "===================================";
    cout << "\n\n";
    cout << "Tap - 9";
    cout << "\n\n\n\n";

    int* array_n = new int[size_one] {1, 2, 3, 4, 5};

    cout << "Original array : ";
    print_Array(array_n, size_one);


    int block[] = { 7, 8, 9 };

    int Index;

    cout << "Enter index : ";
    cin >> Index;

    array_n = add_index_block(array_n, size_one, Index, block, 3);

    cout << "Block Array :  ";
    print_Array(array_n, size_one);

    delete[] array_n;
}
