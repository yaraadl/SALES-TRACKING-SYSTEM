#include <stdio.h>
int branch_no;
// printing a menu  to facilitate interaction &make the program user friendly
void print_instructions(){
 printf("\nThese are the program's instructions\n");
 printf("__\n");
 printf("[1] To enter the sales data \n");
 printf("[2] To add a new branch\n");
 printf("[3] To delete a branch\n");
 printf("[4] To calculate total sales of the company\n");
 printf("[5] To Calculate the percentage share of each branch\n");
 printf("[6] To print the month of the peak sales\n");
 printf("[7] To view sales of a given month for all branches (bubble sort)\n");
 printf("[8] To view sales of a given month for all branches (selection sort)\n");
 printf("[9] To print the sales of  all branches\n");
 printf("[0] To quit\n");
 printf("__\n");
}

//enter sales data
int enter_data(float company[60][12]){
  int i,j,branch_no;
	printf("enter the no of your branches \n");
	scanf("%d",&branch_no);

	for (i=0;i<branch_no;i++){
		printf("sales for branch %d\n",i+1);
    printf("\n______________________\n");
		for(j=0;j<12;j++){
			printf("\nenter sales for month %d : ",j+1);
      
			scanf("%f",&company[i][j]);

		}
	}
  return (branch_no);
  }
  
  //adding a branch 
  void add_branch(float  company[60][12],int branch_no){
    int i,j;
    for(i=0;i<60;i++){
      if(company[i][0]==0)
       break;
    }
    printf("enter sales of added branch");
   for(j=0;j<12;j++){
     printf("enter sales for month %d ",j+1);
     scanf("%f",&company[i][j]);
   }
   branch_no+=1;

   printf("done \n ");
   //printf("branch number=%d",branch_no);
  }


  //to delete a branch
  void delete_branch(float company[60][12],int branch_no){
    int i,branch;
  printf("\nwhich branch do you want do delete\n");
  scanf("%d",&branch);
  if(branch<=0||branch>branch_no+1){
    printf("invalid branch");
  }
   else{ for(i=0;i<12;i++){
       company[branch-1][i]= 0;
    }
    }
   for(i=0;i<12;i++){
       printf("%.1f",company[branch-1][i]);
    }
   branch_no-=1;
 
  }


  //calculate the total sales
int a,b;
float sum=0 ;
float  total_sales(float company[60][12]){

for(a=0;a<60;a++){
    for(b=0;b<12;b++){
      sum=sum+(company[a][b]);

      
        
    }

}

printf("sum of your total sales is:%.1f",sum);
return sum;
}


  //calculate percentage share
void branch_share (float company[60][12],float sum){
int row,column,j;
int index;
printf("enter the number of your actual branches");
scanf("%d",&index);
float percent;
float sum_of_branch=0;
for(row=0;row<index;row++){
  sum_of_branch=0;
  for(j=0;j<12;j++){
  sum_of_branch+=company[row][j];
  percent=(sum_of_branch/sum)*100;
  }
 // if(company[row] !=0 ){
    
  printf("\nbranch %d shares =%.1f",row+1,percent);
 // }  
}
}




  //calculate the peak sales month

float  score_of_month (float company[60][12]){
int a,b,flag;
//int p,q,x;
float max=0;
  for(a=0;a<12;a++){
  	sum=0;
 for(b=0;b<60&&company[b][a]!=0;b++){
      sum=sum+company[b][a];
      }
      if(sum>max){
      	max=sum;
        //q=b
      	flag=a;
	  }
      
  }
  //for(int x=0;x<60;x++){
  //  sum_of_max+=company[x][q];
  //}
printf("\n month %d has the peak sales of %.1f",flag+1,max);
return sum;
}


//bubble sorting for a specific month
  void sorting_branches(float company[60][12]){
    int i,j,month;
    int temp_1=0;
    float temp_2=0;
    printf("enter the month you want to get  it's sales sorted ");
    scanf("%d",&month );
    int branch_index[60]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60};

    float copy[60][12];
//coping the array in another one
    for(i=0;i<60;i++){
      for(j=0;j<12;j++){
        copy[i][j]=company[i][j];
      }
    }

    for(i=0;i<60;i++){
      for(j=0;j<59;j++){
        if(copy[j][month-1]<=copy[j+1][month-1]){
          temp_2=copy[j+1][month-1];
          temp_1=branch_index[j+1];
          copy[j+1][month-1]=copy[j][month-1];
          branch_index[j+1]=branch_index[j];
          copy[j][month-1]=temp_2;
          branch_index[j]=temp_1;

        }

  }
  }
  printf("month %d \n",month);
    for(i=0;i<60;i++){
      if(company[i][month-1]!=0){
        printf("branch %d: %.1f\n",branch_index[i],copy[i][month-1]);
      }
    }
  }



//sorting the sales by selection 
  void sorting_months(float company[60][12]){
    int i,j,branch;
    float replace_1=0;
    int replace_2=0;
    int month_index[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    float copy[60][12];
    printf("which branch do you want it's sales to be sorted ");
    scanf("%d",&branch);
    for(i=0;i<20;i++){
      for(j=0;j<20;j++){
        copy[i][j]=company[i][j];
      }
    }

    for(i=0;i<12;i++){
      for(j=0;j<11;j++){
        if(copy[branch-1][j]<=copy[branch-1][j+1]){
          replace_1=copy[branch-1][j+1];
          replace_2=month_index[j+1];
          copy[branch-1][j+1]=copy[branch-1][j];
          month_index[j+1]=month_index[j];
          copy[branch-1][j]=replace_1;
          month_index[j]=replace_2;

        }
      }
    }
    printf("branch %d \n",branch);
    for(i=0;i<12;i++){
    //  if(company[branch-1][i]!=0){
        printf("month %d: %.1f\n",month_index[i],copy[branch-1][i]);
    //  }
    }
  }




  //printing all the matrix
  
void print_matrix(float company[60][12]){
 printf("\n++++++++++++++++++++++++++++\n");
 int i, j;
 for(i=0; i<60; i++) {
   for(j=0;j<12;j++) {
       if(company[i][j] !=0 ){
         printf("%.1f ", company[i][j]);
         if(j==11){
           printf("\n");
         }
       }
   }
 }
 printf("\n++++++++++++++++++++++++++++\n");
}


//switching between instructions
int main(void) {
	int user_input=10;
  float  company[60][12]={0};
 	
   
branch_no =enter_data(company);
	while(user_input!=0){
     
     print_instructions();
      printf("Enter the number of the instruction  you  want to perform  : \n");
		scanf("%d",&user_input);
		switch(user_input){
			case 1:
       branch_no=enter_data(company);
		   
		 break;

		 case 2:

     add_branch(company,branch_no); 

		 break;

     case 3:

     delete_branch(company,branch_no);
 
     break;

     case 4:

     total_sales(company);

     break;

     case 5:
     branch_share(company,sum);

     break;

     case 6:
     score_of_month(company);
     break;

     case 7:
     sorting_branches(company);
     break;

     case 8:
     sorting_months(company);
     break;

     case 9:
     print_matrix(company);
     break;
     
     case 0:
      printf("you are done \n");
  break;

		}
	}
	return 0;
}
