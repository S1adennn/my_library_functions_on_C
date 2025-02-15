
//ввод данных в двухмерный массив руками
void handinput2massiv(int stroka,int stolb,int a[stroka][stolb]){
	int j,i;
	for(i=0;i<stroka;i++){
			for(j=0;j<stolb;j++){
				printf("\n a[%d][%d]==",i,j);
				scanf("%d",a[i][j]);
			}
		}
}
//ввод данных в двухмерный массив автоматически
void randinput2massiv(int stroka,int stolb,int a[stroka][stolb]){
	int j,i;
	for(i=0;i<stroka;i++){
			for(j=0;j<stolb;j++){
				a[i][j]=rand()%1000-500;
			}
	}

}
//вывод двухмерного массива
void output2massiv(int stroka,int stolb,int a[stroka][stolb]){
	int j,i;
	printf("\nВведенный вами массив\n");
	printf("==========================\n");
	for(i=0;i<stroka;i++){
			for(j=0;j<stolb;j++){
				printf("%d\t",a[i][j]);
			}
		printf("\n");
	}
}
//ввод данных в одномерный массив вручную

void handinput1massiv(int a,int mas[a]){
	int i;
	for(i=0;i<a;i++){
			printf("\n mas[%d]=",i);
			scanf("%d",&mas[i]);
		}
}

//ввод данных в одномерный массив автоматически
void randinput1massiv(int a,int mas[a]){
	int i;
	for(i=0;i<a;i++){
		mas[i]=rand()%100-50;
	}
}
//вывод данных в одномерном массиве
void output1massiv(int a,int mas[a]){
	int i;
	printf("\n\tВведенный массив\n");
    for(i=0;i<a;i++){
			printf("   %d     ",mas[i]);
		}
}

//факториал
int factor(int tempN){
    if (tempN < 2)
    {
        return 1;
    }
    int i;
    int y = 1;
    for (i = 1; i <= tempN; i++)
    {
        y = y * i;
    }
    return y;
}
//для нахождения суммы вида мас(1)-мас(2)+мас(3)...+-мас(а)
void sumposlmass(int a,int mas[a]){
	int i=0;
	int k=0;
	int k1;
	int m;
	while(1){
		if(i>=a){
			printf("\n\nСумма последовательности массива = %d\n\n",k);
			break;
		}
		k1=mas[i];
		if(i%2==0){
			k=k+k1;

		}else{
			k=k-k1;
		}
		i++;
	}
}
//для записи времени в документ
void time_log(int a,char *c){
	FILE *My_conf=fopen("log.txt","a");
	time_t T;
	T=time(NULL);
	if(a==0){
		fprintf(My_conf,"Программа успешно запушена");
	} else if(a==1){
		fprintf(My_conf,"Программа завершила работу");
	} else if(a==2){
		fprintf(My_conf,"%s успешно открыт",c);
	} else if(a==3){
		fprintf(My_conf,"%s успешно закрыт",c);
	}
	else{}
	fprintf(My_conf,"\t%s \n",ctime(&T));
}
//найти длинну числа
void dlina_chisla(int j){
	int len=0;
	while(1){
		len++;
		if (((j)/(10.0))<1){
			break;
		}
		j=((j)/(10.0));
	}
}
//закончить програму
void The_End()
{
	printf("\n Press Enter! \n");
	getchar;
	exit(0);
}
//сортировка массива по возрастанию
void sortd_massiv(int a,int array[a]){
	//{8 , 2 , 3 , 4 , 1 ,2} arr[i-1]<arr[i]: temp=arr[i-1] arr[i-1]=arr[i] arr[i]=temp ( 1 2 3 1 2 4 )
	int temparr,i,j;
	for(i=0;i<a-1;i++){
		for(j=0;j<a-1-i;j++){
			if (array[j]>array[j+1]){
				temparr=array[j];
				array[j]=array[j+1];
				array[j+1]=temparr;

			}
		}
	}
}
//нахождение минимума 0 или максимума 1 в массиве(not work)
void findmaxormin(int a,int array[a],int t){
	sortd_massiv(a,array);
	if(t==1){
		printf("\n%d\n",array[-1]);
	}else{
		printf("\n%d\n",array[0]);
	}


}

//Лого
void Logo(){
printf("   @@@@@@             @@@@@@@                                                  \n");
printf("   @@   @@@@          @@    @@@                                                 \n");
printf("   @@      @@@        @@      @@@                                              \n");
printf("   @@        @@@      @@        @@@                                            \n");
printf("   @@          @@@    @@          @@@                                          \n");
printf("   @@           @@    @@           @@                                           \n");
printf("   @@           @@    @@           @@                                          \n");
printf("   @@           @@    @@         @@@                                           \n");
printf("   @@           @@    @@       @@@                                             \n");
printf("   @@           @@    @@@@@@@@@                                                \n");
printf("   @@           @@    @@       @@@                                              \n");
printf("   @@           @@    @@         @@@                                           \n");
printf("   @@           @@    @@           @@                                          \n");
printf("   @@           @@    @@           @@                                           \n");
printf("   @@         @@@     @@         @@@                                            \n");
printf("   @@      @@@        @@       @@@                                              \n");
printf("   @@   @@@@          @@      @@@                                                \n");
printf("   @@@@@@             @@@@@@@@                                                  \n");
printf("\nЗдраствуйте я Басов Денис Витальевич ИВТ-11 2 подгруппа\n");
}
