#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 1000000

void generateRandomNumbers(int array[], int size, int seed) {
    srand(seed);
    for (int i = 0; i < size; i++) {
        array[i] = rand();
    }
}

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}

void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void printHeader() {
    printf("+-----------------------+-----------------------+-------------------------------+\n");
    printf("|    Jenis Algoritma    |    Jumlah Bilangan    |    Waktu Eksekusi (ms)       |\n");
    printf("+-----------------------+-----------------------+-------------------------------+\n");
}

void printRow(const char *algorithm, int size, double time) {
    printf("| %-21s | %-21d | %-29.2f |\n", algorithm, size, time);
}

void printFooter() {
    printf("+-----------------------+-----------------------+-------------------------------+\n");
}

int main() {
    int numbers[MAX_SIZE];
    int size = 100000;
    int seed = time(NULL); 

    printHeader();

    for (int i = 0; i < 10; i++) {
        clock_t start, end;
        double cpu_time_used;

        generateRandomNumbers(numbers, size, seed);

        // Bubble Sort
        start = clock();
        bubbleSort(numbers, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printRow("Bubble Sort", size, cpu_time_used);

        // Selection Sort
        start = clock();
        selectionSort(numbers, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printRow("Selection Sort", size, cpu_time_used);

        // Insertion Sort
        start = clock();
        insertionSort(numbers, size);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printRow("Insertion Sort", size, cpu_time_used);

        size += 100000;
    }

    printFooter();

    return 0;
}
