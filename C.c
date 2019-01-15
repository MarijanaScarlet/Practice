scanf("\n");
scanf("%[^\n]%*c", &s)        -->citanje cele linije iz konzole
%d, %s, %c, %f, %lf
****************************************************************************
poraditi na onim ogranicenjima u sabiranju brojeva
kad moze doci do owerflova kod pormenjive
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