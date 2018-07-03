#include<stdio.h>
//declare function prototype of sum1 and sum2
int sum1(int[],int);
int sum2(int[],int);
//start of the program
int main(){
//size store the size of the varable while num[20] stores numbers
int size,num[20];
//initialize size to 0;
size=0;
//prompt the user in a loop
int temp;
  printf("\nEnter digit to terminate -1\n");
while(temp>=0)
{
    printf("Enter %d\n",(size+1));
    scanf("%d",&temp);
    //dont store -1 in the array
    if(temp>=0)
    {
    num[size]=temp;
    //increase size by 1
    size += 1 ;
    }
}
//print all the card numbers
printf("\nCredit card number is ");
int i;
for(i=0;i<size;i++){
    printf("%d",num[i]);
}
// stores sum 1 and 2;
int sum[2];
sum[0]=sum1(num,size);
printf("\nSum 1 is %d",sum[0]);
sum[1]=sum2(num,size);
//print the result of sum1 and sum 2

printf("\nSum 2 is %d",sum[1]);
//print checkdigit
//calculate check digit
int checkdigit=((sum[0]+sum[1])*9)%10;
printf("\nCheck digit is %d",checkdigit);
printf("\nLast digit on credit card is %d",num[size-1]);
//check if checkdigit calculated is same as the last digit
if(checkdigit==num[size-1])
{
    printf("\ncheck sum %d and the last digit %d are the same: valid credit card number",checkdigit,num[size-1]);
}
else{
        printf("\ncheck sum %d and the last digit %d are the NOT same: INVALID credit card number",checkdigit,num[size-1]);

}

printf("Enter a key to exit");
char c;
c = getchar();

}
int sum1(int num[],int size){
int sum=0;
   int i;
   //a temporary array to store the sum 1 numbers
int temp[size];
printf("\nNumbers in sum 1 are ");
    for(i=(size-1-1);i>=0;i=i-2)
{  int twice;
       twice = 2 * num[i];

       if(twice>9)
       {
        // find the remainder so as to find the last digit
        int temp1 = twice % 10;
        //find the first number after minusing the remainder
        int temp2 = (twice-temp1) / 10;

        //add the sum
        sum = sum + temp1 + temp2;

        }
       else{
            //add the twice
        sum = sum + twice;
        }
        temp[i]=num[i];
        }
int x;
//print sum 1 numbers the way they are in the credit number
for(x=0;x<size;x++)
{
    if(temp[x]==num[x])
    {
        printf("%d ",num[x]);
    }
}

   //return sum to the main
    return sum;
}
int sum2(int num[],int size){
    //we store the sum and return it later
int sum=0;
   int i;
    //a temporary array to store the sum 1 numbers
int temp[size];
   printf("\nNumbers for sum2 are ");
   for(i=(size-1);i>=0;i=i-2)
   {
       if(i!=size-1)
       {

    sum = sum +num[i];
    temp[i]=num[i];
       }
}
int x;
for(x=0;x<size;x++)
{
    if(temp[x]==num[x])
    {

    //print the numbers the way they are in ascending order in the credit card
        printf("%d ",num[x]);
    }
}

    return sum;
}
