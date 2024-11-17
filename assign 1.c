 // question 1 xWAP to check number is armstrong or not  

#include<stdio.h> 
#include<math.h>                                                           
int main(){ 
    int n,original,r,digits=0,sum=0; 
    printf("enter number:"); 
    scanf("%d",&n); 
    original=n; 
while(original>0){ 
    original/=10; 
    digits++; 
} 
original=n; 
while(original>0){ 
    r=original%10; 
    sum+=(int)pow(r,digits); 
    original/=10; 
} 
if(sum==n){ 
    printf("%d is armstrong number",n); 
} 
else{ 

    printf("%d is not armstrong number",n); 

} 

return 0; 

} 

//wap to read two integers and print hcf 

#include<stdio.h> 

#include<math.h> 

int main(){ 

    int n1,n2,min,hcf; 

    printf("enter two numbers:"); 

    scanf("%d %d",&n1,&n2); 

    min=(n1<n2)?n1:n2; 

    for(int i=1;i<=min;i++){ 

        if(n1%i==0 && n2%i==0){ 

            hcf=i; 

        } 

    } 

    printf("hcf of %d and %d is %d\n",n1,n2,hcf); 

    return 0; 

} 

// queation3 wap to subtract two integers without minus operator(bitwise operator) 

#include<stdio.h> 

int main(){ 

    int a,b; 

    printf("enter a and b:"); 

    scanf("%d %d",&a,&b); 

    while(b!=0){ 

    int udhar=(~a)&b; 

    a=a^b; 

    b=udhar<<1; 

    } 

    printf("the result of subtraction is %d\n",a); 

    return 0; 

} 

 

//wap to to swap two numbers 1 st method 

#include<stdio.h> 

int main(){ 

    int n1,n2,temporary_variable; 

    printf("enter n1,n2:"); 

    scanf("%d %d",&n1,&n2); 

    temporary_variable=n1; 

    n1=n2;  

n2=temporary_variable; 

    printf("numbers after swapping is %d and %d\n",n1,n2); 

    return 0; 

} 

//wap to to swap two numbers 2nd method 

#include<stdio.h> 

int main(){ 

    int n1,n2; 

    printf("enter n1,n2:"); 

    scanf("%d %d",&n1,&n2); 

    n1=n1+n2; 

    n2=n1-n2; 

    n1=n1-n2; 

    printf("number after swapping is %d and %d\n",n1,n2); 

    return 0; 

} 

 //wap to to swap two numbers 3rd method 

#include<stdio.h> 

int main(){ 

  int n1,n2; 

  printf("enter n1,n2:"); 

  scanf("%d %d",&n1,&n2); 

  n1=n1^n2; 

  n2=n2^n1; 

  n1=n1^n2; 

  printf("number after swapping is %d and %d\n",n1,n2); 

    return 0; 

} 

//wap to to swap two numbers 4th method 

#include<stdio.h> 

int main(){ 

  int n1,n2; 

  printf("enter n1,n2:"); 

  scanf("%d %d",&n1,&n2); 

  n1=n1*n2; 

  n2=n1/n2; 

  n1=n1/n2; 

  printf("number after swapping is %d and %d\n",n1,n2); 

    return 0; 

} 

///wap to check number is perfect number or not 

#include<stdio.h> 

int main(){ 

  int n,sum=0; 

  printf("enter n:"); 

  scanf("%d",&n); 

  for(int i=1;i<=n/2;i++){ 

      if(n%i==0){ 

          sum+=i; 

      } 

  } 

  if(sum==n ){ 

      printf("%d is perfect number",n); 

  } 

  else{ 

      printf("%d is not perfect number",n); 

  } 

    return 0; 

} 

//wap to determine quadrant for coordinate x and y 

#include<stdio.h> 

int main(){ 

  int x,y; 

  printf("enter x and y:"); 

  scanf("%d %d",&x,&y); 

if(x>0 && y>0){ 

     printf("x=%d & y=%d in 1st quadrant",x,y); 

} 

else if(x<0 && y>0){ 

    printf("x=%d & y=%d in 2nd quadrant",x,y); 

} 

else if(x<0 && y<0){ 

    printf("x=%d & y=%d in 3rd quadrant",x,y); 

} 

else if(x>0 && y<0){ 

    printf("x=%d & y=%d in 4th quadrant",x,y); 

} 

else if(x=0 && y!=0){ 

    printf("point on y axis y=%d",y); 

} 

else if(y=0 && x!=0){ 

    printf("point on x axis",x); 

} 

else{ 

     printf("point on origin"); 

} 

  

    return 0; 

} 

// converting decimal to binary ,binary to decimal 

#include <stdio.h> 

#include<math.h> 

int binarytodecimal(long long binary); 

long long decimaltobinary(int decimal); 

int main() { 

    int choice; 

    printf("Enter choice:"); 

    //choice=1 binarytodecimal choice=2 decimaltobinary 

    scanf("%d",&choice); 

    if(choice==1){ 

        long long binary; 

        printf("enter binary "); 

        scanf("%11d",&binary); 

        printf("decimal=%d\n",binarytodecimal(binary)); 

    } 

    else if(choice==2){ 

        int decimal; 

        printf("enter decimal :"); 

        scanf("%d\n",&decimal); 

        printf("binary=%11d\n",decimaltobinary(decimal)); 

    } 

      else{ 

          printf("invalid choice"); 

      } 

      return 0; 

} 

      int binarytodecimal(long long binary){ 

          int decimal=0,r,i=0; 

          while(binary!=0){ 

              r=binary%10; 

              decimal+=r*pow(2,i); 

              binary/=10; 

              i++; 

      } 

      return decimal; 

      } 

      long long decimaltobinary(int decimal){ 

          long long binary=0,r,i=1; 

          while(decimal!=0){ 

              r=decimal%2; 

              binary+=r*i; 

              decimal/=2; 

              i*=10; 

          } 

          return binary; 

      } 

      // making pattern of 1;0 1;1 0 1; 0 1 0 1;1 0 1 0 1 

#include <stdio.h> 

#include<math.h> 

int main(){ 

    int n=5; 

    for(int i=1;i<=n;i++){ 

        for(int j=1;j<=i;j++){ 

            if((i+j)%2==0){ 

                printf("1"); 

            } 

            else{ 

                printf("0"); 

            } 

        } 

printf("\n"); 

} 

return 0; 

} 

// making pattern of 1;0 1;1 0 1; 0 1 0 1;1 0 1 0 1 

#include <stdio.h> 

#include<math.h> 

int main(){ 

    int n=5;// n=number of rows 

    for(int i=1;i<=n;i++){ 

        for(int j=0;j<i;j++){ 

            printf("%d",j%2); 

        } 

                printf("  "); 

         

           for(int j=0;j<i;j++){ 

                printf("%d",j%2); 

           } 

printf("\n"); 

}                            

return 0; 

} 

//pascal’s triangle 

 

       

       