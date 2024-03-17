# Simple Sorting 

## Cara Menjalankan Kode Program

1. Pastikan Anda memiliki kompiler C yang terpasang di sistem Anda, seperti GCC.
2. Buka terminal atau command prompt.
3. Salin kode program `sorting_program.c` ke dalam file baru di editor teks atau IDE favorit Anda.
4. Simpan file dengan nama `sorting_program.c`.
5. Kompilasi kode program menggunakan kompiler C. Misalnya, jika Anda menggunakan GCC, gunakan perintah berikut di terminal:

    ```
    gcc Simple_Sorting.c -o sorting_program
    ```

6. Setelah kompilasi selesai, jalankan program dengan menggunakan perintah berikut:

    ```
    ./Simple_Sorting
    ```

7. Program akan mulai menjalankan pengujian algoritma pengurutan dan menampilkan outputnya di terminal.

## Fungsi yang Digunakan di dalam Kode Program

1. `generateRandomNumbers(int array[], int size, int seed)`: Digunakan untuk mengisi array dengan bilangan acak.
2. `bubbleSort(int array[], int size)`: Mengimplementasikan algoritma Bubble Sort untuk mengurutkan array.
3. `selectionSort(int array[], int size)`: Mengimplementasikan algoritma Selection Sort untuk mengurutkan array.
4. `insertionSort(int array[], int size)`: Mengimplementasikan algoritma Insertion Sort untuk mengurutkan array.
5. `printHeader()`: Mencetak header tabel untuk output.
6. `printRow(const char *algorithm, int size, double time)`: Mencetak satu baris tabel dengan hasil pengujian.
7. `printFooter()`: Mencetak footer tabel untuk output.

