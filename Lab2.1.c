int main(){
	int number, one = 0, two = 1, three;
	printf("How many numbers in the sequence?");
	scanf("%d", &number);
	printf("%d %d ", one, two);
	int count = 3;
	for(count; count <= number; count++){
		three = one + two;
		printf(" %d ", three);
		one = two;
		two = three; 
	}
	printf("\n");
}
