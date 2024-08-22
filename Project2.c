#include <stdio.h>
#include <stdlib.h>



/*
void degerdegistiren (int d[], int e[],int f[],int m,int n,int o);


int main()
{
	int i;
	int a[4]={15,20,25,30};
	int b[7]={2,4,6,8,10,12,14};
	int c[2]={8,9};
	
	
	
	printf("A Dizisi\n");
	for (i=0;i<4;i++)
	{
		printf("\t %d\n",a[i]);
	}
    	printf("B Dizisi\n");
	for (i=0;i<7;i++)
	{
	   	printf("\t %d\n",b[i]);
	}	
        printf("C Dizisi\n");
	for (i=0;i<2;i++)
	{
	   	printf("\t %d\n",c[i]);
	}
	
	degerdegistiren(a,b,c,4,7,2)
	printf()
	
	return 0;
}
void degerdegistiren (int d[], int e[],int f[],int m,int n,int o)
{


   int i;
   
   for (i=0;i<m;i++)
	{
	   	d[i]*=100;
	}
   for (i=0;i<n;i++)
	{
	   	e[i]*=1500;
	}
   for (i=0;i<o;i++)
	{
	   	f[i]*=100;
	}
	
	
}

*/

/*




void notgirisi(float not[5][4],int n,int m);


int main()
{
	
	
	float ogrenci[5][4];
	int i;
	int j;
	int toplam=0 ;
	float  ort=0 ;
	notgirisi(ogrenci,5,4);
	for(i=0;i<5;i++)//Tüm Ögrencılerin için  for dongusu
	{
		toplam=0;
		for(j=0;j<4;j++);//Ogrencılerın notları için for dongusu
		{
			toplam+=ogrenci[i][j];
			
		}
		ort=toplam/4;
		printf("%d inci Ogrencini Not Ortalamasi %f",i,ort);
	}
	
	

	
	

	return 0;
	
}


void notgirisi(float not[5][4],int n,int m)

{

   int i,j;

	for(i=0;i<n;i++)
	{
				
		for(j=0;j<m;j++)
		{
			printf("%d inci Ogrencinin %d inci notunu girin",i+1,j+1);
			scanf("%f\n",&not[i][j]);
		}
	}

}
*/


//pointer =Gösterici demektir

/*

int main()
{   
     int i,j;
     int a=1;
     int ogrencihesap[3][4];
     int toplam=0; int ortalama =0;
     int not=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Lutfen %d inci Ogrencinin %d inci Notunu Giriniz :\n",a,j+1);
			scanf("%d",&ogrencihesap[i][j]);
			 toplam+=ogrencihesap[i][j];
						
		}
		   
		  ortalama=toplam/4	;
	       toplam=0;
			printf("%d inci Ogrencinin Notu ::%d\n",a,ortalama);
		
	}
	

	
	
	
	
	
	return 0;
}
*/

/*
int main()
{
	int a[4];
	int i;
	
	
	for(i=0;i<4;i++)
	{
	   printf("Lutfen Dizinin Elemanlarini Giriniz***\n");
	   scanf("%d",&a[i]);
	}
	
		
	printf("Yen dizim :%d %d %d %d ",a[0],a[1],a[2],a[3]);
	


	

	
	
	
	
	
	
	
	return 0;
		
	
	
}

*/


//Pointer 1




/*
int main()
{
	int kurt=10;//Veri tipi ile birlikte Atanmış Değer.Kurtun Değeri eşittir 10 demektir
	int *pkurt;//Veri tipi ile ismi atanmış değer.(*p)=Adresini veren kod bloğudur.
	pkurt=&kurt;//adresini istediğim pkurt ataması eşit eşitir ambersan(&)ı başta yazcakşekilde &kurt değerine atadım..
	
	printf("Kurt'un degeri %d:\n",kurt);//10 olarak çıktı yapacaktır
	printf("Kurt'un Adresi %p:\n",pkurt);//RAM'deki adresini %p veri tipi ile yazdırdım virgül pkurt ile devam ettim===>0002456485FC57 aynıdeger
	printf("Kurt'un Adresi %p:\n",&kurt);//RAM'deki adresini %p veri tipi ile yazdırdım virgül &kurt ile devam ettim===>0002456485FC57 aynıdeger
	printf("Kurt'un Adresi %p degildir:\n",&pkurt);
	printf("\n");
	
	printf("Kurt'un Degeri  %d \n",*pkurt);
	
	
	
	
	
	
	return 0;
}
*/

/*

int main()

{
	int araba=7; //degeri
    int *bomba;  //gösterge
    bomba=&araba;
    
    
    // *bomba=araba;  *bomba nın öncesi &d olur ise 


printf("Degeri :: %d",araba);
printf("Degeri :: %d\n",&bomba);
printf("Adresi :: %p",bomba);


    
	
	return 0;
	
	
}

*/


/*



int main ()
{
	
	char *a, b='R';
	int *c,d=19;
	double *e,f=3.14;
	
	
	
	a=&b;
	c=&d;
	e=&f;
	
	printf("Onceki Adresler : %p %p %p \n",a,c,e);
	a=a+35;
	c=c-5;
	e=e+1000;	
	
	
    printf("Sonraki Adresler: %p %p %p ",a,c,e);
	
	
	
	
	
	
	
	return 0;
}







*/



int main ()
{
	
	
	
	
	
    	
	
	return 0;
	
}












