//labreport_03_01

// #include <stdio.h>

// int find_largest_element(int arr[], int size) {
//     if (size == 0)
//         return -1;

//     int largest = arr[0];
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > largest)
//             largest = arr[i];
//     }

//     return largest;
// }

// int main() {
//     int array[] = {10, 5, 8, 20, 3};
//     int size = sizeof(array) / sizeof(array[0]);

//     int largest_element = find_largest_element(array, size);
//     if (largest_element != -1)
//         printf("The largest element is: %d\n", largest_element);
//     else
//         printf("The array is empty.\n");

//     return 0;
// }


//anagram labreport_03_02

// #include <stdio.h>
// #include <string.h>

// int check_anagram(const char* str1, const char* str2) {
//     int freq1[26] = {0};
//     int freq2[26] = {0};

//     for (int i = 0; str1[i] != '\0'; i++)
//         freq1[str1[i] - 'a']++;

//     for (int i = 0; str2[i] != '\0'; i++)
//         freq2[str2[i] - 'a']++;

//     for (int i = 0; i < 26; i++) {
//         if (freq1[i] != freq2[i])
//             return 0;
//     }

//     return 1;
// }

// int main() {
//     const char* string1 = "listen";
//     const char* string2 = "silent";

//     if (check_anagram(string1, string2))
//         printf("The two strings are anagrams.\n");
//     else
//         printf("The two strings are not anagrams.\n");

//     return 0;
// }


//labreport_03_03

// #include <stdio.h>

// void print_unique_elements(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         int j;
//         for (j = 0; j < i; j++) {
//             if (arr[i] == arr[j])
//                 break;
//         }
//         if (i == j)
//             printf("%d ", arr[i]);
//     }
// }

// int main() {
//     int array[] = {1, 2, 4, 8, 4, 2, 4, 9, 6};
//     int size = sizeof(array) / sizeof(array[0]);

//     printf("Unique elements: ");
//     print_unique_elements(array, size);

//     return 0;
// }

// lab_report_03_04

// #include <stdio.h>

// void bubble_sort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - 1 - i; j++) {
//             // Compare adjacent elements
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int array[] = {10, 5, 8, 20, 3};
//     int size = sizeof(array) / sizeof(array[0]);

//     printf("Before sorting: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     bubble_sort(array, size);

//     printf("After sorting in ascending order: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     return 0;
// }


// lab_report_03_05
// #include <stdio.h>

// int main() {
//     int array[] = {5, 15, 10, 7, 25, 12, 30, 8};
//     int size = sizeof(array) / sizeof(array[0]);
//     int count = 0;
//     int sum = 0;

//     for (int i = 0; i < size; i++) {
//         if (array[i] % 5 == 0 && array[i] % 2 != 0 && array[i] % 3 != 0) {
//             count++;
//             sum += array[i];
//         }
//     }

//     printf("Count: %d\n", count);
//     printf("Sum: %d\n", sum);

//     return 0;
// }


// lab_report_03_06
// #include <stdio.h>

// int main() {
//     int mat1[100][100], mat2[100][100], result[100][100];
//     int rows, cols;

//     // Input size of the matrices
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &rows, &cols);

//     // Input elements for the first matrix
//     printf("Enter elements for the first matrix:\n");
//     for (int i = 0; i < rows; ++i)
//         for (int j = 0; j < cols; ++j)
//             scanf("%d", &mat1[i][j]);

//     // Input elements for the second matrix
//     printf("Enter elements for the second matrix:\n");
//     for (int i = 0; i < rows; ++i)
//         for (int j = 0; j < cols; ++j)
//             scanf("%d", &mat2[i][j]);

//     // Add the matrices and display the result
//     printf("Resultant Matrix:\n");
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             result[i][j] = mat1[i][j] + mat2[i][j];
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
