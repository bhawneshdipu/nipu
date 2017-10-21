#include<stdio.h>//for printf and scanf
#include<stdlib.h>//for malloc
int main(){
        int n;//size of array
        int *arr;// pointer to an array
        int i,j;//variables to be used in for loop
        int maxElement=-99999;//variable to be use to store max in array element 
        printf("Enter size of Array\n");
        scanf("%d\n",&n);//scan the number n
        //1st assign the pointer which points to an array to size n
        arr=(int *)malloc(n*sizeof(int));//allocating size of n integers and typecasting it to (int *) as malloc returns (void*) and LHS is (int*)
        //now scan the array 
        for(i=0;i<n;i++){
                scanf("%d",&arr[i]);
        }
        //now find max element
        //iterate the whole array and find max;
        //let the 1st element is max;
        maxElement=arr[0];
        // if other element is greater than maxElement the choose the current Element as maxElement  
        for(i=1;i<n;i++){
                if(maxElement<arr[i]){
                        maxElement=arr[i];
                }
        }
        //print the array
        for(i=0;i<n;i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        //number of rows = maxElement in array i.e maxElement
        //number of columns = size of array i.e n
        // to print a 2D we always need  2 nested loops ,let it be outer as i ( for number of rows) and j ( for number of columns) 
        
        for(i=0;i<maxElement;i++){

                for(j=0;j<n;j++){
                        //logic is max -current should be greater than the row i am currently in i.e i
                        //if((maxElement - currentElement)>i) print ' ' else print '#'
                        if((maxElement - arr[j])>i){
                                printf("  ");
                        }else{
                                printf("# ");
                        }
                }
                printf("\n");//to end line after 1 j iteration
        }
        printf("\n End of Program \n");


}
