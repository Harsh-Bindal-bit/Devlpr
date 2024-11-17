//assignment 2 


//WAP to increase every student mark by 5 & then print the updated array
#include <stdio.h>  
int main() { 
    int marks[3],i,j; 
    for(i=0;i<=2;i=i+1) { 
        printf("Marks of student-%d :",i+1); 
        scanf("%d",&marks[i]); 
    } 
    printf("\n Updated marks of students's\n"); 
    for(j=0;j<=2;j=j+1) { 
        printf("Final marks of students-%d : %d\n",j+1,marks[j]+5); 
    } 
    return 0; 
} 


/*WAP to print grade of students as per their marks given in an array. (>=75-- A
grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade)*/
#include <stdio.h> 
int main() { 
    int marks[5],i; 
    for(i=0;i<=4;i=i+1) { 
        printf("Enter marks of student-%d :",i+1); 
        scanf("%d",&marks[i]); 
    } 
    printf("\n# Grade list of student's as per marks\n"); 
    for(i=0;i<=4;i=i+1) { 
        if (marks[i]>=75) 
        printf("Student-%d has achieved Grade-A\n",i+1); 
        else if (marks[i]>=60 && marks[i]<75) 
        printf("Student-%d has achieved Grade-B\n",i+1); 
        else if (marks[i]>=40 && marks[i]<60) 
        printf("Student-%d has achieved Grade-C\n",i+1); 
        else if (marks[i]>=0 && marks[i]<40) 
        printf("Student-%d has achieved Grade-D\n",i+1); 
        else 
        printf("NOTE--Enter marks on scale of 0-100.\n"); 
    } 
    return 0; 
} 


//WAP to find who scored first '99' in an array marks 
#include <stdio.h>  
int main() { 
    int marks[5],i; 
    for(i=0;i<=4;i=i+1) { 
        printf("Marks of student-%d :",i+1); 
        scanf("%d",&marks[i]); 
    } 
    for(i=0;i<=4;i=i+1) { 
        if (marks[i]==99){ 
            printf("Student-%d who scored first 99 marks",i+1); 
            break; 
        } 
    } 
    return 0; 
} 


//WAP to find Who & how many students have scored 99 in an array Marks.
#include <stdio.h>  
int main() { 
    int marks[5],i,sum=0; 
    for(i=0;i<=4;i=i+1) { 
        printf("Enter marks of student-%d :",i+1); 
        scanf("%d",&marks[i]); 
    } 
    for(i=0,sum;i<=4;i=i+1) { 
        if (marks[i]==99){ 
            printf("\nStudent-%d has scored 99 marks",i+1); 
            sum=sum+1; 
        } 
    } 
    printf("\n%d student's has scored 99 marks",sum); 
    return 0; 
} 


//WAP to find sum of all scores in Marks array
#include <stdio.h>  
int main() { 
    int marks[5],i,sum=0; 
    for(i=0;i<=4;i=i+1) { 
        printf("Enter marks of student-%d :",i+1); 
        scanf("%d",&marks[i]); 
    } 
    for(i=0,sum;i<=4;i=i+1) { 
        sum=sum+marks[i]; 
    } 
    printf("\nSum of marks of all students is %d",sum); 
} 


//WAP to find average score of the Marks array
#include <stdio.h> 
int average (int sum) { 
    int a; 
    a=sum/5; 
    return a; 
}; 
int main() { 
    int marks[5],i,sum=0; 
    for(i=0;i<=4;i=i+1) { 
        printf("Enter marks of student-%d :",i+1); 
        scanf("%d",&marks[i]); 
    } 
    for(i=0,sum;i<=4;i=i+1) { 
        sum=sum+marks[i]; 
    } 
    printf("\nSum of mark's of all student's is %d\n",sum); 
    printf("Average of total marks is %d",average(sum)); 
    return 0; 
} 


//WAP to check whether score is even or odd in an array
#include <stdio.h> 
int main() { 
    int i,score[5]; 
    for(i=0;i<=4;i=i+1) { 
        printf("Enter score-%d :",i+1); 
        scanf("%d",&score[i]); 
    } 
    printf("\n"); 
    for (i=0;i<=4;i=i+1) { 
        if (score[i]%2==0) 
        printf("Score-%d (%d) is even\n",i+1,score[i]); 
        else 
        printf("Score-%d (%d) is odd\n",i+1,score[i]); 
    } 
    return 0; 
 
} 

//WAP to find maximum & minimum score in the Marks array
#include <stdio.h>
int main() {
    int n, i, max, min;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the marks of the students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    max = marks[0];
    min = marks[0];
    for (i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i];
        }
    }
    printf("\nMaximum score: %d\n", max);
    printf("Minimum score: %d\n", min);
    return 0;
}


//WAP to count prime numbers in an array
#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }
    return 1; // Prime number
}
int main() {
    int n, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    printf("The number of prime numbers in the array is: %d\n", count);
    return 0;
}


/*WAP to implement Insert -Front, any position in between & end in an array.Print
the array before insert & after insert*/
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertAtFront(int arr[], int *size, int element) {
    for (int i = *size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    (*size)++;
}

void insertAtPosition(int arr[], int *size, int element, int position) {
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

void insertAtEnd(int arr[], int *size, int element) {
    arr[*size] = element;
    (*size)++;
}

int main() {
    int arr[100];
    int size = 5;
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; 
    }
    printf("Original array:\n");
    printArray(arr, size);
    printf("Inserting 99 at the front:\n");
    insertAtFront(arr, &size, 99);
    printArray(arr, size);
    printf("Inserting 88 at position 3:\n");
    insertAtPosition(arr, &size, 88, 3);
    printArray(arr, size);
    printf("Inserting 77 at the end:\n");
    insertAtEnd(arr, &size, 77);
    printArray(arr, size);

    return 0;
}

/*WAP to implement delete-Front, any position in between & end in an array. Print
the array before delete & after delete*/
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteFromFront(int arr[], int *size) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteFromPosition(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position. Cannot delete.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteFromEnd(int arr[], int *size) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    (*size)--;
}

int main() {
    int arr[100]; 
    int size = 5; 

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; 
    }

    printf("Original array:\n");
    printArray(arr, size);


/*Given an array, the task is to cyclically rotate the array clockwise by one time.
Examples:
Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}*/
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void rotateClockwiseByOne(int arr[], int size) {
    if (size <= 1) return;
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = last;
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array:\n");
    printArray(arr1, size1);
    rotateClockwiseByOne(arr1, size1);
    printf("Array after rotating clockwise by one:\n");
    printArray(arr1, size1);

    int arr2[] = {2, 3, 4, 5, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nOriginal array:\n");
    printArray(arr2, size2);

    rotateClockwiseByOne(arr2, size2);

    printf("Array after rotating clockwise by one:\n");
    printArray(arr2, size2);
    return 0;
}


/*Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1*/
#include <stdio.h>
#include <stdbool.h>

#define MAX 100000 
void findDuplicates(int arr[], int n) {
    int freq[MAX + 1] = {0}; // Initialize frequency array to zero
    bool hasDuplicate = false;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Duplicates in the array: ");
    for (int i = 0; i <= MAX; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
            hasDuplicate = true;
        }
    }
    if (!hasDuplicate) {
        printf("-1");
    }
    printf("\n");
}

int main() {
    int arr1[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Input: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    findDuplicates(arr1, n1);

    int arr2[] = {5, 40, 1, 40, 100000, 1, 5, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("\nInput: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    findDuplicates(arr2, n2);

    return 0;
}
