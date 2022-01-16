#include <stdio.h>
#include <stdlib.h>

//reading the ids
int enter_id(int ids[60],float salaries[60]){
	int employees_num,i;
	printf("enter the number of you employees:\n");
	scanf("%d",&employees_num);
	for (i=0;i<employees_num;i++){
		printf("\nenter the employe's  id : \n");
		scanf("%d",&ids[i]);
		printf("\nenter the employe's salary : \n");
		scanf("%f",&salaries[i]);
		
		
		
	}
	
}
//exceeded salaries
int exceeded_salary,i;
float max=0;
float exceeded salaries[60]={0};//new array through which  we  will print exceeded salaries
printf("enter you exceeded limit salary\n");
scanf("%0.2f",&exceeded_salary);
  	for(i=0;i<60&&salaries[i]!=0;i++){
  		if(salaries[i]>exceeded_salary){
      	//max=salaries[i];
      	scanf("%f",&exceeded salaries[i]);
      	
      	
      	
      	
      	
	  }
	  }
  
  }


 

//printing all data
void print_data(int ids[60],float salaries[60]){
	printf("\n++++++++++++++++++++++++++++\n");
	int i;
	for(i=0; i<60; i++) {
		if(ids[i] !=0||salaries[i]!=0){
			printf("%.d    ", ids[i]);
			printf("%0.2f\n",salaries[i]);
			if(i==59){
           printf("\n");
		}
		
	}
	}
	
	

printf("\n++++++++++++++++++++++++++++\n");
}



int main(void) {
	int  ids[60]={0};
	float salaries[60]={0};
	int employess_num =enter_id(ids,salaries);
	print_data(ids,salaries);
	
	
	
	return 0;
}
