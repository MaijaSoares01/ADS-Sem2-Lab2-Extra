int main(){
	char number;
	int year;
	printf("What month is it(1-12)?");
	scanf("%c", &number);
	 switch (number) 
     { 
            case '1'  :
                printf("The number of Days in January: 31 days");
                break;
            case '2' : 
           		printf("What year is it e.g. 2020?");
				scanf("%d", &year);
				if (year%4==0){
					printf("The number of Days in February: 28 days");
				}else{
					printf("The number of Days in February: 29 days");
				}
                break;
            case '3' : 
                printf("The number of Days in March: 31 days");
                break;
            case '4' : 
                printf("The number of Days in April: 30 days");
                break;
            case '5' : 
                printf("The number of Days in May: 31 days");
                break;
        	case '6' : 
                printf("The number of Days in June: 30 days");
                break;
            case '7' : 
                printf("The number of Days in July: 31 days");
                break;
            case '8' : 
                printf("The number of Days in August: 31 days");
                break;
            case '9' :
                printf("The number of Days in September: 30 days");
                break;
            case '10' : 
                printf("The number of Days in October: 31 days");
                break;
            case '11' : 
                printf("The number of Days in November: 30 days");
                break;
            case '12' : 
                printf("The number of Days in December: 31 days");
                break;
         	default:
             printf("There is no such month");
     }//end switch
	printf("\n");
}
