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


//Fonctions réalisées par l'étudiant 3 :
