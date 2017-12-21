//Program zaliczeniowy z informatyki 2017/2018 
// ciag 10 liczb ca³kowitych
// Praca grupowa:m³.asp Piotr Pobier¿yn WSPol gr.II
//               m³.asp.Marcin Brzeziñski WSPol gr.II

#include <stdio.h>
#include <stdlib.h>

               //deklaracja tablicy g³ównej wprowadzanych liczb uzytkownika
int tab[10];
 
               //deklaracja zmiennych do funkcji sprawdzania znaków wprowadzonych z konsoli 
int i;  

               // czolowka calego programu 
void czolowka(){
	printf("\n  \n");
	printf("  ************************************************************\n");
	printf("  *|                                                        |*\n"); 
	printf("  *|              PROGRAM ZALICZENIOWY INFORMATYKA          |*\n");
	printf("  *|                                                        |*\n");
	printf("  *|                      WSPol 2017/2018                   |*\n");
	printf("  ************************************************************\n");
	printf("\n");
} 
void podajCyfry(){
	char tLiczba[10];	
	int i,x;
	printf(" Wprowadz z klawiatury 10 liczb calkowitych (z ENTER )po kazdej\n");
	 for( i=0;i<10; i++)
	 
	         // sprawdzanie czy jest wprowadzona liczba a nie znak,znak jest zamieniany na 0,
	 	{
	      scanf(  "%s",  tLiczba);
	      tab[i]=atoi(tLiczba);
		 }
		      //jeœli wprowadzono 10 liczb to wyœwietlenie liczb z konsoli,
}
            // wyswietlenie tablicy z wprowadzonymi liczbami,
void wyswietlCiag(){
	printf("      Liczby ciagu: ");
	for(i=0;i<10;i++){
		printf("%i ,", tab[i]);
	}
	printf("\n");
}              
                    //wyznaczanie z tablicy glownej, liczby wystêpuj¹cej wielekrotnie ,
int podajWielokrotnosc()          
 {
                    //deklaracja zmiennych dla okreslenia liczby wystepujacej wielokrotnie,
    int j,i, iloscWystapien, maxWystapien =0, dominujaca;
           for (j=0;j<10;j++){
           	iloscWystapien=0;
           	for(i=1;i<10;i++){
           		
           		if (tab[j]==tab[i]){
           			iloscWystapien++;
           			if(iloscWystapien>maxWystapien){
           				maxWystapien = iloscWystapien;
           				dominujaca = tab[j];
					   }
				   }
			   }
		   }
	
		if(maxWystapien>1){
			printf("      Najczesciej wystepuje: %i\n",dominujaca);
			printf("\n\n\n\n\n\n\n\n\n\n");
		}else{
			printf("      Wprowadzone liczby NIE powtarzaja sie.");
			printf("\n  \n\n\n\n\n\n\n\n\n\n ");			
	}
}
              //obliczanie wartosci sredniej z wprowadzonych liczb
float liczSredniaParzystych()  
{
//deklaracja zmiennych funkcji,wyznaczania sredniej liczb z tablicy wraz z ich zerowaniem,	
	int i;                
	float sredniaParzystych = 0;
	float licznikParzystych = 0;
	for(i=0;i<10;i++)
	{
		
		if(tab[i] % 2 == 0)
		{
		licznikParzystych++;
		sredniaParzystych += tab[i];
		}
	}
	sredniaParzystych = sredniaParzystych / licznikParzystych;
	printf("      SREDNIA liczb parzystych wynosi : %f\n", sredniaParzystych);
	printf("\n\n\n\n\n\n\n\n\n\n");
	return sredniaParzystych;
}
                //sortowanie tablicy liczb w porzadku rosn¹cym
int sortujRosnaco()            
{
	int j, temp;//deklaracja zmiennych funkcji sortowania liczb w tablicy,
	for(j=0; j<10; j++){
    for(i=0; i<9; i++){
             if(tab[i]>tab[i+1]){
                             temp=tab[i];
                             tab[i]=tab[i+1];
                             tab[i+1]=temp;
                             }
                      }
                      }
    printf("                  Posortowano \n");
    wyswietlCiag( );
	printf("\n\n\n\n\n\n\n\n\n");	
}
main()               // glowna pêtla programu,
{
    
	 system("cls");
	 czolowka();
	 char tLiczba[10];
     
       char wybor;
       while ( wybor != 5)
        {
   	    printf("\n   \n");
	    printf("             >------- Dokonaj wyboru ------< \n");
	    printf("\n");
	    printf("            1-   Wprowadzanie liczb\n");
	    printf("            2-   Liczba  najczesciej wystepujaca\n");
		printf("            3-   SREDNIA tych liczb parzystych\n");
		printf("            4-   Liczby  posortowane rosnaco\n");
		printf("            5-   **         ZAKONCZ           **");
	    printf("\n \n");
	    printf(" **************************>       <**************************** ");
	    printf("                                              ");
	                        //*odczyt z konsoli wartosc parametru menu*/
		scanf("%s", tLiczba);
		wybor=atoi(tLiczba);// u¿ycie "atoi" zasugerowane przez wyk³adowcê ,do sprawdzenia znaku . 
		switch(wybor)			        	      	  	       
	   {
	   	  case 1:
	   	  	system("cls");
	      	czolowka();			  	      	
	      	    podajCyfry();
	      	    wyswietlCiag();
	      	    break;
	      case 2:
	      	system("cls");
	      	czolowka();
	      	wyswietlCiag();
				podajWielokrotnosc();
				break;
		  case 3:
		  	system("cls");
		  	czolowka();
		  	wyswietlCiag();
				liczSredniaParzystych();
				break;
		  case 4:
		  	system("cls");
		  	czolowka();
		  	wyswietlCiag();
		  	    sortujRosnaco();
				break;
	   }
	}
    return 0;
}
	

