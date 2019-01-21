scanf("\n");
scanf("%[^\n]%*c", &s)        -->citanje cele linije iz konzole
%d, %s, %c, %f, %lf
****************************************************************************
-poraditi na onim ogranicenjima u sabiranju brojeva
kad moze doci do owerflova kod pormenjive
-izgled metoda malloc, calloc, realloc, scanf, printf
****************************************************************************
function(int param)
int variable
function(variable) ---------> prosledjivanje po vrednosti

function(int *param)
int variable
function(&variable)  --------> prosledjivanje po referenci

moze takodje i da kazes
int p* = &varibale
function(p)
***************************************************************************
paziii
char *numbers[10] = { "one", "two", "three", "four", "five", "six", "seven", "eight",
	"nine", "ten" };

moze i sa char *numbers da se inicijalizuje

numbers[0] - "one"
*numbers[0] - "o"
******************************************************************************************
svaka rec se zavrsava sa '\n' !!!!
znaci string - s = realloc(s, strlen(s) + 1);
s[strlen(s)] = '\n'
******************************************************************************************
staticki niz - alocira se u compile time-u 
dinamicki niz - alocira se u run time-u, na heap-u
******************************************************************************************
int a = 0; 
double d = 10.21; 
printf("%d", sizeof(a+d)); 
vratice 8 - jer je velicina int-a 4 bajta a double-a 8 pa je zajednicki sve to 8 bajta
*******************************************************************************************
paaaaaaaazi se:
int *arr = (int*)sizeoff(n * (int))
int arr[5] = {1,2,3,4,5}

u prvom slucaju je to pokazivac i njegova velicina je 4 bajta, a u drugom to je staticki
alociran blok memorije kojem je velicina 5 * sizeof(int) = 20 bajta

procitati ovo ispod!

https://www.geeksforgeeks.org/using-sizof-operator-with-array-paratmeters/
*******************************************************************************************
stringovi se u C-u zavrsavaju sa \0 karakterom!!!
s = (char*)malloc(5 * sizeof(char));
	s[0] = 'm';
	s[1] = 'a';
	s[2] = 'j';
	s[3] = 'a';
	s[4] = '\0'; ---- bez ovoga ispise neke zvrljotine sa STDI

s = realloc(s, strlen(s) + 1); nece da doda on sam \0 vec ovaj s je verovatno imao to \0 na kraju
********************************************************************************************
char - podatak x  -128 <= x < 128
ako napises char x = 129 onda x ima vrednost -127 jer je to kao (129 - 128) + (-128) kao da idu u krug te vrednosti

unsigned char e on moze da bude 0 <= x < 256
********************************************************************************************
#include <ctype.h> - ovde ti se nalazi funkcija isdigit koja proverava da li ti je karakter cifra
i na ovaj nacin ces da pretvoris karakter u cifru int x = character - '0'

