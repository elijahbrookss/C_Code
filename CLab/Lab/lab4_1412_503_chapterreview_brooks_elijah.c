/*
Elijah Brooks
Lab Review
2/17/2019


1)
    A for loop is more optimal for iterating through arrays and counting.
    A while loop is for doing something repetitively while a condition is met.

2)  A formal argument is used when declaring a function while an actual argument is used
    when calling the function.

3)
    x=1;
    while(x<=100){
        printf("%d",x*x );
        x++;
    }
4) ++i;

5)
double median(double x, double y, double z)
{
    double ans;
    if(x <=y )if(y <= z) ans= y;
    else if (x <=z) ans= z;
    else ans= x;
    if (z <= y) ans= y;
    if (x <= z) ans= x;
    ans=z;
    return ans;
}

6)
    int main(){
        int i;
        int ui;
        int max = 0;
        printf("Test Data:\n");
        for(i=0; i<3; i++){
            printf("Enter an integer: ");
            scanf("%d",&ui);
            if(ui>=max)max=ui;

        }
        printf("Maximum value of three integers: %d\n", max);
    }

7)
    int main(){
        for(int i=1; i<=50; ++i)if (!(i%2))printf("%d ",i);
    }
8)
  int main(){
    int size1;
    int size2;
    int size3;
    if(size1==size2&&size2==size3)printf("This is an equilateral triangle.\n");
    else if(size1==size2||size2==size3||size1==size3)printf("This is an isosceles triangle.\n");
    else printf("This is a scalene triangle.\n");

    return 0;
}

9)
    int main(){

    for(int i=0;i<4;i++){
        for(int a=0;a<i+1;a++){
            printf("*");
        }
        printf("\n");
    }
}

10)

    int fib(int amount){
        if(amount==0||amount==1)return amount;
        else{return(fib(amount-1)+fib(amount-2));}
    }
    int main(){
        for(int i=0; i<10;i++){
            printf("%d ", fib(i));
        }
        return 0;
    }


*/

