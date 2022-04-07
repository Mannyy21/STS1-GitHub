//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
	if (age >= 18)
	{
		return true ;
	}
	else
	{
		return false ;
	}
}

int exposant (int nbre, int exp)
{
  int resultat;
  resultat = pow(nbre, exp);
  return resultat;
    
}

float TVA(int prix)
{
  float resultat ;
  resultat = prix * 1.196;
  
  return resultat;
    
}

int plusGrand(int a, int b, int c)
{
  if (a>b && a>c)
  {
      return a ;
  }
  if (b>a && b>c)
  {
      return b ;
  }
  else
  {
      return c ;
  }
}



//Fonctions réalisées par l'étudiant 2 :
bool estPair(int nb)
{
	if (nb%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
	
	
int sommeNombre(int nb)
{
  int resultat = 0;
  int i ;
  for (i=nb; i>=0; i--)
  {
    resultat = resultat + i ;
  }
  
  return resultat;   
}


float salaireNet(int salaire);
{
    float resultat;
    resultat= salaire * (0.77);

    return resultat;
}


int plusPetit(int a, int b, int c)
{
  if (a<b && a<c)
  {
      return a ;
  }
  if (b<a && b<c)
  {
      return b ;
  }
  else
  {
      return c ;
  }
}

//Fonctions réalisées par l'étudiant 3 :

bool estImpair(int nb)
{
	if (nb%2==0)
	{
		return false;
	}
	else
	{
		return true;
	}
}


float moyenne(int nb1, int nb2, int nb3)
{
    float resultat ;
    resultat = (nb1 + nb2 +nb3)/ 3 ;
    return resultat ;
}

float reduction(int prix, int reduc)
{
    float resultat ;
    resultat = prix*(1-(reduc/100));
    return resultat ;
}

int nombreMedian(int a, int b, int c)
{
  if ((a>=b && a<=c )||(a>=c && a<=b))
  {
      return a ;
  }
  if ((b>=a && b<=c)||(b>=c && b<=a))
  {
      return b ;
  }
  if ((c>=a && c<=b)||(c>=b && c<=a))
  {
      return c ;
  }
return 0 ;
}