

//Importamos las librerías
#include <iostream>
#include <cstring>
#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <time.h>
#include <sys/time.h> 
#include <ctype.h> 
#include <string>



using namespace std;

//Declaramos una constante
#define LONGITUD_TEXTOS 255

//Creamos una estructura que tendrá un array unidimensional de tipo char y declaramos una variable de estructura llamada lista
struct Tlista
{
	char palabra[LONGITUD_TEXTOS];
    
}lista;


//Declaromos dos punteros a fichero
FILE * listado;

FILE * listadoOrdenado;


//Definimos un tipo de estructura
typedef struct copycutpaste1 CCPTextBuffer;

//Creamos una estructura que tandrá datos de distinto tipo
struct copycutpaste1 {
    
    GtkTextBuffer *textBuffer1;
    GtkTextBuffer *textBuffer2;
    GtkWidget *widLabel;
    GtkWidget *widLabel3;
    GtkWidget *widLabel4;
    
};


typedef struct copycutpaste2 CCPEntry;
 
struct copycutpaste2 {
    
    GtkWidget *widEntry1;
    GtkWidget *widEntry2;
    GtkWidget *widLabel5;
};


typedef struct copycutpaste3 CCPRadioButton;
 
struct copycutpaste3 {
    
    GtkWidget *widRadioButtonPrimeraLetra1;
    GtkWidget *widRadioButtonPrimeraLetra2;
    GtkWidget *widRadioButtonPrimeraLetra3;
    GtkWidget *widRadioButtonPrimeraLetra4;
    GtkWidget *widRadioButtonPrimeraLetra5;
    GtkWidget *widRadioButtonPrimeraLetra6;
    GtkWidget *widRadioButtonPrimeraLetra7;
    GtkWidget *widRadioButtonPrimeraLetra8;
    GtkWidget *widRadioButtonPrimeraLetra9;
    GtkWidget *widRadioButtonPrimeraLetra10;
    GtkWidget *widRadioButtonPrimeraLetra11;
    GtkWidget *widRadioButtonPrimeraLetra12;
    GtkWidget *widRadioButtonPrimeraLetra13;
    GtkWidget *widRadioButtonPrimeraLetra14;
    GtkWidget *widRadioButtonPrimeraLetra15;
    GtkWidget *widRadioButtonPrimeraLetra16;
    GtkWidget *widRadioButtonPrimeraLetra17;
    GtkWidget *widRadioButtonPrimeraLetra18;
    GtkWidget *widRadioButtonPrimeraLetra19;
    GtkWidget *widRadioButtonPrimeraLetra20;
    GtkWidget *widRadioButtonPrimeraLetra21;
    GtkWidget *widRadioButtonPrimeraLetra22;
    GtkWidget *widRadioButtonPrimeraLetra23;
    GtkWidget *widRadioButtonPrimeraLetra24;
    GtkWidget *widRadioButtonPrimeraLetra25;
    GtkWidget *widRadioButtonPrimeraLetra26;
    GtkWidget *widRadioButtonPrimeraLetra27;
    GtkWidget *widRadioButtonPrimeraLetra28;
    
};



typedef struct copycutpaste4 CCPRadioButton2;
 
struct copycutpaste4 {
    
    GtkWidget *widRadioButtonSegundaLetra1;
    GtkWidget *widRadioButtonSegundaLetra2;
    GtkWidget *widRadioButtonSegundaLetra3;
    GtkWidget *widRadioButtonSegundaLetra4;
    GtkWidget *widRadioButtonSegundaLetra5;
    GtkWidget *widRadioButtonSegundaLetra6;
    GtkWidget *widRadioButtonSegundaLetra7;
    GtkWidget *widRadioButtonSegundaLetra8;
    GtkWidget *widRadioButtonSegundaLetra9;
    GtkWidget *widRadioButtonSegundaLetra10;
    GtkWidget *widRadioButtonSegundaLetra11;
    GtkWidget *widRadioButtonSegundaLetra12;
    GtkWidget *widRadioButtonSegundaLetra13;
    GtkWidget *widRadioButtonSegundaLetra14;
    GtkWidget *widRadioButtonSegundaLetra15;
    GtkWidget *widRadioButtonSegundaLetra16;
    GtkWidget *widRadioButtonSegundaLetra17;
    GtkWidget *widRadioButtonSegundaLetra18;
    GtkWidget *widRadioButtonSegundaLetra19;
    GtkWidget *widRadioButtonSegundaLetra20;
    GtkWidget *widRadioButtonSegundaLetra21;
    GtkWidget *widRadioButtonSegundaLetra22;
    GtkWidget *widRadioButtonSegundaLetra23;
    GtkWidget *widRadioButtonSegundaLetra24;
    GtkWidget *widRadioButtonSegundaLetra25;
    GtkWidget *widRadioButtonSegundaLetra26;
    GtkWidget *widRadioButtonSegundaLetra27;
    GtkWidget *widRadioButtonSegundaLetra28;
    
};



typedef struct copycutpaste5 CCPRadioButton3;
 
struct copycutpaste5 {
    
    GtkWidget *widRadioButtonNumLetras1;
    GtkWidget *widRadioButtonNumLetras2;
    GtkWidget *widRadioButtonNumLetras3;
    GtkWidget *widRadioButtonNumLetras4;
    GtkWidget *widRadioButtonNumLetras5;
    GtkWidget *widRadioButtonNumLetras6;
    GtkWidget *widRadioButtonNumLetras7;
    GtkWidget *widRadioButtonNumLetras8;
    GtkWidget *widRadioButtonNumLetras9;
    GtkWidget *widRadioButtonNumLetras10;
    GtkWidget *widRadioButtonNumLetras11;
    GtkWidget *widRadioButtonNumLetras12;
    GtkWidget *widRadioButtonNumLetras13;
    GtkWidget *widRadioButtonNumLetras14;
    GtkWidget *widRadioButtonNumLetras15;
    GtkWidget *widRadioButtonNumLetras16;
    GtkWidget *widRadioButtonNumLetras17;
    
};



typedef struct copycutpaste6 CCPLabel;

struct copycutpaste6 {
    
    GtkWidget *widLabelTotalRegistros2;
    GtkWidget *widLabelTiempo2;
    
    
};



typedef struct copycutpaste7 CCPTextBuffer2;

struct copycutpaste7 {
    
    GtkTextBuffer *textBuffer4;
    GtkWidget *widLabelTotalRegistros;
    GtkWidget *widLabelTotalRegistrosFiltrados;
    GtkWidget *widLabelTiempo;
    
    
};



typedef struct copycutpaste8 CCPTextBuffer3;

struct copycutpaste8 {
    
    GtkTextBuffer *textBuffer5;
    GtkTextBuffer *textBuffer6;
    GtkWidget *widLabel5;
    GtkWidget *widLabel6;
    GtkWidget *widLabel8;
    
};


typedef struct copycutpaste9 CCPEntry2;
 
struct copycutpaste9 {
    GtkWidget *widEntry3;
    GtkWidget *widEntry4;
    GtkWidget *widLabel6;
};


//Definimos dos métodos que devolveran un tipo entero
int nRegistrosFicheroDeMiLista();

int nRegistrosFichero2DeMiLista();



//Este método es para limpiar el entry
void button_limpiar_Entry(GtkWidget *widget, GtkWidget *entry1_2) 
{
    //Con esto enviamos al entry que no haya nada 
    gtk_entry_set_text (GTK_ENTRY (entry1_2), "");
  
}



//Este método es para limpiar el textview
void button_limpiar_TextView(GtkWidget *widget, GtkTextBuffer *texto) 
{
    
    const gchar *text = "";
    
    //Con esto enviamos al textview que no habrá nada
    gtk_text_buffer_set_text(texto, text, 0);
  
}



//Este método es para limpiar los label
void button_limpiar_Label(GtkWidget *widget, GtkWidget *label)
{
	//Con esto enviamos al label que no habrá nada
    gtk_label_set_text(GTK_LABEL (label), "");
    
}




//Este método es para buscar palabras en el fichero y saber si están o no
void button_buscar_TextView(GtkWidget *widget, CCPTextBuffer *stuff) 
{

    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_buscar_TextView
    unsigned seg1, seg2;
	float tiempo;

    seg1 = clock();
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_buscar_TextView
    
    const gchar *text;
    GtkTextIter start;
    GtkTextIter end;
  
    //Estas 3 líneas es para sacar el texto del textview y guardarlo en un array de tipo gchar
    gtk_text_buffer_get_start_iter (stuff->textBuffer1, &start);
    gtk_text_buffer_get_end_iter (stuff->textBuffer1, &end);
    text = gtk_text_buffer_get_text (stuff->textBuffer1, &start, &end, FALSE); 
    
    //Para conocer la longitud del array
    gint sizeText = 0;
    
    sizeText = strlen(text);
  
    
    
    //Si has introducido en el texview entre 1 y 9000 caŕacteres se ejecutará la condición
    if(sizeText >= 0 and sizeText <= 9000)
    {
        //Funciona menos lo de poner varios espacios al final se queda un espacio sobrante, pero eso se soluciona en el siguiente array
        char words[9000];
        int cont = 0;
        int contSaltoDeLinea = 0;
        int contEspacio = 0;
        int countCharacters = 0;
        int j;
        int contPalabras = 0;
        int palabraNoEsta = 0;
    
    
		
		//Recorremos todos los caracteres que se han introducido
        for(int i = 0; i < sizeText; i++)
        {
        
            //Contanilizar los saltos de línea que hay
            for(int a = 0; a < sizeText; a++)
            {
				//printf("text[%d]: %c text[%d]: %c, text[%d]: %c, text[%d]: %c, text[%d]: %c, text[%d]: %c, text[%d]: %c\n", 0, text[0], 1, text[1], 2, text[2], 3, text[3], 4, text[4], 5, text[5], 6, text[6]);
				
                if(text[a] == '\n' or text[a] == ' ' or isalpha(text[a]) != 0 or (ispunct(text[a]) == 0 and ispunct(text[a+1]) == 0 and isalpha(text[a+2]) != 0) 
                   or (ispunct(text[a]) == 0 and ispunct(text[a+1]) == 0) or ispunct(text[a]) == 0
                   /*or (text[a] == '-' and text[a-1] != ' ' and text[a+1] != ' ') or (text[a] == '\'' and text[a-1] != ' ' and text[a+2] != ' ')*/)
                {
					
					if(text[a] != '0' and text[a] != '1' and text[a] != '2' and text[a] != '3' and text[a] != '4' 
						and text[a] != '5' and text[a] != '6' and text[a] != '7' and text[a] != '8' and text[a] != '9')
					{
						
						contSaltoDeLinea++;
						
					}
					
                    
                }
            
           
            }
        
    
        
            if(contSaltoDeLinea > 0)
            {
                if(isspace(text[i]) != 0)
                {
                    contPalabras++;
                    contEspacio++;
                
                    
                    if(contEspacio == 0)
                    {
                        if(cont == 0)
                        {
                            
                            j = countCharacters;
                        
                    
                            words[j] = ' ';
                            cont++;
                            countCharacters++;
                        
                            contSaltoDeLinea = 0;
                    
                        }
                    }
                    else
                    {
                    
                        if(cont == 0)
                        {
                        
                            int b = sizeText-1;
                        
                            
                            //Funciona todo menos si metes varios saltos línea al final, se solucionara en el siguiente array
                            if(i != b and isspace(text[0]) != 0 and countCharacters == 0)
                            {
                                //printf("El primer cáracter es un espacio en blanco\n");
                            }
                            else if(i <= b and isspace(text[i]) !=0 and sizeText-i == 1)
                            {
                                //printf("El último cáracter es un espacio en blanco\n");
                            }
                            else if(i != b and sizeText-i != 1)
                            {
                                
                                
								j = countCharacters;
                            
								words[j] = '\n';
								cont++;
								countCharacters++;
                        
                        
								contSaltoDeLinea = 0;
								
                            }
                       
                        }
                    
                    
                    }
                
                }
                else
                {
					
					if(isalpha(text[i]) != 0 or (ispunct(text[i]) == 0 and ispunct(text[i+1]) == 0 and isalpha(text[i+2]) != 0) 
					   or (ispunct(text[i]) == 0 and ispunct(text[i+1]) == 0) or ispunct(text[i]) == 0 
					   /*or (text[i] == '-' and text[i-1] != ' ' and text[i+1] != ' ') or (text[1] == '\'' and text[0] != ' ' and text[2] != ' ')*/)
					{
						
						if(text[i] != '0' and text[i] != '1' and text[i] != '2' and text[i] != '3' and text[i] != '4' and text[i] != '5' 
						   and text[i] != '6' and text[i] != '7' and text[i] != '8' and text[i] != '9')
						{
							
							
							j = countCharacters;
                        
							words[j] = text[i];
                    
							countCharacters++;
                    
							contSaltoDeLinea = 0;
							cont = 0;
							contEspacio = 0;
							
						
						}
						
						
					
					}
         
                }
                
            }
            else if(contSaltoDeLinea == 0)
            {
				
                if(isspace(text[i]) != 0)
                {
                    //printf("El primer cáracter es un espacio en blanco\n");
                }
                else 
                {
					if(isalpha(text[i]) != 0 or (ispunct(text[i]) == 0 and ispunct(text[i+1]) == 0 and isalpha(text[i+2]) != 0) 
					   or (ispunct(text[i]) == 0 and ispunct(text[i+1]) == 0) or ispunct(text[i]) == 0
					  /*or (text[i] == '-' and text[i-1] != ' ' and text[i+1] != ' ') or (text[1] == '\'' and text[0] != ' ' and text[2] != ' ')*/)
					{
						
						if(text[i] != '0' and text[i] != '1' and text[i] != '2' and text[i] != '3' and text[i] != '4' and text[i] != '5' 
						   and text[i] != '6' and text[i] != '7' and text[i] != '8' and text[i] != '9')
						{
							
								
							j = countCharacters;
            
							words[j] = text[i];
							countCharacters++;
            
							contEspacio = 0;
							
						
						}
				
					}
		
                }
            
            
            }
        
        
        }
		
  
    
		//Esto es para indicar que hay se acaba el array
        words[countCharacters] = '\0';
    
		//Obtenemos la longitud del array
        int sizeWords = strlen(words);
        
    
 
        //Eliminamos el espacio si hubiera alguno al final del array unidimensional de tipo char
        char wordsV[9000];
        int cont25 = 0;
        int cont26 = 0;
    
        
        //Recorremos el array y pasamos el contenido del array en otro array pero sin los espacios
        for(int h = 1; h <= sizeWords; h++)
        {
            
            int b = sizeWords-2;
        
        
            if(h > b and isspace(words[cont25]) !=0)
            {
                //printf("El último caracter es un espacio y no se mete\n");
            }
            else
            {
                wordsV[cont26] = words[cont25]; 
            
                cont26++;
            }
        
            cont25++;
        }
    
    
		//Esto es para indicar que hay se acaba el array
        wordsV[cont26] = '\0';
    
		//Obtenemos la longitud del array
        int sizeWordsV = strlen(wordsV);
    
    
        //Con esto contabilizamos las palabras que vamos a buscar
        int contWords = 0;
        
        
        for(int i = 0; i <= sizeWordsV; i++)
        {
			if(wordsV[i] == '\n')
			{
				contWords++;
			}
			
		}
		
		if(sizeText > 0)
		{
			contWords = contWords + 1;
		}
        
        
        
        
        //Para asegurarnos que se han introducido caracteres en el textview, sino se han inctroducido no se ejecutará el condiconal
        if(sizeWordsV >= 0 and sizeWordsV <= 9000)
        {
            
            //AQUÍ EMPIEZA EL FICHERO
            int numero_registros;
            int comparacion;
            int igual = 0;
            char auxiliar[LONGITUD_TEXTOS];
            int f = 0;
            int cont15 = 0;
            int cont16 = 1;
            char palabrasQueNoEstanEnElFichero[90000];
            int pos = 0;
            int pos2 = 0;
            
            
            int numPalabras = 0;
            int repe1 = 0, j2 = 0, z2 = 0, posb = 0, pos2b = 0, cont15b = 0, cont16b = 0, saltosDeLinea = 0;
            char palabras2[250];
            char palabras3[250];
            char palabrasSinRepetir[9000];
            char palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero[9000];
            int k2;
            char palabrasSinRepetirSinSaltosDeLinea[9000];
            int x1 = 0;
            
       
       
            //Sacamos registro a registro del fichero para luego compararlos con las palabras que se hayan introducido en el textview
            for(int q = 0; q <= contPalabras; q++)
            {
                
                for(int i = pos; i < sizeWordsV; i++)
                {
                    if(isspace(wordsV[pos]) == 0)
                    {
                        lista.palabra[cont15] = wordsV[pos];
                        cont15++;
                        pos++;
                    }
                    
                }
                
                
                //El último caracter de un array char unidimensional tiene que ser \0
                lista.palabra[cont15] = '\0';
    
                cont15 = 0;
                
                pos = pos + 1;
                
                
                //Recogemos el número total de registros que tiene el fichero
                numero_registros = nRegistrosFicheroDeMiLista();
    
	
                //Pasamos el contenido del array a otro array, con esto lo compararemos con lo que se haya introducido en el textview
                strcpy(auxiliar, lista.palabra);
                
                
                
                //Pasamos la primera letra de la palabra a mayúscula, en caso de que la palabra estuviera en minúscula o todo la palabra en mayúscula.
                //Con las dieresis no funciona, ya que no distingue minúsculas de las mayúsculas
                char l;
        
                for(int e = 0; e < (int)strlen(auxiliar); e++)
                {
                    l = auxiliar[e];
			
			
                    if(l > 0 && islower(l))//islower investiga si la letra es minuscula
                    {
                        if(e == 0)
                        {
					
                            auxiliar[0] = toupper(l);//toupper convierte el caracter de minúscula a mayúscula
                        }
                    }
                    else if(l > 0 && isupper(l))//isupper investiga si un caracter es mayuscula
                    {
                        auxiliar[e] = tolower(l);//tolower convierte el caracter de mayúscula a minúscula
					
                        if(e == 0)
                        {
                            auxiliar[0] = toupper(l);
                        }
				
                    }
			
			
                }
        
                
                
                
                //Coloca el cursor al inicio del fichero
                rewind(listado);
	

				//Si no hay registros en el fichero se ejecutará este bloque en caso contrario pues el else
                if(numero_registros == 0 and sizeText > 0)
                {
					//Creamos un array unidimensional de tipo char con un texto exlicativo
                    char warnings19[34] = {'T','h','e','r','e',' ','a','r','e',' ','n','o',' ','r','e','c','o','r','d','s',' ','i','n',' ','t','h','e',' ','f','i','l','e','.','\0'};
                    
                    //Obtenemos la longitud del array
                    int sizeWarnigs19 = strlen(warnings19);
                    
                    //Enviamos el contendido del array al textview
                    gtk_text_buffer_set_text (stuff->textBuffer2, warnings19, sizeWarnigs19); 
                    
            
                }
                else
                {
                    //Recogemos el número de registros que tiene el fichero
                    numero_registros = nRegistrosFicheroDeMiLista();
        
                    //Permite situar el cursor de lectura/escritura de un fichero en una posición determinada, en este caso al principio.
                    fseek(listado, 0, SEEK_SET);
                    
					
					//Leemos los registros del fichero
                    for(int i=1; i<= numero_registros; i++)
                    {
                        //Permite leer un número determinado de bloques de caracteres a partir de la posición del cursor. Después de la lectura
                        //se actualiza la posición del cursor en el último carácter leído
                        fread(&lista, sizeof(Tlista), 1, listado);
			
                        //strcasecmp compara si dos cadenas son iguales o no, si no lo son devuelve positivo o negativo en función si es menor o mayor, sin tener en cuenta si es mayuscula o minuscula
                        comparacion = strcasecmp(auxiliar, lista.palabra);
                        
                        //Obtenemos la longitud del array
                        int sizeAuxiliar = strlen(auxiliar);
                        
                        
						//Si el array hay elementos el resultado de la comparación es cero osea igual se ejecutará el bloque en caso contrario pues el else
                        if(sizeAuxiliar > 0 && comparacion == 0)//Antes era if(comparacion == 0)
                        {
                            igual++;
                            f++;
                
                        }
                        else
                        {
							//Se escribira las palabra en el fichero en caso de que se cumpla la condición
                            if(sizeAuxiliar > 0 && i == numero_registros && igual == 0)//antes era if(i == numero_registros && igual == 0) //lo nuevo es sizeAuxiliar > 0 &&
                            {
                                //Permite situar el cursor de lectura o escritura de un fichero en una posición determinada
                                fseek(listado, 0, SEEK_CUR);
								
								//Permite liberar el contenido del buffer asociado a un flujo de entrada o salida
                                fflush(listado);
                    
                                //Metemos la palabra o palabras del textview1 que no estan en el fichero en un array unidimensional 
                                //para después mostrarlo por el textview2
                                int sizeAuxiliar = strlen(auxiliar);
                                
                                //Contabiliza las palabras que no están
                                palabraNoEsta++;
                              
								//Si hay más de una palabra que no está pues le añadimos un salto de línea, necesaria para que en el textview aparezcan las
								//palabras uno detrás de otro
                                if(palabraNoEsta > 1)
                                {
                           
                                    palabrasQueNoEstanEnElFichero[pos2] = '\n';
                                    pos2++;
                                }
                                
                                
                                //Lo añadidmos al array que se mostrará en el textview2
                                for(int s = 0; s < sizeAuxiliar; s++)
                                {
                                    
                                    palabrasQueNoEstanEnElFichero[pos2] = auxiliar[s];
                                    pos2++;
                                }
                                
                    
                            }
                            else if(igual != 0 and cont16 == numero_registros)
                            {
					
                                //printf("\n\nLas palabra %s ya esta en la lista\n\n", auxiliar);
                        
                            }
                
            
                        }
            
                        cont16++;
            
                    }
                
		
                }
                
                
                
                //Para lo de las palabras que no están en el fichero, comprobar lo que se ha metido después de haber
                //revisado todas las palabras que se han metido en el textview1
                
                //Con esto ponemos que hay se acaba el array char unidimensional
                palabrasQueNoEstanEnElFichero[pos2] = '\0';
                    
                int sizePalabrasQueNoEstanEnElFichero = strlen(palabrasQueNoEstanEnElFichero);
                
           
               
                //Eliminamos los valores repetidos de las palabras del array que no están en nuestra lista de palabras que no están en el fichero
                if(q == contPalabras)
                {
                    
                    for(int g = 0; g < sizePalabrasQueNoEstanEnElFichero; g++)
                    {
                        if(palabrasQueNoEstanEnElFichero[g] != '\n')
                        {
                            
                            palabrasSinRepetirSinSaltosDeLinea[x1] = palabrasQueNoEstanEnElFichero[g];
                            
                            x1++;
                            
                        }
                        else
                        {
                            palabrasSinRepetirSinSaltosDeLinea[x1] = ' ';
                            
                            x1++;
                        }
                        
                    }
                
                    
                    
                    palabrasSinRepetirSinSaltosDeLinea[x1] = '\0';
                    
                    int sizePalabrasSinRepetirSinSaltosDeLinea = strlen(palabrasSinRepetirSinSaltosDeLinea);
                    
                    
                    
                    //Eliminamos las repetidas
                    for(int i2 = 1; i2 <= palabraNoEsta; i2++) 
                    {
                        
                        //Contabiliamos los caracteres de la primera palabra y pasamos la palabra a palabras2
                        for(int i = posb; i < sizePalabrasSinRepetirSinSaltosDeLinea; i++)
                        {
                            if(isspace(palabrasSinRepetirSinSaltosDeLinea[posb]) == 0)
                            {
                                palabras2[cont15b] = palabrasSinRepetirSinSaltosDeLinea[posb];
                                cont15b++;
                                posb++;
                            }
                    
                        }
		
                        //El último caracter de un array char unidimensional tiene que ser \0
                        palabras2[cont15b] = '\0';
        
              
                        cont15b = 0;
                
                        posb = posb + 1;
        
                
                        int sizePalabras2 = strlen(palabras2);
                        
		
                        j2++;
		
                        //Contabiliamos los caracteres de la segunda palabra y pasamos la palabra a palabras3
                        for(k2 = 1; k2 <= palabraNoEsta; k2++)
                        {
                            
                            for(int i = pos2b; i < sizePalabrasSinRepetirSinSaltosDeLinea; i++)
                            {
                                               
                                if(k2 < palabraNoEsta)
                                {
                                    
                                    if(isspace(palabrasSinRepetirSinSaltosDeLinea[pos2b]) == 0)
                                    {
                                        palabras3[cont16b] = palabrasSinRepetirSinSaltosDeLinea[pos2b];
                                        
                                        cont16b++;
                                        pos2b++;
                                    }      
                                }
                                else if(k2 == palabraNoEsta)
                                {
                                    palabras3[cont16b] = palabrasSinRepetirSinSaltosDeLinea[pos2b];
                                    
                                    cont16b++;
                                    pos2b++;
                                }
                                else
                                {
                                    
                                    if(isalpha(palabrasSinRepetirSinSaltosDeLinea[pos2b]) != 0)
                                    {
                                        palabras3[cont16b] = palabrasSinRepetirSinSaltosDeLinea[pos2b];
                                        
                                        cont16b++;
                                        pos2b++;
                                    }
                                }
				       
				
                            }
            
                            //El último carácter de un array char unidimensional tiene que ser \0
                            palabras3[cont16b] = '\0';
			
			
                            int copiaCont16 = cont16b;
        
                            cont16b = 0;
                
                            pos2b = pos2b + 1;
			
                            
							//En el caso que sean iguales y se cumplen ciertas condiciones sustituimos las repetidas por asteriscos
                            if(strcasecmp(palabras2, palabras3) == 0)
                            {
	
                                if(repe1 == 0) 
                                {
                                    repe1++;
					
				
                                    int asteriscos;
					
                                    if(k2 == 0)
                                    {
                                        asteriscos = cont16b-sizePalabras2;
                                    }
                                    else
                                    {
                                        asteriscos = pos2b-sizePalabras2-k2;
                                    }
					
					
					
				
                                    for(int i = 0; i < sizePalabras2; i++)
                                    {
                                        if(palabraNoEsta == 1)
                                        {
                                            palabrasSinRepetir[z2] = palabras2[i];
							    
                                            z2++;
                                            
                                        }
                                        else if(palabraNoEsta > 1)
                                        {
		                             
                                            palabrasSinRepetir[z2] = palabras2[i];
								
                                            z2++;
							
							
                                            palabrasSinRepetirSinSaltosDeLinea[asteriscos] = '*';
						
                                            asteriscos++;
		
                                        }

                                    }
					
					
                                   
                                    palabrasSinRepetir[z2] = '\n';
                                    saltosDeLinea++;
                                    z2 = z2+1;
	
                                }
                                else
                                {
                                    int asteriscos;
					
                                    if(k2 == 0)
                                    {
                                        asteriscos = sizePalabrasSinRepetirSinSaltosDeLinea-sizePalabras2;
                                    }
                                    else
                                    {
                                        asteriscos = pos2b-copiaCont16;
                                        asteriscos = asteriscos-1;
                                    }
					
					
                                  
					
                                    for(int i = 0; i < sizePalabras2; i++)
                                    {
                                        
                                        palabrasSinRepetirSinSaltosDeLinea[asteriscos] = '*';
						
                                        asteriscos++;
                                    }
					

                                }
				
				
                            }

			
                        }
		
                        repe1 = 0;
		
                               
                        pos2b = 0;

                    }
	
	
                  

                    palabrasSinRepetir[z2] = '\0';
	
                    int sizePalabrasSinRepetir = strlen(palabrasSinRepetir);
                    
                    contPalabras = 0;
                    
     
                   
                    //Lo copiamos a otro array sin los astericos            
                    int cont20 = 0, cont21 = 0, cont22 = 0;
	
                    for(int i3 =0; i3 < sizePalabrasSinRepetir; i3++)
                    {
                        if(palabrasSinRepetir[i3] != '*')
                        {
			
                            palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero[cont20] = palabrasSinRepetir[i3];
                            
                            cont20++;
			
                            if(palabrasSinRepetir[i3] == '\n')
                            {
                                
                                cont22++;
				
                                if(cont21 > 0)
                                {
                                    cont20 = cont20 - 1;
					
                                }
				
                            }
                            else
                            {
                                cont21 = 0;
                            }
	
                            
                        }
                        else//Aquí solo se entra lo que sean astericos
                        {
                            cont21++;
			
                        }
		
		
		
                    }
	
                    
                    
	
                    if(palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero[cont20-1] != '\n')
                    {
                        cont20 = cont20 + 1;
                    }
	
	
	
	
                    palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero[cont20] = '\0';
	
                    int sizePalabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero = strlen(palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero);
                    
                   
                    
                    //Contabilizamos el número de palabras que tiene el array palabrasSinRepetirSinAsteriscos
                    for(int i3 =0; i3 < sizePalabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero; i3++)
                    {
                        if(palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero[i3] == '\n')
                        {
                            numPalabras++;
                        }
                    }
	
    
                    
                    //Mostramos información relevente que nos servirá para saber que es lo que vamos a poner el textview2 ya sea
                    //las palabras que se van a agregar o que ya se encuentran en el fichero
                   
                    
                    //Mostramos si las palabra que introducimos estan o no en el fichero, sino están mostramos esas palabras que se han añadido
                    if(f==0)
                    {
                    
                        if(numero_registros > 0)
                        {
                            
                            int sizePalabraSinRepetirSinAsteriscosQueNoEstanEnElFichero = strlen(palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero);
                        
                            
                            gtk_text_buffer_set_text (stuff->textBuffer2, palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero, sizePalabraSinRepetirSinAsteriscosQueNoEstanEnElFichero);
                        
                            
                        }
                    
                    }
                    else
                    {
                       
                        if(palabraNoEsta == 0)
                        {
                            
                            if(f > 1)
                            {
                                
                                char textSalida[22] = {'T','h','e','y',' ','a','r','e',' ','i','n',' ','t','h','e',' ','f','i','l','e','.','\0'};
                                
                                int sizeTextSalida = strlen(textSalida);
                        
                                gtk_text_buffer_set_text (stuff->textBuffer2, textSalida, sizeTextSalida);
                                
                            }
                            else
                            {
                                
                                char textSalida[19] = {'I','t',' ','i','s',' ','i','n',' ','t','h','e',' ','f','i','l','e','.','\0'};
                                
                                int sizeTextSalida = strlen(textSalida);
                        
                                gtk_text_buffer_set_text (stuff->textBuffer2, textSalida, sizeTextSalida);
                                
                            }
     
                            
                        }
                        else
                        {
                            
                            int sizePalabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero = strlen(palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero);
                            
                            
                            gtk_text_buffer_set_text (stuff->textBuffer2, palabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero, sizePalabrasSinRepetirSinAsteriscosQueNoEstanEnElFichero);
                            
                        }
                        
                        
                    }
                    
                }
               
                

                igual = 0;
 
            }
       
       
            
            
            //MOSTRAMOS EL LABEL DE LAS PALABRAS QUE BUSCO POR PANTALLA el valor de contWords
            short numDigitos;
            char sizePalabrasQueBusco[9000];
            int contador1 = 0;
            short cifra1, cifra2, cifra3;
            
            
  
			//Calculamos cuantas cifras tendrá la variable contWords
            if (contWords<10)
            {
                numDigitos = 1;
                
            }
            else if (contWords<100)
            {
                numDigitos = 2;
                
            }
            else if (contWords<1000)
            {
                numDigitos = 3;
                
            }
            else if (contWords<10000)
            {
                numDigitos = 4;
                
            }
            else if (contWords > 10000)
            {
                //cout<<"Fuera de rango"<<endl;
            }
    
            
    
			//Convertimos el número en carácteres y lo pasamos aún array unidimensional de tipo char
            for(int a = 1; a <= numDigitos; a++)
            {
                
                if(numDigitos == 1)
                {
                    if(contWords == 0)
                    {
                        sizePalabrasQueBusco[0] = '0';
                
                    }
                    else if(contWords == 1)
                    {
                        sizePalabrasQueBusco[0] = '1';
                
                    }
                    else if(contWords == 2)
                    {
                        sizePalabrasQueBusco[0] = '2';
                
                    }
                    else if(contWords == 3)
                    {
                        sizePalabrasQueBusco[0] = '3';
                
                    }
                    else if(contWords == 4)
                    {
                        sizePalabrasQueBusco[0] = '4';
                
                    }
                    else if(contWords == 5)
                    {
                        sizePalabrasQueBusco[0] = '5';
                
                    }
                    else if(contWords == 6)
                    {
                        sizePalabrasQueBusco[0] = '6';
                
                    }
                    else if(contWords == 7)
                    {
                        sizePalabrasQueBusco[0] = '7';
                
                    }
                    else if(contWords == 8)
                    {
                        sizePalabrasQueBusco[0] = '8';
                
                    }
                    else if(contWords == 9)
                    {
                        sizePalabrasQueBusco[0] = '9';
                
                    }
            
            
                    contador1++;
            
            
                }
                else if(numDigitos == 2)
                {
           
            
                    if(a == numDigitos)
                    {
                        cifra1 = contWords % 10;
                        cifra2 = contWords / 10;
            
                       
                        //CIFRA 2
                        if(cifra2 == 1)
                        {
                            sizePalabrasQueBusco[0] = '1';
                
                        }
                        else if(cifra2 == 2)
                        {
                            sizePalabrasQueBusco[0] = '2';
                
                        }
                        else if(cifra2 == 3)
                        {
                            sizePalabrasQueBusco[0] = '3';
                
                        }
                        else if(cifra2 == 4)
                        {
                            sizePalabrasQueBusco[0] = '4';
                
                        }
                        else if(cifra2 == 5)
                        {
                            sizePalabrasQueBusco[0] = '5';
                
                        }
                        else if(cifra2 == 6)
                        {
                            sizePalabrasQueBusco[0] = '6';
                
                        }
                        else if(cifra2 == 7)
                        {
                            sizePalabrasQueBusco[0] = '7';
                
                        }
                        else if(cifra2 == 8)
                        {
                            sizePalabrasQueBusco[0] = '8';
           
                        }
                        else if(cifra2 == 9)
                        {
                            sizePalabrasQueBusco[0] = '9';
      
                        }
                
                
                
                        //CIFRA 1
                        if(cifra1 == 0)
                        {
                            sizePalabrasQueBusco[1] = '0';
        
                        }
                        else if(cifra1 == 1)
                        {
                            sizePalabrasQueBusco[1] = '1';
   
                        }
                        else if(cifra1 == 2)
                        {
                            sizePalabrasQueBusco[1] = '2';
       
                        }
                        else if(cifra1 == 3)
                        {
                            sizePalabrasQueBusco[1] = '3';
      
                        }
                        else if(cifra1 == 4)
                        {
                            sizePalabrasQueBusco[1] = '4';
     
                        }
                        else if(cifra1 == 5)
                        {
                            sizePalabrasQueBusco[1] = '5';
     
                        }
                        else if(cifra1 == 6)
                        {
                            sizePalabrasQueBusco[1] = '6';
     
                        }
                        else if(cifra1 == 7)
                        {
                            sizePalabrasQueBusco[1] = '7';
     
                        }
                        else if(cifra1 == 8)
                        {
                            sizePalabrasQueBusco[1] = '8';
       
                        }
                        else if(cifra1 == 9)
                        {
                            sizePalabrasQueBusco[1] = '9';
     
                        }
      
                    }


                    contador1++;
            
                }
                else if(numDigitos == 3)
                {
                    if(a == numDigitos)
                    {
                        cifra3 = contWords / 100;
                        cifra2 = (contWords - cifra3*100)/10;
                        cifra1 = contWords % 10;
        
        
                        //CIFRA 3
                        if(cifra3 == 1)
                        {
                            sizePalabrasQueBusco[0] = '1';
      
                        }
                        else if(cifra3 == 2)
                        {
                            sizePalabrasQueBusco[0] = '2';
   
                        }
                        else if(cifra3 == 3)
                        {
                            sizePalabrasQueBusco[0] = '3';
    
                        }
                        else if(cifra3 == 4)
                        {
                            sizePalabrasQueBusco[0] = '4';
         
                        }
                        else if(cifra3 == 5)
                        {
                            sizePalabrasQueBusco[0] = '5';
         
                        }
                        else if(cifra3 == 6)
                        {
                            sizePalabrasQueBusco[0] = '6';
      
                        }
                        else if(cifra3 == 7)
                        {
                            sizePalabrasQueBusco[0] = '7';
        
                        }
                        else if(cifra3 == 8)
                        {
                            sizePalabrasQueBusco[0] = '8';
     
                        }
                        else if(cifra3 == 9)
                        {
                            sizePalabrasQueBusco[0] = '9';
  
                        }
                
                
                        //CIFRA 2
                        if(cifra2 == 0)
                        {
                            sizePalabrasQueBusco[1] = '0';
   
                        }
                        else if(cifra2 == 1)
                        {
                            sizePalabrasQueBusco[1] = '1';
    
                        }
                        else if(cifra2 == 2)
                        {
                            sizePalabrasQueBusco[1] = '2';
    
                        }
                        else if(cifra2 == 3)
                        {
                            sizePalabrasQueBusco[1] = '3';
    
                        }
                        else if(cifra2 == 4)
                        {
                            sizePalabrasQueBusco[1] = '4';
    
                        }
                        else if(cifra2 == 5)
                        {
                            sizePalabrasQueBusco[1] = '5';
     
                        }
                        else if(cifra2 == 6)
                        {
                            sizePalabrasQueBusco[1] = '6';
      
                        }
                        else if(cifra2 == 7)
                        {
                            sizePalabrasQueBusco[1] = '7';
   
                        }
                        else if(cifra2 == 8)
                        {
                            sizePalabrasQueBusco[1] = '8';
    
                        }
                        else if(cifra2 == 9)
                        {
                            sizePalabrasQueBusco[1] = '9';
   
                        }
                
                
                        //CIFRA 1
                        if(cifra1 == 0)
                        {
                            sizePalabrasQueBusco[2] = '0';
      
                        }
                        else if(cifra1 == 1)
                        {
                            sizePalabrasQueBusco[2] = '1';
              
                        }
                        else if(cifra1 == 2)
                        {
                            sizePalabrasQueBusco[2] = '2';
        
                        }
                        else if(cifra1 == 3)
                        {
                            sizePalabrasQueBusco[2] = '3';
     
                        }
                        else if(cifra1 == 4)
                        {
                            sizePalabrasQueBusco[2] = '4';
            
                        }
                        else if(cifra1 == 5)
                        {
                            sizePalabrasQueBusco[2] = '5';
     
                        }
                        else if(cifra1 == 6)
                        {
                            sizePalabrasQueBusco[2] = '6';
         
                        }
                        else if(cifra1 == 7)
                        {
                            sizePalabrasQueBusco[2] = '7';
         
                        }
                        else if(cifra1 == 8)
                        {
                            sizePalabrasQueBusco[2] = '8';
        
                        }
                        else if(cifra1 == 9)
                        {
                            sizePalabrasQueBusco[2] = '9';
    
                        }
                
                
                    }
            
                    contador1++;
            
                }
        
      
            }
    
    
			//Ponemos esto para indicar que ahí se acaba el array
            sizePalabrasQueBusco[contador1] = '\0';
           
            
            //MOSTRAMOS EL LABEL DE LAS PALABRAS NO ENCONTRADAS POR PANTALLA el valor de contPalabras
            short numDigitos2;
            char sizePalabrasNoEncontradas[9000];
            int contador2 = 0;
            short cifra1b, cifra2b, cifra3b;
            
           
 
			//Calculamos el número de cifras que tiene la variable numPalabras
            if (numPalabras<10)
            {
                numDigitos2 = 1;
            }
            else if (numPalabras<100)
            {
                numDigitos2 = 2;
            }
            else if (numPalabras<1000)
            {
                numDigitos2 = 3;
            }
            else if (numPalabras<10000)
            {
                numDigitos2 = 4;
            }
            else if (numPalabras > 10000)
            {
                //cout<<"Fuera de rango"<<endl;
            }
    
          
          
			//Pasamos los números a caracteres en un array unidimensional de tipo char
            for(int a = 1; a <= numDigitos2; a++)
            {
                if(numDigitos2 == 1)
                {
                    if(numPalabras == 0)
                    {
                        sizePalabrasNoEncontradas[0] = '0';
        
                    }
                    else if(numPalabras == 1)
                    {
                        sizePalabrasNoEncontradas[0] = '1';
        
                    }
                    else if(numPalabras == 2)
                    {
                        sizePalabrasNoEncontradas[0] = '2';
  
                    }
                    else if(numPalabras == 3)
                    {
                        sizePalabrasNoEncontradas[0] = '3';
    
                    }
                    else if(numPalabras == 4)
                    {
                        sizePalabrasNoEncontradas[0] = '4';
 
                    }
                    else if(numPalabras == 5)
                    {
                        sizePalabrasNoEncontradas[0] = '5';
  
                    }
                    else if(numPalabras == 6)
                    {
                        sizePalabrasNoEncontradas[0] = '6';
  
                    }
                    else if(numPalabras == 7)
                    {
                        sizePalabrasNoEncontradas[0] = '7';
   
                    }
                    else if(numPalabras == 8)
                    {
                        sizePalabrasNoEncontradas[0] = '8';
     
                    }
                    else if(numPalabras == 9)
                    {
                        sizePalabrasNoEncontradas[0] = '9';
    
                    }
            
            
                    contador2++;
            
            
                }
                else if(numDigitos2 == 2)
                {
                   
                    if(a == numDigitos2)
                    {
                        cifra1b = numPalabras % 10;
                        cifra2b = numPalabras / 10;
    
            
                        //CIFRA 2
                        if(cifra2b == 1)
                        {
                            sizePalabrasNoEncontradas[0] = '1';
                
                        }
                        else if(cifra2b == 2)
                        {
                            sizePalabrasNoEncontradas[0] = '2';
                
                        }
                        else if(cifra2b == 3)
                        {
                            sizePalabrasNoEncontradas[0] = '3';
               
                        }
                        else if(cifra2b == 4)
                        {
                            sizePalabrasNoEncontradas[0] = '4';
        
                        }
                        else if(cifra2b == 5)
                        {
                            sizePalabrasNoEncontradas[0] = '5';
  
                        }
                        else if(cifra2b == 6)
                        {
                            sizePalabrasNoEncontradas[0] = '6';
    
                        }
                        else if(cifra2b == 7)
                        {
                            sizePalabrasNoEncontradas[0] = '7';
   
                        }
                        else if(cifra2b == 8)
                        {
                            sizePalabrasNoEncontradas[0] = '8';
  
                        }
                        else if(cifra2b == 9)
                        {
                            sizePalabrasNoEncontradas[0] = '9';
  
                        }
                
                
                
                        //CIFRA 1
                        if(cifra1b == 0)
                        {
                            sizePalabrasNoEncontradas[1] = '0';
  
                        }
                        else if(cifra1b == 1)
                        {
                            sizePalabrasNoEncontradas[1] = '1';
   
                        }
                        else if(cifra1b == 2)
                        {
                            sizePalabrasNoEncontradas[1] = '2';
   
                        }
                        else if(cifra1b == 3)
                        {
                            sizePalabrasNoEncontradas[1] = '3';
  
                        }
                        else if(cifra1b == 4)
                        {
                            sizePalabrasNoEncontradas[1] = '4';
    
                        }
                        else if(cifra1b == 5)
                        {
                            sizePalabrasNoEncontradas[1] = '5';
   
                        }
                        else if(cifra1b == 6)
                        {
                            sizePalabrasNoEncontradas[1] = '6';
   
                        }
                        else if(cifra1b == 7)
                        {
                            sizePalabrasNoEncontradas[1] = '7';
                
                        }
                        else if(cifra1b == 8)
                        {
                            sizePalabrasNoEncontradas[1] = '8';
  
                        }
                        else if(cifra1b == 9)
                        {
                            sizePalabrasNoEncontradas[1] = '9';
 
                        }
      
                    }


                    contador2++;
            
                }
                else if(numDigitos2 == 3)
                {
                    if(a == numDigitos2)
                    {
                        cifra3b = numPalabras / 100;
                        cifra2b = (numPalabras - cifra3b*100)/10;
                        cifra1b = numPalabras % 10;
                
             
                        //CIFRA 3
                        if(cifra3b == 1)
                        {
                            sizePalabrasNoEncontradas[0] = '1';
  
                        }
                        else if(cifra3b == 2)
                        {
                            sizePalabrasNoEncontradas[0] = '2';
 
                        }
                        else if(cifra3b == 3)
                        {
                            sizePalabrasNoEncontradas[0] = '3';
 
                        }
                        else if(cifra3b == 4)
                        {
                            sizePalabrasNoEncontradas[0] = '4';
  
                        }
                        else if(cifra3b == 5)
                        {
                            sizePalabrasNoEncontradas[0] = '5';
 
                        }
                        else if(cifra3b == 6)
                        {
                            sizePalabrasNoEncontradas[0] = '6';
   
                        }
                        else if(cifra3b == 7)
                        {
                            sizePalabrasNoEncontradas[0] = '7';
 
                        }
                        else if(cifra3b == 8)
                        {
                            sizePalabrasNoEncontradas[0] = '8';
   
                        }
                        else if(cifra3b == 9)
                        {
                            sizePalabrasNoEncontradas[0] = '9';
 
                        }
                
                
                        //CIFRA 2
                        if(cifra2b == 0)
                        {
                            sizePalabrasNoEncontradas[1] = '0';
 
                        }
                        else if(cifra2b == 1)
                        {
                            sizePalabrasNoEncontradas[1] = '1';
                
                        }
                        else if(cifra2b == 2)
                        {
                            sizePalabrasNoEncontradas[1] = '2';
                
                        }
                        else if(cifra2b == 3)
                        {
                            sizePalabrasNoEncontradas[1] = '3';

                        }
                        else if(cifra2b == 4)
                        {
                            sizePalabrasNoEncontradas[1] = '4';
 
                        }
                        else if(cifra2b == 5)
                        {
                            sizePalabrasNoEncontradas[1] = '5';
 
                        }
                        else if(cifra2b == 6)
                        {
                            sizePalabrasNoEncontradas[1] = '6';
 
                        }
                        else if(cifra2b == 7)
                        {
                            sizePalabrasNoEncontradas[1] = '7';
 
                        }
                        else if(cifra2b == 8)
                        {
                            sizePalabrasNoEncontradas[1] = '8';
 
                        }
                        else if(cifra2b == 9)
                        {
                            sizePalabrasNoEncontradas[1] = '9';

                        }
                
                
                        //CIFRA 1
                        if(cifra1b == 0)
                        {
                            sizePalabrasNoEncontradas[2] = '0';

                        }
                        else if(cifra1b == 1)
                        {
                            sizePalabrasNoEncontradas[2] = '1';
 
                        }
                        else if(cifra1b == 2)
                        {
                            sizePalabrasNoEncontradas[2] = '2';
 
                        }
                        else if(cifra1b == 3)
                        {
                            sizePalabrasNoEncontradas[2] = '3';
 
                        }
                        else if(cifra1b == 4)
                        {
                            sizePalabrasNoEncontradas[2] = '4';
 
                        }
                        else if(cifra1b == 5)
                        {
                            sizePalabrasNoEncontradas[2] = '5';
  
                        }
                        else if(cifra1b == 6)
                        {
                            sizePalabrasNoEncontradas[2] = '6';

                        }
                        else if(cifra1b == 7)
                        {
                            sizePalabrasNoEncontradas[2] = '7';
 
                        }
                        else if(cifra1b == 8)
                        {
                            sizePalabrasNoEncontradas[2] = '8';
 
                        }
                        else if(cifra1b == 9)
                        {
                            sizePalabrasNoEncontradas[2] = '9';
  
                        }
                
                
                    }
            
                    contador2++;
            
                }
        
    
            }
    
            sizePalabrasNoEncontradas[contador2] = '\0';
           
            
            //Los mostramos por pantalla enviandolo a los label
            gtk_label_set_text(GTK_LABEL (stuff->widLabel), sizePalabrasQueBusco);
            gtk_label_set_text(GTK_LABEL (stuff->widLabel3), sizePalabrasNoEncontradas);
            
            
            
            if(sizeText == 0)
            {
                char warnings1[29] = {'N','o','t','h','i','n','g',' ','h','a','s',' ','b','e','e','n',' ','w','r','i','t','t','e','n','.',' ',' ',' ','\0'};
                
                int sizeWarnings = strlen(warnings1);
  
                gtk_text_buffer_set_text (stuff->textBuffer2, warnings1, sizeWarnings);
     
            }
            
            
            
        }
        
    }
    else if(sizeText > 9000)
    {
        
        char warnings2[65] = {'E','x','c','e','e','d','s',' ','t','h','e',' ','r','a','n','g','e',' ','o','f',' ','t','h','e',' ','a','r','r','a','y','.','\n','5','0','0','0',' ','c','h','a','r','a','c','t','e','r','s',' ','l','i','m','i','t','s',' ','e','x','c','e','e','d','e','d','.','\0'};
        
        int sizeWarnings2 = strlen(warnings2);
        
        gtk_text_buffer_set_text (stuff->textBuffer2, warnings2, sizeWarnings2);
        
    }
   
    
    
    //CALCULAR TIEMPO DE EJECUCIÓN
    seg2 = clock();
    tiempo = (float(seg2-seg1)/1000000);
   
    
    //AHORA LO PASAMOS AL LABEL TIEMPO
    char tiempoLabel[5000];
    int contador1 = 0;
    short numDigitosTime;
    short parteEntera, parteDecimalAEntero, cifraEntera1, cifraEntera2, cifraEntera3, cifra1, cifra2, cifra3;
    float parteDecimal;
    
   
	//Calculamos las cifras que tendrá la variable tiempo
    if (tiempo < 10)
    {
        numDigitosTime = 1;
        
    }
    else if (tiempo < 100)
    {
        numDigitosTime = 2;
        
    }
    else if (tiempo < 1000)
    {
        numDigitosTime = 3;

    }
    else if (tiempo > 1000)
    {
        //cout<<"Fuera de rango"<<endl;
    }
    
    
    numDigitosTime = numDigitosTime + 6;
    
    
	//Pasamos los números a caracteres en un array unidimensional de tipo char
    for(int b = 1; b <= numDigitosTime; b++)
    {
        if(numDigitosTime == 7)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                parteDecimal = tiempo - parteEntera;
                
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
  
                //PARTE ENTERA
                if(parteEntera == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(parteEntera == 1)
                {
                    tiempoLabel[0] = '1';
                
                }
                else if(parteEntera == 2)
                {
                    tiempoLabel[0] = '2';
                
                }
                else if(parteEntera == 3)
                {
                    tiempoLabel[0] = '3';
                
                }
                else if(parteEntera == 4)
                {
                    tiempoLabel[0] = '4';
                
                }
                else if(parteEntera == 5)
                {
                    tiempoLabel[0] = '5';
                
                }
                else if(parteEntera == 6)
                {
                    tiempoLabel[0] = '6';
                
                }
                else if(parteEntera == 7)
                {
                    tiempoLabel[0] = '7';
                
                }
                else if(parteEntera == 8)
                {
                    tiempoLabel[0] = '8';
                
                }
                else if(parteEntera == 9)
                {
                    tiempoLabel[0] = '9';
                
                }
                
                
                tiempoLabel[1] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[2] = '0';
                    
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[2] = '1';
                    
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[2] = '2';
                    
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[2] = '3';
                    
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[2] = '4';
                    
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[2] = '5';
                    
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[2] = '6';
                    
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[2] = '7';
                    
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[2] = '8';
                    
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[2] = '9';
                    
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[3] = '0';
                    
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[3] = '1';
                    
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[3] = '2';
                    
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[3] = '3';
                    
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[3] = '4';
                    
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[3] = '5';
                    
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[3] = '6';
                    
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[3] = '7';
                    
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[3] = '8';
                    
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[3] = '9';
                    
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[4] = '0';
                    
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[4] = '1';
                    
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[4] = '2';
                    
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[4] = '3';
                    
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[4] = '4';
                    
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[4] = '5';
                    
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[4] = '6';
                    
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[4] = '7';
                    
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[4] = '8';
                    
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[4] = '9';
                    
                }
                
                    
                tiempoLabel[5] = ' ';
                
                tiempoLabel[6] = 's';
                
                
            }
  
            contador1++;
            
            
        }
        else if(numDigitosTime == 8)
        {
            if(b == numDigitosTime)
            {
                
                parteEntera = (int)tiempo;
                
                cifraEntera1 = parteEntera % 10;
                cifraEntera2 = parteEntera / 10;
                               
                parteDecimal = tiempo - parteEntera;
                                
                parteDecimalAEntero = parteDecimal * 1000;
                               
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
         
                //PARTE ENTERA
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[0] = '1';
 
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[0] = '2';
 
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[0] = '3';
 
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[0] = '4';

                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[0] = '5';

                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[0] = '6';

                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[0] = '7';
 
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[0] = '8';
 
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[0] = '9';
 
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[1] = '1';

                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[1] = '2';
 
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[1] = '3';
 
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[1] = '4';
 
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[1] = '5';
 
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[1] = '6';
 
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[1] = '7';

                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[1] = '8';
 
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[1] = '9';
  
                }
                
                tiempoLabel[2] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[3] = '0';
 
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[3] = '1';
 
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[3] = '2';
 
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[3] = '3';
  
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[3] = '4';
 
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[3] = '5';
  
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[3] = '6';
  
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[3] = '7';
 
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[3] = '8';
 
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[3] = '9';
 
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[4] = '0';
 
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[4] = '1';
  
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[4] = '2';
 
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[4] = '3';
  
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[4] = '4';
 
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[4] = '5';
 
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[4] = '6';
 
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[4] = '7';
  
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[4] = '8';
   
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[4] = '9';
 
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[5] = '0';
 
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[5] = '1';
   
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[5] = '2';
   
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[5] = '3';
 
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[5] = '4';
  
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[5] = '5';
  
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[5] = '6';
   
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[5] = '7';
   
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[5] = '8';
  
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[5] = '9';
   
                }
                
                    
                tiempoLabel[6] = ' ';
                
                tiempoLabel[7] = 's';
                
                
                
            }


            contador1++;
            
        }
        else if(numDigitosTime == 9)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                cifraEntera3 = parteEntera / 100;
                cifraEntera2 = (parteEntera - cifraEntera3*100)/10;
                cifraEntera1 = parteEntera % 10;
                
                parteDecimal = tiempo - parteEntera;
                 
                parteDecimalAEntero = parteDecimal * 1000;
                 
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
            
                //PARTE ENTERA
                
                //CIFRA ENTERA 3
                if(cifraEntera3 == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(cifraEntera3 == 1)
                {
                    tiempoLabel[0] = '1';
                
                }
                else if(cifraEntera3 == 2)
                {
                    tiempoLabel[0] = '2';
                
                }
                else if(cifraEntera3 == 3)
                {
                    tiempoLabel[0] = '3';
 
                }
                else if(cifraEntera3 == 4)
                {
                    tiempoLabel[0] = '4';
 
                }
                else if(cifraEntera3 == 5)
                {
                    tiempoLabel[0] = '5';
 
                }
                else if(cifraEntera3 == 6)
                {
                    tiempoLabel[0] = '6';
 
                }
                else if(cifraEntera3 == 7)
                {
                    tiempoLabel[0] = '7';

                }
                else if(cifraEntera3 == 8)
                {
                    tiempoLabel[0] = '8';
 
                }
                else if(cifraEntera3 == 9)
                {
                    tiempoLabel[0] = '9';
                
                }
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[1] = '0';

                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[1] = '1';

                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[1] = '2';

                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[1] = '3';

                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[1] = '4';

                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[1] = '5';

                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[1] = '6';
 
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[1] = '7';

                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[1] = '8';
 
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[1] = '9';
 
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[2] = '1';
   
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[2] = '2';
 
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[2] = '3';
 
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[2] = '4';
  
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[2] = '5';
  
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[2] = '6';
  
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[2] = '7';
  
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[2] = '8';
  
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[2] = '9';
 
                }
                
                tiempoLabel[3] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[4] = '0';
  
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[4] = '1';
  
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[4] = '2';
  
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[4] = '3';
  
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[4] = '4';
  
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[4] = '5';
  
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[4] = '6';
 
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[4] = '7';
  
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[4] = '8';
  
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[4] = '9';
  
                }
                
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[5] = '0';
  
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[5] = '1';
 
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[5] = '2';
  
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[5] = '3';
   
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[5] = '4';
  
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[5] = '5';
  
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[5] = '6';
 
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[5] = '7';
 
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[5] = '8';
  
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[5] = '9';
  
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[6] = '0';
  
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[6] = '1';
  
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[6] = '2';
   
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[6] = '3';
  
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[6] = '4';
   
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[6] = '5';
   
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[6] = '6';
   
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[6] = '7';
    
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[6] = '8';
   
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[6] = '9';
   
                }
                
                    
                tiempoLabel[7] = ' ';
                
                tiempoLabel[8] = 's'; 
                
            }
            
            contador1++;
            
        }
        
      
    }
    
    
    //Para indicar donde acaba el array
    tiempoLabel[contador1] = '\0';
    
    //Lo enviamos al label para mostrarlo por pantalla
    gtk_label_set_text(GTK_LABEL (stuff->widLabel4), tiempoLabel);
    

}






//Este método es para buscar una palabra en el fichero y saber si está o no
void button_buscar_Entry(GtkWidget *widget, CCPEntry *stuff) 
{
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_buscar_Entry
    unsigned seg1, seg2;
	float tiempo;

    seg1 = clock();
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_buscar_Entry
    
    
    const gchar *text;
    
    //Recogemos el texto del entry
    text = gtk_entry_get_text (GTK_ENTRY (stuff->widEntry1));
  
	//Obtenemos la longitud del array text
    int sizeText = strlen(text);
    
    
    
    //Para saber si has metido caracteres en el entry
    if(sizeText > 0)
    {
        //ELIMINAMOS LOS ESPACIOS EN BLANCO EN CASO DE QUE LOS HAYA
        char palabra[90];
        int contador = 0;
    
        
        for(int a = 0; a < sizeText; a++)
        {
            if(isspace(text[a]) == 0)
            {
                palabra[contador] = text[a];
            
                contador++;
            }
        }
    
    
        
		//Esto es para indicar que hay se acaba el array
        palabra[contador] = '\0';
    
      
      
        //AQUÍ EMPIEZA LO DEL FICHERO
        int p, numero_registros;
        char palabraCoincide[90];
        int contCaracteres = 0;
        int filas;
        int z=0;
    
		//Para saber cuantos registros tenemos en el fichero
        numero_registros = nRegistrosFicheroDeMiLista();
        
        //Permite situar el cursor de posicionamiento de un fichero al inicio de éste
        rewind(listado);
    
        
		//Leemos los registros del fichero uno a uno
        for(p=1; p<= numero_registros; p++)
        {
			//Permite leer un número determinado de bloques de caracteres a partir de la posición del cursor. Después de la lectura se actualiza
			//la posición del cursor en el último carácter leído.
            fread(&lista, sizeof(lista), 1, listado);
		
		
			//La función strcasecmp sirve para comparar dos cadenas pero sin tener en cuenta si son mayusculas o minusculas
            if (strcasecmp(lista.palabra, palabra) == 0)
            {
				//Obtenemos la longuitud del array unidimensional de tipo char	
                filas = strlen(lista.palabra);
                
                //Pasamos el contenido que coincida en otro a otro array unidimensional de tipo char 
                for(int n = 0; n < filas; n++)
                {
                    palabraCoincide[n] = lista.palabra[n];
                    contCaracteres++;
                }
            
                z++;
					
            }
		
        }
    

		//Con este ponemos que hay se acaba el array
        palabraCoincide[contCaracteres] = '\0';
    
        
        
        /**Imprimimos si la palabra que buscamos está o no en el fichero**/
        if(z==0)
        {
            
            char textSalida[22] = {'I','t',' ','i','s',' ','n','o','t',' ','i','n',' ','t','h','e',' ','f','i','l','e','\0'};
            
			//Lo enviamos al segundo entry
            gtk_entry_set_text (GTK_ENTRY (stuff->widEntry2), textSalida);
		
        }
        else
        {
			//Lo enviamos al segundo entry
            gtk_entry_set_text (GTK_ENTRY (stuff->widEntry2), palabraCoincide);
        }
        
    }
    else if(sizeText == 0)
    {
        
        char warnings4[25] = {'N','o','t','h','i','n','g',' ','h','a','s',' ','b','e','e','n',' ','w','r','i','t','t','e','n','\0'};
        
        //Lo enviamos al segundo entry
        gtk_entry_set_text (GTK_ENTRY (stuff->widEntry2), warnings4);
        
        
    }
    
    
    
    //CALCULAR TIEMPO DE EJECUCIÓN
    seg2 = clock();
    tiempo = (float(seg2-seg1)/1000000);
    
    
    //AHORA LO PASAMOS AL LABEL TIEMPO
    char tiempoLabel[5000];
    int contador1 = 0;
    short numDigitosTime;
    short parteEntera, parteDecimalAEntero, cifraEntera1, cifraEntera2, cifraEntera3, cifra1, cifra2, cifra3;
    float parteDecimal;
    
    
    //Calculamos cuantas cifras tiene la variable tiempo
    if (tiempo < 10)
    {
        numDigitosTime = 1;
        
    }
    else if (tiempo < 100)
    {
        numDigitosTime = 2;
      
    }
    else if (tiempo < 1000)
    {
        numDigitosTime = 3;
       
    }
    else if (tiempo > 1000)
    {
        //cout<<"Fuera de rango"<<endl;
    }
    
    
    numDigitosTime = numDigitosTime + 6;
    
    
    //Pasamos los números a caracteres en un array unidimensional de tipo char
    for(int b = 1; b <= numDigitosTime; b++)
    {
        if(numDigitosTime == 7)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                     
                parteDecimal = tiempo - parteEntera;
                              
                parteDecimalAEntero = parteDecimal * 1000;
                              
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
                
                //PARTE ENTERA
                if(parteEntera == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(parteEntera == 1)
                {
                    tiempoLabel[0] = '1';
  
                }
                else if(parteEntera == 2)
                {
                    tiempoLabel[0] = '2';
   
                }
                else if(parteEntera == 3)
                {
                    tiempoLabel[0] = '3';
  
                }
                else if(parteEntera == 4)
                {
                    tiempoLabel[0] = '4';
   
                }
                else if(parteEntera == 5)
                {
                    tiempoLabel[0] = '5';
  
                }
                else if(parteEntera == 6)
                {
                    tiempoLabel[0] = '6';
  
                }
                else if(parteEntera == 7)
                {
                    tiempoLabel[0] = '7';
   
                }
                else if(parteEntera == 8)
                {
                    tiempoLabel[0] = '8';
   
                }
                else if(parteEntera == 9)
                {
                    tiempoLabel[0] = '9';
  
                }
                
                
                tiempoLabel[1] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[2] = '0';
   
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[2] = '1';
  
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[2] = '2';
 
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[2] = '3';
 
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[2] = '4';
                    
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[2] = '5';
                    
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[2] = '6';
                    
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[2] = '7';
                    
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[2] = '8';
                    
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[2] = '9';
                    
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[3] = '0';
                    
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[3] = '1';
                    
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[3] = '2';
                    
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[3] = '3';
                    
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[3] = '4';
                    
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[3] = '5';
 
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[3] = '6';
                    
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[3] = '7';
 
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[3] = '8';
 
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[3] = '9';
 
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[4] = '0';
 
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[4] = '1';

                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[4] = '2';
  
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[4] = '3';
  
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[4] = '4';
  
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[4] = '5';
  
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[4] = '6';
 
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[4] = '7';
 
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[4] = '8';
  
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[4] = '9';
  
                }
                
                    
                tiempoLabel[5] = ' ';
                
                tiempoLabel[6] = 's';
                
                
            }
  
            contador1++;
            
            
        }
        else if(numDigitosTime == 8)
        {
            if(b == numDigitosTime)
            {
                
                parteEntera = (int)tiempo;
                
                cifraEntera1 = parteEntera % 10;
                cifraEntera2 = parteEntera / 10;
                               
                parteDecimal = tiempo - parteEntera;
                
                parteDecimalAEntero = parteDecimal * 1000;
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
                  
                //PARTE ENTERA
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[0] = '1';
                
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[0] = '2';
                
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[0] = '3';
                
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[0] = '4';
                
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[0] = '5';
                
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[0] = '6';
                
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[0] = '7';
                
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[0] = '8';
                
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[0] = '9';
                
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[1] = '1';
                
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[1] = '2';
                
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[1] = '3';
                
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[1] = '4';
                
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[1] = '5';
                
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[1] = '6';
                
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[1] = '7';
                
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[1] = '8';
                
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[1] = '9';
                
                }
                
                tiempoLabel[2] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[3] = '0';
                
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[3] = '1';
                
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[3] = '2';
                
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[3] = '3';
               
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[3] = '4';
                
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[3] = '5';
                
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[3] = '6';
               
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[3] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[3] = '8';
               
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[3] = '9';
                
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[4] = '0';
               
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[4] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[4] = '2';
               
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[4] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[4] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[4] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[4] = '6';
                 
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[4] = '7';
             
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[4] = '8';
              
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[4] = '9';
              
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[5] = '0';
               
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[5] = '1';
              
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[5] = '2';
             
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[5] = '3';
               
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[5] = '4';
             
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[5] = '5';
              
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[5] = '6';
               
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[5] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[5] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[5] = '9';
                
                }
                
                    
                tiempoLabel[6] = ' ';
                
                tiempoLabel[7] = 's';
                
                
                
            }


            contador1++;
            
        }
        else if(numDigitosTime == 9)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                cifraEntera3 = parteEntera / 100;
                cifraEntera2 = (parteEntera - cifraEntera3*100)/10;
                cifraEntera1 = parteEntera % 10;
                
                parteDecimal = tiempo - parteEntera;
                
                parteDecimalAEntero = parteDecimal * 1000;
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
                      
                //PARTE ENTERA
                
                //CIFRA ENTERA 3
                if(cifraEntera3 == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(cifraEntera3 == 1)
                {
                    tiempoLabel[0] = '1';
                
                }
                else if(cifraEntera3 == 2)
                {
                    tiempoLabel[0] = '2';
                
                }
                else if(cifraEntera3 == 3)
                {
                    tiempoLabel[0] = '3';
                
                }
                else if(cifraEntera3 == 4)
                {
                    tiempoLabel[0] = '4';
        
                }
                else if(cifraEntera3 == 5)
                {
                    tiempoLabel[0] = '5';
 
                }
                else if(cifraEntera3 == 6)
                {
                    tiempoLabel[0] = '6';
 
                }
                else if(cifraEntera3 == 7)
                {
                    tiempoLabel[0] = '7';
  
                }
                else if(cifraEntera3 == 8)
                {
                    tiempoLabel[0] = '8';
  
                }
                else if(cifraEntera3 == 9)
                {
                    tiempoLabel[0] = '9';
  
                }
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[1] = '0';
 
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[1] = '1';
   
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[1] = '2';
  
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[1] = '3';
  
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[1] = '4';
  
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[1] = '5';
   
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[1] = '6';
   
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[1] = '7';
   
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[1] = '8';
  
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[1] = '9';
 
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[2] = '1';
   
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[2] = '2';
 
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[2] = '3';
 
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[2] = '4';
 
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[2] = '5';
  
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[2] = '6';
  
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[2] = '7';
  
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[2] = '8';
  
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[2] = '9';
 
                }
                
                tiempoLabel[3] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[4] = '0';
 
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[4] = '1';
  
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[4] = '2';
 
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[4] = '3';
                    
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[4] = '4';
 
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[4] = '5';
  
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[4] = '6';
 
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[4] = '7';
 
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[4] = '8';
 
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[4] = '9';
  
                }
                
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[5] = '0';
 
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[5] = '1';
 
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[5] = '2';
 
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[5] = '3';
  
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[5] = '4';
  
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[5] = '5';
  
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[5] = '6';
 
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[5] = '7';
   
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[5] = '8';
   
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[5] = '9';
  
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[6] = '0';
  
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[6] = '1';
  
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[6] = '2';
   
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[6] = '3';
  
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[6] = '4';
  
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[6] = '5';
    
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[6] = '6';
  
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[6] = '7';
   
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[6] = '8';
  
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[6] = '9';
 
                }
                
                    
                tiempoLabel[7] = ' ';
                
                tiempoLabel[8] = 's'; 
                
            }
            
            contador1++;
            
        }
             
        
    }
    
    
    //Para indicar donde acaba el array
    tiempoLabel[contador1] = '\0';
    
    
    //Lo enviamos al label para mostrarlo por pantalla
    gtk_label_set_text(GTK_LABEL (stuff->widLabel5), tiempoLabel);
    
    
  
}




short radioButtonPrimeraLetra;


//Este método es para saber que radio button se ha escogido del primer filtro
void radio_button_primera_letra(GtkWidget *widget, CCPRadioButton *stuff)
{
    
    /**Esta línea de código deshabilita el enfoque.**/
    if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra1)))
    {
        radioButtonPrimeraLetra = 1;	  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra2)))
    {
        radioButtonPrimeraLetra = 2;		  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra3)))
    {
        radioButtonPrimeraLetra = 3;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra4)))
    {
        radioButtonPrimeraLetra = 4;		  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra5)))
    {
        radioButtonPrimeraLetra = 5;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra6)))
    {
        radioButtonPrimeraLetra = 6;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra7)))
    {
        radioButtonPrimeraLetra = 7;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra8)))
    {
        radioButtonPrimeraLetra = 8;		  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra9)))
    {
        radioButtonPrimeraLetra = 9;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra10)))
    {
        radioButtonPrimeraLetra = 10;		  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra11)))
    {
        radioButtonPrimeraLetra = 11;		  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra12)))
    {
        radioButtonPrimeraLetra = 12;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra13)))
    {
        radioButtonPrimeraLetra = 13;		  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra14)))
    {
        radioButtonPrimeraLetra = 14;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra15)))
    {
        radioButtonPrimeraLetra = 15;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra16)))
    {
        radioButtonPrimeraLetra = 16;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra17)))
    {
        radioButtonPrimeraLetra = 17;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra18)))
    {
        radioButtonPrimeraLetra = 18;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra19)))
    {
        radioButtonPrimeraLetra = 19;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra20)))
    {
        radioButtonPrimeraLetra = 20;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra21)))
    {
        radioButtonPrimeraLetra = 21;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra22)))
    {
        radioButtonPrimeraLetra = 22;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra23)))
    {
        radioButtonPrimeraLetra = 23;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra24)))
    {
        radioButtonPrimeraLetra = 24;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra25)))
    {
        radioButtonPrimeraLetra = 25;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra26)))
    {
        radioButtonPrimeraLetra = 26;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra27)))
    {
        radioButtonPrimeraLetra = 27;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonPrimeraLetra28)))
    {
        radioButtonPrimeraLetra = 28;		  
  
    }
    
       
  
}



short radioButtonSegundaLetra;



//Este método es para saber que radio button se ha escogido del segundo filtro
void radio_button_segunda_letra(GtkWidget *widget, CCPRadioButton2 *stuff)
{
    
    /**Esta línea de código deshabilita el enfoque.**/
    if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra1)))
    {
        radioButtonSegundaLetra = 1;	  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra2)))
    {
        radioButtonSegundaLetra = 2;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra3)))
    {
        radioButtonSegundaLetra = 3;		  

    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra4)))
    {
        radioButtonSegundaLetra = 4;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra5)))
    {
        radioButtonSegundaLetra = 5;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra6)))
    {
        radioButtonSegundaLetra = 6;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra7)))
    {
        radioButtonSegundaLetra = 7;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra8)))
    {
        radioButtonSegundaLetra = 8;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra9)))
    {
        radioButtonSegundaLetra = 9;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra10)))
    {
        radioButtonSegundaLetra = 10;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra11)))
    {
        radioButtonSegundaLetra = 11;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra12)))
    {
        radioButtonSegundaLetra = 12;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra13)))
    {
        radioButtonSegundaLetra = 13;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra14)))
    {
        radioButtonSegundaLetra = 14;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra15)))
    {
        radioButtonSegundaLetra = 15;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra16)))
    {
        radioButtonSegundaLetra = 16;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra17)))
    {
        radioButtonSegundaLetra = 17;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra18)))
    {
        radioButtonSegundaLetra = 18;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra19)))
    {
        radioButtonSegundaLetra = 19;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra20)))
    {
        radioButtonSegundaLetra = 20;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra21)))
    {
        radioButtonSegundaLetra = 21;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra22)))
    {
        radioButtonSegundaLetra = 22;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra23)))
    {
        radioButtonSegundaLetra = 23;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra24)))
    {
        radioButtonSegundaLetra = 24;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra25)))
    {
        radioButtonSegundaLetra = 25;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra26)))
    {
        radioButtonSegundaLetra = 26;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra27)))
    {
        radioButtonSegundaLetra = 27;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonSegundaLetra28)))
    {
        radioButtonSegundaLetra = 28;		  
   
    }
    
    
    
}




short radioButtonNumLetras;



//Este método es para saber que radio button se ha escogido del tercer filtro
void radio_button_Num_letras(GtkWidget *widget, CCPRadioButton3 *stuff)
{
    
    /**Esta línea de código deshabilita el enfoque.**/
    if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras1)))
    {
        radioButtonNumLetras = 1;	  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras2)))
    {
        radioButtonNumLetras = 2;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras3)))
    {
        radioButtonNumLetras = 3;		  
 
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras4)))
    {
        radioButtonNumLetras = 4;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras5)))
    {
        radioButtonNumLetras = 5;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras6)))
    {
        radioButtonNumLetras = 6;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras7)))
    {
        radioButtonNumLetras = 7;		  
     
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras8)))
    {
        radioButtonNumLetras = 8;		  
      
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras9)))
    {
        radioButtonNumLetras = 9;		  
     
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras10)))
    {
        radioButtonNumLetras = 10;		  
    
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras11)))
    {
        radioButtonNumLetras = 11;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras12)))
    {
        radioButtonNumLetras = 12;		  
    
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras13)))
    {
        radioButtonNumLetras = 13;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras14)))
    {
        radioButtonNumLetras = 14;		  
  
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras15)))
    {
        radioButtonNumLetras = 15;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras16)))
    {
        radioButtonNumLetras = 16;		  
   
    }
    else if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(stuff->widRadioButtonNumLetras17)))
    {
        radioButtonNumLetras = 17;		  
  
    }
    
    
    
}




//Este método es para mostrar el total de registros del fichero en un label para mostralos en pantalla
void button_contabilizar_Registros_Fichero(GtkWidget *widget, CCPLabel *stuff)
{
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_contabilizar_Registros_Fichero
    unsigned seg1, seg2;
	float tiempo;

    seg1 = clock();
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_contabilizar_Registros_Fichero
    
    
    int numero_registros;
	
	//Obtenemos el total de registros que hay en el fichero
    numero_registros = nRegistrosFicheroDeMiLista();
    
    
    
    //MOSTRAMOS EL LABEL DE LAS PALABRAS QUE BUSCO POR PANTALLA el valor de numero_registros
    short numDigitos;  
    char totalRegistros[500];
    int contador1 = 0;
    short cifra1, cifra2, cifra3, cifra4, cifra5, cifra6, cifra7, cifra8;
    
    
    
    //Para saber cuantas cifras tiene la variable numero_registros
    if (numero_registros < 10)
    {
        numDigitos = 1;
        
    }
    else if (numero_registros < 100)
    {
        numDigitos = 2;
 
    }
    else if (numero_registros < 1000)
    {
        numDigitos = 3;
 
    }
    else if (numero_registros <10000)
    {
        numDigitos = 4;
 
    }
    else if (numero_registros < 100000) 
    {
        numDigitos = 5;
 
    }
    else if (numero_registros < 1000000) 
    {
        numDigitos = 6;
 
    }
    else if (numero_registros < 10000000) 
    {
        numDigitos = 7;
 
    }
    else if (numero_registros < 100000000) 
    {
        numDigitos = 8;

    }
    
    

    //Pasamos los números a caracteres en un array unidimensional de tipo char
    for(int a = 1; a <= numDigitos; a++)
    {
        if(numDigitos == 1)
        {
          
            if(numero_registros == 0)
            {
                totalRegistros[0] = '0';
             
            }
            else if(numero_registros == 1)
            {
                totalRegistros[0] = '1';
                
            }
            else if(numero_registros == 2)
            {
                totalRegistros[0] = '2';
                
            }
            else if(numero_registros == 3)
            {
                totalRegistros[0] = '3';
                
            }
            else if(numero_registros == 4)
            {
                totalRegistros[0] = '4';
                
            }
            else if(numero_registros == 5)
            {
                totalRegistros[0] = '5';
                
            }
            else if(numero_registros == 6)
            {
                totalRegistros[0] = '6';
 
            }
            else if(numero_registros == 7)
            {
                totalRegistros[0] = '7';

            }
            else if(numero_registros == 8)
            {
                totalRegistros[0] = '8';
 
            }
            else if(numero_registros == 9)
            {
                totalRegistros[0] = '9';
 
            }
            
            
            contador1++;
            
            
        }
        else if(numDigitos == 2)
        {
                  
            if(a == numDigitos)
            {
                cifra1 = numero_registros % 10;
                cifra2 = numero_registros / 10;
            
                
                //CIFRA 2
                if(cifra2 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[0] = '2';
                
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[0] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[0] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[0] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[0] = '7';
                
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[0] = '8';
                
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[0] = '9';
                
                }
                
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[1] = '0';
                
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[1] = '1';
                
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[1] = '2';
                
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[1] = '3';
                
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[1] = '4';
                
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[1] = '5';
                
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[1] = '6';
                
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[1] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[1] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[1] = '9';
                
                }
      
            }


            contador1++;
            
        }
        else if(numDigitos == 3)
        {
            if(a == numDigitos)
            {
                cifra3 = numero_registros / 100;
                cifra2 = (numero_registros - cifra3*100)/10;
                cifra1 = numero_registros % 10;
                
                
                //CIFRA 3
                if(cifra3 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[0] = '2';
                
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[0] = '3';
                
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[0] = '4';
                
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[0] = '5';
                
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[0] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[0] = '8';
                
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[0] = '9';
                
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[1] = '0';
                
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[1] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[1] = '2';
                
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[1] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[1] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[1] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[1] = '6';
                
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[1] = '7';
                
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[1] = '8';
                
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[1] = '9';
                
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[2] = '0';
                
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[2] = '1';
                
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[2] = '2';
                
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[2] = '3';
                
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[2] = '4';
                
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[2] = '5';
                
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[2] = '6';
                
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[2] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[2] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[2] = '9';
                
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 4)
        {
            if(a == numDigitos)
            {
                cifra4 = numero_registros / 1000;
                cifra3 = (numero_registros - cifra4*1000)/100;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
                
                //CIFRA 4
                if(cifra4 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[0] = '2';
                
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[0] = '3';
                
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[0] = '4';
                
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[0] = '5';
                
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[0] = '7';
                
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[0] = '8';
                
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[0] = '9';
                
                }
                
                
                totalRegistros[1] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[2] = '0';
                
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[2] = '1';
                
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[2] = '2';
                
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[2] = '3';
                
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[2] = '4';
                
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[2] = '5';
                
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[2] = '6';
                
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[2] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[2] = '8';
                
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[2] = '9';
                
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[3] = '0';
                
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[3] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[3] = '2';
                
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[3] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[3] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[3] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[3] = '6';
                
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[3] = '7';
                
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[3] = '8';
                
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[3] = '9';
                
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[4] = '0';
                
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[4] = '1';
                
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[4] = '2';
                
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[4] = '3';
                
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[4] = '4';
                
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[4] = '5';
                
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[4] = '6';
                
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[4] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[4] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[4] = '9';
                
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 5)
        {
            if(a == numDigitos)
            {
                cifra5 = numero_registros / 10000;
                cifra4 = (numero_registros - cifra5*10000)/1000;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
                
                //CIFRA 5
                if(cifra5 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[0] = '2';
                
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[0] = '3';
                
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[0] = '4';
                
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[0] = '5';
                
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[0] = '7';
                
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[0] = '8';
                
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[0] = '9';
                
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[1] = '0';
                
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[1] = '1';
                
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[1] = '2';
                
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[1] = '3';
                
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[1] = '4';
                
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[1] = '5';
                
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[1] = '6';
                
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[1] = '7';
                
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[1] = '8';
                
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[1] = '9';
                
                }
                
                
                totalRegistros[2] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[3] = '0';
                
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[3] = '1';
                
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[3] = '2';
                
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[3] = '3';
                
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[3] = '4';
                
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[3] = '5';
                
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[3] = '6';
                
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[3] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[3] = '8';
                
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[3] = '9';
                
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[4] = '0';
                
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[4] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[4] = '2';
                
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[4] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[4] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[4] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[4] = '6';
                
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[4] = '7';
                
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[4] = '8';
                
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[4] = '9';
                
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[5] = '0';
                
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[5] = '1';
                
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[5] = '2';
                
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[5] = '3';
                
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[5] = '4';
                
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[5] = '5';
                
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[5] = '6';
                
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[5] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[5] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[5] = '9';
                
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 6)
        {
            if(a == numDigitos)
            {
                cifra6 = numero_registros / 100000;
                cifra5 = (numero_registros - cifra6*100000)/10000;
                cifra4 = ((numero_registros - cifra5*10000)/1000)%10;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
                
                //CIFRA 6
                if(cifra6 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra6 == 2)
                {
                    totalRegistros[0] = '2';
                
                }
                else if(cifra6 == 3)
                {
                    totalRegistros[0] = '3';
                
                }
                else if(cifra6 == 4)
                {
                    totalRegistros[0] = '4';
                
                }
                else if(cifra6 == 5)
                {
                    totalRegistros[0] = '5';
                
                }
                else if(cifra6 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra6 == 7)
                {
                    totalRegistros[0] = '7';
                
                }
                else if(cifra6 == 8)
                {
                    totalRegistros[0] = '8';
                
                }
                else if(cifra6 == 9)
                {
                    totalRegistros[0] = '9';
                
                }
                
                //CIFRA 5
                if(cifra5 == 0)
                {
                    totalRegistros[1] = '0';
                
                }
                else if(cifra5 == 1)
                {
                    totalRegistros[1] = '1';
                
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[1] = '2';
                
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[1] = '3';
                
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[1] = '4';
                
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[1] = '5';
                
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[1] = '6';
                
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[1] = '7';
                
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[1] = '8';
                
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[1] = '9';
                
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[2] = '0';
                
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[2] = '1';
                
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[2] = '2';
                
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[2] = '3';
                
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[2] = '4';
                
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[2] = '5';
                
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[2] = '6';
                
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[2] = '7';
                
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[2] = '8';
                
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[2] = '9';
                
                }
                
                
                totalRegistros[3] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[4] = '0';
                
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[4] = '1';
                
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[4] = '2';
                
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[4] = '3';
                
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[4] = '4';
                
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[4] = '5';
                
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[4] = '6';
                
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[4] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[4] = '8';
                
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[4] = '9';
                
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[5] = '0';
                
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[5] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[5] = '2';
                
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[5] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[5] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[5] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[5] = '6';
                
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[5] = '7';
                
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[5] = '8';
                
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[5] = '9';
                
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[6] = '0';
                
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[6] = '1';
                
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[6] = '2';
                
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[6] = '3';
                
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[6] = '4';
                
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[6] = '5';
                
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[6] = '6';
                
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[6] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[6] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[6] = '9';
                
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 7)
        {
            if(a == numDigitos)
            {
                cifra7 = numero_registros / 1000000;
                cifra6 = (numero_registros - cifra7*1000000)/100000;
                cifra5 = ((numero_registros - cifra6*100000)/10000)%10;
                cifra4 = ((numero_registros - cifra5*10000)/1000)%10;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
                
                //CIFRA 7
                if(cifra7 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra7 == 2)
                {
                    totalRegistros[0] = '2';
                
                }
                else if(cifra7 == 3)
                {
                    totalRegistros[0] = '3';
                
                }
                else if(cifra7 == 4)
                {
                    totalRegistros[0] = '4';
                
                }
                else if(cifra7 == 5)
                {
                    totalRegistros[0] = '5';
                
                }
                else if(cifra7 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra7 == 7)
                {
                    totalRegistros[0] = '7';
                
                }
                else if(cifra7 == 8)
                {
                    totalRegistros[0] = '8';
                
                }
                else if(cifra7 == 9)
                {
                    totalRegistros[0] = '9';
                
                }
                
                
                totalRegistros[1] = '.';
                
                contador1++;
                
                
                //CIFRA 6
                if(cifra6 == 0)
                {
                    totalRegistros[2] = '0';
                
                }
                else if(cifra6 == 1)
                {
                    totalRegistros[2] = '1';
                
                }
                else if(cifra6 == 2)
                {
                    totalRegistros[2] = '2';
                
                }
                else if(cifra6 == 3)
                {
                    totalRegistros[2] = '3';
                
                }
                else if(cifra6 == 4)
                {
                    totalRegistros[2] = '4';
                
                }
                else if(cifra6 == 5)
                {
                    totalRegistros[2] = '5';
                
                }
                else if(cifra6 == 6)
                {
                    totalRegistros[2] = '6';
                
                }
                else if(cifra6 == 7)
                {
                    totalRegistros[2] = '7';
                
                }
                else if(cifra6 == 8)
                {
                    totalRegistros[2] = '8';
                
                }
                else if(cifra6 == 9)
                {
                    totalRegistros[2] = '9';
                
                }
                
                //CIFRA 5
                if(cifra5 == 0)
                {
                    totalRegistros[3] = '0';
                
                }
                else if(cifra5 == 1)
                {
                    totalRegistros[3] = '1';
                
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[3] = '2';
                
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[3] = '3';
                
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[3] = '4';
                
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[3] = '5';
                
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[3] = '6';
                
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[3] = '7';
                
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[3] = '8';
                
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[3] = '9';
                
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[4] = '0';
                
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[4] = '1';
                
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[4] = '2';
                
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[4] = '3';
                
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[4] = '4';
                
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[4] = '5';
                
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[4] = '6';
                
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[4] = '7';
                
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[4] = '8';
                
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[4] = '9';
                
                }
                
                
                totalRegistros[5] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[6] = '0';
                
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[6] = '1';
                
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[6] = '2';
                
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[6] = '3';
                
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[6] = '4';
                
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[6] = '5';
                
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[6] = '6';
                
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[6] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[6] = '8';
                
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[6] = '9';
                
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[7] = '0';
                
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[7] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[7] = '2';
                
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[7] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[7] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[7] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[7] = '6';
                
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[7] = '7';
                
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[7] = '8';
                
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[7] = '9';
                
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[8] = '0';
                
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[8] = '1';
                
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[8] = '2';
                
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[8] = '3';
                
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[8] = '4';
                
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[8] = '5';
                
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[8] = '6';
                
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[8] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[8] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[8] = '9';
                
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 8)
        {
            if(a == numDigitos)
            {
                cifra8 = numero_registros / 10000000;
                cifra7 = (numero_registros - cifra8*10000000)/1000000;
                cifra6 = ((numero_registros - cifra7*1000000)/100000)%10;
                cifra5 = ((numero_registros - cifra6*100000)/10000)%10;
                cifra4 = ((numero_registros - cifra5*10000)/1000)%10;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                

                                
                //CIFRA 8
                if(cifra8 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra8 == 2)
                {
                    totalRegistros[0] = '2';
                
                }
                else if(cifra8 == 3)
                {
                    totalRegistros[0] = '3';
                
                }
                else if(cifra8 == 4)
                {
                    totalRegistros[0] = '4';
                
                }
                else if(cifra8 == 5)
                {
                    totalRegistros[0] = '5';
                
                }
                else if(cifra8 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra8 == 7)
                {
                    totalRegistros[0] = '7';
                
                }
                else if(cifra8 == 8)
                {
                    totalRegistros[0] = '8';
                
                }
                else if(cifra8 == 9)
                {
                    totalRegistros[0] = '9';
                
                }
                
                
                //CIFRA 7
                if(cifra7 == 0)
                {
                    totalRegistros[1] = '0';
                
                }
                else if(cifra7 == 1)
                {
                    totalRegistros[1] = '1';
                
                }
                else if(cifra7 == 2)
                {
                    totalRegistros[1] = '2';
                
                }
                else if(cifra7 == 3)
                {
                    totalRegistros[1] = '3';
                
                }
                else if(cifra7 == 4)
                {
                    totalRegistros[1] = '4';
                
                }
                else if(cifra7 == 5)
                {
                    totalRegistros[1] = '5';
                
                }
                else if(cifra7 == 6)
                {
                    totalRegistros[1] = '6';
                
                }
                else if(cifra7 == 7)
                {
                    totalRegistros[1] = '7';
                
                }
                else if(cifra7 == 8)
                {
                    totalRegistros[1] = '8';
                
                }
                else if(cifra7 == 9)
                {
                    totalRegistros[1] = '9';
                
                }
                
                
                totalRegistros[2] = '.';
                
                contador1++;
                
                
                //CIFRA 6
                if(cifra6 == 0)
                {
                    totalRegistros[3] = '0';
                
                }
                else if(cifra6 == 1)
                {
                    totalRegistros[3] = '1';
                
                }
                else if(cifra6 == 2)
                {
                    totalRegistros[3] = '2';
                
                }
                else if(cifra6 == 3)
                {
                    totalRegistros[3] = '3';
                
                }
                else if(cifra6 == 4)
                {
                    totalRegistros[3] = '4';
                
                }
                else if(cifra6 == 5)
                {
                    totalRegistros[3] = '5';
                
                }
                else if(cifra6 == 6)
                {
                    totalRegistros[3] = '6';
                
                }
                else if(cifra6 == 7)
                {
                    totalRegistros[3] = '7';
                
                }
                else if(cifra6 == 8)
                {
                    totalRegistros[3] = '8';
                
                }
                else if(cifra6 == 9)
                {
                    totalRegistros[3] = '9';
                
                }
                
                //CIFRA 5
                if(cifra5 == 0)
                {
                    totalRegistros[4] = '0';
                
                }
                else if(cifra5 == 1)
                {
                    totalRegistros[4] = '1';
                
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[4] = '2';
                
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[4] = '3';
                
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[4] = '4';
                
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[4] = '5';
                
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[4] = '6';
                
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[4] = '7';
                
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[4] = '8';
                
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[4] = '9';
                
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[5] = '0';
                
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[5] = '1';
                
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[5] = '2';
                
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[5] = '3';
                
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[5] = '4';
                
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[5] = '5';
                
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[5] = '6';
                
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[5] = '7';
                
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[5] = '8';
                
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[5] = '9';
                
                }
                
                
                totalRegistros[6] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[7] = '0';
                
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[7] = '1';
                
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[7] = '2';
                
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[7] = '3';
                
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[7] = '4';
                
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[7] = '5';
                
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[7] = '6';
                
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[7] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[7] = '8';
                
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[7] = '9';
                
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[8] = '0';
                
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[8] = '1';
                
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[8] = '2';
                
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[8] = '3';
                
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[8] = '4';
                
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[8] = '5';
                
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[8] = '6';
                
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[8] = '7';
                
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[8] = '8';
                
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[8] = '9';
                
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[9] = '0';
                
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[9] = '1';
                
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[9] = '2';
                
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[9] = '3';
                
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[9] = '4';
                
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[9] = '5';
                
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[9] = '6';
                
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[9] = '7';
                
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[9] = '8';
                
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[9] = '9';
                
                }
                
                
            }
            
            contador1++;
            
        }
        
        
    }
    
    totalRegistros[contador1] = '\0';
    
    
    

    //CALCULAR TIEMPO DE EJECUCIÓN
    seg2 = clock();
    tiempo = (float(seg2-seg1)/1000000);
    
    
    //AHORA LO PASAMOS AL LABEL TIEMPO
    char tiempoLabel[5000];
    int contador3 = 0;
    short numDigitosTime;
    short parteEntera, parteDecimalAEntero, cifraEntera1, cifraEntera2, cifraEntera3, cifraDecimal1, cifraDecimal2, cifraDecimal3;
    float parteDecimal;
    
    
    //Calculamos las cifras que tiene la variable tiempo
    if (tiempo < 10)
    {
        numDigitosTime = 1;
 
    }
    else if (tiempo < 100)
    {
        numDigitosTime = 2;
     
    }
    else if (tiempo < 1000)
    {
        numDigitosTime = 3;
    
    }
    else if (tiempo > 1000)
    {
        //cout<<"Fuera de rango"<<endl;
    }
    
    
    numDigitosTime = numDigitosTime + 6;
    
   
    //Pasamos los números a caracteres al array unidimensional de tipo char 
    for(int b = 1; b <= numDigitosTime; b++)
    {
        if(numDigitosTime == 7)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                parteDecimal = tiempo - parteEntera;
                       
                parteDecimalAEntero = parteDecimal * 1000;
                
                cifraDecimal3 = parteDecimalAEntero / 100;
                cifraDecimal2 = (parteDecimalAEntero - cifraDecimal3*100)/10;
                cifraDecimal1 = parteDecimalAEntero % 10;
                
                  
                //PARTE ENTERA
                if(parteEntera == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(parteEntera == 1)
                {
                    tiempoLabel[0] = '1';
                
                }
                else if(parteEntera == 2)
                {
                    tiempoLabel[0] = '2';
                
                }
                else if(parteEntera == 3)
                {
                    tiempoLabel[0] = '3';
                
                }
                else if(parteEntera == 4)
                {
                    tiempoLabel[0] = '4';
                
                }
                else if(parteEntera == 5)
                {
                    tiempoLabel[0] = '5';
                
                }
                else if(parteEntera == 6)
                {
                    tiempoLabel[0] = '6';
                
                }
                else if(parteEntera == 7)
                {
                    tiempoLabel[0] = '7';
                
                }
                else if(parteEntera == 8)
                {
                    tiempoLabel[0] = '8';
                
                }
                else if(parteEntera == 9)
                {
                    tiempoLabel[0] = '9';
                
                }
                
                
                tiempoLabel[1] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA DECIMAL 3
                if(cifraDecimal3 == 0)
                {
                    tiempoLabel[2] = '0';
                    
                }
                else if(cifraDecimal3 == 1)
                {
                    
                    tiempoLabel[2] = '1';
                    
                }
                else if(cifraDecimal3 == 2)
                {
                    
                    tiempoLabel[2] = '2';
                    
                }
                else if(cifraDecimal3 == 3)
                {
                    
                    tiempoLabel[2] = '3';
                    
                }
                else if(cifraDecimal3 == 4)
                {
                    
                    tiempoLabel[2] = '4';
                    
                }
                else if(cifraDecimal3 == 5)
                {
                    
                    tiempoLabel[2] = '5';
                    
                }
                else if(cifraDecimal3 == 6)
                {
                    
                    tiempoLabel[2] = '6';
                    
                }
                else if(cifraDecimal3 == 7)
                {
                    
                    tiempoLabel[2] = '7';
                    
                }
                else if(cifraDecimal3 == 8)
                {
                    
                    tiempoLabel[2] = '8';
                    
                }
                else if(cifraDecimal3 == 9)
                {
                    
                    tiempoLabel[2] = '9';
                    
                }
                
                //CIFRA DECIMAL 2
                if(cifraDecimal2 == 0)
                {
                    tiempoLabel[3] = '0';
                    
                }
                else if(cifraDecimal2 == 1)
                {
                    tiempoLabel[3] = '1';
                    
                }
                else if(cifraDecimal2 == 2)
                {
                    
                    tiempoLabel[3] = '2';
                    
                }
                else if(cifraDecimal2 == 3)
                {
                    
                    tiempoLabel[3] = '3';
                    
                }
                else if(cifraDecimal2 == 4)
                {
                    
                    tiempoLabel[3] = '4';
                    
                }
                else if(cifraDecimal2 == 5)
                {
                    
                    tiempoLabel[3] = '5';
                    
                }
                else if(cifraDecimal2 == 6)
                {
                    
                    tiempoLabel[3] = '6';
                    
                }
                else if(cifraDecimal2 == 7)
                {
                    
                    tiempoLabel[3] = '7';
                    
                }
                else if(cifraDecimal2 == 8)
                {
                    
                    tiempoLabel[3] = '8';
                    
                }
                else if(cifraDecimal2 == 9)
                {
                    
                    tiempoLabel[3] = '9';
                    
                }
                
                
                //CIFRA DECIMAL 1
                if(cifraDecimal1 == 0)
                {
                    tiempoLabel[4] = '0';
                    
                }
                else if(cifraDecimal1 == 1)
                {
                    tiempoLabel[4] = '1';
                    
                }
                else if(cifraDecimal1 == 2)
                {
                    
                    tiempoLabel[4] = '2';
                    
                }
                else if(cifraDecimal1 == 3)
                {
                    
                    tiempoLabel[4] = '3';
                    
                }
                else if(cifraDecimal1 == 4)
                {
                    
                    tiempoLabel[4] = '4';
                    
                }
                else if(cifraDecimal1 == 5)
                {
                    
                    tiempoLabel[4] = '5';
                    
                }
                else if(cifraDecimal1 == 6)
                {
                    
                    tiempoLabel[4] = '6';
                    
                }
                else if(cifraDecimal1 == 7)
                {
                    
                    tiempoLabel[4] = '7';
                    
                }
                else if(cifraDecimal1 == 8)
                {
                    
                    tiempoLabel[4] = '8';
                    
                }
                else if(cifraDecimal1 == 9)
                {
                    
                    tiempoLabel[4] = '9';
                    
                }
                
                    
                tiempoLabel[5] = ' ';
                
                tiempoLabel[6] = 's';
                
                
            }
  
            contador3++;
            
            
        }
        else if(numDigitosTime == 8)
        {
            if(b == numDigitosTime)
            {
                
                parteEntera = (int)tiempo;
                
                cifraEntera1 = parteEntera % 10;
                cifraEntera2 = parteEntera / 10;
                
                parteDecimal = tiempo - parteEntera;
                
                parteDecimalAEntero = parteDecimal * 1000;
                
                cifraDecimal3 = parteDecimalAEntero / 100;
                cifraDecimal2 = (parteDecimalAEntero - cifraDecimal3*100)/10;
                cifraDecimal1 = parteDecimalAEntero % 10;
                
                
                //PARTE ENTERA
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[0] = '1';
   
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[0] = '2';
     
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[0] = '3';
       
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[0] = '4';
     
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[0] = '5';
         
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[0] = '6';
       
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[0] = '7';
        
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[0] = '8';
       
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[0] = '9';
      
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[1] = '1';
     
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[1] = '2';
   
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[1] = '3';
    
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[1] = '4';
     
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[1] = '5';
     
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[1] = '6';
     
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[1] = '7';
    
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[1] = '8';
    
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[1] = '9';
     
                }
                
                tiempoLabel[2] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA DECIMAL 3
                if(cifraDecimal3 == 0)
                {
                    tiempoLabel[3] = '0';
    
                }
                else if(cifraDecimal3 == 1)
                {
                    
                    tiempoLabel[3] = '1';
  
                }
                else if(cifraDecimal3 == 2)
                {
                    
                    tiempoLabel[3] = '2';
   
                }
                else if(cifraDecimal3 == 3)
                {
                    
                    tiempoLabel[3] = '3';
  
                }
                else if(cifraDecimal3 == 4)
                {
                    
                    tiempoLabel[3] = '4';
  
                }
                else if(cifraDecimal3 == 5)
                {
                    
                    tiempoLabel[3] = '5';
  
                }
                else if(cifraDecimal3 == 6)
                {
                    
                    tiempoLabel[3] = '6';
  
                }
                else if(cifraDecimal3 == 7)
                {
                    
                    tiempoLabel[3] = '7';
  
                }
                else if(cifraDecimal3 == 8)
                {
                    
                    tiempoLabel[3] = '8';
  
                }
                else if(cifraDecimal3 == 9)
                {
                    
                    tiempoLabel[3] = '9';
  
                }
                
                
                
                //CIFRA DECIMAL 2
                if(cifraDecimal2 == 0)
                {
                    tiempoLabel[4] = '0';
 
                }
                else if(cifraDecimal2 == 1)
                {
                    tiempoLabel[4] = '1';
 
                }
                else if(cifraDecimal2 == 2)
                {
                    
                    tiempoLabel[4] = '2';
  
                }
                else if(cifraDecimal2 == 3)
                {
                    
                    tiempoLabel[4] = '3';
  
                }
                else if(cifraDecimal2 == 4)
                {
                    
                    tiempoLabel[4] = '4';
  
                }
                else if(cifraDecimal2 == 5)
                {
                    
                    tiempoLabel[4] = '5';
  
                }
                else if(cifraDecimal2 == 6)
                {
                    
                    tiempoLabel[4] = '6';
  
                }
                else if(cifraDecimal2 == 7)
                {
                    
                    tiempoLabel[4] = '7';
   
                }
                else if(cifraDecimal2 == 8)
                {
                    
                    tiempoLabel[4] = '8';
    
                }
                else if(cifraDecimal2 == 9)
                {
                    
                    tiempoLabel[4] = '9';
   
                }
                
                
                //CIFRA DECIMAL 1
                if(cifraDecimal1 == 0)
                {
                    tiempoLabel[5] = '0';
  
                }
                else if(cifraDecimal1 == 1)
                {
                    tiempoLabel[5] = '1';
                    
   
                }
                else if(cifraDecimal1 == 2)
                {
                    tiempoLabel[5] = '2';
 
                }
                else if(cifraDecimal1 == 3)
                {
                    tiempoLabel[5] = '3';
        
                }
                else if(cifraDecimal1 == 4)
                {
                    tiempoLabel[5] = '4';
                 
                }
                else if(cifraDecimal1 == 5)
                {
                    tiempoLabel[5] = '5';
                  
                }
                else if(cifraDecimal1 == 6)
                {
                    
                    tiempoLabel[5] = '6';
                  
                }
                else if(cifraDecimal1 == 7)
                {
                    
                    tiempoLabel[5] = '7';
                                     
                }
                else if(cifraDecimal1 == 8)
                {
                    
                    tiempoLabel[5] = '8';
               
                }
                else if(cifraDecimal1 == 9)
                {
                    
                    tiempoLabel[5] = '9';
       
                }
                
                    
                tiempoLabel[6] = ' ';
                
                tiempoLabel[7] = 's';
                
                
                
            }


            contador3++;
            
        }
        else if(numDigitosTime == 9)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                cifraEntera3 = parteEntera / 100;
                cifraEntera2 = (parteEntera - cifraEntera3*100)/10;
                cifraEntera1 = parteEntera % 10;
                
                parteDecimal = tiempo - parteEntera;
                 
                parteDecimalAEntero = parteDecimal * 1000;
                
                cifraDecimal3 = parteDecimalAEntero / 100;
                cifraDecimal2 = (parteDecimalAEntero - cifraDecimal3*100)/10;
                cifraDecimal1 = parteDecimalAEntero % 10;
                
                
                //PARTE ENTERA
                
                //CIFRA ENTERA 3
                if(cifraEntera3 == 0)
                {
                    tiempoLabel[0] = '0';
   
                }
                else if(cifraEntera3 == 1)
                {
                    tiempoLabel[0] = '1';
           
                }
                else if(cifraEntera3 == 2)
                {
                    tiempoLabel[0] = '2';
           
                }
                else if(cifraEntera3 == 3)
                {
                    tiempoLabel[0] = '3';
           
                }
                else if(cifraEntera3 == 4)
                {
                    tiempoLabel[0] = '4';
     
                }
                else if(cifraEntera3 == 5)
                {
                    tiempoLabel[0] = '5';
     
                }
                else if(cifraEntera3 == 6)
                {
                    tiempoLabel[0] = '6';
  
                }
                else if(cifraEntera3 == 7)
                {
                    tiempoLabel[0] = '7';
  
                }
                else if(cifraEntera3 == 8)
                {
                    tiempoLabel[0] = '8';
  
                }
                else if(cifraEntera3 == 9)
                {
                    tiempoLabel[0] = '9';
  
                }
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[1] = '0';
  
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[1] = '1';
   
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[1] = '2';
  
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[1] = '3';
 
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[1] = '4';
  
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[1] = '5';
  
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[1] = '6';
                
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[1] = '7';
                
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[1] = '8';
                
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[1] = '9';
 
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[2] = '1';
        
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[2] = '2';
        
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[2] = '3';
         
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[2] = '4';
     
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[2] = '5';
     
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[2] = '6';
     
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[2] = '7';
      
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[2] = '8';
     
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[2] = '9';
     
                }
                
                tiempoLabel[3] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA DECIMAL 3
                if(cifraDecimal3 == 0)
                {
                    tiempoLabel[4] = '0';
      
                }
                else if(cifraDecimal3 == 1)
                {
                    
                    tiempoLabel[4] = '1';
     
                }
                else if(cifraDecimal3 == 2)
                {
                    
                    tiempoLabel[4] = '2';
     
                }
                else if(cifraDecimal3 == 3)
                {
                    
                    tiempoLabel[4] = '3';
   
                }
                else if(cifraDecimal3 == 4)
                {
                    
                    tiempoLabel[4] = '4';
    
                }
                else if(cifraDecimal3 == 5)
                {
                    
                    tiempoLabel[4] = '5';
   
                }
                else if(cifraDecimal3 == 6)
                {
                    
                    tiempoLabel[4] = '6';
    
                }
                else if(cifraDecimal3 == 7)
                {
                    
                    tiempoLabel[4] = '7';
  
                }
                else if(cifraDecimal3 == 8)
                {
                    
                    tiempoLabel[4] = '8';
   
                }
                else if(cifraDecimal3 == 9)
                {
                    
                    tiempoLabel[4] = '9';
  
                }
                
                
                //CIFRA DECIMAL 2
                if(cifraDecimal2 == 0)
                {
                    tiempoLabel[5] = '0';
  
                }
                else if(cifraDecimal2 == 1)
                {
                    tiempoLabel[5] = '1';
  
                }
                else if(cifraDecimal2 == 2)
                {
                    
                    tiempoLabel[5] = '2';
  
                }
                else if(cifraDecimal2 == 3)
                {
                    
                    tiempoLabel[5] = '3';
    
                }
                else if(cifraDecimal2 == 4)
                {
                    
                    tiempoLabel[5] = '4';
     
                }
                else if(cifraDecimal2 == 5)
                {
                    
                    tiempoLabel[5] = '5';
    
                }
                else if(cifraDecimal2 == 6)
                {
                    
                    tiempoLabel[5] = '6';
  
                }
                else if(cifraDecimal2 == 7)
                {
                    
                    tiempoLabel[5] = '7';
   
                }
                else if(cifraDecimal2 == 8)
                {
                    
                    tiempoLabel[5] = '8';
    
                }
                else if(cifraDecimal2 == 9)
                {
                    
                    tiempoLabel[5] = '9';
  
                }
                
                
                //CIFRA DECIMAL 1
                if(cifraDecimal1 == 0)
                {
                    tiempoLabel[6] = '0';
   
                }
                else if(cifraDecimal1 == 1)
                {
                    tiempoLabel[6] = '1';
   
                }
                else if(cifraDecimal1 == 2)
                {
                    
                    tiempoLabel[6] = '2';
   
                }
                else if(cifraDecimal1 == 3)
                {
                    
                    tiempoLabel[6] = '3';
   
                }
                else if(cifraDecimal1 == 4)
                {
                    
                    tiempoLabel[6] = '4';
   
                }
                else if(cifraDecimal1 == 5)
                {
                    
                    tiempoLabel[6] = '5';
  
                }
                else if(cifraDecimal1 == 6)
                {
                    
                    tiempoLabel[6] = '6';
  
                }
                else if(cifraDecimal1 == 7)
                {
                    
                    tiempoLabel[6] = '7';
  
                }
                else if(cifraDecimal1 == 8)
                {
                    
                    tiempoLabel[6] = '8';
  
                }
                else if(cifraDecimal1 == 9)
                {
                    
                    tiempoLabel[6] = '9';
  
                }
                
                    
                tiempoLabel[7] = ' ';
                
                tiempoLabel[8] = 's'; 
                
            }
            
            contador3++;
            
        }
        
       
    }
    
    
    //Ponemos esta para que indique que hay se acaba el array
    tiempoLabel[contador3] = '\0';
    
    
    //Lo enviamos a sus respectivos label para mostrarlos en pantalla
    gtk_label_set_text(GTK_LABEL (stuff->widLabelTotalRegistros2), totalRegistros);
    gtk_label_set_text(GTK_LABEL (stuff->widLabelTiempo2), tiempoLabel);
    
            
    
}




//Este método es para que salga una mini ventana emergente de información, donde aparece un texto y botón de aceptar, le damos a aceptar 
//se ejecuta el método button_listar_Palabras_Fichero de abajo y cuando termine de ejecutarse desaparece la ventana.
void show_info(GtkWidget *widget, gpointer window) 
{
    
    GtkWidget *dialog;
    dialog = gtk_message_dialog_new(GTK_WINDOW(window),
            GTK_DIALOG_DESTROY_WITH_PARENT,
            GTK_MESSAGE_INFO,
            GTK_BUTTONS_OK,
            "Give it to accept and wait .........");
    gtk_window_set_title(GTK_WINDOW(dialog), "Information");
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}




//Hay que solucionar un error aquí
//Este método es para que muestre los registros que tengamos en el fichero usando los 3 filtos, algunos de ellos o ninguno - Hay un bugs gordo no muestros los registros añadidos de forma individual
void button_listar_Palabras_Fichero(GtkWidget *widget, CCPTextBuffer2 *stuff) 
{
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_listar_Palabras_Fichero
    unsigned seg1, seg2;
	float tiempo;

    seg1 = clock();
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_listar_Palabras_Fichero
    
    
    //2º ARCHIVO 
	if((listadoOrdenado=fopen("/home/pi/Desktop/Proyectos Geany/C++/Data_words_v2/Data/idiomaAlemánOrdenado.dat", "wb+"))==NULL)//antes r+b, se pone wb+ para que al llamar al método listar_palabras_fichero se sobreescribe el archivo
	{
		if((listadoOrdenado=fopen("/home/pi/Desktop/Proyectos Geany/C++/Data_words_v2/Data/idiomaAlemánOrdenado.dat", "ab+"))==NULL)//antes era a+b pero este escribe datos al final del fichero
		{
			printf("No se puede crear el fichero");
		}
		else
		{	
			fclose(listadoOrdenado);
			
			if((listadoOrdenado=fopen("/home/pi/Desktop/Proyectos Geany/C++/Data_words_v2/Data/idiomaAlemánOrdenado.dat", "wb+"))==NULL)//antes r+b, se pone wb+ para que al llamar al método listar_palabras_fichero se sobreescribe el archivo
			{
				printf("No se puede abrir el fichero");
			}
		}
	}
    
    
    //para los carácteres especiales del alemán
    setlocale(LC_ALL, "german");
    
    
    short radioButtonPrimeraLetraSeleccionado = radioButtonPrimeraLetra;
    short radioButtonSegundaLetraSeleccionado = radioButtonSegundaLetra;
    short radioButtonNumLetrasSeleccionado = radioButtonNumLetras;
    
    
    
    //Contabilizamos los registros del 1º archivo
	int numero_registros;
	numero_registros = nRegistrosFicheroDeMiLista();
    
    
    //Variable 1º archivo
	int i;	
	int resultado;
	int contador = 0;
	int positivo = 0, negativo = 0, igual = 0;
	char auxiliar[LONGITUD_TEXTOS];
	char auxiliar2[LONGITUD_TEXTOS];
    int contadorPalabrasEscritas = 0;
    
    
    //Variables para filtrar el 1º archivo
	int numero_registros2;
    char palabrasFiltradasFichero[900000];//Lo máximo que se puede poner son 999999
    char auxiliar3[LONGITUD_TEXTOS];
    int pos = 0;
    int variasPalabras = 0;
    char primeraLetra;
    bool primeraLetraDieresisSAlemana = false;
    bool primerFiltroDesactivado = false;
    char segundaLetra;
    bool segundaLetraDieresisSAlemana = false;
    bool segundoFiltroDesactivado = false;
    short rangoMinLetras;
    short rangoMaxLetras;
    bool tercerFiltroDesactivado = false;
    int numLetrasAuxiliar3;
    int sizeAuxiliar3 = 0;
    
    
    
	//Dependiendo del valor mostrará en el textview una información u otra
    if(numero_registros == 0)
    {
        
        char warnings10[36] = {'T','h','e','r','e',' ','a','r','e',' ','n','o',' ','r','e','c','o','r','d','s',' ','i','n',' ','t','h','e',' ','f','i','l','e',' ','1','.','\0'};
        
        int sizeWarnings10 = strlen(warnings10);
        
        gtk_text_buffer_set_text (stuff->textBuffer4, warnings10, sizeWarnings10);
        
    }
    else if(numero_registros >= 1)
    {
           
        //Según el primer filtro escogido que es la primera letra de la palabra mostrará unas palabras u otras
        //Guaramos en una variable el primer filtro esogido
        switch(radioButtonPrimeraLetraSeleccionado)
        {
                
            case 2:
                
                primeraLetra = 'A';
                
                break;
                    
                    
            case 3:
                
                primeraLetra = 'B';
                    
                    
                break;
                    
                    
            case 4:
                
                primeraLetra = 'C';
                    
                
                break;
                    
                
            case 5:
                
                primeraLetra = 'D';
                    
                
                break;
                    
                
            case 6:
                
                primeraLetra = 'E';
                    
                
                break;
                    
                    
            case 7:
                
                primeraLetra = 'F';
                    
                
                break;
                    
                    
            case 8:
                
                primeraLetra = 'G';
                    
                
                break;
                    
                    
            case 9:
                
                primeraLetra = 'H';
                    
                
                break;
                    
                    
            case 10:
                
                primeraLetra = 'I';
                    
                
                break;
                    
                    
            case 11:
                
                primeraLetra = 'J';
                    
                
                break;
                    
                    
            case 12:
                
                primeraLetra = 'K';
                    
                
                break;
                    
                    
            case 13:
                
                primeraLetra = 'L';
                    
                
                break;
                    
                    
            case 14:
                
                primeraLetra = 'M';
                    
                
                break;
                    
                    
            case 15:
                
                primeraLetra = 'N';
                    
                
                break;
                    
                    
            case 16:
                
                primeraLetra = 'O';
                    
                
                break;
                    
                    
            case 17:
                
                primeraLetra = 'P';
                    
                
                break;
                    
                
            case 18:
                
                primeraLetra = 'Q';
                    
                
                break;
                    
                    
            case 19:
                
                primeraLetra = 'R';
                    
                
                break;
                    
                    
            case 20:
                
                primeraLetra = 'S';
                    
                
                break;
                    
                    
            case 21:
                
                primeraLetra = 'T';
                    
                
                break;
                    
                    
            case 22:
                
                primeraLetra = 'U';
                    
                
                break;
                    
                    
            case 23:
                
                primeraLetra = 'V';
                    
                
                break;
                    
                    
            case 24:
                
                primeraLetra = 'W';
                    
                
                break;
                    
                    
            case 25:
                
                primeraLetra = 'X';
                    
                
                break;
                    
                    
            case 26:
                
                primeraLetra = 'Y';
                    
                
                break;
                    
                    
            case 27:
                
                primeraLetra = 'Z';
                    
                
                break;
                    
                    
            case 28:
                
                primeraLetraDieresisSAlemana = true;
                    
                
                break;
                    
                    
            default:
                
                primerFiltroDesactivado = true;
                
                
                break;
                
        }
            
            
        //Guardamos en un carácter el segundo filtro escogido
        switch(radioButtonSegundaLetraSeleccionado)
        {
            case 2:
                                    
                segundaLetra = 'a';
                    
                break;
                
                                    
            case 3:
                                    
                segundaLetra = 'b';
                    
                break;
                
                                    
            case 4:
                                    
                segundaLetra = 'c';
                    
                break;
                
                                    
            case 5:
                                    
                segundaLetra = 'd';
                    
                break;
                
                                    
            case 6:
                                    
                segundaLetra = 'e';
                    
                break;
                
                                    
            case 7:
                                    
                segundaLetra = 'f';
                    
                break;
                
                                    
            case 8:
                                    
                segundaLetra = 'g';
                    
                break;
                                    
            case 9:
                                    
                segundaLetra = 'h';
                    
                break;
                
                                    
            case 10:
                                    
                segundaLetra = 'i';
                    
                break;
                
                                    
            case 11:
                                    
                segundaLetra = 'j';
                                    
                break;
                
                                    
            case 12:
                                    
                segundaLetra = 'k';
                                    
                break;
                
                                    
            case 13:
                                    
                segundaLetra = 'l';
                                    
                break;
                
                                    
            case 14:
                                    
                segundaLetra = 'm';
                                    
                break;
                
                                    
            case 15:
                                    
                segundaLetra = 'n';
                                    
                break;
                
                                    
            case 16:
                                    
                segundaLetra = 'o';
                                    
                break;
                
                                    
            case 17:
                                    
                segundaLetra = 'p';
                    
                break;
                
                        
            case 18:
                                    
                segundaLetra = 'q';
                                    
                break;
                
                    
            case 19:
                                    
                segundaLetra = 'r';
                                    
                break;
                
                    
            case 20:
                                    
                segundaLetra = 's';
                                    
                break;
                
                    
            case 21:
                                    
                segundaLetra = 't';
                                    
                break;
                
                    
            case 22:
                                    
                segundaLetra = 'u';
                                    
                break;
                
                    
            case 23:
                                    
                segundaLetra = 'v';
                                    
                break;
                
                    
            case 24:
                                    
                segundaLetra = 'w';
                                    
                break;
                
                    
            case 25:
                                    
                segundaLetra = 'x';
                                    
                break;
                
                    
            case 26:
                                    
                segundaLetra = 'y';
                                    
                break;
                
                    
            case 27:
                                    
                segundaLetra = 'z';
                                    
                break;
                
                    
            case 28:
                                    
                segundaLetraDieresisSAlemana = true;
                    
                break;
                    
                            
            default:
                                
                segundoFiltroDesactivado = true;
              
                             
        }
            
           
            
        //Guardamos en dos variables el tercer filtro escogido
        switch(radioButtonNumLetrasSeleccionado)
        {
                
            case 2:
                
                rangoMinLetras = 1;
                    
                rangoMaxLetras = 4;
                    
                break;
                    
                    
            case 3:
                
                rangoMinLetras = 5;
                    
                rangoMaxLetras = 8;
                    
                break;
                    
                    
            case 4:
                
                rangoMinLetras = 9;
                    
                rangoMaxLetras = 12;
                    
                break;
                    
                    
            case 5:
                
                rangoMinLetras = 13;
                    
                rangoMaxLetras = 17;
                    
                break;
                    
                    
            case 6:
                
                rangoMinLetras = 18;
                    
                rangoMaxLetras = 22;
                    
                break;
                    
                    
            case 7:
                
                rangoMinLetras = 23;
                    
                rangoMaxLetras = 27;
                    
                break;
                    
                    
            case 8:
                
                rangoMinLetras = 28;
                    
                rangoMaxLetras = 32;
                    
                break;
                    
                    
            case 9:
                
                rangoMinLetras = 33;
                    
                rangoMaxLetras = 37;
                    
                break;
                    
                    
            case 10:
                
                rangoMinLetras = 38;
                    
                rangoMaxLetras = 42;
                    
                break;
                    
                    
            case 11:
                
                rangoMinLetras = 43;
                    
                rangoMaxLetras = 47;
                    
                break;
                    
                    
            case 12:
                
                rangoMinLetras = 48;
                    
                rangoMaxLetras = 52;
                    
                break;
                    
                    
            case 13:
                
                rangoMinLetras = 53;
                    
                rangoMaxLetras = 57;
                    
                break;
                    
                    
            case 14:
                
                rangoMinLetras = 58;
                    
                rangoMaxLetras = 62;
                    
                break;
                    
                    
            case 15:
                
                rangoMinLetras = 63;
                    
                rangoMaxLetras = 67;
                    
                break;
                    
                    
            case 16:
                
                rangoMinLetras = 68;
                    
                rangoMaxLetras = 72;
                    
                break;
                    
                    
            case 17:
                
                rangoMinLetras = 73;
                    
                rangoMaxLetras = 255;
                    
                break;
                    
                    
            default:
                              
                tercerFiltroDesactivado = true;
             
              
        }
            
           
           
            
        //Según los filtros escogidos guardará en el array unas palabras u otras
        if(radioButtonPrimeraLetraSeleccionado == 1 and radioButtonSegundaLetraSeleccionado == 1 and radioButtonNumLetrasSeleccionado == 1)
        {
             
            //Permite situar el cursor de posicionamiento de un fichero al inicio de éste.
            rewind(listado);
            
		
			//Leemos todos los registros del fichero
            for(i=1; i<= numero_registros; i++)
            {
				//Permite leer un número determinado de bloques de caracteres a partir de la posición del cursor. 
				//Después de la lectura se actualiza la posición del cursor en el último cáracter leído.
                fread(&lista, sizeof(lista), 1, listado);
               
				//Copia una cadena de caracteres en otra
                strcpy(auxiliar, lista.palabra);
                
		
				//Sacamos un segundo registro para luego lo copiamos en otro array y lo compararemos con 
				//el otro array que lleva el otro registro
                for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                {
			
					//Permite situar el cursor de lectura o escritura de un fichero en una posición determinada
                    fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                    
                    fread(&lista, sizeof(lista), 1, listado);
			
                    strcpy(auxiliar2, lista.palabra);
                    
                    
                    //Compara dos cadenas de caracteres sin tener en cuentas si son mayúsculas o minúsculas
                    resultado = strcasecmp(auxiliar, auxiliar2);//SOLO ES INFORMACIÓN
			
                    contador++;
				
                    //La función strcasecmp sirve para comparar dos cadenas pero sin tener en cuenta si son mayusculas o minusculas.
                    // - Si es mayor que 0, entonces auxiliar debería estar después de auxiliar2
                    // - Si es menor que 0, entonces auxiliar debería estar antes que auxiliar2
                    // Si es igual a 0, no hay que hacer nada
                    if(resultado > 0)
                    {
                        positivo++;	
                    }
                    else if(resultado < 0)
                    {
                        negativo++;
                    }
                    else if(resultado == 0)
                    {
                        igual++;
                    }
			
					
					//Cuando el contador sea igual que el total de numero_registros nos posicionamos en el segundo fihcero y lo escribimos
                    if(contador == numero_registros)
                    {
				
						//Permite situar el cursor de lectura o escritura de un fichero en una posición determinada
                        fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);//El segundo parámetro es la posición en bytes
                        
                        //Permite escribir un número determinado de bytes de una longitud determinada en un fichero
                        fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                        
                        //Permite liberar el contenido del buffer asociado a un flujo de entrada o salida
                        fflush(listadoOrdenado);
				
                        contador = 0;
                        positivo = 0;
                        negativo = 0;
                        igual = 0;
                    }
			
			
					//Cuando se cumpla la condicion nos volvemos a posiconar en el primer fichero
                    if(palabraBuscada == numero_registros)
                    {
                        fseek(listado, i*sizeof(Tlista), SEEK_SET);
                    }
			
                }	
    
            }
                
        }
        else if (radioButtonPrimeraLetraSeleccionado > 1 and radioButtonSegundaLetraSeleccionado == 1 and radioButtonNumLetrasSeleccionado == 1)
        {
            //Comprobamos que no se escogio la opción del filtro de caracteres especiales    
            if(primeraLetraDieresisSAlemana == false)
            {
                
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                        
                    if(lista.palabra[0] == primeraLetra)
                    {
    
                        strcpy(auxiliar, lista.palabra);
                            
                            
                        int numRegFiltrados = 0;
                            
                    
                        for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                        {
			
                            fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                            fread(&lista, sizeof(lista), 1, listado);
					
                            strcpy(auxiliar2, lista.palabra);
                                
                            //Compronamos la primera posición de array unidimensional de tipo char con la variable de tipo char que fue 
                            //la opción escogida del primer filtro   
                            if(auxiliar2[0] == primeraLetra)
                            {

								//Contabilizamos el número de registros filtrados
                                numRegFiltrados++;
                                    
                                resultado = strcasecmp(auxiliar, auxiliar2);
			
 
                                if(resultado > 0)
                                {
                                    positivo++;	
                                    
                                }
                                else if(resultado < 0)
                                {
                                    negativo++;
                                }
                                else if(resultado == 0)
                                {
                                    igual++;
                                }
                                
                                    
                            }
                              
                            contador++;
			
                            if(contador == numero_registros)
                            {
                    
                                fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                fflush(listadoOrdenado);
                                    
                                contadorPalabrasEscritas++;
				
                                contador = 0;
                                positivo = 0;
                                negativo = 0;
                                igual = 0;
                                    
                                   
                            }
			
			
                            if(palabraBuscada == numero_registros)
                            {
                                fseek(listado, i*sizeof(Tlista), SEEK_SET);
                            }
                                
                        }	
                        
                    }
                        
                }
                    
            }
            else if(primeraLetraDieresisSAlemana == true)
            {
     
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                      
                    //Obtenemos la longitud del array unidimensional  
                    numLetrasAuxiliar3 = strlen(lista.palabra);
                        
                    //Si en el array hay más de una letra y en la primera posición hay algún carácter especial pues se mete en en el bloque
                    if((numLetrasAuxiliar3 > 1) and (lista.palabra[0] != 'A' and lista.palabra[0] != 'B' and lista.palabra[0] != 'C' and lista.palabra[0] != 'D' and lista.palabra[0] != 'E' 
						and lista.palabra[0] != 'F' and lista.palabra[0] != 'G' and lista.palabra[0] != 'H' and lista.palabra[0] != 'I' and lista.palabra[0] != 'J' and lista.palabra[0] != 'K' 
						and lista.palabra[0] != 'L' and lista.palabra[0] != 'M' and lista.palabra[0] != 'N' and lista.palabra[0] != 'O' and lista.palabra[0] != 'P' and lista.palabra[0] != 'Q' 
						and lista.palabra[0] != 'R' and lista.palabra[0] != 'S' and lista.palabra[0] != 'T' and lista.palabra[0] != 'U' and lista.palabra[0] != 'V' and lista.palabra[0] != 'W' 
						and lista.palabra[0] != 'X' and lista.palabra[0] != 'Y' and lista.palabra[0] != 'Z'))
                    {
                        
                        strcpy(auxiliar, lista.palabra);
                             
                        int numRegFiltrados = 0;
                            
                            
                        for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                        {
			
                            fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                            fread(&lista, sizeof(lista), 1, listado);
						
                            strcpy(auxiliar2, lista.palabra);
                                
                            numLetrasAuxiliar3 = strlen(auxiliar2);
                                
                            if((numLetrasAuxiliar3 > 1) and (auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' and auxiliar2[0] != 'D' and auxiliar2[0] != 'E' 
                                and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' 
                                and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' and auxiliar2[0] != 'O' and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' 
                                and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' 
                                and auxiliar2[0] != 'X' and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z'))
                            {

                                numRegFiltrados++;
                                    
                                resultado = strcasecmp(auxiliar, auxiliar2);
			
 
                                if(resultado > 0)
                                {
                                    positivo++;	
                                    
                                }
                                else if(resultado < 0)
                                {
                                    negativo++;
                                }
                                else if(resultado == 0)
                                {
                                    igual++;
                                }
                                
                                    
                            }
                              
                            contador++;
			
                            if(contador == numero_registros)
                            {
             
                                fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                fflush(listadoOrdenado);
                                    
                                contadorPalabrasEscritas++;
				
                                contador = 0;
                                positivo = 0;
                                negativo = 0;
                                igual = 0;
                                    
                                   
                            }
			
			
                            if(palabraBuscada == numero_registros)
                            {
                                fseek(listado, i*sizeof(Tlista), SEEK_SET);
                            }
                                

                        }	
                  
                    }
                        
                        
                }
                    
                    
            }
                
        }
        else if (radioButtonPrimeraLetraSeleccionado > 1 and radioButtonSegundaLetraSeleccionado > 1 and radioButtonNumLetrasSeleccionado == 1)
        {
                
            if(primeraLetraDieresisSAlemana == false)
            {
        
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                        
                    if(lista.palabra[0] == primeraLetra)
                    {
						
						//Comparamos que no se escogio en el segundo filtro la opción de carácteres especiales
                        if(segundaLetraDieresisSAlemana == false)
                        {
                            
                            //Comparamos la segunda posición del array con la variable de tipo char que es la opción escogida del segundo filtro
                            if(lista.palabra[1] == segundaLetra)
                            {
   
                                strcpy(auxiliar, lista.palabra);
                            
                            
                                int numRegFiltrados = 0;
                            
                    
                                for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                {
			
                                    fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                    fread(&lista, sizeof(lista), 1, listado);
						
                                    strcpy(auxiliar2, lista.palabra);
                                
									//Comparamos la primera y la segunda posición del array con las variables que son las opciones escogidas del primer y segundo filtro
                                    if(auxiliar2[0] == primeraLetra and auxiliar2[1] == segundaLetra)
                                    {

                                        numRegFiltrados++;
                                    
                                        resultado = strcasecmp(auxiliar, auxiliar2);
			
   
                                        if(resultado > 0)
                                        {
                                            positivo++;	
                                    
                                        }
                                        else if(resultado < 0)
                                        {
                                            negativo++;
                                        }
                                        else if(resultado == 0)
                                        {
                                            igual++;
                                        }
                                
                                    
                                    }
                              
                                    contador++;
			
                                    if(contador == numero_registros)
                                    {
                   
                                        fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                        fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                        fflush(listadoOrdenado);
                                    
                                        contadorPalabrasEscritas++;
				
                                        contador = 0;
                                        positivo = 0;
                                        negativo = 0;
                                        igual = 0;
                                    
                                   
                                    }
			
			
                                    if(palabraBuscada == numero_registros)
                                    {
                                        fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                    }
                                

                                }	
                                
                                
                            }
                            
                        }
                        else if(segundaLetraDieresisSAlemana == true)
                        {
                            numLetrasAuxiliar3 = strlen(lista.palabra);
                                
                            //Si en el array unidimensional hay más de un carácter y en la segunda posición hay algún carácter especial pues se mete en el bloque   
                            if((numLetrasAuxiliar3 > 1) and (lista.palabra[1] != 'a' and lista.palabra[1] != 'b' and lista.palabra[1] != 'c' 
								and lista.palabra[1] != 'd' and lista.palabra[1] != 'e' and lista.palabra[1] != 'f' and lista.palabra[1] != 'g' 
								and lista.palabra[1] != 'h' and lista.palabra[1] != 'i' and lista.palabra[1] != 'j' and lista.palabra[1] != 'k' 
								and lista.palabra[1] != 'l' and lista.palabra[1] != 'm' and lista.palabra[1] != 'n' and lista.palabra[1] != 'o' 
								and lista.palabra[1] != 'p' and lista.palabra[1] != 'q' and lista.palabra[1] != 'r' and lista.palabra[1] != 's' 
								and lista.palabra[1] != 't' and lista.palabra[1] != 'u' and lista.palabra[1] != 'v' and lista.palabra[1] != 'w' 
								and lista.palabra[1] != 'x' and lista.palabra[1] != 'y' and lista.palabra[1] != 'z' and lista.palabra[1] != '-'))
                            {
                                
                                strcpy(auxiliar, lista.palabra);
                            
                            
                                int numRegFiltrados = 0;
                                    
                    
                                for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                {
			
                                    fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                    fread(&lista, sizeof(lista), 1, listado);
			
                                    strcpy(auxiliar2, lista.palabra);
                                        
                                    numLetrasAuxiliar3 = strlen(auxiliar2);
 
              
                                    if((auxiliar2[0] == primeraLetra) and (numLetrasAuxiliar3 > 1) and (auxiliar2[1] != 'a' and auxiliar2[1] != 'b' 
                                        and auxiliar2[1] != 'c' and auxiliar2[1] != 'd' and auxiliar2[1] != 'e' and auxiliar2[1] != 'f' 
                                        and auxiliar2[1] != 'g' and auxiliar2[1] != 'h' and auxiliar2[1] != 'i' and auxiliar2[1] != 'j' 
                                        and auxiliar2[1] != 'k' and auxiliar2[1] != 'l' and auxiliar2[1] != 'm' and auxiliar2[1] != 'n' 
                                        and auxiliar2[1] != 'o' and auxiliar2[1] != 'p' and auxiliar2[1] != 'q' and auxiliar2[1] != 'r' 
                                        and auxiliar2[1] != 's' and auxiliar2[1] != 't' and auxiliar2[1] != 'u' and auxiliar2[1] != 'v' 
                                        and auxiliar2[1] != 'w' and auxiliar2[1] != 'x' and auxiliar2[1] != 'y' and auxiliar2[1] != 'z' 
                                        and auxiliar2[1] != '-'))
                                    {

                                        numRegFiltrados++;
                                    
                                        resultado = strcasecmp(auxiliar, auxiliar2);


                                        if(resultado > 0)
                                        {
                                            positivo++;	
                                    
                                        }
                                        else if(resultado < 0)
                                        {
                                            negativo++;
                                        }
                                        else if(resultado == 0)
                                        {
                                            igual++;
                                        }
                                
                                    
                                    }
                              
                                    contador++;
			
                                    if(contador == numero_registros)
                                    {
                   
                                        fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                        fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                        fflush(listadoOrdenado);
                                    
                                        contadorPalabrasEscritas++;
				
                                        contador = 0;
                                        positivo = 0;
                                        negativo = 0;
                                        igual = 0;
                                    
                                   
                                    }
			
			
                                    if(palabraBuscada == numero_registros)
                                    {
                                        fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                    }
                                

                                }	
         
                            }
                                
                                
                        }
                            
    
                    }
                        
                }
                    
                    
            }
            else if(primeraLetraDieresisSAlemana == true)
            {
    
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                                          
                    numLetrasAuxiliar3 = strlen(lista.palabra);
                        
                        
                    if((numLetrasAuxiliar3 > 1) and (lista.palabra[0] != 'A' and lista.palabra[0] != 'B' and lista.palabra[0] != 'C' 
                        and lista.palabra[0] != 'D' and lista.palabra[0] != 'E' and lista.palabra[0] != 'F' and lista.palabra[0] != 'G' 
                        and lista.palabra[0] != 'H' and lista.palabra[0] != 'I' and lista.palabra[0] != 'J' and lista.palabra[0] != 'K' 
                        and lista.palabra[0] != 'L' and lista.palabra[0] != 'M' and lista.palabra[0] != 'N' and lista.palabra[0] != 'O' 
                        and lista.palabra[0] != 'P' and lista.palabra[0] != 'Q' and lista.palabra[0] != 'R' and lista.palabra[0] != 'S' 
                        and lista.palabra[0] != 'T' and lista.palabra[0] != 'U' and lista.palabra[0] != 'V' and lista.palabra[0] != 'W' 
                        and lista.palabra[0] != 'X' and lista.palabra[0] != 'Y' and lista.palabra[0] != 'Z'))
                    {
                            
                     
                        if(segundaLetraDieresisSAlemana == false)
                        {
                    
                            if(lista.palabra[2] == segundaLetra)
                            {
                                    
                                strcpy(auxiliar, lista.palabra);
                                                                      
                                int numRegFiltrados = 0;
                            
                    
                                for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                {
			
                                    fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                    fread(&lista, sizeof(lista), 1, listado);
			
                                    strcpy(auxiliar2, lista.palabra);
                                        
                                    numLetrasAuxiliar3 = strlen(auxiliar2);
                                
									//Si en el array hay más de un carácter, en la primera posición hay algún carácter especial y en la tercera posición concide 
									//con la variable pues se mete en el bloque
                                    if((numLetrasAuxiliar3 > 1) and (auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' 
                                        and auxiliar2[0] != 'D' and auxiliar2[0] != 'E' and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' 
                                        and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' 
                                        and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' and auxiliar2[0] != 'O' 
                                        and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' 
                                        and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' 
                                        and auxiliar2[0] != 'X' and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z') and (auxiliar2[2] == segundaLetra))
                                    {

                                        numRegFiltrados++;
                                    
                                        resultado = strcasecmp(auxiliar, auxiliar2);
			
 
                                        if(resultado > 0)
                                        {
                                            positivo++;	
                                    
                                        }
                                        else if(resultado < 0)
                                        {
                                            negativo++;
                                        }
                                        else if(resultado == 0)
                                        {
                                            igual++;
                                        }
                                
                                    
                                    }
                              
                                    contador++;
			
                                    if(contador == numero_registros)
                                    {
  
                                        fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                        fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                        fflush(listadoOrdenado);
                                    
                                        contadorPalabrasEscritas++;
				
                                        contador = 0;
                                        positivo = 0;
                                        negativo = 0;
                                        igual = 0;
                                    
                                   
                                    }
			
			
                                    if(palabraBuscada == numero_registros)
                                    {
                                        fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                    }
                                
                                }	
                                    
                            }
                                
                        }
                        else if(segundaLetraDieresisSAlemana == true)
                        {
                            numLetrasAuxiliar3 = strlen(lista.palabra);
  
                                
                            if((numLetrasAuxiliar3 > 1) and (lista.palabra[2] != 'a' and lista.palabra[2] != 'b' and lista.palabra[2] != 'c' 
                                and lista.palabra[2] != 'd' and lista.palabra[2] != 'e' and lista.palabra[2] != 'f' and lista.palabra[2] != 'g' 
                                and lista.palabra[2] != 'h' and lista.palabra[2] != 'i' and lista.palabra[2] != 'j' and lista.palabra[2] != 'k' 
                                and lista.palabra[2] != 'l' and lista.palabra[2] != 'm' and lista.palabra[2] != 'n' and lista.palabra[2] != 'o' 
                                and lista.palabra[2] != 'p' and lista.palabra[2] != 'q' and lista.palabra[2] != 'r' and lista.palabra[2] != 's' 
                                and lista.palabra[2] != 't' and lista.palabra[2] != 'u' and lista.palabra[2] != 'v' and lista.palabra[2] != 'w' 
                                and lista.palabra[2] != 'x' and lista.palabra[2] != 'y' and lista.palabra[2] != 'z' and lista.palabra[2] != '-'))
                            {
                     
                                strcpy(auxiliar, lista.palabra);
                                                       
                                int numRegFiltrados = 0;
                                    
                    
                                for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                {
			
                                    fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                    fread(&lista, sizeof(lista), 1, listado);
			
                                    strcpy(auxiliar2, lista.palabra);
                                        
                                    numLetrasAuxiliar3 = strlen(auxiliar2);
                                
                                    //Si en el array unidimensional hay más de un carácter y en la primera y tercera posición hay carácteres especiales pues mete en el bloque    
                                    if((numLetrasAuxiliar3 > 1) and (auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' and auxiliar2[0] != 'D' 
                                        and auxiliar2[0] != 'E' and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' 
                                        and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' 
                                        and auxiliar2[0] != 'O' and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' 
                                        and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' and auxiliar2[0] != 'X' 
                                        and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z') and (auxiliar2[2] != 'a' and auxiliar2[2] != 'b' 
                                        and auxiliar2[2] != 'c' and auxiliar2[2] != 'd' and auxiliar2[2] != 'e' and auxiliar2[2] != 'f' 
                                        and auxiliar2[2] != 'g' and auxiliar2[2] != 'h' and auxiliar2[2] != 'i' and auxiliar2[2] != 'j' 
                                        and auxiliar2[2] != 'k' and auxiliar2[2] != 'l' and auxiliar2[2] != 'm' and auxiliar2[2] != 'n' 
                                        and auxiliar2[2] != 'o' and auxiliar2[2] != 'p' and auxiliar2[2] != 'q' and auxiliar2[2] != 'r' 
                                        and auxiliar2[2] != 's' and auxiliar2[2] != 't' and auxiliar2[2] != 'u' and auxiliar2[2] != 'v' 
                                        and auxiliar2[2] != 'w' and auxiliar2[2] != 'x' and auxiliar2[2] != 'y' and auxiliar2[2] != 'z' 
                                        and auxiliar2[2] != '-'))
                                    {

                                        numRegFiltrados++;
                                    
                                        resultado = strcasecmp(auxiliar, auxiliar2);
	

                                        if(resultado > 0)
                                        {
                                            positivo++;	
                                    
                                        }
                                        else if(resultado < 0)
                                        {
                                            negativo++;
                                        }
                                        else if(resultado == 0)
                                        {
                                            igual++;
                                        }
                                
                                    
                                    }
                              
                                    contador++;
			
                                    if(contador == numero_registros)
                                    {
  
                                        fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                        fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                        fflush(listadoOrdenado);
                                    
                                        contadorPalabrasEscritas++;
				
                                        contador = 0;
                                        positivo = 0;
                                        negativo = 0;
                                        igual = 0;
                                    
                                   
                                    }
			
			
                                    if(palabraBuscada == numero_registros)
                                    {
                                        fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                    }
                                
                                }	
         
                            }
                                
                        }
                            
                    }
                        
                }
                    
            }
                
        }
        else if (radioButtonPrimeraLetraSeleccionado > 1 and radioButtonSegundaLetraSeleccionado > 1 and radioButtonNumLetrasSeleccionado > 1)
        {
            if(primeraLetraDieresisSAlemana == false)
            {
   
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                        
                    if(lista.palabra[0] == primeraLetra)
                    {
                       
                        if(segundaLetraDieresisSAlemana == false)
                        {
                            if(lista.palabra[1] == segundaLetra)
                            {
                                
                                numLetrasAuxiliar3 = strlen(lista.palabra);
                                                      
                                int cont = 0, contCharacterSpecial = 0;
                                
                                //Esto es para contabilizar los carácteres especiales ya que estos ocupan dos posiciones en el array
                                for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                {
                                    if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                                        and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                                        and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                                        and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                                        and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                                        and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                                        and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                                        and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                                        and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                                        and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                                        and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                                        and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                                        and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                                        and lista.palabra[cont] != '-')
                                        {
                                            
                                            contCharacterSpecial++;
                                            
                                        }
                                        
                                        cont++;
                                    
                                    
                                }
                                
                                
                                //Si hay caracteres especiales se mete en el bloque
                                if(contCharacterSpecial != 0)
                                {
									//Ya que contabliza el doble por las dos posiciones que ocupa en el array se divide entre dos y obtenemos el total 
									//de caracteres especiales que tiene el registro
                                    contCharacterSpecial = contCharacterSpecial / 2;
									
									//Se lo restamos a la variable que almacena la longitud del array unidimensional con eso obtenemos la longitud
									//incluyendo el carácter especial sin esa posición extra
                                    numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                }
                                
                                
    
								//Si la longitud del array unidimensional tiene más o menos que el rango de letras del tercer filtro escogido se meterá en el bloque
                                if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                                {
                                    
                                    strcpy(auxiliar, lista.palabra);
                                            
                                    int numRegFiltrados = 0;
                            
                    
                                    for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                    {
			
                                        fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                        fread(&lista, sizeof(lista), 1, listado);
			
                                        strcpy(auxiliar2, lista.palabra);
                                            
                                        numLetrasAuxiliar3 = strlen(auxiliar2);
                                        
                                        int cont = 0, contCharacterSpecial = 0;
                                        
                                
                                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                        {
                                            if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                                and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                                and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                                and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                                and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                                and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                                and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                                and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                                and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                                and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                                and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                                and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                                and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                                and auxiliar2[cont] != '-')
                                                {
                                            
                                                    contCharacterSpecial++;
                                            
                                                }
                                        
                                                cont++;
                                    
                                    
                                        }
                                
                                
                                
                                        if(contCharacterSpecial != 0)
                                        {
                                            contCharacterSpecial = contCharacterSpecial / 2;
  
                                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                        }
                                            
                                           
                                        //Si la primera y la segunda posición del array coincide con la opciones del primer y segundo filtro y además entra 
                                        //en el rango de la opción del tercer filtro escogido se ejecutará el bloque
                                        if((auxiliar2[0] == primeraLetra) and (auxiliar2[1] == segundaLetra) and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                        {
                                                
                                            numRegFiltrados++;
                                    
                                            resultado = strcasecmp(auxiliar, auxiliar2);


                                            if(resultado > 0)
                                            {
                                                positivo++;	
                                    
                                            }
                                            else if(resultado < 0)
                                            {
                                                negativo++;
                                            }           
                                            else if(resultado == 0)
                                            {
                                                igual++;
                                            }
                                
                                
                                        }
                              
                                        contador++;
			
                                        if(contador == numero_registros)
                                        {
  
                                            fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                            fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                            fflush(listadoOrdenado);
                                    
                                            contadorPalabrasEscritas++;
				
                                            contador = 0;
                                            positivo = 0;
                                            negativo = 0;
                                            igual = 0;
                                    
                                   
                                        }
			
			
                                        if(palabraBuscada == numero_registros)
                                        {
                                            fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                        }
                                
                                    }	
                
                                }
                  
                            }
       
                        }
                        else if(segundaLetraDieresisSAlemana == true)
                        {
                            
                            numLetrasAuxiliar3 = strlen(lista.palabra);
                        
                            if((numLetrasAuxiliar3 > 1) and (lista.palabra[1] != 'a' and lista.palabra[1] != 'b' and lista.palabra[1] != 'c' 
								and lista.palabra[1] != 'd' and lista.palabra[1] != 'e' and lista.palabra[1] != 'f' and lista.palabra[1] != 'g' 
								and lista.palabra[1] != 'h' and lista.palabra[1] != 'i' and lista.palabra[1] != 'j' and lista.palabra[1] != 'k' 
								and lista.palabra[1] != 'l' and lista.palabra[1] != 'm' and lista.palabra[1] != 'n' and lista.palabra[1] != 'o' 
								and lista.palabra[1] != 'p' and lista.palabra[1] != 'q' and lista.palabra[1] != 'r' and lista.palabra[1] != 's' 
								and lista.palabra[1] != 't' and lista.palabra[1] != 'u' and lista.palabra[1] != 'v' and lista.palabra[1] != 'w' 
								and lista.palabra[1] != 'x' and lista.palabra[1] != 'y' and lista.palabra[1] != 'z' and lista.palabra[1] != '-'))
                            {
                                                          
                                numLetrasAuxiliar3 = strlen(lista.palabra);
                            

                                int cont = 0, contCharacterSpecial = 0;
                                
                                for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                {
                                    if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                                        and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                                        and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                                        and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                                        and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                                        and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                                        and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                                        and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                                        and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                                        and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                                        and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                                        and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                                        and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                                        and lista.palabra[cont] != '-')
                                        {
                                            
                                            contCharacterSpecial++;
                                            
                                        }
                                        
                                        cont++;
                                    
                                    
                                }
                                
                                
                                
                                if(contCharacterSpecial != 0)
                                {
                                    contCharacterSpecial = contCharacterSpecial / 2;
   
                                    numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                }
                                
                                
                      
                                if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                                {                         
                                    strcpy(auxiliar, lista.palabra);
                                            
                                    int numRegFiltrados = 0;
                            
                    
                                    for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                    {
			
                                        fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                        fread(&lista, sizeof(lista), 1, listado);
			
                                        strcpy(auxiliar2, lista.palabra);
                                            
                                        numLetrasAuxiliar3 = strlen(auxiliar2);
                                        
                                        int cont = 0, contCharacterSpecial = 0;
                                        
                                
                                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                        {
                                            if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                                and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                                and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                                and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                                and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                                and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                                and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                                and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                                and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                                and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                                and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                                and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                                and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                                and auxiliar2[cont] != '-')
                                                {
                                            
                                                    contCharacterSpecial++;
                                            
                                                }
                                        
                                                cont++;
                                    
                                    
                                        }
                                
                                
                                
                                        if(contCharacterSpecial != 0)
                                        {
                                            contCharacterSpecial = contCharacterSpecial / 2;
 
                                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                        }
                                        
 
                            
                                        if((auxiliar2[0] == primeraLetra) and (auxiliar2[1] != 'a' and auxiliar2[1] != 'b' 
                                            and auxiliar2[1] != 'c' and auxiliar2[1] != 'd' and auxiliar2[1] != 'e' and auxiliar2[1] != 'f' 
                                            and auxiliar2[1] != 'g' and auxiliar2[1] != 'h' and auxiliar2[1] != 'i' and auxiliar2[1] != 'j' 
                                            and auxiliar2[1] != 'k' and auxiliar2[1] != 'l' and auxiliar2[1] != 'm' and auxiliar2[1] != 'n' 
                                            and auxiliar2[1] != 'o' and auxiliar2[1] != 'p' and auxiliar2[1] != 'q' and auxiliar2[1] != 'r' 
                                            and auxiliar2[1] != 's' and auxiliar2[1] != 't' and auxiliar2[1] != 'u' and auxiliar2[1] != 'v' 
                                            and auxiliar2[1] != 'w' and auxiliar2[1] != 'x' and auxiliar2[1] != 'y' and auxiliar2[1] != 'z' 
                                            and auxiliar2[1] != '-') and (numLetrasAuxiliar3 > 1) and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                        {
                                                
                                            numRegFiltrados++;
                                    
                                            resultado = strcasecmp(auxiliar, auxiliar2);


                                            if(resultado > 0)
                                            {
                                                positivo++;	
                                    
                                            }
                                            else if(resultado < 0)
                                            {
                                                negativo++;
                                            }           
                                            else if(resultado == 0)
                                            {
                                                igual++;
                                            }
                                
                                
                                        }
                              
                                        contador++;
                                        
			
                                        if(contador == numero_registros)
                                        {
                    
                                            fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                            fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                            fflush(listadoOrdenado);
                                    
                                            contadorPalabrasEscritas++;
				
                                            contador = 0;
                                            positivo = 0;
                                            negativo = 0;
                                            igual = 0;
                                    
                                   
                                        }
			
			
                                        if(palabraBuscada == numero_registros)
                                        {
                                            fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                        }
                                
                                    }	
                
                                }
                 
                            }
    
                        }
                            
                    }
                    
                }
                    
            }
            if(primeraLetraDieresisSAlemana == true)
            {

                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                    
                    numLetrasAuxiliar3 = strlen(lista.palabra);
                    
                    int cont = 0, contCharacterSpecial = 0;
                    
                                
                    for(int i = 1; i <= numLetrasAuxiliar3; i++)
                    {
                        if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                            and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                            and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                            and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                            and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                            and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                            and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                            and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                            and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                            and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                            and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                            and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                            and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                            and lista.palabra[cont] != '-')
                        {
                                            
                            contCharacterSpecial++;
                                            
                        }
                                        
                        cont++;
                                    
                                    
                    }
                                
                                
                                
                    if(contCharacterSpecial != 0)
                    {
                        contCharacterSpecial = contCharacterSpecial / 2;
  
                        numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                    }
                    
                    
                    
                    if((numLetrasAuxiliar3 > 1) and (lista.palabra[0] != 'A' and lista.palabra[0] != 'B' and lista.palabra[0] != 'C' 
                        and lista.palabra[0] != 'D' and lista.palabra[0] != 'E' and lista.palabra[0] != 'F' and lista.palabra[0] != 'G' 
                        and lista.palabra[0] != 'H' and lista.palabra[0] != 'I' and lista.palabra[0] != 'J' and lista.palabra[0] != 'K' 
                        and lista.palabra[0] != 'L' and lista.palabra[0] != 'M' and lista.palabra[0] != 'N' and lista.palabra[0] != 'O' 
                        and lista.palabra[0] != 'P' and lista.palabra[0] != 'Q' and lista.palabra[0] != 'R' and lista.palabra[0] != 'S' 
                        and lista.palabra[0] != 'T' and lista.palabra[0] != 'U' and lista.palabra[0] != 'V' and lista.palabra[0] != 'W' 
                        and lista.palabra[0] != 'X' and lista.palabra[0] != 'Y' and lista.palabra[0] != 'Z'))
                    {
                        
               
                        if(segundaLetraDieresisSAlemana == false)
                        {
                            if(lista.palabra[2] == segundaLetra)
                            {
                                
                                if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                                {
                                    
                                    strcpy(auxiliar, lista.palabra);
                                            
                                    int numRegFiltrados = 0;
                            
                    
                                    for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                    {
			
                                        fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                        fread(&lista, sizeof(lista), 1, listado);
			
                                        strcpy(auxiliar2, lista.palabra);
                                            
                                        numLetrasAuxiliar3 = strlen(auxiliar2);
                                        
                                        int cont = 0, contCharacterSpecial = 0;
                                        
                                
                                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                        {
                                            if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                                and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                                and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                                and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                                and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                                and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                                and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                                and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                                and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                                and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                                and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                                and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                                and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                                and auxiliar2[cont] != '-')
                                            {
                                            
                                                contCharacterSpecial++;
                                            
                                            }
                                        
                                            cont++;
                                    
                                    
                                        }
                                
                                
                                
                                        if(contCharacterSpecial != 0)
                                        {
                                            contCharacterSpecial = contCharacterSpecial / 2;
  
                                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                        }
                                        
                                        
                                            
                                        if((auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' 
                                            and auxiliar2[0] != 'D' and auxiliar2[0] != 'E' and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' 
                                            and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' 
                                            and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' and auxiliar2[0] != 'O' 
                                            and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' 
                                            and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' 
                                            and auxiliar2[0] != 'X' and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z') and (auxiliar2[2] == segundaLetra) 
                                            and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                        {
                                                
                                            numRegFiltrados++;
                                    
                                            resultado = strcasecmp(auxiliar, auxiliar2);
			
 
                                            if(resultado > 0)
                                            {
                                                positivo++;	
                                    
                                            }
                                            else if(resultado < 0)
                                            {
                                                negativo++;
                                            }           
                                            else if(resultado == 0)
                                            {
                                                igual++;
                                            }
                                
                                
                                        }
                              
                                        contador++;
			
                                        if(contador == numero_registros)
                                        {
  
                                            fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                            fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                            fflush(listadoOrdenado);
                                    
                                            contadorPalabrasEscritas++;
				
                                            contador = 0;
                                            positivo = 0;
                                            negativo = 0;
                                            igual = 0;
                                    
                                   
                                        }
			
			
                                        if(palabraBuscada == numero_registros)
                                        {
                                            fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                        }
                                
                                    }	
                
                                }
                  
                            }
       
                        }
                        else if(segundaLetraDieresisSAlemana == true)
                        {
                            
                            numLetrasAuxiliar3 = strlen(lista.palabra);
                            
                            int cont = 0, contCharacterSpecial = 0;
                            
                                
                            for(int i = 1; i <= numLetrasAuxiliar3; i++)
                            {
                                if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                                    and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                                    and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                                    and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                                    and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                                    and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                                    and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                                    and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                                    and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                                    and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                                    and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                                    and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                                    and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                                    and lista.palabra[cont] != '-')
                                    {
                                            
                                        contCharacterSpecial++;
                                            
                                    }
                                        
                                    cont++;
                                    
                                    
                            }
                                
                                
                                
                            if(contCharacterSpecial != 0)
                            {
                                contCharacterSpecial = contCharacterSpecial / 2;
 
                                numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                            }
                            
                            
                            
                        
                            if((numLetrasAuxiliar3 > 1) and (lista.palabra[2] != 'a' and lista.palabra[2] != 'b' and lista.palabra[2] != 'c' 
                                and lista.palabra[2] != 'd' and lista.palabra[2] != 'e' and lista.palabra[2] != 'f' and lista.palabra[2] != 'g' 
                                and lista.palabra[2] != 'h' and lista.palabra[2] != 'i' and lista.palabra[2] != 'j' and lista.palabra[2] != 'k' 
                                and lista.palabra[2] != 'l' and lista.palabra[2] != 'm' and lista.palabra[2] != 'n' and lista.palabra[2] != 'o' 
                                and lista.palabra[2] != 'p' and lista.palabra[2] != 'q' and lista.palabra[2] != 'r' and lista.palabra[2] != 's' 
                                and lista.palabra[2] != 't' and lista.palabra[2] != 'u' and lista.palabra[2] != 'v' and lista.palabra[2] != 'w' 
                                and lista.palabra[2] != 'x' and lista.palabra[2] != 'y' and lista.palabra[2] != 'z' and lista.palabra[2] != '-'))
                            {
                                                          
                      
                                if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                                {
             
                                    strcpy(auxiliar, lista.palabra);
                                            
                                    int numRegFiltrados = 0;
                            
                    
                                    for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                                    {
			
                                        fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                        fread(&lista, sizeof(lista), 1, listado);
			
                                        strcpy(auxiliar2, lista.palabra);
                                            
                                        numLetrasAuxiliar3 = strlen(auxiliar2);
                                        
                                        int cont = 0, contCharacterSpecial = 0;
                                        
                                
                                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                        {
                                            if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                                and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                                and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                                and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                                and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                                and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                                and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                                and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                                and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                                and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                                and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                                and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                                and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                                and auxiliar2[cont] != '-')
                                            {
  
                                                contCharacterSpecial++;
                                            
                                            }
                                        
                                            cont++;
                                    
                                    
                                        }
                                
                                
                                
                                        if(contCharacterSpecial != 0)
                                        {
                                            contCharacterSpecial = contCharacterSpecial / 2;
  
                                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                        }
                                        
                                        
                                            
                                        //Si la primera y tercera posición del array hay algún cáracter especial y esta dentro del rango escogido
                                        //del tercera filtro se escogido pues se ejecutará el bloque    
                                        if((auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' 
                                            and auxiliar2[0] != 'D' and auxiliar2[0] != 'E' and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' 
                                            and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' 
                                            and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' and auxiliar2[0] != 'O' 
                                            and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' 
                                            and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' 
                                            and auxiliar2[0] != 'X' and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z') and (auxiliar2[2] != 'a' 
                                            and auxiliar2[2] != 'b' and auxiliar2[2] != 'c' and auxiliar2[2] != 'd' and auxiliar2[2] != 'e' 
                                            and auxiliar2[2] != 'f' and auxiliar2[2] != 'g' and auxiliar2[2] != 'h' and auxiliar2[2] != 'i' 
                                            and auxiliar2[2] != 'j' and auxiliar2[2] != 'k' and auxiliar2[2] != 'l' and auxiliar2[2] != 'm' 
                                            and auxiliar2[2] != 'n' and auxiliar2[2] != 'o' and auxiliar2[2] != 'p' and auxiliar2[2] != 'q' 
                                            and auxiliar2[2] != 'r' and auxiliar2[2] != 's' and auxiliar2[2] != 't' and auxiliar2[2] != 'u' 
                                            and auxiliar2[2] != 'v' and auxiliar2[2] != 'w' and auxiliar2[2] != 'x' and auxiliar2[2] != 'y' 
                                            and auxiliar2[2] != 'z' and auxiliar2[1] != '-') and (numLetrasAuxiliar3 > 1) 
                                            and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                        {
                           
                                            numRegFiltrados++;
                                    
                                            resultado = strcasecmp(auxiliar, auxiliar2);
			
 
                                            if(resultado > 0)
                                            {
                                                positivo++;	
                                    
                                            }
                                            else if(resultado < 0)
                                            {
                                                negativo++;
                                            }           
                                            else if(resultado == 0)
                                            {
                                                igual++;
                                            }
                                
                                
                                        }
                              
                                        contador++;
			
                                        if(contador == numero_registros)
                                        {
  
                                            fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                            fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                            fflush(listadoOrdenado);
                                    
                                            contadorPalabrasEscritas++;
				
                                            contador = 0;
                                            positivo = 0;
                                            negativo = 0;
                                            igual = 0;
                                    
                                   
                                        }
			
			
                                        if(palabraBuscada == numero_registros)
                                        {
                                            fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                        }
                                
                                    }	
                
                                }
                 
                            }
    
                        }
                            
                    }
                    
                }
                    
            }
     
        }
        else if (radioButtonPrimeraLetraSeleccionado > 1 and radioButtonSegundaLetraSeleccionado == 1 and radioButtonNumLetrasSeleccionado > 1)
        {
                
            if(primeraLetraDieresisSAlemana == false)
            {

                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                        
                    if(lista.palabra[0] == primeraLetra)
                    {
       
                        numLetrasAuxiliar3 = strlen(lista.palabra);
                        
                        int cont = 0, contCharacterSpecial = 0;
                        
                                
                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                        {
                            if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                                and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                                and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                                and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                                and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                                and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                                and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                                and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                                and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                                and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                                and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                                and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                                and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                                and lista.palabra[cont] != '-')
                            {
                                            
                                contCharacterSpecial++;
                                            
                            }
                                        
                            cont++;
                                    
                                    
                        }
                                
                                
                                
                        if(contCharacterSpecial != 0)
                        {
                            contCharacterSpecial = contCharacterSpecial / 2;
 
                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                        }
                            
                            
                      
                        if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                        {
                           
                            strcpy(auxiliar, lista.palabra);
                                            
                            int numRegFiltrados = 0;
                            
                    
                            for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                            {
			
                                fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                fread(&lista, sizeof(lista), 1, listado);
			
                                strcpy(auxiliar2, lista.palabra);
                                            
                                numLetrasAuxiliar3 = strlen(auxiliar2);
                                
                                int cont = 0, contCharacterSpecial = 0;
                                
                                
                                for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                {
                                    if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                        and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                        and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                        and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                        and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                        and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                        and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                        and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                        and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                        and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                        and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                        and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                        and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                        and auxiliar2[cont] != '-')
                                    {
                                            
                                        contCharacterSpecial++;
                                            
                                    }
                                        
                                    cont++;
                                    
                                    
                                }
                                
                                
                                
                                if(contCharacterSpecial != 0)
                                {
                                    contCharacterSpecial = contCharacterSpecial / 2;
 
                                    numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                }
                                
                                            
                                            
                                if((auxiliar2[0] == primeraLetra) and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                {
  
                                    numRegFiltrados++;
                                    
                                    resultado = strcasecmp(auxiliar, auxiliar2);


                                    if(resultado > 0)
                                    {
                                        positivo++;	
                                    
                                    }
                                    else if(resultado < 0)
                                    {
                                        negativo++;
                                    }           
                                    else if(resultado == 0)
                                    {
                                        igual++;
                                    }
                                
                                
                                }
                              
                                contador++;
			
                                if(contador == numero_registros)
                                {
 
                                    fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                    fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                    fflush(listadoOrdenado);
                                    
                                    contadorPalabrasEscritas++;
				
                                    contador = 0;
                                    positivo = 0;
                                    negativo = 0;
                                    igual = 0;
                                    
                                   
                                }
			
			
                                if(palabraBuscada == numero_registros)
                                {
                                    fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                }
                                
                            }	
                
                        }
                 
                    }
                    
                }
                    
            }
            if(primeraLetraDieresisSAlemana == true)
            {
        
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    fread(&lista, sizeof(lista), 1, listado);
                    
                    numLetrasAuxiliar3 = strlen(lista.palabra);
                    
                    int cont = 0, contCharacterSpecial = 0;
                                
                    for(int i = 1; i <= numLetrasAuxiliar3; i++)
                    {
                        if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                            and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                            and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                            and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                            and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                            and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                            and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                            and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                            and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                            and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                            and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                            and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                            and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                            and lista.palabra[cont] != '-')
                        {
                                            
                            contCharacterSpecial++;
                                            
                        }
                                        
                        cont++;
                                    
                                    
                    }
                                
                                
                                
                    if(contCharacterSpecial != 0)
                    {
                        contCharacterSpecial = contCharacterSpecial / 2;
  
                        numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                    }
                    
                    
                        
                    if((numLetrasAuxiliar3 > 1) and (lista.palabra[0] != 'A' and lista.palabra[0] != 'B' and lista.palabra[0] != 'C' 
                        and lista.palabra[0] != 'D' and lista.palabra[0] != 'E' and lista.palabra[0] != 'F' and lista.palabra[0] != 'G' 
                        and lista.palabra[0] != 'H' and lista.palabra[0] != 'I' and lista.palabra[0] != 'J' and lista.palabra[0] != 'K' 
                        and lista.palabra[0] != 'L' and lista.palabra[0] != 'M' and lista.palabra[0] != 'N' and lista.palabra[0] != 'O' 
                        and lista.palabra[0] != 'P' and lista.palabra[0] != 'Q' and lista.palabra[0] != 'R' and lista.palabra[0] != 'S' 
                        and lista.palabra[0] != 'T' and lista.palabra[0] != 'U' and lista.palabra[0] != 'V' and lista.palabra[0] != 'W' 
                        and lista.palabra[0] != 'X' and lista.palabra[0] != 'Y' and lista.palabra[0] != 'Z'))
                    {
                       
                        if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                        {
                            
                            strcpy(auxiliar, lista.palabra);
                                            
                            int numRegFiltrados = 0;
                            
                    
                            for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                            {
			
                                fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                fread(&lista, sizeof(lista), 1, listado);
			
                                strcpy(auxiliar2, lista.palabra);
                                            
                                numLetrasAuxiliar3 = strlen(auxiliar2);
                                
                                int cont = 0, contCharacterSpecial = 0;
                                
                                
                                for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                {
                                    if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                        and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                        and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                        and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                        and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                        and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                        and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                        and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                        and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                        and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                        and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                        and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                        and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                        and auxiliar2[cont] != '-')
                                    {
                                            
                                        contCharacterSpecial++;
                                            
                                    }
                                        
                                    cont++;
                                    
                                    
                                }
                                
                                
                                
                                if(contCharacterSpecial != 0)
                                {
                                    contCharacterSpecial = contCharacterSpecial / 2;
              
                                    numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                }
                                
                                            
                                            
                                if((auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' 
                                    and auxiliar2[0] != 'D' and auxiliar2[0] != 'E' and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' 
                                    and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' 
                                    and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' and auxiliar2[0] != 'O' 
                                    and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' 
                                    and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' 
                                    and auxiliar2[0] != 'X' and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z') and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                {
                                                
                                    numRegFiltrados++;
                                    
                                    resultado = strcasecmp(auxiliar, auxiliar2);
			
  
                                    if(resultado > 0)
                                    {
                                        positivo++;	
                                    
                                    }
                                    else if(resultado < 0)
                                    {
                                        negativo++;
                                    }           
                                    else if(resultado == 0)
                                    {
                                        igual++;
                                    }
                                
                                
                                }
                              
                                contador++;
			
                                if(contador == numero_registros)
                                {
  
                                    fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                    fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                    fflush(listadoOrdenado);
                                    
                                    contadorPalabrasEscritas++;
				
                                    contador = 0;
                                    positivo = 0;
                                    negativo = 0;
                                    igual = 0;
                                    
                                   
                                }
			
			
                                if(palabraBuscada == numero_registros)
                                {
                                    fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                }
                                
                            }	
                
                        }
                 
                    }
                    
                }
                    
            }
   
        }
        else if (radioButtonPrimeraLetraSeleccionado == 1 and radioButtonSegundaLetraSeleccionado > 1 and radioButtonNumLetrasSeleccionado == 1)
        {
            
            if(segundaLetraDieresisSAlemana == false)
            {
                
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    
                    fread(&lista, sizeof(lista), 1, listado);
                    
                    
                    numLetrasAuxiliar3 = strlen(lista.palabra);
                    
              
                    if(lista.palabra[1] == segundaLetra and numLetrasAuxiliar3 != 0)
                    {
              
                        strcpy(auxiliar, lista.palabra);
                            
                            
                        int numRegFiltrados = 0;
                            
                    
                        for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                        {
			
                            fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                            fread(&lista, sizeof(lista), 1, listado);
	
                            strcpy(auxiliar2, lista.palabra);
                                   
                            numLetrasAuxiliar3 = strlen(auxiliar2);
                            
                            
                            if(auxiliar2[1] == segundaLetra and numLetrasAuxiliar3 != 0)
                            {

                                numRegFiltrados++;
                                                 
                                resultado = strcasecmp(auxiliar, auxiliar2);
	
	
                                if(resultado > 0)
                                {
                                    positivo++;	
                                    
                                }
                                else if(resultado < 0)
                                {
                                    negativo++;
                                }
                                else if(resultado == 0)
                                {
                                    igual++;
                                }
                                
                                    
                            }
                              
                            contador++;
			
                            if(contador == numero_registros)
                            {
  
                                fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                fflush(listadoOrdenado);
                                    
                                contadorPalabrasEscritas++;
				
                                contador = 0;
                                positivo = 0;
                                negativo = 0;
                                igual = 0;
                                    
                                   
                            }
			
			
                            if(palabraBuscada == numero_registros)
                            {
                                fseek(listado, i*sizeof(Tlista), SEEK_SET);
                            }
                                

                        }	
                                
                    }
                    
                }
                            
            }
            else if(segundaLetraDieresisSAlemana == true)
            {
                
                rewind(listado);
		
	
                for(i=1; i<= numero_registros; i++)
                {
                    
                    fread(&lista, sizeof(lista), 1, listado);
                    
                    
                    numLetrasAuxiliar3 = strlen(lista.palabra);
                    
                    
                    if((numLetrasAuxiliar3 > 1) and (((lista.palabra[0] != 'A' and lista.palabra[0] != 'B' and lista.palabra[0] != 'C' 
                        and lista.palabra[0] != 'D' and lista.palabra[0] != 'E' and lista.palabra[0] != 'F' and lista.palabra[0] != 'G' 
                        and lista.palabra[0] != 'H' and lista.palabra[0] != 'I' and lista.palabra[0] != 'J' and lista.palabra[0] != 'K' 
                        and lista.palabra[0] != 'L' and lista.palabra[0] != 'M' and lista.palabra[0] != 'N' and lista.palabra[0] != 'O' 
                        and lista.palabra[0] != 'P' and lista.palabra[0] != 'Q' and lista.palabra[0] != 'R' and lista.palabra[0] != 'S' 
                        and lista.palabra[0] != 'T' and lista.palabra[0] != 'U' and lista.palabra[0] != 'V' and lista.palabra[0] != 'W' 
                        and lista.palabra[0] != 'X' and lista.palabra[0] != 'Y' and lista.palabra[0] != 'Z') and (lista.palabra[2] != 'a' 
                        and lista.palabra[2] != 'b' and lista.palabra[2] != 'c' and lista.palabra[2] != 'd' and lista.palabra[2] != 'e' 
                        and lista.palabra[2] != 'f' and lista.palabra[2] != 'g' and lista.palabra[2] != 'h' and lista.palabra[2] != 'i' 
                        and lista.palabra[2] != 'j' and lista.palabra[2] != 'k' and lista.palabra[2] != 'l' and lista.palabra[2] != 'm' 
                        and lista.palabra[2] != 'n' and lista.palabra[2] != 'o' and lista.palabra[2] != 'p' and lista.palabra[2] != 'q' 
                        and lista.palabra[2] != 'r' and lista.palabra[2] != 's' and lista.palabra[2] != 't' and lista.palabra[2] != 'u' 
                        and lista.palabra[2] != 'v' and lista.palabra[2] != 'w' and lista.palabra[2] != 'x' and lista.palabra[2] != 'y' 
                        and lista.palabra[2] != 'z' and lista.palabra[2] != '-')) or ((lista.palabra[0] == 'A' or lista.palabra[0] == 'B' 
                        or lista.palabra[0] == 'C' or lista.palabra[0] == 'D' or lista.palabra[0] == 'E' or lista.palabra[0] == 'F' 
                        or lista.palabra[0] == 'G' or lista.palabra[0] == 'H' or lista.palabra[0] == 'I' or lista.palabra[0] == 'J' 
                        or lista.palabra[0] == 'K' or lista.palabra[0] == 'L' or lista.palabra[0] == 'M' or lista.palabra[0] == 'N' 
                        or lista.palabra[0] == 'O' or lista.palabra[0] == 'P' or lista.palabra[0] == 'Q' or lista.palabra[0] == 'R' 
                        or lista.palabra[0] == 'S' or lista.palabra[0] == 'T' or lista.palabra[0] == 'U' or lista.palabra[0] == 'V' 
                        or lista.palabra[0] == 'W' or lista.palabra[0] == 'X' or lista.palabra[0] == 'Y' or lista.palabra[0] == 'Z') 
                        and (lista.palabra[1] != 'a' and lista.palabra[1] != 'b' and lista.palabra[1] != 'c' and lista.palabra[1] != 'd' 
                        and lista.palabra[1] != 'e' and lista.palabra[1] != 'f' and lista.palabra[1] != 'g' and lista.palabra[1] != 'h' 
                        and lista.palabra[1] != 'i' and lista.palabra[1] != 'j' and lista.palabra[1] != 'k' and lista.palabra[1] != 'l' 
                        and lista.palabra[1] != 'm' and lista.palabra[1] != 'n' and lista.palabra[1] != 'o' and lista.palabra[1] != 'p' 
                        and lista.palabra[1] != 'q' and lista.palabra[1] != 'r' and lista.palabra[1] != 's' and lista.palabra[1] != 't' 
                        and lista.palabra[1] != 'u' and lista.palabra[1] != 'v' and lista.palabra[1] != 'w' and lista.palabra[1] != 'x' 
                        and lista.palabra[1] != 'y' and lista.palabra[1] != 'z' and lista.palabra[1] != '-'))))
                    {
                 
                        strcpy(auxiliar, lista.palabra);
                                                      
                        int numRegFiltrados = 0;
                            
                    
                        for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                        {
			
                            fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                            fread(&lista, sizeof(lista), 1, listado);
	
                            strcpy(auxiliar2, lista.palabra);
                                                    
                            numLetrasAuxiliar3 = strlen(auxiliar2);
                            
                            
                            if((numLetrasAuxiliar3 > 1) and (((auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' 
                                and auxiliar2[0] != 'D' and auxiliar2[0] != 'E' and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' 
                                and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' 
                                and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' and auxiliar2[0] != 'O' 
                                and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' 
                                and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' 
                                and auxiliar2[0] != 'X' and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z') and (auxiliar2[2] != 'a' 
                                and auxiliar2[2] != 'b' and auxiliar2[2] != 'c' and auxiliar2[2] != 'd' and auxiliar2[2] != 'e' 
                                and auxiliar2[2] != 'f' and auxiliar2[2] != 'g' and auxiliar2[2] != 'h' and auxiliar2[2] != 'i' 
                                and auxiliar2[2] != 'j' and auxiliar2[2] != 'k' and auxiliar2[2] != 'l' and auxiliar2[2] != 'm' 
                                and auxiliar2[2] != 'n' and auxiliar2[2] != 'o' and auxiliar2[2] != 'p' and auxiliar2[2] != 'q' 
                                and auxiliar2[2] != 'r' and auxiliar2[2] != 's' and auxiliar2[2] != 't' and auxiliar2[2] != 'u' 
                                and auxiliar2[2] != 'v' and auxiliar2[2] != 'w' and auxiliar2[2] != 'x' and auxiliar2[2] != 'y' 
                                and auxiliar2[2] != 'z' and auxiliar2[2] != '-')) or ((auxiliar2[0] == 'A' or auxiliar2[0] == 'B' 
                                or auxiliar2[0] == 'C' or auxiliar2[0] == 'D' or auxiliar2[0] == 'E' or auxiliar2[0] == 'F' 
                                or auxiliar2[0] == 'G' or auxiliar2[0] == 'H' or auxiliar2[0] == 'I' or auxiliar2[0] == 'J' 
                                or auxiliar2[0] == 'K' or auxiliar2[0] == 'L' or auxiliar2[0] == 'M' or auxiliar2[0] == 'N' 
                                or auxiliar2[0] == 'O' or auxiliar2[0] == 'P' or auxiliar2[0] == 'Q' or auxiliar2[0] == 'R' 
                                or auxiliar2[0] == 'S' or auxiliar2[0] == 'T' or auxiliar2[0] == 'U' or auxiliar2[0] == 'V' 
                                or auxiliar2[0] == 'W' or auxiliar2[0] == 'X' or auxiliar2[0] == 'Y' or auxiliar2[0] == 'Z') 
                                and (auxiliar2[1] != 'a' and auxiliar2[1] != 'b' and auxiliar2[1] != 'c' and auxiliar2[1] != 'd' 
                                and auxiliar2[1] != 'e' and auxiliar2[1] != 'f' and auxiliar2[1] != 'g' and auxiliar2[1] != 'h' 
                                and auxiliar2[1] != 'i' and auxiliar2[1] != 'j' and auxiliar2[1] != 'k' and auxiliar2[1] != 'l' 
                                and auxiliar2[1] != 'm' and auxiliar2[1] != 'n' and auxiliar2[1] != 'o' and auxiliar2[1] != 'p' 
                                and auxiliar2[1] != 'q' and auxiliar2[1] != 'r' and auxiliar2[1] != 's' and auxiliar2[1] != 't' 
                                and auxiliar2[1] != 'u' and auxiliar2[1] != 'v' and auxiliar2[1] != 'w' and auxiliar2[1] != 'x' 
                                and auxiliar2[1] != 'y' and auxiliar2[1] != 'z' and auxiliar2[1] != '-'))))
                            {

                                numRegFiltrados++;
                                                            
                                resultado = strcasecmp(auxiliar, auxiliar2);
			
  
                                if(resultado > 0)
                                {
                                    positivo++;	
                                    
                                }
                                else if(resultado < 0)
                                {
                                    negativo++;
                                }
                                else if(resultado == 0)
                                {
                                    igual++;
                                }
                                
                                    
                            }
                              
                            contador++;
			
                            if(contador == numero_registros)
                            {
 
                                fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                fflush(listadoOrdenado);
                                    
                                contadorPalabrasEscritas++;
				
                                contador = 0;
                                positivo = 0;
                                negativo = 0;
                                igual = 0;
                                    
                                   
                            }
			
			
                            if(palabraBuscada == numero_registros)
                            {
                                fseek(listado, i*sizeof(Tlista), SEEK_SET);
                            }
                                

                        }	
                                
                                
                    }
                    
                    
                }
                            
                            
            }
            
  
        }
        else if (radioButtonPrimeraLetraSeleccionado == 1 and radioButtonSegundaLetraSeleccionado > 1 and radioButtonNumLetrasSeleccionado > 1)
        {
            if(segundaLetraDieresisSAlemana == false)
            {
                rewind(listado);
                
                for(i=1; i<= numero_registros; i++)
                {
                    
                    fread(&lista, sizeof(lista), 1, listado);
                    
                    
                    if(lista.palabra[1] == segundaLetra)
                    {
  
                        numLetrasAuxiliar3 = strlen(lista.palabra);
                        
                        
                        int cont = 0, contCharacterSpecial = 0;
                                
                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                        {
                            if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                                and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                                and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                                and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                                and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                                and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                                and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                                and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                                and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                                and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                                and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                                and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                                and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                                and lista.palabra[cont] != '-')
                            {
                                            
                                contCharacterSpecial++;
                                            
                            }
                                        
                            cont++;
                                    
                                    
                        }
                                
                                
                                
                        if(contCharacterSpecial != 0)
                        {
                            contCharacterSpecial = contCharacterSpecial / 2;
   
                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                        }
                        
                            
                      
                        if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                        {
                        
                            strcpy(auxiliar, lista.palabra);
                                            
                            int numRegFiltrados = 0;
                            
                    
                            for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                            {
			
                                fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                fread(&lista, sizeof(lista), 1, listado);
			
                                strcpy(auxiliar2, lista.palabra);
                                            
                                numLetrasAuxiliar3 = strlen(auxiliar2);
                                
                                int cont = 0, contCharacterSpecial = 0;
                                
                                
                                for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                {
                                    if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                        and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                        and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                        and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                        and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                        and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                        and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                        and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                        and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                        and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                        and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                        and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                        and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                        and auxiliar2[cont] != '-')
                                    {
                                            
                                        contCharacterSpecial++;
                                            
                                    }
                                        
                                    cont++;
                                    
                                    
                                }
                                
                                
                                
                                if(contCharacterSpecial != 0)
                                {
                                    contCharacterSpecial = contCharacterSpecial / 2;
   
                                    numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                }
                                
                                            
                                            
                                if((auxiliar2[1] == segundaLetra) and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                {
  
                                    numRegFiltrados++;
                                    
                                    resultado = strcasecmp(auxiliar, auxiliar2);
			
   
                                    if(resultado > 0)
                                    {
                                        positivo++;	
                                    
                                    }
                                    else if(resultado < 0)
                                    {
                                        negativo++;
                                    }           
                                    else if(resultado == 0)
                                    {
                                        igual++;
                                    }
                                
                                
                                }
                              
                                contador++;
			
                                if(contador == numero_registros)
                                {
  
                                    fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                    fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                    fflush(listadoOrdenado);
                                    
                                    contadorPalabrasEscritas++;
				
                                    contador = 0;
                                    positivo = 0;
                                    negativo = 0;
                                    igual = 0;
                                    
                                   
                                }
			
			
                                if(palabraBuscada == numero_registros)
                                {
                                    fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                }
                                
                            }	
                
                        }
                  
                    }
                
                }
  
            }
            else if(segundaLetraDieresisSAlemana == true)
            {
                rewind(listado);
                
                for(i=1; i<= numero_registros; i++)
                {
                    
                    fread(&lista, sizeof(lista), 1, listado);
                    
                    numLetrasAuxiliar3 = strlen(lista.palabra);
                    
                    
                    if((numLetrasAuxiliar3 > 1) and (((lista.palabra[0] != 'A' and lista.palabra[0] != 'B' and lista.palabra[0] != 'C' 
                        and lista.palabra[0] != 'D' and lista.palabra[0] != 'E' and lista.palabra[0] != 'F' and lista.palabra[0] != 'G' 
                        and lista.palabra[0] != 'H' and lista.palabra[0] != 'I' and lista.palabra[0] != 'J' and lista.palabra[0] != 'K' 
                        and lista.palabra[0] != 'L' and lista.palabra[0] != 'M' and lista.palabra[0] != 'N' and lista.palabra[0] != 'O' 
                        and lista.palabra[0] != 'P' and lista.palabra[0] != 'Q' and lista.palabra[0] != 'R' and lista.palabra[0] != 'S' 
                        and lista.palabra[0] != 'T' and lista.palabra[0] != 'U' and lista.palabra[0] != 'V' and lista.palabra[0] != 'W' 
                        and lista.palabra[0] != 'X' and lista.palabra[0] != 'Y' and lista.palabra[0] != 'Z') and (lista.palabra[2] != 'a' 
                        and lista.palabra[2] != 'b' and lista.palabra[2] != 'c' and lista.palabra[2] != 'd' and lista.palabra[2] != 'e' 
                        and lista.palabra[2] != 'f' and lista.palabra[2] != 'g' and lista.palabra[2] != 'h' and lista.palabra[2] != 'i' 
                        and lista.palabra[2] != 'j' and lista.palabra[2] != 'k' and lista.palabra[2] != 'l' and lista.palabra[2] != 'm' 
                        and lista.palabra[2] != 'n' and lista.palabra[2] != 'o' and lista.palabra[2] != 'p' and lista.palabra[2] != 'q' 
                        and lista.palabra[2] != 'r' and lista.palabra[2] != 's' and lista.palabra[2] != 't' and lista.palabra[2] != 'u' 
                        and lista.palabra[2] != 'v' and lista.palabra[2] != 'w' and lista.palabra[2] != 'x' and lista.palabra[2] != 'y' 
                        and lista.palabra[2] != 'z' and lista.palabra[2] != '-')) or ((lista.palabra[0] == 'A' or lista.palabra[0] == 'B' 
                        or lista.palabra[0] == 'C' or lista.palabra[0] == 'D' or lista.palabra[0] == 'E' or lista.palabra[0] == 'F' 
                        or lista.palabra[0] == 'G' or lista.palabra[0] == 'H' or lista.palabra[0] == 'I' or lista.palabra[0] == 'J' 
                        or lista.palabra[0] == 'K' or lista.palabra[0] == 'L' or lista.palabra[0] == 'M' or lista.palabra[0] == 'N' 
                        or lista.palabra[0] == 'O' or lista.palabra[0] == 'P' or lista.palabra[0] == 'Q' or lista.palabra[0] == 'R' 
                        or lista.palabra[0] == 'S' or lista.palabra[0] == 'T' or lista.palabra[0] == 'U' or lista.palabra[0] == 'V' 
                        or lista.palabra[0] == 'W' or lista.palabra[0] == 'X' or lista.palabra[0] == 'Y' or lista.palabra[0] == 'Z') 
                        and (lista.palabra[1] != 'a' and lista.palabra[1] != 'b' and lista.palabra[1] != 'c' and lista.palabra[1] != 'd' 
                        and lista.palabra[1] != 'e' and lista.palabra[1] != 'f' and lista.palabra[1] != 'g' and lista.palabra[1] != 'h' 
                        and lista.palabra[1] != 'i' and lista.palabra[1] != 'j' and lista.palabra[1] != 'k' and lista.palabra[1] != 'l' 
                        and lista.palabra[1] != 'm' and lista.palabra[1] != 'n' and lista.palabra[1] != 'o' and lista.palabra[1] != 'p' 
                        and lista.palabra[1] != 'q' and lista.palabra[1] != 'r' and lista.palabra[1] != 's' and lista.palabra[1] != 't' 
                        and lista.palabra[1] != 'u' and lista.palabra[1] != 'v' and lista.palabra[1] != 'w' and lista.palabra[1] != 'x' 
                        and lista.palabra[1] != 'y' and lista.palabra[1] != 'z' and lista.palabra[1] != '-'))))
                    {
                             
                        numLetrasAuxiliar3 = strlen(lista.palabra);
                                                 
                        int cont = 0, contCharacterSpecial = 0;
                        
                                
                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                        {
                            if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                                and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                                and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                                and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                                and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                                and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                                and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                                and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                                and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                                and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                                and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                                and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                                and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                                and lista.palabra[cont] != '-')
                            {
                                            
                                contCharacterSpecial++;
                                            
                            }
                                        
                            cont++;
                                    
                                    
                        }
                                
                                
                                
                        if(contCharacterSpecial != 0)
                        {
                            contCharacterSpecial = contCharacterSpecial / 2;
  
                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                        }
                        
                        
                        
                      
                        if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                        {
               
                            strcpy(auxiliar, lista.palabra);
                                            
                            int numRegFiltrados = 0;
                            
                    
                            for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                            {
			
                                fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                                fread(&lista, sizeof(lista), 1, listado);
			
                                strcpy(auxiliar2, lista.palabra);
                                            
                                numLetrasAuxiliar3 = strlen(auxiliar2);
                                
                                int cont = 0, contCharacterSpecial = 0;
                                
                                
                                for(int i = 1; i <= numLetrasAuxiliar3; i++)
                                {
                                    if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                        and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                        and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                        and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                        and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                        and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                        and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                        and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                        and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                        and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                        and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                        and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                        and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                        and auxiliar2[cont] != '-')
                                    {
                                            
                                        contCharacterSpecial++;
                                            
                                    }
                                        
                                    cont++;
                                    
                                    
                                }
                                
                                
                                
                                if(contCharacterSpecial != 0)
                                {
                                    contCharacterSpecial = contCharacterSpecial / 2;
   
                                    numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                                }
                                
                                
                                            
                                            
                                if((((auxiliar2[0] != 'A' and auxiliar2[0] != 'B' and auxiliar2[0] != 'C' 
                                    and auxiliar2[0] != 'D' and auxiliar2[0] != 'E' and auxiliar2[0] != 'F' and auxiliar2[0] != 'G' 
                                    and auxiliar2[0] != 'H' and auxiliar2[0] != 'I' and auxiliar2[0] != 'J' and auxiliar2[0] != 'K' 
                                    and auxiliar2[0] != 'L' and auxiliar2[0] != 'M' and auxiliar2[0] != 'N' and auxiliar2[0] != 'O' 
                                    and auxiliar2[0] != 'P' and auxiliar2[0] != 'Q' and auxiliar2[0] != 'R' and auxiliar2[0] != 'S' 
                                    and auxiliar2[0] != 'T' and auxiliar2[0] != 'U' and auxiliar2[0] != 'V' and auxiliar2[0] != 'W' 
                                    and auxiliar2[0] != 'X' and auxiliar2[0] != 'Y' and auxiliar2[0] != 'Z') and (auxiliar2[2] != 'a' 
                                    and auxiliar2[2] != 'b' and auxiliar2[2] != 'c' and auxiliar2[2] != 'd' and auxiliar2[2] != 'e' 
                                    and auxiliar2[2] != 'f' and auxiliar2[2] != 'g' and auxiliar2[2] != 'h' and auxiliar2[2] != 'i' 
                                    and auxiliar2[2] != 'j' and auxiliar2[2] != 'k' and auxiliar2[2] != 'l' and auxiliar2[2] != 'm' 
                                    and auxiliar2[2] != 'n' and auxiliar2[2] != 'o' and auxiliar2[2] != 'p' and auxiliar2[2] != 'q' 
                                    and auxiliar2[2] != 'r' and auxiliar2[2] != 's' and auxiliar2[2] != 't' and auxiliar2[2] != 'u' 
                                    and auxiliar2[2] != 'v' and auxiliar2[2] != 'w' and auxiliar2[2] != 'x' and auxiliar2[2] != 'y' 
                                    and auxiliar2[2] != 'z' and auxiliar2[2] != '-')) or ((auxiliar2[0] == 'A' or auxiliar2[0] == 'B' 
                                    or auxiliar2[0] == 'C' or auxiliar2[0] == 'D' or auxiliar2[0] == 'E' or auxiliar2[0] == 'F' 
                                    or auxiliar2[0] == 'G' or auxiliar2[0] == 'H' or auxiliar2[0] == 'I' or auxiliar2[0] == 'J' 
                                    or auxiliar2[0] == 'K' or auxiliar2[0] == 'L' or auxiliar2[0] == 'M' or auxiliar2[0] == 'N' 
                                    or auxiliar2[0] == 'O' or auxiliar2[0] == 'P' or auxiliar2[0] == 'Q' or auxiliar2[0] == 'R' 
                                    or auxiliar2[0] == 'S' or auxiliar2[0] == 'T' or auxiliar2[0] == 'U' or auxiliar2[0] == 'V' 
                                    or auxiliar2[0] == 'W' or auxiliar2[0] == 'X' or auxiliar2[0] == 'Y' or auxiliar2[0] == 'Z') 
                                    and (auxiliar2[1] != 'a' and auxiliar2[1] != 'b' and auxiliar2[1] != 'c' and auxiliar2[1] != 'd' 
                                    and auxiliar2[1] != 'e' and auxiliar2[1] != 'f' and auxiliar2[1] != 'g' and auxiliar2[1] != 'h' 
                                    and auxiliar2[1] != 'i' and auxiliar2[1] != 'j' and auxiliar2[1] != 'k' and auxiliar2[1] != 'l' 
                                    and auxiliar2[1] != 'm' and auxiliar2[1] != 'n' and auxiliar2[1] != 'o' and auxiliar2[1] != 'p' 
                                    and auxiliar2[1] != 'q' and auxiliar2[1] != 'r' and auxiliar2[1] != 's' and auxiliar2[1] != 't' 
                                    and auxiliar2[1] != 'u' and auxiliar2[1] != 'v' and auxiliar2[1] != 'w' and auxiliar2[1] != 'x' 
                                    and auxiliar2[1] != 'y' and auxiliar2[1] != 'z' and auxiliar2[1] != '-'))) and (numLetrasAuxiliar3 > 1)
                                    and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                                {
     
                                    numRegFiltrados++;
                                    
                                    resultado = strcasecmp(auxiliar, auxiliar2);
			
    
                                    if(resultado > 0)
                                    {
                                        positivo++;	
                                    
                                    }
                                    else if(resultado < 0)
                                    {
                                        negativo++;
                                    }           
                                    else if(resultado == 0)
                                    {
                                        igual++;
                                    }
                                
                                
                                }
                              
                                contador++;
			
                                if(contador == numero_registros)
                                {
  
                                    fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                                    fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                                    fflush(listadoOrdenado);
                                    
                                    contadorPalabrasEscritas++;
				
                                    contador = 0;
                                    positivo = 0;
                                    negativo = 0;
                                    igual = 0;
                                    
                                   
                                }
			
			
                                if(palabraBuscada == numero_registros)
                                {
                                    fseek(listado, i*sizeof(Tlista), SEEK_SET);
                                }
                                
                            }	
                
                        }
                  
                    }
                
                }
  
            }
 
        }
        else if (radioButtonPrimeraLetraSeleccionado == 1 and radioButtonSegundaLetraSeleccionado == 1 and radioButtonNumLetrasSeleccionado > 1)
        {
            
            rewind(listado);
                
            for(i=1; i<= numero_registros; i++)
            {
                    
                fread(&lista, sizeof(lista), 1, listado);
                    
                numLetrasAuxiliar3 = strlen(lista.palabra);
                
                int cont = 0, contCharacterSpecial = 0;
                
                                
                for(int i = 1; i <= numLetrasAuxiliar3; i++)
                {
                    if(lista.palabra[cont] != 'A' and lista.palabra[cont] != 'B' and lista.palabra[cont] != 'C' and lista.palabra[cont] != 'D' 
                        and lista.palabra[cont] != 'E' and lista.palabra[cont] != 'F' and lista.palabra[cont] != 'G' and lista.palabra[cont] != 'H' 
                        and lista.palabra[cont] != 'I' and lista.palabra[cont] != 'J' and lista.palabra[cont] != 'K' and lista.palabra[cont] != 'L' 
                        and lista.palabra[cont] != 'M' and lista.palabra[cont] != 'N' and lista.palabra[cont] != 'O' and lista.palabra[cont] != 'P' 
                        and lista.palabra[cont] != 'Q' and lista.palabra[cont] != 'R' and lista.palabra[cont] != 'S' and lista.palabra[cont] != 'T' 
                        and lista.palabra[cont] != 'U' and lista.palabra[cont] != 'V' and lista.palabra[cont] != 'W' and lista.palabra[cont] != 'X' 
                        and lista.palabra[cont] != 'Y' and lista.palabra[cont] != 'Z' and lista.palabra[cont] != 'a' and lista.palabra[cont] != 'b' 
                        and lista.palabra[cont] != 'c' and lista.palabra[cont] != 'd' and lista.palabra[cont] != 'e' and lista.palabra[cont] != 'f' 
                        and lista.palabra[cont] != 'g' and lista.palabra[cont] != 'h' and lista.palabra[cont] != 'i' and lista.palabra[cont] != 'j' 
                        and lista.palabra[cont] != 'k' and lista.palabra[cont] != 'l' and lista.palabra[cont] != 'm' and lista.palabra[cont] != 'n' 
                        and lista.palabra[cont] != 'o' and lista.palabra[cont] != 'p' and lista.palabra[cont] != 'q' and lista.palabra[cont] != 'r' 
                        and lista.palabra[cont] != 's' and lista.palabra[cont] != 't' and lista.palabra[cont] != 'u' and lista.palabra[cont] != 'v' 
                        and lista.palabra[cont] != 'w' and lista.palabra[cont] != 'x' and lista.palabra[cont] != 'y' and lista.palabra[cont] != 'z' 
                        and lista.palabra[cont] != '-')
                    {
   
                        contCharacterSpecial++;
                                            
                    }
                                        
                    cont++;
                                    
                                    
                }
                                
                                
                                
                if(contCharacterSpecial != 0)
                {
                    contCharacterSpecial = contCharacterSpecial / 2;
  
                    numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                }
                
                
                if(numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras)
                {
               
                    strcpy(auxiliar, lista.palabra);
                                            
                    int numRegFiltrados = 0;
                            
                    
                    for (int palabraBuscada = 1; palabraBuscada <= numero_registros; palabraBuscada++)
                    {
			
                        fseek(listado, (palabraBuscada-1)*sizeof(Tlista), SEEK_SET);
                        fread(&lista, sizeof(lista), 1, listado);
			
                        strcpy(auxiliar2, lista.palabra);
                                            
                        numLetrasAuxiliar3 = strlen(auxiliar2);
                                              
                        int cont = 0, contCharacterSpecial = 0;
                        
                                
                        for(int i = 1; i <= numLetrasAuxiliar3; i++)
                        {
                            if(auxiliar2[cont] != 'A' and auxiliar2[cont] != 'B' and auxiliar2[cont] != 'C' and auxiliar2[cont] != 'D' 
                                and auxiliar2[cont] != 'E' and auxiliar2[cont] != 'F' and auxiliar2[cont] != 'G' and auxiliar2[cont] != 'H' 
                                and auxiliar2[cont] != 'I' and auxiliar2[cont] != 'J' and auxiliar2[cont] != 'K' and auxiliar2[cont] != 'L' 
                                and auxiliar2[cont] != 'M' and auxiliar2[cont] != 'N' and auxiliar2[cont] != 'O' and auxiliar2[cont] != 'P' 
                                and auxiliar2[cont] != 'Q' and auxiliar2[cont] != 'R' and auxiliar2[cont] != 'S' and auxiliar2[cont] != 'T' 
                                and auxiliar2[cont] != 'U' and auxiliar2[cont] != 'V' and auxiliar2[cont] != 'W' and auxiliar2[cont] != 'X' 
                                and auxiliar2[cont] != 'Y' and auxiliar2[cont] != 'Z' and auxiliar2[cont] != 'a' and auxiliar2[cont] != 'b' 
                                and auxiliar2[cont] != 'c' and auxiliar2[cont] != 'd' and auxiliar2[cont] != 'e' and auxiliar2[cont] != 'f' 
                                and auxiliar2[cont] != 'g' and auxiliar2[cont] != 'h' and auxiliar2[cont] != 'i' and auxiliar2[cont] != 'j' 
                                and auxiliar2[cont] != 'k' and auxiliar2[cont] != 'l' and auxiliar2[cont] != 'm' and auxiliar2[cont] != 'n' 
                                and auxiliar2[cont] != 'o' and auxiliar2[cont] != 'p' and auxiliar2[cont] != 'q' and auxiliar2[cont] != 'r' 
                                and auxiliar2[cont] != 's' and auxiliar2[cont] != 't' and auxiliar2[cont] != 'u' and auxiliar2[cont] != 'v' 
                                and auxiliar2[cont] != 'w' and auxiliar2[cont] != 'x' and auxiliar2[cont] != 'y' and auxiliar2[cont] != 'z' 
                                and auxiliar2[cont] != '-')
                            {
                                            
                                contCharacterSpecial++;
                                            
                            }
                                        
                            cont++;
                                    
                                    
                        }
                                
                                
                                
                        if(contCharacterSpecial != 0)
                        {
                            contCharacterSpecial = contCharacterSpecial / 2;
 
                            numLetrasAuxiliar3 = numLetrasAuxiliar3 - contCharacterSpecial;
                        }
                        
                                            
                                            
                        if((numLetrasAuxiliar3 > 1) and (numLetrasAuxiliar3 >= rangoMinLetras and numLetrasAuxiliar3 <= rangoMaxLetras))
                        {
                                          
                            numRegFiltrados++;
                                    
                            resultado = strcasecmp(auxiliar, auxiliar2);
			
 
                            if(resultado > 0)
                            {
                                positivo++;	
                                    
                            }
                            else if(resultado < 0)
                            {
                                negativo++;
                            }           
                            else if(resultado == 0)
                            {
                                igual++;
                            }
                                
                                
                        }
                              
                        contador++;
			
                        if(contador == numero_registros)
                        {
       
                            fseek(listadoOrdenado, positivo*sizeof(auxiliar), SEEK_SET);
                            fwrite(&auxiliar, sizeof(auxiliar), 1, listadoOrdenado);
                            fflush(listadoOrdenado);
                                    
                            contadorPalabrasEscritas++;
				
                            contador = 0;
                            positivo = 0;
                            negativo = 0;
                            igual = 0;
                                    
                                   
                        }
			
			
                        if(palabraBuscada == numero_registros)
                        {
                            fseek(listado, i*sizeof(Tlista), SEEK_SET);
                        }
                                
                    }	
                
                }
                
            }
  
        }
    
    }
        
	
	
    
    //Para que no me de error y mejorar el rendimiento del programa al no tener que usar tanto printf
    printf("\n%d,%d.%d\n\n", primerFiltroDesactivado, segundoFiltroDesactivado, tercerFiltroDesactivado);
    
    
    //Leemos el total de registros el segundo archivo
    numero_registros2 = nRegistrosFichero2DeMiLista();
                
    //Permite situar el cursor de posicionamiento de un fichero al inicio de éste.
    rewind(listadoOrdenado);
                
    //En el caso de que no haya registros en el segundo archivo se ejecutará el bloque            
    if(numero_registros2 == 0)
    {
		//Creamos un array con un texto
        char warnings11[34] = {'T','h','e',' ','a','r','e',' ','n','o',' ','r','e','c','o','r','d','s',' ','i','n',' ','t','h','e',' ','f','i','l','e',' ','2','.','\0'};
        
        int sizeWarnings11 = strlen(warnings11);
        
        //Mostramos el contenido del array en el textview
        gtk_text_buffer_set_text (stuff->textBuffer4, warnings11, sizeWarnings11);
        
    }
                
  
  
    //Leemos los registros del fichero 2            
    for(int r = 1; r<= numero_registros2; r++)
    {
        //Permite leer un número determinado de bloques de caracteres a partir de la posición del cursor. Después de la lectura se actualiza
        //la posición del cursor en el último carácter leído            
        fread(&lista, sizeof(lista), 1, listadoOrdenado);
		        
        //Pasamos el texto a otro array
        strcpy(auxiliar3, lista.palabra);
        
        sizeAuxiliar3 = strlen(auxiliar3);
                  
        variasPalabras++;
            
        
        //Esto es para impedir que aloje más en el array del límite permitido    
        if(pos < 900000)
        {
            if(variasPalabras > 1)
            {
                palabrasFiltradasFichero[pos] = '\n';
                pos++;
                        
            }
            
                    
        
            for(int i = 0; i < sizeAuxiliar3; i++)
            {
                        
                palabrasFiltradasFichero[pos] = auxiliar3[i];
            
                pos++;
            }
                            
        }
        else
        {
                   
            char warnigs13[32] = {'E','x','c','e','e','d','s',' ','t','h','e',' ','r','a','n','g','e',' ','o','f',' ','t','h','e',' ','a','r','r','a','y','.','\0'};
                    
            int sizeWarnigs13 = strlen(warnigs13);
                    
            gtk_text_buffer_set_text (stuff->textBuffer4, warnigs13, sizeWarnigs13);
        }
                    
                    
                    
                    
        //Mostramos el contenido del array por el textview ya sea sea los resultados o que no encontro resultados
        if(r == numero_registros2)
        {
               
            palabrasFiltradasFichero[pos] = '\0';
                
            if(pos > 0 and pos < 900000)
            {
                int sizePalabrasFiltradasFichero = strlen(palabrasFiltradasFichero);
                
                gtk_text_buffer_set_text (stuff->textBuffer4, palabrasFiltradasFichero, sizePalabrasFiltradasFichero);
                    
            }
            else if(pos == 0)
            {
              
                char warnigs14[18] = {'N','o',' ','r','e','s','u','l','t','s',' ','f','o','u','n','d','.','\0'};
                    
                int sizeWarnigs14 = strlen(warnigs14);
                    
                gtk_text_buffer_set_text (stuff->textBuffer4, warnigs14, sizeWarnigs14);
            }
                
        }
                    
                    
    }
    
    
  
    
    if(radioButtonPrimeraLetraSeleccionado == 1 and radioButtonSegundaLetraSeleccionado == 1 and radioButtonNumLetrasSeleccionado == 1)
    {
        
        numero_registros2 = 0;
    }

    
 
    
    //Mostraremos en pantalla por el label labelTotalRegistros el número total de registros que hay en el fichero
    short numDigitos;
    char totalRegistros[500];
    int contador1 = 0;
    short cifra1, cifra2, cifra3, cifra4, cifra5, cifra6, cifra7, cifra8;
    
   
    
    //Calculamos las cifras que tiene la variable numero_registros
    if (numero_registros < 10)
    {
        numDigitos = 1;
 
    }
    else if (numero_registros < 100)
    {
        numDigitos = 2;
  
    }
    else if (numero_registros < 1000)
    {
        numDigitos = 3;
  
    }
    else if (numero_registros <10000)
    {
        numDigitos = 4;
  
    }
    else if (numero_registros < 100000) 
    {
        numDigitos = 5;
  
    }
    else if (numero_registros < 1000000) 
    {
        numDigitos = 6;
  
    }
    else if (numero_registros < 10000000) 
    {
        numDigitos = 7;
   
    }
    else if (numero_registros < 100000000) 
    {
        numDigitos = 8;
  
    }
    
    
  
    //Pasamos los números a caracteres en un array unidimensional de tipo char
    for(int a = 1; a <= numDigitos; a++)
    {
        if(numDigitos == 1)
        {
            if(numero_registros == 0)
            {
                totalRegistros[0] = '0';
             
            }
            else if(numero_registros == 1)
            {
                totalRegistros[0] = '1';
   
            }
            else if(numero_registros == 2)
            {
                totalRegistros[0] = '2';
   
            }
            else if(numero_registros == 3)
            {
                totalRegistros[0] = '3';
   
            }
            else if(numero_registros == 4)
            {
                totalRegistros[0] = '4';
   
            }
            else if(numero_registros == 5)
            {
                totalRegistros[0] = '5';
    
            }
            else if(numero_registros == 6)
            {
                totalRegistros[0] = '6';
    
            }
            else if(numero_registros == 7)
            {
                totalRegistros[0] = '7';
    
            }
            else if(numero_registros == 8)
            {
                totalRegistros[0] = '8';
    
            }
            else if(numero_registros == 9)
            {
                totalRegistros[0] = '9';
   
            }
            
            
            contador1++;
            
            
        }
        else if(numDigitos == 2)
        {
           
            
            if(a == numDigitos)
            {
                cifra1 = numero_registros % 10;
                cifra2 = numero_registros / 10;
            
              
                //CIFRA 2
                if(cifra2 == 1)
                {
                    totalRegistros[0] = '1';
   
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[0] = '2';
     
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[0] = '3';
   
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[0] = '4';
    
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[0] = '5';
       
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[0] = '6';
    
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[0] = '7';
    
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[0] = '8';
    
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[0] = '9';
    
                }
                
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[1] = '0';
  
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[1] = '1';
  
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[1] = '2';
    
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[1] = '3';
   
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[1] = '4';
    
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[1] = '5';
     
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[1] = '6';
    
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[1] = '7';
   
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[1] = '8';
    
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[1] = '9';
   
                }
      
            }


            contador1++;
            
        }
        else if(numDigitos == 3)
        {
            if(a == numDigitos)
            {
                cifra3 = numero_registros / 100;
                cifra2 = (numero_registros - cifra3*100)/10;
                cifra1 = numero_registros % 10;
                
               
                //CIFRA 3
                if(cifra3 == 1)
                {
                    totalRegistros[0] = '1';
   
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[0] = '2';
    
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[0] = '3';
    
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[0] = '4';
     
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[0] = '5';
    
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[0] = '6';
                
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[0] = '7';
    
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[0] = '8';
   
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[0] = '9';
   
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[1] = '0';
   
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[1] = '1';
   
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[1] = '2';
   
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[1] = '3';
    
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[1] = '4';
   
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[1] = '5';
   
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[1] = '6';
   
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[1] = '7';
    
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[1] = '8';
   
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[1] = '9';
   
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[2] = '0';
    
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[2] = '1';
   
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[2] = '2';
    
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[2] = '3';
    
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[2] = '4';
   
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[2] = '5';
    
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[2] = '6';
    
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[2] = '7';
    
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[2] = '8';
    
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[2] = '9';
    
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 4)
        {
            if(a == numDigitos)
            {
                cifra4 = numero_registros / 1000;
                cifra3 = (numero_registros - cifra4*1000)/100;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
               
                //CIFRA 4
                if(cifra4 == 1)
                {
                    totalRegistros[0] = '1';
                
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[0] = '2';
 
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[0] = '3';
   
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[0] = '4';
   
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[0] = '5';
    
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[0] = '6';
    
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[0] = '7';
   
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[0] = '8';
    
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[0] = '9';
    
                }
                
                
                totalRegistros[1] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[2] = '0';
                
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[2] = '1';
    
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[2] = '2';
      
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[2] = '3';
     
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[2] = '4';
     
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[2] = '5';
   
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[2] = '6';
    
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[2] = '7';
    
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[2] = '8';
   
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[2] = '9';
   
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[3] = '0';
     
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[3] = '1';
      
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[3] = '2';
     
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[3] = '3';
     
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[3] = '4';
    
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[3] = '5';
    
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[3] = '6';
    
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[3] = '7';
     
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[3] = '8';
     
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[3] = '9';
    
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[4] = '0';
    
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[4] = '1';
    
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[4] = '2';
      
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[4] = '3';
     
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[4] = '4';
     
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[4] = '5';
     
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[4] = '6';
    
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[4] = '7';
     
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[4] = '8';
    
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[4] = '9';
    
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 5)
        {
            if(a == numDigitos)
            {
                cifra5 = numero_registros / 10000;
                cifra4 = (numero_registros - cifra5*10000)/1000;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                          
                
                //CIFRA 5
                if(cifra5 == 1)
                {
                    totalRegistros[0] = '1';
      
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[0] = '2';
      
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[0] = '3';
     
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[0] = '4';
    
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[0] = '5';
     
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[0] = '6';
     
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[0] = '7';
      
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[0] = '8';
   
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[0] = '9';
     
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[1] = '0';
    
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[1] = '1';
     
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[1] = '2';
     
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[1] = '3';
     
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[1] = '4';
    
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[1] = '5';
     
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[1] = '6';
     
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[1] = '7';
    
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[1] = '8';
     
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[1] = '9';
    
                }
                
                
                totalRegistros[2] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[3] = '0';
    
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[3] = '1';
     
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[3] = '2';
     
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[3] = '3';
    
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[3] = '4';
    
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[3] = '5';
      
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[3] = '6';
    
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[3] = '7';
    
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[3] = '8';
    
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[3] = '9';
     
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[4] = '0';
     
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[4] = '1';
     
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[4] = '2';
    
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[4] = '3';
   
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[4] = '4';
   
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[4] = '5';
    
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[4] = '6';
    
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[4] = '7';
     
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[4] = '8';
    
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[4] = '9';
    
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[5] = '0';
    
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[5] = '1';
     
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[5] = '2';
     
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[5] = '3';
      
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[5] = '4';
     
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[5] = '5';
    
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[5] = '6';
      
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[5] = '7';
    
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[5] = '8';
    
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[5] = '9';
     
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 6)
        {
            if(a == numDigitos)
            {
                cifra6 = numero_registros / 100000;
                cifra5 = (numero_registros - cifra6*100000)/10000;
                cifra4 = ((numero_registros - cifra5*10000)/1000)%10;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
                           
                //CIFRA 6
                if(cifra6 == 1)
                {
                    totalRegistros[0] = '1';
     
                }
                else if(cifra6 == 2)
                {
                    totalRegistros[0] = '2';
      
                }
                else if(cifra6 == 3)
                {
                    totalRegistros[0] = '3';
     
                }
                else if(cifra6 == 4)
                {
                    totalRegistros[0] = '4';
       
                }
                else if(cifra6 == 5)
                {
                    totalRegistros[0] = '5';
     
                }
                else if(cifra6 == 6)
                {
                    totalRegistros[0] = '6';
       
                }
                else if(cifra6 == 7)
                {
                    totalRegistros[0] = '7';
     
                }
                else if(cifra6 == 8)
                {
                    totalRegistros[0] = '8';
     
                }
                else if(cifra6 == 9)
                {
                    totalRegistros[0] = '9';
      
                }
                
                //CIFRA 5
                if(cifra5 == 0)
                {
                    totalRegistros[1] = '0';
      
                }
                else if(cifra5 == 1)
                {
                    totalRegistros[1] = '1';
       
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[1] = '2';
     
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[1] = '3';
     
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[1] = '4';
     
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[1] = '5';
     
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[1] = '6';
    
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[1] = '7';
    
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[1] = '8';
     
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[1] = '9';
     
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[2] = '0';
    
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[2] = '1';
     
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[2] = '2';
     
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[2] = '3';
     
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[2] = '4';
      
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[2] = '5';
      
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[2] = '6';
       
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[2] = '7';
       
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[2] = '8';
      
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[2] = '9';
      
                }
                
                
                totalRegistros[3] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[4] = '0';
      
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[4] = '1';
   
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[4] = '2';
     
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[4] = '3';
     
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[4] = '4';
      
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[4] = '5';
      
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[4] = '6';
     
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[4] = '7';
                
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[4] = '8';
     
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[4] = '9';
      
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[5] = '0';
    
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[5] = '1';
     
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[5] = '2';
     
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[5] = '3';
     
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[5] = '4';
      
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[5] = '5';
     
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[5] = '6';
    
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[5] = '7';
     
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[5] = '8';
      
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[5] = '9';
   
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[6] = '0';
   
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[6] = '1';
   
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[6] = '2';
      
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[6] = '3';
    
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[6] = '4';
    
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[6] = '5';
     
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[6] = '6';
    
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[6] = '7';
     
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[6] = '8';
    
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[6] = '9';
     
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 7)
        {
            if(a == numDigitos)
            {
                cifra7 = numero_registros / 1000000;
                cifra6 = (numero_registros - cifra7*1000000)/100000;
                cifra5 = ((numero_registros - cifra6*100000)/10000)%10;
                cifra4 = ((numero_registros - cifra5*10000)/1000)%10;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
             
                //CIFRA 7
                if(cifra7 == 1)
                {
                    totalRegistros[0] = '1';
     
                }
                else if(cifra7 == 2)
                {
                    totalRegistros[0] = '2';
     
                }
                else if(cifra7 == 3)
                {
                    totalRegistros[0] = '3';
    
                }
                else if(cifra7 == 4)
                {
                    totalRegistros[0] = '4';
    
                }
                else if(cifra7 == 5)
                {
                    totalRegistros[0] = '5';
     
                }
                else if(cifra7 == 6)
                {
                    totalRegistros[0] = '6';
     
                }
                else if(cifra7 == 7)
                {
                    totalRegistros[0] = '7';
    
                }
                else if(cifra7 == 8)
                {
                    totalRegistros[0] = '8';
    
                }
                else if(cifra7 == 9)
                {
                    totalRegistros[0] = '9';
     
                }
                
                
                totalRegistros[1] = '.';
                
                contador1++;
                
                
                //CIFRA 6
                if(cifra6 == 0)
                {
                    totalRegistros[2] = '0';
     
                }
                else if(cifra6 == 1)
                {
                    totalRegistros[2] = '1';
       
                }
                else if(cifra6 == 2)
                {
                    totalRegistros[2] = '2';
       
                }
                else if(cifra6 == 3)
                {
                    totalRegistros[2] = '3';
      
                }
                else if(cifra6 == 4)
                {
                    totalRegistros[2] = '4';
      
                }
                else if(cifra6 == 5)
                {
                    totalRegistros[2] = '5';
      
                }
                else if(cifra6 == 6)
                {
                    totalRegistros[2] = '6';
      
                }
                else if(cifra6 == 7)
                {
                    totalRegistros[2] = '7';
     
                }
                else if(cifra6 == 8)
                {
                    totalRegistros[2] = '8';
      
                }
                else if(cifra6 == 9)
                {
                    totalRegistros[2] = '9';
     
                }
                
                //CIFRA 5
                if(cifra5 == 0)
                {
                    totalRegistros[3] = '0';
     
                }
                else if(cifra5 == 1)
                {
                    totalRegistros[3] = '1';
      
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[3] = '2';
    
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[3] = '3';
     
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[3] = '4';
     
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[3] = '5';
    
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[3] = '6';
    
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[3] = '7';
      
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[3] = '8';
       
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[3] = '9';
      
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[4] = '0';
    
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[4] = '1';
        
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[4] = '2';
      
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[4] = '3';
      
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[4] = '4';
      
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[4] = '5';
      
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[4] = '6';
       
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[4] = '7';
      
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[4] = '8';
      
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[4] = '9';
     
                }
                
                
                totalRegistros[5] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[6] = '0';
     
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[6] = '1';
     
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[6] = '2';
     
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[6] = '3';
       
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[6] = '4';
     
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[6] = '5';
     
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[6] = '6';
     
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[6] = '7';
      
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[6] = '8';
       
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[6] = '9';
    
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[7] = '0';
     
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[7] = '1';
      
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[7] = '2';
      
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[7] = '3';
     
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[7] = '4';
     
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[7] = '5';
     
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[7] = '6';
      
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[7] = '7';
     
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[7] = '8';
     
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[7] = '9';
      
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[8] = '0';
     
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[8] = '1';
     
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[8] = '2';
     
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[8] = '3';
      
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[8] = '4';
     
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[8] = '5';
      
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[8] = '6';
     
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[8] = '7';
     
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[8] = '8';
     
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[8] = '9';
  
                }
                
                
            }
            
            contador1++;
            
        }
        else if(numDigitos == 8)
        {
            if(a == numDigitos)
            {
                cifra8 = numero_registros / 10000000;
                cifra7 = (numero_registros - cifra8*10000000)/1000000;
                cifra6 = ((numero_registros - cifra7*1000000)/100000)%10;
                cifra5 = ((numero_registros - cifra6*100000)/10000)%10;
                cifra4 = ((numero_registros - cifra5*10000)/1000)%10;
                cifra3 = ((numero_registros - cifra4*1000)/100)%10;
                cifra2 = ((numero_registros - cifra3*100)/10)%10;
                cifra1 = numero_registros % 10;
                
              
                //CIFRA 8
                if(cifra8 == 1)
                {
                    totalRegistros[0] = '1';
   
                }
                else if(cifra8 == 2)
                {
                    totalRegistros[0] = '2';
    
                }
                else if(cifra8 == 3)
                {
                    totalRegistros[0] = '3';
    
                }
                else if(cifra8 == 4)
                {
                    totalRegistros[0] = '4';
    
                }
                else if(cifra8 == 5)
                {
                    totalRegistros[0] = '5';
     
                }
                else if(cifra8 == 6)
                {
                    totalRegistros[0] = '6';
     
                }
                else if(cifra8 == 7)
                {
                    totalRegistros[0] = '7';
     
                }
                else if(cifra8 == 8)
                {
                    totalRegistros[0] = '8';
    
                }
                else if(cifra8 == 9)
                {
                    totalRegistros[0] = '9';
     
                }
                
                
                //CIFRA 7
                if(cifra7 == 0)
                {
                    totalRegistros[1] = '0';
     
                }
                else if(cifra7 == 1)
                {
                    totalRegistros[1] = '1';
      
                }
                else if(cifra7 == 2)
                {
                    totalRegistros[1] = '2';
     
                }
                else if(cifra7 == 3)
                {
                    totalRegistros[1] = '3';
     
                }
                else if(cifra7 == 4)
                {
                    totalRegistros[1] = '4';
    
                }
                else if(cifra7 == 5)
                {
                    totalRegistros[1] = '5';
     
                }
                else if(cifra7 == 6)
                {
                    totalRegistros[1] = '6';
      
                }
                else if(cifra7 == 7)
                {
                    totalRegistros[1] = '7';
     
                }
                else if(cifra7 == 8)
                {
                    totalRegistros[1] = '8';
     
                }
                else if(cifra7 == 9)
                {
                    totalRegistros[1] = '9';
     
                }
                
                
                totalRegistros[2] = '.';
                
                contador1++;
                
                
                //CIFRA 6
                if(cifra6 == 0)
                {
                    totalRegistros[3] = '0';
      
                }
                else if(cifra6 == 1)
                {
                    totalRegistros[3] = '1';
       
                }
                else if(cifra6 == 2)
                {
                    totalRegistros[3] = '2';
     
                }
                else if(cifra6 == 3)
                {
                    totalRegistros[3] = '3';
      
                }
                else if(cifra6 == 4)
                {
                    totalRegistros[3] = '4';
     
                }
                else if(cifra6 == 5)
                {
                    totalRegistros[3] = '5';
      
                }
                else if(cifra6 == 6)
                {
                    totalRegistros[3] = '6';
      
                }
                else if(cifra6 == 7)
                {
                    totalRegistros[3] = '7';
      
                }
                else if(cifra6 == 8)
                {
                    totalRegistros[3] = '8';
      
                }
                else if(cifra6 == 9)
                {
                    totalRegistros[3] = '9';
      
                }
                
                //CIFRA 5
                if(cifra5 == 0)
                {
                    totalRegistros[4] = '0';
     
                }
                else if(cifra5 == 1)
                {
                    totalRegistros[4] = '1';
     
                }
                else if(cifra5 == 2)
                {
                    totalRegistros[4] = '2';
        
                }
                else if(cifra5 == 3)
                {
                    totalRegistros[4] = '3';
       
                }
                else if(cifra5 == 4)
                {
                    totalRegistros[4] = '4';
      
                }
                else if(cifra5 == 5)
                {
                    totalRegistros[4] = '5';
       
                }
                else if(cifra5 == 6)
                {
                    totalRegistros[4] = '6';
       
                }
                else if(cifra5 == 7)
                {
                    totalRegistros[4] = '7';
       
                }
                else if(cifra5 == 8)
                {
                    totalRegistros[4] = '8';
      
                }
                else if(cifra5 == 9)
                {
                    totalRegistros[4] = '9';
       
                }
                
                
                //CIFRA 4
                if(cifra4 == 0)
                {
                    totalRegistros[5] = '0';
        
                }
                else if(cifra4 == 1)
                {
                    totalRegistros[5] = '1';
       
                }
                else if(cifra4 == 2)
                {
                    totalRegistros[5] = '2';
       
                }
                else if(cifra4 == 3)
                {
                    totalRegistros[5] = '3';
       
                }
                else if(cifra4 == 4)
                {
                    totalRegistros[5] = '4';
      
                }
                else if(cifra4 == 5)
                {
                    totalRegistros[5] = '5';
        
                }
                else if(cifra4 == 6)
                {
                    totalRegistros[5] = '6';
       
                }
                else if(cifra4 == 7)
                {
                    totalRegistros[5] = '7';
       
                }
                else if(cifra4 == 8)
                {
                    totalRegistros[5] = '8';
      
                }
                else if(cifra4 == 9)
                {
                    totalRegistros[5] = '9';
      
                }
                
                
                totalRegistros[6] = '.';
                
                contador1++;
                
                
                //CIFRA 3
                if(cifra3 == 0)
                {
                    totalRegistros[7] = '0';
      
                }
                else if(cifra3 == 1)
                {
                    totalRegistros[7] = '1';
       
                }
                else if(cifra3 == 2)
                {
                    totalRegistros[7] = '2';
      
                }
                else if(cifra3 == 3)
                {
                    totalRegistros[7] = '3';
        
                }
                else if(cifra3 == 4)
                {
                    totalRegistros[7] = '4';
        
                }
                else if(cifra3 == 5)
                {
                    totalRegistros[7] = '5';
      
                }
                else if(cifra3 == 6)
                {
                    totalRegistros[7] = '6';
        
                }
                else if(cifra3 == 7)
                {
                    totalRegistros[7] = '7';
       
                }
                else if(cifra3 == 8)
                {
                    totalRegistros[7] = '8';
       
                }
                else if(cifra3 == 9)
                {
                    totalRegistros[7] = '9';
       
                }
                
                
                //CIFRA 2
                if(cifra2 == 0)
                {
                    totalRegistros[8] = '0';
        
                }
                else if(cifra2 == 1)
                {
                    totalRegistros[8] = '1';
        
                }
                else if(cifra2 == 2)
                {
                    totalRegistros[8] = '2';
       
                }
                else if(cifra2 == 3)
                {
                    totalRegistros[8] = '3';
          
                }
                else if(cifra2 == 4)
                {
                    totalRegistros[8] = '4';
        
                }
                else if(cifra2 == 5)
                {
                    totalRegistros[8] = '5';
       
                }
                else if(cifra2 == 6)
                {
                    totalRegistros[8] = '6';
        
                }
                else if(cifra2 == 7)
                {
                    totalRegistros[8] = '7';
       
                }
                else if(cifra2 == 8)
                {
                    totalRegistros[8] = '8';
       
                }
                else if(cifra2 == 9)
                {
                    totalRegistros[8] = '9';
      
                }
                
                
                //CIFRA 1
                if(cifra1 == 0)
                {
                    totalRegistros[9] = '0';
       
                }
                else if(cifra1 == 1)
                {
                    totalRegistros[9] = '1';
      
                }
                else if(cifra1 == 2)
                {
                    totalRegistros[9] = '2';
        
                }
                else if(cifra1 == 3)
                {
                    totalRegistros[9] = '3';
        
                }
                else if(cifra1 == 4)
                {
                    totalRegistros[9] = '4';
        
                }
                else if(cifra1 == 5)
                {
                    totalRegistros[9] = '5';
       
                }
                else if(cifra1 == 6)
                {
                    totalRegistros[9] = '6';
      
                }
                else if(cifra1 == 7)
                {
                    totalRegistros[9] = '7';
     
                }
                else if(cifra1 == 8)
                {
                    totalRegistros[9] = '8';
       
                }
                else if(cifra1 == 9)
                {
                    totalRegistros[9] = '9';
       
                }
                
                
            }
            
            contador1++;
            
        }
         
        
    }
    
    
    //Ponemos esto para indicar que ahí se acaba el array
    totalRegistros[contador1] = '\0';
    
    
    
    //Mostramos por el label el total de registros filtrados
    short numDigitos2;
    char totalRegistrosFiltrados[500];
    int contador2 = 0;
    short cifra1b, cifra2b, cifra3b, cifra4b, cifra5b, cifra6b;
    
    
    //Calculamos el número de cifras que tiene la variable numero_registros2
    if (numero_registros2 < 10)
    {
        numDigitos2 = 1;
  
    }
    else if (numero_registros2 < 100)
    {
        numDigitos2 = 2;
  
    }
    else if (numero_registros2 < 1000)
    {
        numDigitos2 = 3;
   
    }
    else if (numero_registros2 <10000)
    {
        numDigitos2 = 4;
   
    }
    else if (numero_registros2 < 100000) 
    {
        numDigitos2 = 5;
 
    }
    else if (numero_registros2 < 1000000) 
    {
        numDigitos2 = 6;
  
    }
    
    
    
  
	//Pasamos los números a caracteres en un array unidimensional
    for(int a = 1; a <= numDigitos2; a++)
    {
        if(numDigitos2 == 1)
        {
            if(numero_registros2 == 0)
            {
                totalRegistrosFiltrados[0] = '0';
  
            }
            else if(numero_registros2 == 1)
            {
                totalRegistrosFiltrados[0] = '1';
  
            }
            else if(numero_registros2 == 2)
            {
                totalRegistrosFiltrados[0] = '2';
       
            }
            else if(numero_registros2 == 3)
            {
                totalRegistrosFiltrados[0] = '3';
     
            }
            else if(numero_registros2 == 4)
            {
                totalRegistrosFiltrados[0] = '4';
     
            }
            else if(numero_registros2 == 5)
            {
                totalRegistrosFiltrados[0] = '5';
      
            }
            else if(numero_registros2 == 6)
            {
                totalRegistrosFiltrados[0] = '6';
       
            }
            else if(numero_registros2 == 7)
            {
                totalRegistrosFiltrados[0] = '7';
     
            }
            else if(numero_registros2 == 8)
            {
                totalRegistrosFiltrados[0] = '8';
     
            }
            else if(numero_registros2 == 9)
            {
                totalRegistrosFiltrados[0] = '9';
    
            }
            
            
            contador2++;
            
            
        }
        else if(numDigitos2 == 2)
        {
           
            
            if(a == numDigitos2)
            {
                cifra1b = numero_registros2 % 10;
                cifra2b = numero_registros2 / 10;
            
              
                //CIFRA 2 B
                if(cifra2b == 1)
                {
                    totalRegistrosFiltrados[0] = '1';
        
                }
                else if(cifra2b == 2)
                {
                    totalRegistrosFiltrados[0] = '2';
        
                }
                else if(cifra2b == 3)
                {
                    totalRegistrosFiltrados[0] = '3';
     
                }
                else if(cifra2b == 4)
                {
                    totalRegistrosFiltrados[0] = '4';
      
                }
                else if(cifra2b == 5)
                {
                    totalRegistrosFiltrados[0] = '5';
     
                }
                else if(cifra2b == 6)
                {
                    totalRegistrosFiltrados[0] = '6';
      
                }
                else if(cifra2b == 7)
                {
                    totalRegistrosFiltrados[0] = '7';
     
                }
                else if(cifra2b == 8)
                {
                    totalRegistrosFiltrados[0] = '8';
     
                }
                else if(cifra2b == 9)
                {
                    totalRegistrosFiltrados[0] = '9';
     
                }
                
                
                
                //CIFRA 1 B
                if(cifra1b == 0)
                {
                    totalRegistrosFiltrados[1] = '0';
     
                }
                else if(cifra1b == 1)
                {
                    totalRegistrosFiltrados[1] = '1';
     
                }
                else if(cifra1b == 2)
                {
                    totalRegistrosFiltrados[1] = '2';
      
                }
                else if(cifra1b == 3)
                {
                    totalRegistrosFiltrados[1] = '3';
     
                }
                else if(cifra1b == 4)
                {
                    totalRegistrosFiltrados[1] = '4';
     
                }
                else if(cifra1b == 5)
                {
                    totalRegistrosFiltrados[1] = '5';
      
                }
                else if(cifra1b == 6)
                {
                    totalRegistrosFiltrados[1] = '6';
    
                }
                else if(cifra1b == 7)
                {
                    totalRegistrosFiltrados[1] = '7';
    
                }
                else if(cifra1b == 8)
                {
                    totalRegistrosFiltrados[1] = '8';
     
                }
                else if(cifra1b == 9)
                {
                    totalRegistrosFiltrados[1] = '9';
     
                }
      
            }


            contador2++;
            
        }
        else if(numDigitos2 == 3)
        {
            if(a == numDigitos2)
            {
                cifra3b = numero_registros2 / 100;
                cifra2b = (numero_registros2 - cifra3b*100)/10;
                cifra1b = numero_registros2 % 10;
                
              
                //CIFRA 3 B
                if(cifra3b == 1)
                {
                    totalRegistrosFiltrados[0] = '1';
     
                }
                else if(cifra3b == 2)
                {
                    totalRegistrosFiltrados[0] = '2';
     
                }
                else if(cifra3b == 3)
                {
                    totalRegistrosFiltrados[0] = '3';
    
                }
                else if(cifra3b == 4)
                {
                    totalRegistrosFiltrados[0] = '4';
     
                }
                else if(cifra3b == 5)
                {
                    totalRegistrosFiltrados[0] = '5';
    
                }
                else if(cifra3b == 6)
                {
                    totalRegistrosFiltrados[0] = '6';
     
                }
                else if(cifra3b == 7)
                {
                    totalRegistrosFiltrados[0] = '7';
     
                }
                else if(cifra3b == 8)
                {
                    totalRegistrosFiltrados[0] = '8';
    
                }
                else if(cifra3b == 9)
                {
                    totalRegistrosFiltrados[0] = '9';
     
                }
                
                
                //CIFRA 2 B
                if(cifra2b == 0)
                {
                    totalRegistrosFiltrados[1] = '0';
     
                }
                else if(cifra2b == 1)
                {
                    totalRegistrosFiltrados[1] = '1';
     
                }
                else if(cifra2b == 2)
                {
                    totalRegistrosFiltrados[1] = '2';
       
                }
                else if(cifra2b == 3)
                {
                    totalRegistrosFiltrados[1] = '3';
       
                }
                else if(cifra2b == 4)
                {
                    totalRegistrosFiltrados[1] = '4';
       
                }
                else if(cifra2b == 5)
                {
                    totalRegistrosFiltrados[1] = '5';
        
                }
                else if(cifra2b == 6)
                {
                    totalRegistrosFiltrados[1] = '6';
        
                }
                else if(cifra2b == 7)
                {
                    totalRegistrosFiltrados[1] = '7';
       
                }
                else if(cifra2b == 8)
                {
                    totalRegistrosFiltrados[1] = '8';
        
                }
                else if(cifra2b == 9)
                {
                    totalRegistrosFiltrados[1] = '9';
       
                }
                
                
                //CIFRA 1 B
                if(cifra1b == 0)
                {
                    totalRegistrosFiltrados[2] = '0';
       
                }
                else if(cifra1b == 1)
                {
                    totalRegistrosFiltrados[2] = '1';
      
                }
                else if(cifra1b == 2)
                {
                    totalRegistrosFiltrados[2] = '2';
      
                }
                else if(cifra1b == 3)
                {
                    totalRegistrosFiltrados[2] = '3';
      
                }
                else if(cifra1b == 4)
                {
                    totalRegistrosFiltrados[2] = '4';
       
                }
                else if(cifra1b == 5)
                {
                    totalRegistrosFiltrados[2] = '5';
      
                }
                else if(cifra1b == 6)
                {
                    totalRegistrosFiltrados[2] = '6';
       
                }
                else if(cifra1b == 7)
                {
                    totalRegistrosFiltrados[2] = '7';
       
                }
                else if(cifra1b == 8)
                {
                    totalRegistrosFiltrados[2] = '8';
        
                }
                else if(cifra1b == 9)
                {
                    totalRegistrosFiltrados[2] = '9';
       
                }
                
                
            }
            
            contador2++;
            
        }
        else if(numDigitos2 == 4)
        {
            if(a == numDigitos2)
            {
                cifra4b = numero_registros2 / 1000;
                cifra3b = (numero_registros2 - cifra4b*1000)/100;
                cifra2b = ((numero_registros2 - cifra3b*100)/10)%10;
                cifra1b = numero_registros2 % 10;
                
              
                //CIFRA 4 B
                if(cifra4b == 1)
                {
                    totalRegistrosFiltrados[0] = '1';
      
                }
                else if(cifra4b == 2)
                {
                    totalRegistrosFiltrados[0] = '2';
       
                }
                else if(cifra4b == 3)
                {
                    totalRegistrosFiltrados[0] = '3';
        
                }
                else if(cifra4b == 4)
                {
                    totalRegistrosFiltrados[0] = '4';
       
                }
                else if(cifra4b == 5)
                {
                    totalRegistrosFiltrados[0] = '5';
       
                }
                else if(cifra4b == 6)
                {
                    totalRegistrosFiltrados[0] = '6';
       
                }
                else if(cifra4b == 7)
                {
                    totalRegistrosFiltrados[0] = '7';
       
                }
                else if(cifra4b == 8)
                {
                    totalRegistrosFiltrados[0] = '8';
       
                }
                else if(cifra4b == 9)
                {
                    totalRegistrosFiltrados[0] = '9';
       
                }
                
                
                totalRegistrosFiltrados[1] = '.';
                
                contador2++;
                
                
                //CIFRA 3 B
                if(cifra3b == 0)
                {
                    totalRegistrosFiltrados[2] = '0';
      
                }
                else if(cifra3b == 1)
                {
                    totalRegistrosFiltrados[2] = '1';
     
                }
                else if(cifra3b == 2)
                {
                    totalRegistrosFiltrados[2] = '2';
       
                }
                else if(cifra3b == 3)
                {
                    totalRegistrosFiltrados[2] = '3';
      
                }
                else if(cifra3b == 4)
                {
                    totalRegistrosFiltrados[2] = '4';
      
                }
                else if(cifra3b == 5)
                {
                    totalRegistrosFiltrados[2] = '5';
      
                }
                else if(cifra3b == 6)
                {
                    totalRegistrosFiltrados[2] = '6';
      
                }
                else if(cifra3b == 7)
                {
                    totalRegistrosFiltrados[2] = '7';
       
                }
                else if(cifra3b == 8)
                {
                    totalRegistrosFiltrados[2] = '8';
      
                }
                else if(cifra3b == 9)
                {
                    totalRegistrosFiltrados[2] = '9';
      
                }
                
                
                //CIFRA 2 B
                if(cifra2b == 0)
                {
                    totalRegistrosFiltrados[3] = '0';
     
                }
                else if(cifra2b == 1)
                {
                    totalRegistrosFiltrados[3] = '1';
       
                }
                else if(cifra2b == 2)
                {
                    totalRegistrosFiltrados[3] = '2';
      
                }
                else if(cifra2b == 3)
                {
                    totalRegistrosFiltrados[3] = '3';
      
                }
                else if(cifra2b == 4)
                {
                    totalRegistrosFiltrados[3] = '4';
      
                }
                else if(cifra2b == 5)
                {
                    totalRegistrosFiltrados[3] = '5';
      
                }
                else if(cifra2b == 6)
                {
                    totalRegistrosFiltrados[3] = '6';
      
                }
                else if(cifra2b == 7)
                {
                    totalRegistrosFiltrados[3] = '7';
      
                }
                else if(cifra2b == 8)
                {
                    totalRegistrosFiltrados[3] = '8';
      
                }
                else if(cifra2b == 9)
                {
                    totalRegistrosFiltrados[3] = '9';
       
                }
                
                
                //CIFRA 1 B
                if(cifra1b == 0)
                {
                    totalRegistrosFiltrados[4] = '0';
       
                }
                else if(cifra1b == 1)
                {
                    totalRegistrosFiltrados[4] = '1';
       
                }
                else if(cifra1b == 2)
                {
                    totalRegistrosFiltrados[4] = '2';
      
                }
                else if(cifra1b == 3)
                {
                    totalRegistrosFiltrados[4] = '3';
       
                }
                else if(cifra1b == 4)
                {
                    totalRegistrosFiltrados[4] = '4';
        
                }
                else if(cifra1b == 5)
                {
                    totalRegistrosFiltrados[4] = '5';
      
                }
                else if(cifra1b == 6)
                {
                    totalRegistrosFiltrados[4] = '6';
       
                }
                else if(cifra1b == 7)
                {
                    totalRegistrosFiltrados[4] = '7';
        
                }
                else if(cifra1b == 8)
                {
                    totalRegistrosFiltrados[4] = '8';
       
                }
                else if(cifra1b == 9)
                {
                    totalRegistrosFiltrados[4] = '9';
       
                }
                
                
            }
            
            contador2++;
            
        }
        else if(numDigitos2 == 5)
        {
            if(a == numDigitos2)
            {
                cifra5b = numero_registros2 / 10000;
                cifra4b = (numero_registros2 - cifra5b*10000)/1000;
                cifra3b = ((numero_registros2 - cifra4b*1000)/100)%10;
                cifra2b = ((numero_registros2 - cifra3b*100)/10)%10;
                cifra1b = numero_registros2 % 10;
                          
                
                //CIFRA 5 B
                if(cifra5b == 1)
                {
                    totalRegistrosFiltrados[0] = '1';
     
                }
                else if(cifra5b == 2)
                {
                    totalRegistrosFiltrados[0] = '2';
      
                }
                else if(cifra5b == 3)
                {
                    totalRegistrosFiltrados[0] = '3';
      
                }
                else if(cifra5b == 4)
                {
                    totalRegistrosFiltrados[0] = '4';
      
                }
                else if(cifra5b == 5)
                {
                    totalRegistrosFiltrados[0] = '5';
      
                }
                else if(cifra5b == 6)
                {
                    totalRegistrosFiltrados[0] = '6';
      
                }
                else if(cifra5b == 7)
                {
                    totalRegistrosFiltrados[0] = '7';
       
                }
                else if(cifra5b == 8)
                {
                    totalRegistrosFiltrados[0] = '8';
      
                }
                else if(cifra5b == 9)
                {
                    totalRegistrosFiltrados[0] = '9';
      
                }
                
                
                //CIFRA 4 B
                if(cifra4b == 0)
                {
                    totalRegistrosFiltrados[1] = '0';
     
                }
                else if(cifra4b == 1)
                {
                    totalRegistrosFiltrados[1] = '1';
      
                }
                else if(cifra4b == 2)
                {
                    totalRegistrosFiltrados[1] = '2';
      
                }
                else if(cifra4b == 3)
                {
                    totalRegistrosFiltrados[1] = '3';
       
                }
                else if(cifra4b == 4)
                {
                    totalRegistrosFiltrados[1] = '4';
     
                }
                else if(cifra4b == 5)
                {
                    totalRegistrosFiltrados[1] = '5';
     
                }
                else if(cifra4b == 6)
                {
                    totalRegistrosFiltrados[1] = '6';
      
                }
                else if(cifra4b == 7)
                {
                    totalRegistrosFiltrados[1] = '7';
     
                }
                else if(cifra4b == 8)
                {
                    totalRegistrosFiltrados[1] = '8';
      
                }
                else if(cifra4b == 9)
                {
                    totalRegistrosFiltrados[1] = '9';
      
                }
                
                
                totalRegistrosFiltrados[2] = '.';
                
                contador2++;
                
                
                //CIFRA 3 B
                if(cifra3b == 0)
                {
                    totalRegistrosFiltrados[3] = '0';
       
                }
                else if(cifra3b == 1)
                {
                    totalRegistrosFiltrados[3] = '1';
       
                }
                else if(cifra3b == 2)
                {
                    totalRegistrosFiltrados[3] = '2';
       
                }
                else if(cifra3b == 3)
                {
                    totalRegistrosFiltrados[3] = '3';
         
                }
                else if(cifra3b == 4)
                {
                    totalRegistrosFiltrados[3] = '4';
       
                }
                else if(cifra3b == 5)
                {
                    totalRegistrosFiltrados[3] = '5';
        
                }
                else if(cifra3b == 6)
                {
                    totalRegistrosFiltrados[3] = '6';
           
                }
                else if(cifra3b == 7)
                {
                    totalRegistrosFiltrados[3] = '7';
         
                }
                else if(cifra3b == 8)
                {
                    totalRegistrosFiltrados[3] = '8';
            
                }
                else if(cifra3b == 9)
                {
                    totalRegistrosFiltrados[3] = '9';
           
                }
                
                
                //CIFRA 2 B
                if(cifra2b == 0)
                {
                    totalRegistrosFiltrados[4] = '0';
           
                }
                else if(cifra2b == 1)
                {
                    totalRegistrosFiltrados[4] = '1';
           
                }
                else if(cifra2b == 2)
                {
                    totalRegistrosFiltrados[4] = '2';
           
                }
                else if(cifra2b == 3)
                {
                    totalRegistrosFiltrados[4] = '3';
           
                }
                else if(cifra2b == 4)
                {
                    totalRegistrosFiltrados[4] = '4';
         
                }
                else if(cifra2b == 5)
                {
                    totalRegistrosFiltrados[4] = '5';
           
                }
                else if(cifra2b == 6)
                {
                    totalRegistrosFiltrados[4] = '6';
          
                }
                else if(cifra2b == 7)
                {
                    totalRegistrosFiltrados[4] = '7';
          
                }
                else if(cifra2b == 8)
                {
                    totalRegistrosFiltrados[4] = '8';
          
                }
                else if(cifra2b == 9)
                {
                    totalRegistrosFiltrados[4] = '9';
         
                }
                
                
                //CIFRA 1 B
                if(cifra1b == 0)
                {
                    totalRegistrosFiltrados[5] = '0';
          
                }
                else if(cifra1b == 1)
                {
                    totalRegistrosFiltrados[5] = '1';
          
                }
                else if(cifra1b == 2)
                {
                    totalRegistrosFiltrados[5] = '2';
           
                }
                else if(cifra1b == 3)
                {
                    totalRegistrosFiltrados[5] = '3';
           
                }
                else if(cifra1b == 4)
                {
                    totalRegistrosFiltrados[5] = '4';
           
                }
                else if(cifra1b == 5)
                {
                    totalRegistrosFiltrados[5] = '5';
            
                }
                else if(cifra1b == 6)
                {
                    totalRegistrosFiltrados[5] = '6';
             
                }
                else if(cifra1b == 7)
                {
                    totalRegistrosFiltrados[5] = '7';
              
                }
                else if(cifra1b == 8)
                {
                    totalRegistrosFiltrados[5] = '8';
              
                }
                else if(cifra1b == 9)
                {
                    totalRegistrosFiltrados[5] = '9';
             
                }
                
                
            }
            
            contador2++;
            
        }
        else if(numDigitos2 == 6)
        {
            if(a == numDigitos2)
            {
                cifra6b = numero_registros2 / 100000;
                cifra5b = (numero_registros2 - cifra6b*100000)/10000;
                cifra4b = ((numero_registros2 - cifra5b*10000)/1000)%10;
                cifra3b = ((numero_registros2 - cifra4b*1000)/100)%10;
                cifra2b = ((numero_registros2 - cifra3b*100)/10)%10;
                cifra1b = numero_registros2 % 10;
                   
                
                //CIFRA 6 B
                if(cifra6b == 1)
                {
                    totalRegistrosFiltrados[0] = '1';
             
                }
                else if(cifra6b == 2)
                {
                    totalRegistrosFiltrados[0] = '2';
               
                }
                else if(cifra6b == 3)
                {
                    totalRegistrosFiltrados[0] = '3';
              
                }
                else if(cifra6b == 4)
                {
                    totalRegistrosFiltrados[0] = '4';
               
                }
                else if(cifra6b == 5)
                {
                    totalRegistrosFiltrados[0] = '5';
         
                }
                else if(cifra6b == 6)
                {
                    totalRegistrosFiltrados[0] = '6';
            
                }
                else if(cifra6b == 7)
                {
                    totalRegistrosFiltrados[0] = '7';
           
                }
                else if(cifra6b == 8)
                {
                    totalRegistrosFiltrados[0] = '8';
          
                }
                else if(cifra6b == 9)
                {
                    totalRegistrosFiltrados[0] = '9';
       
                }
                
                //CIFRA 5 B
                if(cifra5b == 0)
                {
                    totalRegistrosFiltrados[1] = '0';
           
                }
                else if(cifra5b == 1)
                {
                    totalRegistrosFiltrados[1] = '1';
           
                }
                else if(cifra5b == 2)
                {
                    totalRegistrosFiltrados[1] = '2';
          
                }
                else if(cifra5b == 3)
                {
                    totalRegistrosFiltrados[1] = '3';
             
                }
                else if(cifra5b == 4)
                {
                    totalRegistrosFiltrados[1] = '4';
           
                }
                else if(cifra5b == 5)
                {
                    totalRegistrosFiltrados[1] = '5';
           
                }
                else if(cifra5b == 6)
                {
                    totalRegistrosFiltrados[1] = '6';
             
                }
                else if(cifra5b == 7)
                {
                    totalRegistrosFiltrados[1] = '7';
             
                }
                else if(cifra5b == 8)
                {
                    totalRegistrosFiltrados[1] = '8';
            
                }
                else if(cifra5b == 9)
                {
                    totalRegistrosFiltrados[1] = '9';
          
                }
                
                
                //CIFRA 4 B
                if(cifra4b == 0)
                {
                    totalRegistrosFiltrados[2] = '0';
         
                }
                else if(cifra4b == 1)
                {
                    totalRegistrosFiltrados[2] = '1';
         
                }
                else if(cifra4b == 2)
                {
                    totalRegistrosFiltrados[2] = '2';
          
                }
                else if(cifra4b == 3)
                {
                    totalRegistrosFiltrados[2] = '3';
          
                }
                else if(cifra4b == 4)
                {
                    totalRegistrosFiltrados[2] = '4';
        
                }
                else if(cifra4b == 5)
                {
                    totalRegistrosFiltrados[2] = '5';
        
                }
                else if(cifra4b == 6)
                {
                    totalRegistrosFiltrados[2] = '6';
         
                }
                else if(cifra4 == 7)
                {
                    totalRegistrosFiltrados[2] = '7';
        
                }
                else if(cifra4b == 8)
                {
                    totalRegistrosFiltrados[2] = '8';
        
                }
                else if(cifra4b == 9)
                {
                    totalRegistrosFiltrados[2] = '9';
       
                }
                
                
                totalRegistrosFiltrados[3] = '.';
                
                contador2++;
                
                
                //CIFRA 3 B
                if(cifra3b == 0)
                {
                    totalRegistrosFiltrados[4] = '0';
       
                }
                else if(cifra3b == 1)
                {
                    totalRegistrosFiltrados[4] = '1';
       
                }
                else if(cifra3b == 2)
                {
                    totalRegistrosFiltrados[4] = '2';
       
                }
                else if(cifra3b == 3)
                {
                    totalRegistrosFiltrados[4] = '3';
       
                }
                else if(cifra3b == 4)
                {
                    totalRegistrosFiltrados[4] = '4';
        
                }
                else if(cifra3b == 5)
                {
                    totalRegistrosFiltrados[4] = '5';
        
                }
                else if(cifra3b == 6)
                {
                    totalRegistrosFiltrados[4] = '6';
       
                }
                else if(cifra3b == 7)
                {
                    totalRegistrosFiltrados[4] = '7';
        
                }
                else if(cifra3b == 8)
                {
                    totalRegistrosFiltrados[4] = '8';
        
                }
                else if(cifra3b == 9)
                {
                    totalRegistrosFiltrados[4] = '9';
         
                }
                
                
                //CIFRA 2 B
                if(cifra2b == 0)
                {
                    totalRegistrosFiltrados[5] = '0';
        
                }
                else if(cifra2b == 1)
                {
                    totalRegistrosFiltrados[5] = '1';
          
                }
                else if(cifra2b == 2)
                {
                    totalRegistrosFiltrados[5] = '2';
          
                }
                else if(cifra2b == 3)
                {
                    totalRegistrosFiltrados[5] = '3';
          
                }
                else if(cifra2b == 4)
                {
                    totalRegistrosFiltrados[5] = '4';
         
                }
                else if(cifra2b == 5)
                {
                    totalRegistrosFiltrados[5] = '5';
          
                }
                else if(cifra2b == 6)
                {
                    totalRegistrosFiltrados[5] = '6';
         
                }
                else if(cifra2b == 7)
                {
                    totalRegistrosFiltrados[5] = '7';
         
                }
                else if(cifra2b == 8)
                {
                    totalRegistrosFiltrados[5] = '8';
        
                }
                else if(cifra2b == 9)
                {
                    totalRegistrosFiltrados[5] = '9';
        
                }
                
                
                //CIFRA 1 B
                if(cifra1b == 0)
                {
                    totalRegistrosFiltrados[6] = '0';
       
                }
                else if(cifra1b == 1)
                {
                    totalRegistrosFiltrados[6] = '1';
            
                }
                else if(cifra1b == 2)
                {
                    totalRegistrosFiltrados[6] = '2';
          
                }
                else if(cifra1b == 3)
                {
                    totalRegistrosFiltrados[6] = '3';
         
                }
                else if(cifra1b == 4)
                {
                    totalRegistrosFiltrados[6] = '4';
         
                }
                else if(cifra1b == 5)
                {
                    totalRegistrosFiltrados[6] = '5';
        
                }
                else if(cifra1b == 6)
                {
                    totalRegistrosFiltrados[6] = '6';
          
                }
                else if(cifra1b == 7)
                {
                    totalRegistrosFiltrados[6] = '7';
        
                }
                else if(cifra1b == 8)
                {
                    totalRegistrosFiltrados[6] = '8';
         
                }
                else if(cifra1b == 9)
                {
                    totalRegistrosFiltrados[6] = '9';
       
                }
                
                
            }
            
            contador2++;
            
        }
        
        
    }
    
    
    //Esto es para indicar que ahí se acaba el array
    totalRegistrosFiltrados[contador2] = '\0';
    
    
    
    //CALCULAR TIEMPO DE EJECUCIÓN
    seg2 = clock();
    tiempo = (float(seg2-seg1)/1000000);
    
    
    //AHORA LO PASAMOS AL LABEL TIEMPO
    char tiempoLabel[5000];
    int contador3 = 0;
    short numDigitosTime;
    short parteEntera, parteDecimalAEntero, cifraEntera1, cifraEntera2, cifraEntera3, cifraDecimal1, cifraDecimal2, cifraDecimal3;
    float parteDecimal;
    
    
    //Calculamos las cifras de la variable tiempo
    if (tiempo < 10)
    {
        numDigitosTime = 1;
    
    }
    else if (tiempo < 100)
    {
        numDigitosTime = 2;
        
    }
    else if (tiempo < 1000)
    {
        numDigitosTime = 3;
       
    }
    else if (tiempo > 1000)
    {
        //cout<<"Fuera de rango"<<endl;
    }
    
    
    numDigitosTime = numDigitosTime + 6;
    
   
    //Pasamos los números a caracteres en un array unidimensional
    for(int b = 1; b <= numDigitosTime; b++)
    {
        if(numDigitosTime == 7)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                 
                parteDecimal = tiempo - parteEntera;
                
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifraDecimal3 = parteDecimalAEntero / 100;
                cifraDecimal2 = (parteDecimalAEntero - cifraDecimal3*100)/10;
                cifraDecimal1 = parteDecimalAEntero % 10;
                
     
                
                //PARTE ENTERA
                if(parteEntera == 0)
                {
                    tiempoLabel[0] = '0';
     
                }
                else if(parteEntera == 1)
                {
                    tiempoLabel[0] = '1';
         
                }
                else if(parteEntera == 2)
                {
                    tiempoLabel[0] = '2';
        
                }
                else if(parteEntera == 3)
                {
                    tiempoLabel[0] = '3';
        
                }
                else if(parteEntera == 4)
                {
                    tiempoLabel[0] = '4';
         
                }
                else if(parteEntera == 5)
                {
                    tiempoLabel[0] = '5';
       
                }
                else if(parteEntera == 6)
                {
                    tiempoLabel[0] = '6';
          
                }
                else if(parteEntera == 7)
                {
                    tiempoLabel[0] = '7';
        
                }
                else if(parteEntera == 8)
                {
                    tiempoLabel[0] = '8';
          
                }
                else if(parteEntera == 9)
                {
                    tiempoLabel[0] = '9';
         
                }
                
                
                tiempoLabel[1] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA DECIMAL 3
                if(cifraDecimal3 == 0)
                {
                    tiempoLabel[2] = '0';
          
                }
                else if(cifraDecimal3 == 1)
                {
                    
                    tiempoLabel[2] = '1';
        
                }
                else if(cifraDecimal3 == 2)
                {
                    
                    tiempoLabel[2] = '2';
        
                }
                else if(cifraDecimal3 == 3)
                {
                    
                    tiempoLabel[2] = '3';
        
                }
                else if(cifraDecimal3 == 4)
                {
                    
                    tiempoLabel[2] = '4';
        
                }
                else if(cifraDecimal3 == 5)
                {
                    
                    tiempoLabel[2] = '5';
        
                }
                else if(cifraDecimal3 == 6)
                {
                    
                    tiempoLabel[2] = '6';
       
                }
                else if(cifraDecimal3 == 7)
                {
                    
                    tiempoLabel[2] = '7';
         
                }
                else if(cifraDecimal3 == 8)
                {
                    
                    tiempoLabel[2] = '8';
         
                }
                else if(cifraDecimal3 == 9)
                {
                    
                    tiempoLabel[2] = '9';
         
                }
                
                //CIFRA DECIMAL 2
                if(cifraDecimal2 == 0)
                {
                    tiempoLabel[3] = '0';
        
                }
                else if(cifraDecimal2 == 1)
                {
                    tiempoLabel[3] = '1';
        
                }
                else if(cifraDecimal2 == 2)
                {
                    
                    tiempoLabel[3] = '2';
         
                }
                else if(cifraDecimal2 == 3)
                {
                    
                    tiempoLabel[3] = '3';
        
                }
                else if(cifraDecimal2 == 4)
                {
                    
                    tiempoLabel[3] = '4';
          
                }
                else if(cifraDecimal2 == 5)
                {
                    
                    tiempoLabel[3] = '5';
        
                }
                else if(cifraDecimal2 == 6)
                {
                    
                    tiempoLabel[3] = '6';
        
                }
                else if(cifraDecimal2 == 7)
                {
                    
                    tiempoLabel[3] = '7';
        
                }
                else if(cifraDecimal2 == 8)
                {
                    
                    tiempoLabel[3] = '8';
        
                }
                else if(cifraDecimal2 == 9)
                {
                    
                    tiempoLabel[3] = '9';
        
                }
                
                
                //CIFRA DECIMAL1
                if(cifraDecimal1 == 0)
                {
                    tiempoLabel[4] = '0';
        
                }
                else if(cifraDecimal1 == 1)
                {
                    tiempoLabel[4] = '1';
        
                }
                else if(cifraDecimal1 == 2)
                {
                    
                    tiempoLabel[4] = '2';
       
                }
                else if(cifraDecimal1 == 3)
                {
                    
                    tiempoLabel[4] = '3';
         
                }
                else if(cifraDecimal1 == 4)
                {
                    
                    tiempoLabel[4] = '4';
        
                }
                else if(cifraDecimal1 == 5)
                {
                    
                    tiempoLabel[4] = '5';
        
                }
                else if(cifraDecimal1 == 6)
                {
                    
                    tiempoLabel[4] = '6';
       
                }
                else if(cifraDecimal1 == 7)
                {
                    
                    tiempoLabel[4] = '7';
        
                }
                else if(cifraDecimal1 == 8)
                {
                    
                    tiempoLabel[4] = '8';
       
                }
                else if(cifraDecimal1 == 9)
                {
                    
                    tiempoLabel[4] = '9';
      
                }
                
                    
                tiempoLabel[5] = ' ';
                
                tiempoLabel[6] = 's';
                
                
            }
  
            contador3++;
            
            
        }
        else if(numDigitosTime == 8)
        {
            if(b == numDigitosTime)
            {
                
                parteEntera = (int)tiempo;
                
                cifraEntera1 = parteEntera % 10;
                cifraEntera2 = parteEntera / 10;
                             
                parteDecimal = tiempo - parteEntera;
                            
                parteDecimalAEntero = parteDecimal * 1000;
                
                         
                cifraDecimal3 = parteDecimalAEntero / 100;
                cifraDecimal2 = (parteDecimalAEntero - cifraDecimal3*100)/10;
                cifraDecimal1 = parteDecimalAEntero % 10;
                
                
                                
                //PARTE ENTERA
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[0] = '1';
       
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[0] = '2';
        
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[0] = '3';
       
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[0] = '4';
      
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[0] = '5';
       
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[0] = '6';
      
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[0] = '7';
        
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[0] = '8';
      
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[0] = '9';
     
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[1] = '1';
      
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[1] = '2';
      
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[1] = '3';
     
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[1] = '4';
     
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[1] = '5';
     
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[1] = '6';
      
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[1] = '7';
     
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[1] = '8';
     
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[1] = '9';
    
                }
                
                tiempoLabel[2] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA DECIMAL 3
                if(cifraDecimal3 == 0)
                {
                    tiempoLabel[3] = '0';
     
                }
                else if(cifraDecimal3 == 1)
                {
                    
                    tiempoLabel[3] = '1';
       
                }
                else if(cifraDecimal3 == 2)
                {
                    
                    tiempoLabel[3] = '2';
    
                }
                else if(cifraDecimal3 == 3)
                {
                    
                    tiempoLabel[3] = '3';
     
                }
                else if(cifraDecimal3 == 4)
                {
                    
                    tiempoLabel[3] = '4';
    
                }
                else if(cifraDecimal3 == 5)
                {
                    
                    tiempoLabel[3] = '5';
      
                }
                else if(cifraDecimal3 == 6)
                {
                    
                    tiempoLabel[3] = '6';
      
                }
                else if(cifraDecimal3 == 7)
                {
                    
                    tiempoLabel[3] = '7';
       
                }
                else if(cifraDecimal3 == 8)
                {
                    
                    tiempoLabel[3] = '8';
      
                }
                else if(cifraDecimal3 == 9)
                {
                    
                    tiempoLabel[3] = '9';
      
                }
                
                //CIFRA DECIMAL 2
                if(cifraDecimal2 == 0)
                {
                    tiempoLabel[4] = '0';
      
                }
                else if(cifraDecimal2 == 1)
                {
                    tiempoLabel[4] = '1';
      
                }
                else if(cifraDecimal2 == 2)
                {
                    
                    tiempoLabel[4] = '2';
        
                }
                else if(cifraDecimal2 == 3)
                {
                    
                    tiempoLabel[4] = '3';
       
                }
                else if(cifraDecimal2 == 4)
                {
                    
                    tiempoLabel[4] = '4';
        
                }
                else if(cifraDecimal2 == 5)
                {
                    
                    tiempoLabel[4] = '5';
        
                }
                else if(cifraDecimal2 == 6)
                {
                    
                    tiempoLabel[4] = '6';
        
                }
                else if(cifraDecimal2 == 7)
                {
                    
                    tiempoLabel[4] = '7';
      
                }
                else if(cifraDecimal2 == 8)
                {
                    
                    tiempoLabel[4] = '8';
      
                }
                else if(cifraDecimal2 == 9)
                {
                    
                    tiempoLabel[4] = '9';
      
                }
                
                
                //CIFRA DECIMAL 1
                if(cifraDecimal1 == 0)
                {
                    tiempoLabel[5] = '0';
      
                }
                else if(cifraDecimal1 == 1)
                {
                    tiempoLabel[5] = '1';
         
                }
                else if(cifraDecimal1 == 2)
                {
                    
                    tiempoLabel[5] = '2';
         
                }
                else if(cifraDecimal1 == 3)
                {
                    
                    tiempoLabel[5] = '3';
       
                }
                else if(cifraDecimal1 == 4)
                {
                    
                    tiempoLabel[5] = '4';
        
                }
                else if(cifraDecimal1 == 5)
                {
                    
                    tiempoLabel[5] = '5';
        
                }
                else if(cifraDecimal1 == 6)
                {
                    
                    tiempoLabel[5] = '6';
       
                }
                else if(cifraDecimal1 == 7)
                {
                    
                    tiempoLabel[5] = '7';
        
                }
                else if(cifraDecimal1 == 8)
                {
                    
                    tiempoLabel[5] = '8';
        
                }
                else if(cifraDecimal1 == 9)
                {
                    
                    tiempoLabel[5] = '9';
      
                }
                
                    
                tiempoLabel[6] = ' ';
                
                tiempoLabel[7] = 's';
                
                
                
            }


            contador3++;
            
        }
        else if(numDigitosTime == 9)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                cifraEntera3 = parteEntera / 100;
                cifraEntera2 = (parteEntera - cifraEntera3*100)/10;
                cifraEntera1 = parteEntera % 10;
                
                parteDecimal = tiempo - parteEntera;
                            
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifraDecimal3 = parteDecimalAEntero / 100;
                cifraDecimal2 = (parteDecimalAEntero - cifraDecimal3*100)/10;
                cifraDecimal1 = parteDecimalAEntero % 10;
                
                
                
                //PARTE ENTERA
                
                //CIFRA ENTERA 3
                if(cifraEntera3 == 0)
                {
                    tiempoLabel[0] = '0';
         
                }
                else if(cifraEntera3 == 1)
                {
                    tiempoLabel[0] = '1';
                
                }
                else if(cifraEntera3 == 2)
                {
                    tiempoLabel[0] = '2';
    
                }
                else if(cifraEntera3 == 3)
                {
                    tiempoLabel[0] = '3';
       
                }
                else if(cifraEntera3 == 4)
                {
                    tiempoLabel[0] = '4';
     
                }
                else if(cifraEntera3 == 5)
                {
                    tiempoLabel[0] = '5';
     
                }
                else if(cifraEntera3 == 6)
                {
                    tiempoLabel[0] = '6';
     
                }
                else if(cifraEntera3 == 7)
                {
                    tiempoLabel[0] = '7';
      
                }
                else if(cifraEntera3 == 8)
                {
                    tiempoLabel[0] = '8';
     
                }
                else if(cifraEntera3 == 9)
                {
                    tiempoLabel[0] = '9';
     
                }
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[1] = '0';
     
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[1] = '1';
     
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[1] = '2';
      
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[1] = '3';
     
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[1] = '4';
     
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[1] = '5';
      
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[1] = '6';
    
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[1] = '7';
      
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[1] = '8';
      
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[1] = '9';
      
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[2] = '1';
       
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[2] = '2';
       
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[2] = '3';
       
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[2] = '4';
       
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[2] = '5';
         
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[2] = '6';
      
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[2] = '7';
       
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[2] = '8';
      
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[2] = '9';
      
                }
                
                tiempoLabel[3] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA DECIMAL 3
                if(cifraDecimal3 == 0)
                {
                    tiempoLabel[4] = '0';
      
                }
                else if(cifraDecimal3 == 1)
                {
                    
                    tiempoLabel[4] = '1';
     
                }
                else if(cifraDecimal3 == 2)
                {
                    
                    tiempoLabel[4] = '2';
       
                }
                else if(cifraDecimal3 == 3)
                {
                    
                    tiempoLabel[4] = '3';
         
                }
                else if(cifraDecimal3 == 4)
                {
                    
                    tiempoLabel[4] = '4';
          
                }
                else if(cifraDecimal3 == 5)
                {
                    
                    tiempoLabel[4] = '5';
         
                }
                else if(cifraDecimal3 == 6)
                {
                    
                    tiempoLabel[4] = '6';
       
                }
                else if(cifraDecimal3 == 7)
                {
                    
                    tiempoLabel[4] = '7';
      
                }
                else if(cifraDecimal3 == 8)
                {
                    
                    tiempoLabel[4] = '8';
       
                }
                else if(cifraDecimal3 == 9)
                {
                    
                    tiempoLabel[4] = '9';
        
                }
                
                
                //CIFRA DECIMAL 2
                if(cifraDecimal2 == 0)
                {
                    tiempoLabel[5] = '0';
       
                }
                else if(cifraDecimal2 == 1)
                {
                    tiempoLabel[5] = '1';
        
                }
                else if(cifraDecimal2 == 2)
                {
                    
                    tiempoLabel[5] = '2';
         
                }
                else if(cifraDecimal2 == 3)
                {
                    
                    tiempoLabel[5] = '3';
       
                }
                else if(cifraDecimal2 == 4)
                {
                    
                    tiempoLabel[5] = '4';
        
                }
                else if(cifraDecimal2 == 5)
                {
                    
                    tiempoLabel[5] = '5';
        
                }
                else if(cifraDecimal2 == 6)
                {
                    
                    tiempoLabel[5] = '6';
        
                }
                else if(cifraDecimal2 == 7)
                {
                    
                    tiempoLabel[5] = '7';
       
                }
                else if(cifraDecimal2 == 8)
                {
                    
                    tiempoLabel[5] = '8';
        
                }
                else if(cifraDecimal2 == 9)
                {
                    
                    tiempoLabel[5] = '9';
       
                }
                
                
                //CIFRA DECIMAL 1
                if(cifraDecimal1 == 0)
                {
                    tiempoLabel[6] = '0';
       
                }
                else if(cifraDecimal1 == 1)
                {
                    tiempoLabel[6] = '1';
        
                }
                else if(cifraDecimal1 == 2)
                {
                    
                    tiempoLabel[6] = '2';
       
                }
                else if(cifraDecimal1 == 3)
                {
                    
                    tiempoLabel[6] = '3';
         
                }
                else if(cifraDecimal1 == 4)
                {
                    
                    tiempoLabel[6] = '4';
       
                }
                else if(cifraDecimal1 == 5)
                {
                    
                    tiempoLabel[6] = '5';
         
                }
                else if(cifraDecimal1 == 6)
                {
                    
                    tiempoLabel[6] = '6';
     
                }
                else if(cifraDecimal1 == 7)
                {
                    
                    tiempoLabel[6] = '7';
       
                }
                else if(cifraDecimal1 == 8)
                {
                    
                    tiempoLabel[6] = '8';
       
                }
                else if(cifraDecimal1 == 9)
                {
                    
                    tiempoLabel[6] = '9';
        
                }
                
                    
                tiempoLabel[7] = ' ';
                
                tiempoLabel[8] = 's'; 
                
            }
            
            contador3++;
            
        }
        
     
    }
    
    
    //Ponemos esto para indicar que aquí acaba el array
    tiempoLabel[contador3] = '\0';
    
   
    //Lo añadimos los label para mostrarlos en pantalla
    gtk_label_set_text(GTK_LABEL (stuff->widLabelTotalRegistros), totalRegistros);
    gtk_label_set_text(GTK_LABEL (stuff->widLabelTotalRegistrosFiltrados), totalRegistrosFiltrados);
    gtk_label_set_text(GTK_LABEL (stuff->widLabelTiempo), tiempoLabel);
    
    
  
}





//Este método sirve para añadir grupos de palabras al fichero, comprueba si esta en el fichero si no está se escribe en el fichero, si está pues no
void button_add_TextView(GtkWidget *widget, CCPTextBuffer3 *stuff)
{
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_add_TextView
    unsigned seg1, seg2;
	float tiempo;

    seg1 = clock();
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_add_TextView
    
    
    const gchar *text;
    GtkTextIter start;
    GtkTextIter end;
    
  
    //Estas 3 líneas es para sacar el texto del textfield y guardarlo en un array
    gtk_text_buffer_get_start_iter (stuff->textBuffer5, &start);
    gtk_text_buffer_get_end_iter (stuff->textBuffer5, &end);
    text = gtk_text_buffer_get_text (stuff->textBuffer5, &start, &end, FALSE); 
    
    
    //Obtenemos la longitud del array text
    gint sizeText = 0;
    
    sizeText = strlen(text);
  
    
    
    //Esto es para si el contenido del textview no está dentro del rango sera o porque no se ha escrito nada o porque pasa el límite,
    //por lo que no se podrá comprabar si está o no en el fichero y por lo consiguiente no podrá escribirse en el fichero
    if(sizeText >= 0 and sizeText <= 9000)
    {
        char words[9000];
        int cont = 0;
        int contSaltoDeLinea = 0;
        int contEspacio = 0;
        int countCharacters = 0;
        int j;
        int contPalabras = 0;
        int palabraNoEsta = 0;
    
    
		//Recorremos todos los caracteres que se escribio en el textview, donde contabilizaremos cuantas palabras hay y le añadiremos un espacio como separador
        for(int i = 0; i < sizeText; i++)
        {
        
            //Contanilizar los saltos de línea que hay
            for(int a = 0; a < sizeText; a++)
            {
                if(text[a] == '\n')
                {
                    contSaltoDeLinea++;
                }
            
           
            }
        
    
			//Contabilizamos cuantas palabras hay
            if(contSaltoDeLinea > 0)
            {
                if(isspace(text[i]) != 0)
                {
                    contPalabras++;
                    contEspacio++;
    
    
                    if(contEspacio == 0)
                    {
                        if(cont == 0)
                        {
                  
                            j = countCharacters;
                        
                            words[j] = ' ';
                            cont++;
                            countCharacters++;
                                   
                            contSaltoDeLinea = 0;
                    
                        }
                    }
                    else
                    {
                    
                        if(cont == 0)
                        {
                        
                            int b = sizeText-1;
                        
                      
                            //Funciona toto menos si metes varios saltos línea al final, se solucionara en el siguiente array
                            if(i != b and isspace(text[0]) != 0 and countCharacters == 0)
                            {
                                //printf("El primer cáracter es un espacio en blanco\n");
                            }
                            else if(i <= b and isspace(text[i]) !=0 and sizeText-i == 1)//antes sizeText-i == 1
                            {
                                //printf("El último cáracter es un espacio en blanco\n");
                            }
                            else if(i != b and sizeText-i != 1)//antes sizeText-i != 1
                            {
                               
                                j = countCharacters;
             
                                words[j] = ' ';
                                cont++;
                                countCharacters++;
            
                                contSaltoDeLinea = 0;
                            }
                       
                        }
                    
                    
                    }
                
                }
                else
                {
                               
                    j = countCharacters;
                                    
                    words[j] = text[i];
                    
                    countCharacters++;
                    
                    contSaltoDeLinea = 0;
                    cont = 0;
                    contEspacio = 0;
                
            
                }
            }
            else if(contSaltoDeLinea == 0)
            {
              
                if(isspace(text[i]) != 0)
                {
                    //printf("El primer cáracter es un espacio en blanco\n");
                }
                else
                {
                    j = countCharacters;
     
                    words[j] = text[i];
                    countCharacters++;
            
                    contEspacio = 0;
    
                }
            
            
            }
        
        
        }
    
    
    
        words[countCharacters] = '\0';
    
        int sizeWords = strlen(words);
    
   
    
        //Eliminamos el espacio si hubiera alguno al final del array char unidimensional
        char wordsV[9000];
        int cont25 = 0;
        int cont26 = 0;
    
      
		//Recorremos el array, guardamos el contendio del array en otro array pero sin los espacios sobrantes
        for(int h = 1; h <= sizeWords; h++)
        {
            int b = sizeWords-2;
        
			//Comprobamos si hay espacio 
            if(h > b and isspace(words[cont25]) !=0)
            {
                //printf("El último caracter es un espacio y no se mete\n");
            }
            else
            {
                wordsV[cont26] = words[cont25]; 
            
                cont26++;
            }
        
            cont25++;
        }
    
		
		//Ponemos esto para indicar donde acaba el array
        wordsV[cont26] = '\0';
    
        int sizeWordsV = strlen(wordsV);
        
        
        //Con esto contabilizamos las palabras que vamos a añadir
        int contWords = 0;
        
        for(int i = 0; i <= sizeWordsV; i++)
        {
			if(wordsV[i] == ' ')
			{
				contWords++;
			}
			
		}
		
		if(sizeText > 0)
		{
			contWords = contWords + 1;
		}
        
    
        
        //Para asegurarnos que se han introducido carácteres en el textview, sino se han introducido no se ejecutará el condiconal y mostrará un mensaje en el textview2
        if(sizeWordsV >= 0 and sizeWordsV <= 9000)
        {
            //AQUÍ EMPIEZA EL FICHERO
            int numero_registros;
            int comparacion;
            int igual = 0;
            char auxiliar[LONGITUD_TEXTOS];
            int f = 0;
            int cont15 = 0;
            int cont16 = 1;
            char palabrasQueNoEstanEnElFichero[90000];
            int pos = 0;
            int pos2 = 0;
	
   
            
            //Sacamos de una en una las palabras del array unidimensional y lo copiamos en otro array unidimensional para así poder 
            //compararlas con las que haya en el fichero
            for(int q = 0; q <= contPalabras; q++)
            {
				 
                for(int i = pos; i < sizeWordsV; i++)
                {
                    if(isspace(wordsV[pos]) == 0)
                    {
                        lista.palabra[cont15] = wordsV[pos];
                        cont15++;
                        pos++;
                    }
                    
                }
                
                
                //El último caracter de un array char unidimensional tiene que ser \0
                lista.palabra[cont15] = '\0';
    
                cont15 = 0;
                
                pos = pos + 1;
                
           
                //Obtenemos el número total de registros del fichero
                numero_registros = nRegistrosFicheroDeMiLista();
    
	
                //Pasamos el contenido del array a otro array
                strcpy(auxiliar, lista.palabra);
                
               
                //Pasamos la primera letra de la palabra a mayúscula, en caso de que la palabra estuviera en minuscula o todo la palabra en mayúscula
                //los diptongos no distingue minusculas de las mayusculas
                char l;
        
                for(int e = 0; e < (int)strlen(auxiliar); e++)
                {
                    l = auxiliar[e];
			
			
                    if(l > 0 && islower(l))//islower investiga si la letra es minuscula
                    {
                        if(e == 0)
                        {
					
                            auxiliar[0] = toupper(l);//toupper convierte el caracter de minúscula a mayúscula
                        }
                    }
                    else if(l > 0 && isupper(l))//isupper investiga si un caracter es mayuscula
                    {
                        auxiliar[e] = tolower(l);//tolower convierte el caracter de mayúscula a minúscula
					
                        if(e == 0)
                        {
                            auxiliar[0] = toupper(l);
                        }
				
                    }
			
			
                }
        
              
                  
                //Coloca el cursor al inicio del fichero
                rewind(listado);
	
				//Si en el fichero no ha registros  y has escrito algo en el textview se ejecutará este bloque y si hay registros pues el else
                if(numero_registros == 0 and sizeText > 0)
                {
                    //Agregamos el primer registro al fichero osea la primera palabra que escribiremos en el fichero
                    //Permite situar el cursor de lectura/escritura de un fichero en una posición determinada, en este caso al principio.
                    fseek(listado, 0, SEEK_SET);
		
                    //Permite escribir un determinado número de bloques de memoria de una longitud determinada en un fichero                  
                    fwrite(&auxiliar, sizeof(auxiliar), 1, listado);
		
                    //Permite escribir el contenido del buffer asociado en el fichero. Si el fichero está abierto para leer, se borra el contenido del buffer
                    fflush(listado);
                    
              
                    //Metemos la palabras del textview1 que no está en el fichero en un array unidimensional 
                    //para después mostrarlo por el textview2
                    int sizeAuxiliar = strlen(auxiliar);
                                
                    palabraNoEsta++;
                            
      
                    //Recorremos las posiciones del array y lo vamos copiando en el array que se mostrará en el textview            
                    for(int s = 0; s < sizeAuxiliar; s++)
                    {
                                    
                        palabrasQueNoEstanEnElFichero[pos2] = auxiliar[s];
                        pos2++;
                    }
                    
                    
                    //Recogemos el numero de registros que tiene el fichero
                    numero_registros = nRegistrosFicheroDeMiLista();
        
                }
                else
                {
                    //Recogemos el número de registros que tiene el fichero
                    numero_registros = nRegistrosFicheroDeMiLista();
        
                    //Permite situar el cursor de lectura/escritura de un fichero en una posición determinada, en este caso al principio.
                    fseek(listado, 0, SEEK_SET);
		
					//Leemos los registros del fichero uno a uno
                    for(int i=1; i<= numero_registros; i++)
                    {
                        //Leemos los resgistros del fichero
                        fread(&lista, sizeof(Tlista), 1, listado);
			
                        //strcasecmp compara si dos cadenas son iguales o no, si no lo son devuelve positivo o negativo en función si es menor o mayor, sin tener en cuenta si es mayúscula o minúscula
                        comparacion = strcasecmp(auxiliar, lista.palabra);
			
                        //Obtenemos la longitud del array
                        int sizeAuxiliar = strlen(auxiliar);
    
             
						//Si la comparación es cero osea igual se ejecutará el if sino el else
                        if(sizeAuxiliar > 0 && comparacion == 0)
                        {
                            igual++;
                            f++;
                
                        }
                        else
                        {
							//Esto es para escibir el fichero cuando se cumpla la condición
                            if(sizeAuxiliar > 0 && i == numero_registros && igual == 0)
                            {
                                //Lo agregamos al fichero
                                fseek(listado, 0, SEEK_CUR);
                                fwrite(&auxiliar, sizeof(auxiliar), 1, listado);
                                fflush(listado);
                    
                          
                                //Metemos la palabra o palabras del textview1 que no estan en el fichero en un array unidimensional 
                                //para después mostrarlo por el textview2
                                int sizeAuxiliar = strlen(auxiliar);
                                
                                                     
                                //Esto es para contabilizar las palabras que no están en el fichero
                                palabraNoEsta++;
                            
								
								//Esto es para añadir saltos de línea al array en el caso de que haya varias palabras que no están en el fichero
                                if(palabraNoEsta > 1)
                                {
                                    palabrasQueNoEstanEnElFichero[pos2] = '\n';
                                    pos2++;
                                }
                                
                                
                                //Añadimos los caracteres de las palabras que no están en el fichero en el array que se mostrará en el textview
                                for(int s = 0; s < sizeAuxiliar; s++)
                                {
                                
                                    palabrasQueNoEstanEnElFichero[pos2] = auxiliar[s];
                                    pos2++;
                                }
                                
                    
                            }
                            else if(igual != 0 and cont16 == numero_registros)
                            {
					
                                //printf("\n\nLas palabra %s ya esta en la lista\n\n", auxiliar);
                        
                            }
                
            
                        }
            
                        cont16++;
            
                    }
                
		
                }
                
      
                
                //Con esto ponemos que hay se acaba el array char unidimensional
                palabrasQueNoEstanEnElFichero[pos2] = '\0';
                    
         
         
                //Mostramos información relevente que nos servirá para que es lo que vamos a poner en el textview2 ya sea
                //las palabras que se van a agregar o que ya se encuentran en el fichero       
                igual = 0;
                

                //Imprimimos si las palabra que introducimos estan o no en el fichero, sino están imprimimos esas palabras que se han añadido
                if(f==0)
                {
                    
                    if(q == contPalabras)
                    {
                                           
                        int sizePalabrasQueNoEstanEnElFichero = strlen(palabrasQueNoEstanEnElFichero);
                            
                        gtk_text_buffer_set_text (stuff->textBuffer6, palabrasQueNoEstanEnElFichero, sizePalabrasQueNoEstanEnElFichero);
                        
                        
                    }
                    
                }
                else
                {
    
                    if(q == contPalabras)
                    {
                        if(palabraNoEsta == 0)
                        {
                       
                            if(f > 1)
                            {
								//Creamos un array unidimensional de tipo char, con un texto explicativo
                                char textSalida[22] = {'T','h','e','y',' ','a','r','e',' ','i','n',' ','t','h','e',' ','f','i','l','e','.','\0'};
                                
                                //Calculamos la longitud del array
                                int sizeTextSalida = strlen(textSalida);
                        
								//Lo mostramos por el textview
                                gtk_text_buffer_set_text (stuff->textBuffer6, textSalida, sizeTextSalida);
                                
                            }
                            else
                            {
                         
                                char textSalida[19] = {'I','t',' ','i','s',' ','i','n',' ','t','h','e',' ','f','i','l','e','.','\0'};
                                
                                int sizeTextSalida = strlen(textSalida);
                        
                                gtk_text_buffer_set_text (stuff->textBuffer6, textSalida, sizeTextSalida);
                                
                            }
     
                            
                        }
                        else
                        {
                         
                            int sizePalabrasQueNoEstanEnElFichero = strlen(palabrasQueNoEstanEnElFichero);
                            
                            gtk_text_buffer_set_text (stuff->textBuffer6, palabrasQueNoEstanEnElFichero, sizePalabrasQueNoEstanEnElFichero);
                            
                        }
                        
                        
                    }
    
    
                }
               
                
            }
            
  
            
            
            //MOSTRAMOS EL LABEL DE LAS PALABRAS QUE BUSCO POR PANTALLA el valor de contWords
            short numDigitos;
            char sizePalabrasQueBusco[9000];
            int contador1 = 0;
            short cifra1, cifra2, cifra3;
    
            
    
			//Calculamos el número de cifras de la variable contWords
            if (contWords<10)
            {
                numDigitos = 1;
    
            }
            else if (contWords<100)
            {
                numDigitos = 2;
      
            }
            else if (contWords<1000)
            {
                numDigitos = 3;
      
            }
            else if (contWords<10000)
            {
                numDigitos = 4;
     
            }
            else if (contWords > 10000)
            {
                //cout<<"Fuera de rango"<<endl;
            }
    
    
    
			//Pasamos los números a caracteres en un array unidimensional de tipo char
            for(int a = 1; a <= numDigitos; a++)
            {
                if(numDigitos == 1)
                {
                    if(contWords == 0)
                    {
                        sizePalabrasQueBusco[0] = '0';
      
                    }
                    else if(contWords == 1)
                    {
                        sizePalabrasQueBusco[0] = '1';
      
                    }
                    else if(contWords == 2)
                    {
                        sizePalabrasQueBusco[0] = '2';
      
                    }
                    else if(contWords == 3)
                    {
                        sizePalabrasQueBusco[0] = '3';
        
                    }
                    else if(contWords == 4)
                    {
                        sizePalabrasQueBusco[0] = '4';
       
                    }
                    else if(contWords == 5)
                    {
                        sizePalabrasQueBusco[0] = '5';
          
                    }
                    else if(contWords == 6)
                    {
                        sizePalabrasQueBusco[0] = '6';
        
                    }
                    else if(contWords == 7)
                    {
                        sizePalabrasQueBusco[0] = '7';
         
                    }
                    else if(contWords == 8)
                    {
                        sizePalabrasQueBusco[0] = '8';
        
                    }
                    else if(contWords == 9)
                    {
                        sizePalabrasQueBusco[0] = '9';
         
                    }
            
            
                    contador1++;
            
            
                }
                else if(numDigitos == 2)
                {
           
                    if(a == numDigitos)
                    {
                        cifra1 = contWords % 10;
                        cifra2 = contWords / 10;
            
             
                
                        //CIFRA 2
                        if(cifra2 == 1)
                        {
                            sizePalabrasQueBusco[0] = '1';
        
                        }
                        else if(cifra2 == 2)
                        {
                            sizePalabrasQueBusco[0] = '2';
          
                        }
                        else if(cifra2 == 3)
                        {
                            sizePalabrasQueBusco[0] = '3';
         
                        }
                        else if(cifra2 == 4)
                        {
                            sizePalabrasQueBusco[0] = '4';
         
                        }
                        else if(cifra2 == 5)
                        {
                            sizePalabrasQueBusco[0] = '5';
           
                        }
                        else if(cifra2 == 6)
                        {
                            sizePalabrasQueBusco[0] = '6';
           
                        }
                        else if(cifra2 == 7)
                        {
                            sizePalabrasQueBusco[0] = '7';
          
                        }
                        else if(cifra2 == 8)
                        {
                            sizePalabrasQueBusco[0] = '8';
           
                        }
                        else if(cifra2 == 9)
                        {
                            sizePalabrasQueBusco[0] = '9';
        
                        }
                
                
                
                        //CIFRA 1
                        if(cifra1 == 0)
                        {
                            sizePalabrasQueBusco[1] = '0';
           
                        }
                        else if(cifra1 == 1)
                        {
                            sizePalabrasQueBusco[1] = '1';
         
                        }
                        else if(cifra1 == 2)
                        {
                            sizePalabrasQueBusco[1] = '2';
          
                        }
                        else if(cifra1 == 3)
                        {
                            sizePalabrasQueBusco[1] = '3';
        
                        }
                        else if(cifra1 == 4)
                        {
                            sizePalabrasQueBusco[1] = '4';
         
                        }
                        else if(cifra1 == 5)
                        {
                            sizePalabrasQueBusco[1] = '5';
           
                        }
                        else if(cifra1 == 6)
                        {
                            sizePalabrasQueBusco[1] = '6';
           
                        }
                        else if(cifra1 == 7)
                        {
                            sizePalabrasQueBusco[1] = '7';
          
                        }
                        else if(cifra1 == 8)
                        {
                            sizePalabrasQueBusco[1] = '8';
         
                        }
                        else if(cifra1 == 9)
                        {
                            sizePalabrasQueBusco[1] = '9';
         
                        }
      
                    }


                    contador1++;
            
                }
                else if(numDigitos == 3)
                {
                    if(a == numDigitos)
                    {
                        cifra3 = contWords / 100;
                        cifra2 = (contWords - cifra3*100)/10;
                        cifra1 = contWords % 10;
                
            
                        //CIFRA 3
                        if(cifra3 == 1)
                        {
                            sizePalabrasQueBusco[0] = '1';
          
                        }
                        else if(cifra3 == 2)
                        {
                            sizePalabrasQueBusco[0] = '2';
          
                        }
                        else if(cifra3 == 3)
                        {
                            sizePalabrasQueBusco[0] = '3';
           
                        }
                        else if(cifra3 == 4)
                        {
                            sizePalabrasQueBusco[0] = '4';
           
                        }
                        else if(cifra3 == 5)
                        {
                            sizePalabrasQueBusco[0] = '5';
            
                        }
                        else if(cifra3 == 6)
                        {
                            sizePalabrasQueBusco[0] = '6';
           
                        }
                        else if(cifra3 == 7)
                        {
                            sizePalabrasQueBusco[0] = '7';
           
                        }
                        else if(cifra3 == 8)
                        {
                            sizePalabrasQueBusco[0] = '8';
          
                        }
                        else if(cifra3 == 9)
                        {
                            sizePalabrasQueBusco[0] = '9';
           
                        }
                
                
                        //CIFRA 2
                        if(cifra2 == 0)
                        {
                            sizePalabrasQueBusco[1] = '0';
           
                        }
                        else if(cifra2 == 1)
                        {
                            sizePalabrasQueBusco[1] = '1';
          
                        }
                        else if(cifra2 == 2)
                        {
                            sizePalabrasQueBusco[1] = '2';
          
                        }
                        else if(cifra2 == 3)
                        {
                            sizePalabrasQueBusco[1] = '3';
           
                        }
                        else if(cifra2 == 4)
                        {
                            sizePalabrasQueBusco[1] = '4';
          
                        }
                        else if(cifra2 == 5)
                        {
                            sizePalabrasQueBusco[1] = '5';
        
                        }
                        else if(cifra2 == 6)
                        {
                            sizePalabrasQueBusco[1] = '6';
          
                        }
                        else if(cifra2 == 7)
                        {
                            sizePalabrasQueBusco[1] = '7';
          
                        }
                        else if(cifra2 == 8)
                        {
                            sizePalabrasQueBusco[1] = '8';
            
                        }
                        else if(cifra2 == 9)
                        {
                            sizePalabrasQueBusco[1] = '9';
          
                        }
                
                
                        //CIFRA 1
                        if(cifra1 == 0)
                        {
                            sizePalabrasQueBusco[2] = '0';
         
                        }
                        else if(cifra1 == 1)
                        {
                            sizePalabrasQueBusco[2] = '1';
           
                        }
                        else if(cifra1 == 2)
                        {
                            sizePalabrasQueBusco[2] = '2';
           
                        }
                        else if(cifra1 == 3)
                        {
                            sizePalabrasQueBusco[2] = '3';
           
                        }
                        else if(cifra1 == 4)
                        {
                            sizePalabrasQueBusco[2] = '4';
          
                        }
                        else if(cifra1 == 5)
                        {
                            sizePalabrasQueBusco[2] = '5';
        
                        }
                        else if(cifra1 == 6)
                        {
                            sizePalabrasQueBusco[2] = '6';
          
                        }
                        else if(cifra1 == 7)
                        {
                            sizePalabrasQueBusco[2] = '7';
          
                        }
                        else if(cifra1 == 8)
                        {
                            sizePalabrasQueBusco[2] = '8';
        
                        }
                        else if(cifra1 == 9)
                        {
                            sizePalabrasQueBusco[2] = '9';
         
                        }
                
                
                    }
            
                    contador1++;
            
                }
        
      
            }
    
    
			//Esto para indicar que hay se acaba el array
            sizePalabrasQueBusco[contador1] = '\0';
       
         
         
            //MOSTRAMOS EL LABEL DE LAS PALABRAS QUE AÑADO POR PANTALLA el valor de palabraNoEsta
            short numDigitos2;
            char sizePalabrasQueAdd[9000];
            int contador2 = 0;
            short cifra1b, cifra2b, cifra3b;
            
            
			//Calculamos el número de cifras que tiene la variable palabraNoEsta
            if (palabraNoEsta<10)
            {
                numDigitos2 = 1;
     
            }
            else if (palabraNoEsta<100)
            {
                numDigitos2 = 2;
      
            }
            else if (palabraNoEsta<1000)
            {
                numDigitos2 = 3;
     
            }
            else if (palabraNoEsta<10000)
            {
                numDigitos2 = 4;
    
            }
            else if (palabraNoEsta > 10000)
            {
                //cout<<"Fuera de rango"<<endl;
            }
    
     
     
			//Pasamos los números a caracteres en un array unidimensional de tipo char
            for(int a = 1; a <= numDigitos2; a++)
            {
                if(numDigitos2 == 1)
                {
                    if(palabraNoEsta == 0)
                    {
                        sizePalabrasQueAdd[0] = '0';
        
                    }
                    else if(palabraNoEsta == 1)
                    {
                        sizePalabrasQueAdd[0] = '1';
        
                    }
                    else if(palabraNoEsta == 2)
                    {
                        sizePalabrasQueAdd[0] = '2';
      
                    }
                    else if(palabraNoEsta == 3)
                    {
                        sizePalabrasQueAdd[0] = '3';
       
                    }
                    else if(palabraNoEsta == 4)
                    {
                        sizePalabrasQueAdd[0] = '4';
        
                    }
                    else if(palabraNoEsta == 5)
                    {
                        sizePalabrasQueAdd[0] = '5';
         
                    }
                    else if(palabraNoEsta == 6)
                    {
                        sizePalabrasQueAdd[0] = '6';
        
                    }
                    else if(palabraNoEsta == 7)
                    {
                        sizePalabrasQueAdd[0] = '7';
        
                    }
                    else if(palabraNoEsta == 8)
                    {
                        sizePalabrasQueAdd[0] = '8';
       
                    }
                    else if(palabraNoEsta == 9)
                    {
                        sizePalabrasQueAdd[0] = '9';
        
                    }
            
            
                    contador2++;
            
            
                }
                else if(numDigitos2 == 2)
                {
           
                    if(a == numDigitos2)
                    {
                        cifra1b = palabraNoEsta % 10;
                        cifra2b = palabraNoEsta / 10;
            
            
                        //CIFRA 2
                        if(cifra2b == 1)
                        {
                            sizePalabrasQueAdd[0] = '1';
       
                        }
                        else if(cifra2b == 2)
                        {
                            sizePalabrasQueAdd[0] = '2';
         
                        }
                        else if(cifra2b == 3)
                        {
                            sizePalabrasQueAdd[0] = '3';
         
                        }
                        else if(cifra2b == 4)
                        {
                            sizePalabrasQueAdd[0] = '4';
      
                        }
                        else if(cifra2b == 5)
                        {
                            sizePalabrasQueAdd[0] = '5';
         
                        }
                        else if(cifra2b == 6)
                        {
                            sizePalabrasQueAdd[0] = '6';
         
                        }
                        else if(cifra2b == 7)
                        {
                            sizePalabrasQueAdd[0] = '7';
        
                        }
                        else if(cifra2b == 8)
                        {
                            sizePalabrasQueAdd[0] = '8';
         
                        }
                        else if(cifra2b == 9)
                        {
                            sizePalabrasQueAdd[0] = '9';
       
                        }
                
                
                
                        //CIFRA 1
                        if(cifra1b == 0)
                        {
                            sizePalabrasQueAdd[1] = '0';
         
                        }
                        else if(cifra1b == 1)
                        {
                            sizePalabrasQueAdd[1] = '1';
          
                        }
                        else if(cifra1b == 2)
                        {
                            sizePalabrasQueAdd[1] = '2';
         
                        }
                        else if(cifra1b == 3)
                        {
                            sizePalabrasQueAdd[1] = '3';
       
                        }
                        else if(cifra1b == 4)
                        {
                            sizePalabrasQueAdd[1] = '4';
        
                        }
                        else if(cifra1b == 5)
                        {
                            sizePalabrasQueAdd[1] = '5';
         
                        }
                        else if(cifra1b == 6)
                        {
                            sizePalabrasQueAdd[1] = '6';
        
                        }
                        else if(cifra1b == 7)
                        {
                            sizePalabrasQueAdd[1] = '7';
       
                        }
                        else if(cifra1b == 8)
                        {
                            sizePalabrasQueAdd[1] = '8';
       
                        }
                        else if(cifra1b == 9)
                        {
                            sizePalabrasQueAdd[1] = '9';
        
                        }
      
                    }


                    contador2++;
            
                }
                else if(numDigitos2 == 3)
                {
                    if(a == numDigitos2)
                    {
                        cifra3b = palabraNoEsta / 100;
                        cifra2b = (palabraNoEsta - cifra3b*100)/10;
                        cifra1b = palabraNoEsta % 10;
                
           
                        //CIFRA 3
                        if(cifra3b == 1)
                        {
                            sizePalabrasQueAdd[0] = '1';
        
                        }
                        else if(cifra3b == 2)
                        {
                            sizePalabrasQueAdd[0] = '2';
          
                        }
                        else if(cifra3b == 3)
                        {
                            sizePalabrasQueAdd[0] = '3';
             
                        }
                        else if(cifra3b == 4)
                        {
                            sizePalabrasQueAdd[0] = '4';
          
                        }
                        else if(cifra3b == 5)
                        {
                            sizePalabrasQueAdd[0] = '5';
         
                        }
                        else if(cifra3b == 6)
                        {
                            sizePalabrasQueAdd[0] = '6';
       
                        }
                        else if(cifra3b == 7)
                        {
                            sizePalabrasQueAdd[0] = '7';
          
                        }
                        else if(cifra3b == 8)
                        {
                            sizePalabrasQueAdd[0] = '8';
         
                        }
                        else if(cifra3b == 9)
                        {
                            sizePalabrasQueAdd[0] = '9';
        
                        }
                
                
                        //CIFRA 2
                        if(cifra2b == 0)
                        {
                            sizePalabrasQueAdd[1] = '0';
       
                        }
                        else if(cifra2b == 1)
                        {
                            sizePalabrasQueAdd[1] = '1';
          
                        }
                        else if(cifra2b == 2)
                        {
                            sizePalabrasQueAdd[1] = '2';
         
                        }
                        else if(cifra2b == 3)
                        {
                            sizePalabrasQueAdd[1] = '3';
           
                        }
                        else if(cifra2b == 4)
                        {
                            sizePalabrasQueAdd[1] = '4';
         
                        }
                        else if(cifra2b == 5)
                        {
                            sizePalabrasQueAdd[1] = '5';
          
                        }
                        else if(cifra2b == 6)
                        {
                            sizePalabrasQueAdd[1] = '6';
         
                        }
                        else if(cifra2b == 7)
                        {
                            sizePalabrasQueAdd[1] = '7';
         
                        }
                        else if(cifra2b == 8)
                        {
                            sizePalabrasQueAdd[1] = '8';
          
                        }
                        else if(cifra2b == 9)
                        {
                            sizePalabrasQueAdd[1] = '9';
          
                        }
                
                
                        //CIFRA 1
                        if(cifra1b == 0)
                        {
                            sizePalabrasQueAdd[2] = '0';
         
                        }
                        else if(cifra1b == 1)
                        {
                            sizePalabrasQueAdd[2] = '1';
           
                        }
                        else if(cifra1b == 2)
                        {
                            sizePalabrasQueAdd[2] = '2';
            
                        }
                        else if(cifra1b == 3)
                        {
                            sizePalabrasQueAdd[2] = '3';
         
                        }
                        else if(cifra1b == 4)
                        {
                            sizePalabrasQueAdd[2] = '4';
           
                        }
                        else if(cifra1b == 5)
                        {
                            sizePalabrasQueAdd[2] = '5';
          
                        }
                        else if(cifra1b == 6)
                        {
                            sizePalabrasQueAdd[2] = '6';
         
                        }
                        else if(cifra1b == 7)
                        {
                            sizePalabrasQueAdd[2] = '7';
        
                        }
                        else if(cifra1b == 8)
                        {
                            sizePalabrasQueAdd[2] = '8';
        
                        }
                        else if(cifra1b == 9)
                        {
                            sizePalabrasQueAdd[2] = '9';
         
                        }
                
                
                    }
            
                    contador2++;
            
                }
        
         
            }
    
    
			//Ponemos esto para indicar que hay acaba el array
            sizePalabrasQueAdd[contador2] = '\0';
        
           
            //Lo enviamos a los label para mostrarlo en pantalla
            gtk_label_set_text(GTK_LABEL (stuff->widLabel5), sizePalabrasQueBusco);
            gtk_label_set_text(GTK_LABEL (stuff->widLabel6), sizePalabrasQueAdd);
            
            
            
            if(sizeText == 0)
            {
                char warnings3[29] = {'N','o','t','h','i','n','g',' ','h','a','s',' ','b','e','e','n',' ','w','r','i','t','t','e','n','.',' ',' ',' ','\0'};
                
                int sizeWarnings3 = strlen(warnings3);
  
                gtk_text_buffer_set_text (stuff->textBuffer6, warnings3, sizeWarnings3);
     
            }
            
            
            
        }
        
    }
    else if(sizeText > 9000)
    {
     
        char warnings2[64] = {'E','x','c','e','e','d','s',' ','t','h','e',' ','r','a','n','g','e',' ','o','f',' ','t','h','e',' ','a','r','r','a','y','.','\n','5','0','0','0',' ','c','h','a','r','a','c','t','e','r','s',' ','l','i','m','i','t',' ','e','x','c','e','e','d','e','d','.','\0'};
        
        int sizeWarnings2 = strlen(warnings2);
        
        gtk_text_buffer_set_text (stuff->textBuffer6, warnings2, sizeWarnings2);
        
    }
    
    
    
    
    //CALCULAR TIEMPO DE EJECUCIÓN
    seg2 = clock();
    tiempo = (float(seg2-seg1)/1000000);
    
    
    //AHORA LO PASAMOS AL LABEL TIEMPO
    char tiempoLabel[5000];
    int contador1 = 0;
    short numDigitosTime;
    short parteEntera, parteDecimalAEntero, cifraEntera1, cifraEntera2, cifraEntera3, cifra1, cifra2, cifra3;
    float parteDecimal;
    
    
    //Calculamos las cifras que tiene la variable tiempo
    if (tiempo < 10)
    {
        numDigitosTime = 1;
    
    }
    else if (tiempo < 100)
    {
        numDigitosTime = 2;
    
    }
    else if (tiempo < 1000)
    {
        numDigitosTime = 3;
     
    }
    else if (tiempo > 1000)
    {
        //cout<<"Fuera de rango"<<endl;
    }
    
    
    numDigitosTime = numDigitosTime + 6;
    
 
	//Pasamos los números a caracteres en un array unidimensional de tipo char
    for(int b = 1; b <= numDigitosTime; b++)
    {
        if(numDigitosTime == 7)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                 
                parteDecimal = tiempo - parteEntera;
                  
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
  
            
                //PARTE ENTERA
                if(parteEntera == 0)
                {
                    tiempoLabel[0] = '0';
       
                }
                else if(parteEntera == 1)
                {
                    tiempoLabel[0] = '1';
      
                }
                else if(parteEntera == 2)
                {
                    tiempoLabel[0] = '2';
         
                }
                else if(parteEntera == 3)
                {
                    tiempoLabel[0] = '3';
          
                }
                else if(parteEntera == 4)
                {
                    tiempoLabel[0] = '4';
        
                }
                else if(parteEntera == 5)
                {
                    tiempoLabel[0] = '5';
         
                }
                else if(parteEntera == 6)
                {
                    tiempoLabel[0] = '6';
        
                }
                else if(parteEntera == 7)
                {
                    tiempoLabel[0] = '7';
          
                }
                else if(parteEntera == 8)
                {
                    tiempoLabel[0] = '8';
         
                }
                else if(parteEntera == 9)
                {
                    tiempoLabel[0] = '9';
        
                }
                
                
                tiempoLabel[1] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[2] = '0';
       
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[2] = '1';
       
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[2] = '2';
       
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[2] = '3';
        
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[2] = '4';
        
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[2] = '5';
       
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[2] = '6';
       
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[2] = '7';
       
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[2] = '8';
      
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[2] = '9';
        
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[3] = '0';
     
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[3] = '1';
      
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[3] = '2';
       
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[3] = '3';
        
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[3] = '4';
      
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[3] = '5';
      
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[3] = '6';
      
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[3] = '7';
      
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[3] = '8';
       
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[3] = '9';
      
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[4] = '0';
       
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[4] = '1';
       
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[4] = '2';
       
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[4] = '3';
      
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[4] = '4';
      
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[4] = '5';
       
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[4] = '6';
        
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[4] = '7';
       
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[4] = '8';
      
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[4] = '9';
       
                }
                
                    
                tiempoLabel[5] = ' ';
                
                tiempoLabel[6] = 's';
                
                
            }
  
            contador1++;
            
            
        }
        else if(numDigitosTime == 8)
        {
            if(b == numDigitosTime)
            {
                
                parteEntera = (int)tiempo;
                
                cifraEntera1 = parteEntera % 10;
                cifraEntera2 = parteEntera / 10;
                
                 
                parteDecimal = tiempo - parteEntera;
                
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
  
             
                //PARTE ENTERA
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[0] = '0';
     
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[0] = '1';
       
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[0] = '2';
       
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[0] = '3';
     
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[0] = '4';
     
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[0] = '5';
      
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[0] = '6';
      
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[0] = '7';
     
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[0] = '8';
       
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[0] = '9';
     
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[1] = '1';
     
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[1] = '2';
    
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[1] = '3';
     
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[1] = '4';
      
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[1] = '5';
        
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[1] = '6';
       
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[1] = '7';
      
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[1] = '8';
       
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[1] = '9';
       
                }
                
                tiempoLabel[2] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[3] = '0';
        
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[3] = '1';
       
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[3] = '2';
       
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[3] = '3';
       
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[3] = '4';
        
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[3] = '5';
      
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[3] = '6';
      
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[3] = '7';
        
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[3] = '8';
       
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[3] = '9';
       
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[4] = '0';
       
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[4] = '1';
        
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[4] = '2';
        
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[4] = '3';
       
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[4] = '4';
       
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[4] = '5';
        
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[4] = '6';
      
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[4] = '7';
       
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[4] = '8';
        
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[4] = '9';
        
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[5] = '0';
       
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[5] = '1';
        
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[5] = '2';
        
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[5] = '3';
        
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[5] = '4';
      
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[5] = '5';
       
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[5] = '6';
     
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[5] = '7';
        
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[5] = '8';
        
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[5] = '9';
      
                }
                
                    
                tiempoLabel[6] = ' ';
                
                tiempoLabel[7] = 's';
                
                
                
            }


            contador1++;
            
        }
        else if(numDigitosTime == 9)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                cifraEntera3 = parteEntera / 100;
                cifraEntera2 = (parteEntera - cifraEntera3*100)/10;
                cifraEntera1 = parteEntera % 10;
                
                
                parteDecimal = tiempo - parteEntera;
                            
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
  
               
                //PARTE ENTERA
                
                //CIFRA ENTERA 3
                if(cifraEntera3 == 0)
                {
                    tiempoLabel[0] = '0';
   
                }
                else if(cifraEntera3 == 1)
                {
                    tiempoLabel[0] = '1';
     
                }
                else if(cifraEntera3 == 2)
                {
                    tiempoLabel[0] = '2';
     
                }
                else if(cifraEntera3 == 3)
                {
                    tiempoLabel[0] = '3';
     
                }
                else if(cifraEntera3 == 4)
                {
                    tiempoLabel[0] = '4';
      
                }
                else if(cifraEntera3 == 5)
                {
                    tiempoLabel[0] = '5';
       
                }
                else if(cifraEntera3 == 6)
                {
                    tiempoLabel[0] = '6';
      
                }
                else if(cifraEntera3 == 7)
                {
                    tiempoLabel[0] = '7';
       
                }
                else if(cifraEntera3 == 8)
                {
                    tiempoLabel[0] = '8';
       
                }
                else if(cifraEntera3 == 9)
                {
                    tiempoLabel[0] = '9';
       
                }
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[1] = '0';
       
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[1] = '1';
       
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[1] = '2';
        
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[1] = '3';
        
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[1] = '4';
         
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[1] = '5';
       
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[1] = '6';
        
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[1] = '7';
       
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[1] = '8';
        
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[1] = '9';
      
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[2] = '1';
       
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[2] = '2';
       
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[2] = '3';
      
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[2] = '4';
      
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[2] = '5';
       
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[2] = '6';
        
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[2] = '7';
       
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[2] = '8';
        
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[2] = '9';
       
                }
                
                tiempoLabel[3] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[4] = '0';
        
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[4] = '1';
       
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[4] = '2';
        
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[4] = '3';
      
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[4] = '4';
      
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[4] = '5';
       
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[4] = '6';
       
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[4] = '7';
       
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[4] = '8';
       
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[4] = '9';
       
                }
                
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[5] = '0';
      
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[5] = '1';
       
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[5] = '2';
        
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[5] = '3';
         
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[5] = '4';
       
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[5] = '5';
        
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[5] = '6';
        
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[5] = '7';
       
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[5] = '8';
      
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[5] = '9';
        
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[6] = '0';
       
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[6] = '1';
       
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[6] = '2';
        
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[6] = '3';
       
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[6] = '4';
         
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[6] = '5';
       
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[6] = '6';
         
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[6] = '7';
       
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[6] = '8';
       
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[6] = '9';
      
                }
                
                    
                tiempoLabel[7] = ' ';
                
                tiempoLabel[8] = 's'; 
                
            }
            
            contador1++;
            
        }
        
     
    }
    
    
    //Ponemos esto para indicar que hay se acaba el array
    tiempoLabel[contador1] = '\0';
    
	//Lo enviamos al label para mostrarlo en pantalla
    gtk_label_set_text(GTK_LABEL (stuff->widLabel8), tiempoLabel);
    
    
    
    
    
}




//En este método añadimos palabras al fichero en caso que no este en el fichero
void button_add_Entry(GtkWidget *widget, CCPEntry2 *stuff) 
{
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_add_Entry
    unsigned seg1, seg2;
	float tiempo;

    seg1 = clock();
    //ESTO ES PARA CALCULAR EL TIEMPO DE LO QUE TARDE EN EJECUTARSE EL MÉTODO button_add_Entry
    
    
    const gchar *text;
  
	//Recogemos el texto que se haya introducido en el entry en un array
    text = gtk_entry_get_text (GTK_ENTRY (stuff->widEntry3));
  
	//Calculamos la longitud del array text
    gint sizeText = strlen(text);
    
   
	
    //Para saber si has metido caracteres en el entry
    if(sizeText > 0)
    {
      
        //ELIMINAMOS LOS ESPACIOS EN BLANCO EN CASO DE QUE LOS HAYA
        char palabra[90];
        int contador = 0;
    
        
        //Pasamos el contenido del array text al array palabras pero sin los espacios
        for(int a = 0; a < sizeText; a++)
        {
            if(isspace(text[a]) == 0)
            {
                palabra[contador] = text[a];
            
                contador++;
            }
        }
    
    
    
		//Ponemos esto para indicar que hay acaba el array
        palabra[contador] = '\0';
    
        int sizePalabra = strlen(palabra);
    
      
		
        //AQUÍ EMPIEZA EL FICHERO
        int numero_registros, comparacion, igual = 0;
        char auxiliar[LONGITUD_TEXTOS];
        int f = 0;
        int cont15 = 0;
        int cont16 = 1;
	
      
        
        //Pasamos el contenido del array char unidimensional palabra al array char unidimensional lista.palabra
        for(int i = 0; i < sizePalabra; i++)
        {
            lista.palabra[i] = palabra[i];
            cont15++;
        }
        
        

        //El último caracter de un array char unidimensional tiene que ser \0
        lista.palabra[cont15] = '\0';
    
        
        //Recogemos el número de registros que hay actualmente en el fichero
        numero_registros = nRegistrosFicheroDeMiLista();
    
	
        //Pasamos el texto a otro array
        strcpy(auxiliar, lista.palabra);
        
        
        //Pasamos la primera letra de la palabra a mayúscula, en caso de que la palabra estuviera en minuscula o todo la palabra en mayúscula
        //los diptongos no distingue minusculas de las mayusculas  
        char l;
        
        for(int e = 0; e < (int)strlen(auxiliar); e++)
		{
			l = auxiliar[e];
			
			
			if(l > 0 && islower(l))//islower investiga si la letra es minuscula
			{
				if(e == 0)
				{
					
					auxiliar[0] = toupper(l);//toupper convierte el caracter de minúscula a mayúscula
				}
			}
			else if(l > 0 && isupper(l))//isupper investiga si un caracter es mayuscula
			{
				auxiliar[e] = tolower(l);//tolower convierte el caracter de mayúscula a minúscula
					
				if(e == 0)
				{
					auxiliar[0] = toupper(l);
				}
				
			}
			
			
		}
        
      
        //Coloca el cursor al inicio del fichero
        rewind(listado);
	
		
		//Si no hay registro en el fichero se ejecuta esta bloque, en caso contrario pues el else
        if(numero_registros == 0)
        {
            //Permite situar el cursor de lectura/escritura de un fichero en una posición determinada, en este caso al principio.
            fseek(listado, 0, SEEK_SET);
		
            //Permite escribir un determinado número de bloques de memoria de una longitud determinada en un fichero
            fwrite(&auxiliar, sizeof(auxiliar), 1, listado);
		
            //Permite escribir el contenido del buffer asociado en el fichero. Si el fichero está abierto para leer, se borra el contenido del buffer
            fflush(listado);
            	
            //Recogemos el número de registros que tiene el fichero
            numero_registros = nRegistrosFicheroDeMiLista();
        
        }
        else
        {
            //Recogemos el número de registros que tiene el fichero
            numero_registros = nRegistrosFicheroDeMiLista();
        
            //Permite situar el cursor de lectura/escritura de un fichero en una posición determinada, en este caso al principio.
            fseek(listado, 0, SEEK_SET);
		
		
			//Leemos los registros del fichero y lo comparamos con lo que se escribio en el entry
            for(int i=1; i<= numero_registros; i++)
            {
                //Leemos los resgistros del fichero
                fread(&lista, sizeof(Tlista), 1, listado);
				
                //strcasecmp compara si dos cadenas son iguales o no, si no lo son devuelve positivo o negativo en función si es menor o mayor, sin tener en cuenta si es mayuscula o minuscula
                comparacion = strcasecmp(auxiliar, lista.palabra);
			
   
				//Si el resultado de la comparación es cero o sea si es igual se ejecutara el bloque y sino pues else
                if(comparacion == 0)
                {
                    igual++;
                    f++;
                
                }
                else
                {
					//Escribiremos la palabra en el fichero en el caso de que se cumpla la condición
                    if(i == numero_registros && igual == 0)
                    {
                        //Lo agregamos al fichero
                        fseek(listado, 0, SEEK_CUR);
                        fwrite(&auxiliar, sizeof(auxiliar), 1, listado);
                        fflush(listado);
                 
                    }
                    else if(igual != 0 and cont16 == numero_registros)
                    {
					
                        //printf("\n\nLa palabra %s ya esta en la lista, así que no se escribira\n\n", auxiliar);
					
                    }
                
            
                }
            
                cont16++;
            
            }
		
        }
	
    
    
        //Imprimimos por el textview 2 si la palabra que buscamos esta o no en nuestra lista
        if(f==0)
        {
            char textSalida[15] = {'A','d','d','e','d',' ','t','o',' ','f','i','l','e','.','\0'};
        
            gtk_entry_set_text (GTK_ENTRY (stuff->widEntry4), textSalida);
            
        }
        else
        {
          
            char textSalida2[27] = {'I','t',' ','i','s',' ','a','l','r','e','a','d','y',' ','i','n',' ','t','h','e',' ','f','i','l','e','.','\0'};
        
            gtk_entry_set_text (GTK_ENTRY (stuff->widEntry4), textSalida2);
        
        }
        
    }
    else if(sizeText == 0)
    {
       
        char warnings5[26] = {'N','o','t','h','i','n','g',' ','h','a','s',' ','b','e','e','n',' ','w','r','i','t','t','e','n','.','\0'};
        
        //Lo pasamos al segundo entry
        gtk_entry_set_text (GTK_ENTRY (stuff->widEntry4), warnings5);
        
    }
    
 
    
    //CALCULAR TIEMPO DE EJECUCIÓN
    seg2 = clock();
    tiempo = (float(seg2-seg1)/1000000);
   
     
    //AHORA LO PASAMOS AL LABEL TIEMPO
    char tiempoLabel[5000];
    int contador1 = 0;
    short numDigitosTime;
    short parteEntera, parteDecimalAEntero, cifraEntera1, cifraEntera2, cifraEntera3, cifra1, cifra2, cifra3;
    float parteDecimal;
    
    
    //Calculamos las cifras de la variable tiempo
    if (tiempo < 10)
    {
        numDigitosTime = 1;
    
    }
    else if (tiempo < 100)
    {
        numDigitosTime = 2;
    
    }
    else if (tiempo < 1000)
    {
        numDigitosTime = 3;
    
    }
    else if (tiempo > 1000)
    {
        //cout<<"Fuera de rango"<<endl;
    }
    
    
    numDigitosTime = numDigitosTime + 6;
    
    
    //Pasamos los números a caracteres en un array unidimensional de tipo char
    for(int b = 1; b <= numDigitosTime; b++)
    {
        if(numDigitosTime == 7)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                 
                parteDecimal = tiempo - parteEntera;
                
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
                        
                //PARTE ENTERA
                if(parteEntera == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(parteEntera == 1)
                {
                    tiempoLabel[0] = '1';
       
                }
                else if(parteEntera == 2)
                {
                    tiempoLabel[0] = '2';
       
                }
                else if(parteEntera == 3)
                {
                    tiempoLabel[0] = '3';
      
                }
                else if(parteEntera == 4)
                {
                    tiempoLabel[0] = '4';
         
                }
                else if(parteEntera == 5)
                {
                    tiempoLabel[0] = '5';
        
                }
                else if(parteEntera == 6)
                {
                    tiempoLabel[0] = '6';
      
                }
                else if(parteEntera == 7)
                {
                    tiempoLabel[0] = '7';
       
                }
                else if(parteEntera == 8)
                {
                    tiempoLabel[0] = '8';
       
                }
                else if(parteEntera == 9)
                {
                    tiempoLabel[0] = '9';
      
                }
                
                
                tiempoLabel[1] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[2] = '0';
    
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[2] = '1';
      
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[2] = '2';
        
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[2] = '3';
       
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[2] = '4';
      
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[2] = '5';
       
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[2] = '6';
       
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[2] = '7';
       
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[2] = '8';
      
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[2] = '9';
       
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[3] = '0';
       
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[3] = '1';
       
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[3] = '2';
        
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[3] = '3';
        
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[3] = '4';
       
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[3] = '5';
         
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[3] = '6';
       
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[3] = '7';
       
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[3] = '8';
       
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[3] = '9';
       
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[4] = '0';
       
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[4] = '1';
         
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[4] = '2';
         
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[4] = '3';
       
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[4] = '4';
        
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[4] = '5';
        
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[4] = '6';
       
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[4] = '7';
      
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[4] = '8';
       
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[4] = '9';
      
                }
                
                    
                tiempoLabel[5] = ' ';
                
                tiempoLabel[6] = 's';
                
                
            }
  
            contador1++;
            
            
        }
        else if(numDigitosTime == 8)
        {
            if(b == numDigitosTime)
            {
                
                parteEntera = (int)tiempo;
                
                cifraEntera1 = parteEntera % 10;
                cifraEntera2 = parteEntera / 10;
                
                parteDecimal = tiempo - parteEntera;
                 
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
                
              
                //PARTE ENTERA
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[0] = '0';
        
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[0] = '1';
        
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[0] = '2';
       
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[0] = '3';
          
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[0] = '4';
        
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[0] = '5';
           
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[0] = '6';
           
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[0] = '7';
         
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[0] = '8';
          
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[0] = '9';
          
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[1] = '1';
         
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[1] = '2';
         
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[1] = '3';
        
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[1] = '4';
         
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[1] = '5';
        
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[1] = '6';
      
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[1] = '7';
       
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[1] = '8';
         
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[1] = '9';
        
                }
                
                tiempoLabel[2] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[3] = '0';
        
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[3] = '1';
        
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[3] = '2';
      
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[3] = '3';
          
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[3] = '4';
         
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[3] = '5';
        
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[3] = '6';
        
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[3] = '7';
         
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[3] = '8';
         
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[3] = '9';
       
                }
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[4] = '0';
        
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[4] = '1';
         
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[4] = '2';
          
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[4] = '3';
        
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[4] = '4';
        
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[4] = '5';
         
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[4] = '6';
         
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[4] = '7';
        
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[4] = '8';
         
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[4] = '9';
        
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[5] = '0';
        
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[5] = '1';
        
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[5] = '2';
        
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[5] = '3';
       
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[5] = '4';
       
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[5] = '5';
        
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[5] = '6';
       
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[5] = '7';
        
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[5] = '8';
       
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[5] = '9';
        
                }
                
                    
                tiempoLabel[6] = ' ';
                
                tiempoLabel[7] = 's';
                
                
                
            }


            contador1++;
            
        }
        else if(numDigitosTime == 9)
        {
            if(b == numDigitosTime)
            {
                parteEntera = (int)tiempo;
                
                cifraEntera3 = parteEntera / 100;
                cifraEntera2 = (parteEntera - cifraEntera3*100)/10;
                cifraEntera1 = parteEntera % 10;
                             
                parteDecimal = tiempo - parteEntera;
                       
                parteDecimalAEntero = parteDecimal * 1000;
                
                
                cifra3 = parteDecimalAEntero / 100;
                cifra2 = (parteDecimalAEntero - cifra3*100)/10;
                cifra1 = parteDecimalAEntero % 10;
                
                
                
                //PARTE ENTERA
                
                //CIFRA ENTERA 3
                if(cifraEntera3 == 0)
                {
                    tiempoLabel[0] = '0';
      
                }
                else if(cifraEntera3 == 1)
                {
                    tiempoLabel[0] = '1';
         
                }
                else if(cifraEntera3 == 2)
                {
                    tiempoLabel[0] = '2';
         
                }
                else if(cifraEntera3 == 3)
                {
                    tiempoLabel[0] = '3';
      
                }
                else if(cifraEntera3 == 4)
                {
                    tiempoLabel[0] = '4';
       
                }
                else if(cifraEntera3 == 5)
                {
                    tiempoLabel[0] = '5';
       
                }
                else if(cifraEntera3 == 6)
                {
                    tiempoLabel[0] = '6';
      
                }
                else if(cifraEntera3 == 7)
                {
                    tiempoLabel[0] = '7';
       
                }
                else if(cifraEntera3 == 8)
                {
                    tiempoLabel[0] = '8';
      
                }
                else if(cifraEntera3 == 9)
                {
                    tiempoLabel[0] = '9';
      
                }
                
                //CIFRA ENTERA 2
                if(cifraEntera2 == 0)
                {
                    tiempoLabel[1] = '0';
       
                }
                else if(cifraEntera2 == 1)
                {
                    tiempoLabel[1] = '1';
       
                }
                else if(cifraEntera2 == 2)
                {
                    tiempoLabel[1] = '2';
       
                }
                else if(cifraEntera2 == 3)
                {
                    tiempoLabel[1] = '3';
      
                }
                else if(cifraEntera2 == 4)
                {
                    tiempoLabel[1] = '4';
       
                }
                else if(cifraEntera2 == 5)
                {
                    tiempoLabel[1] = '5';
       
                }
                else if(cifraEntera2 == 6)
                {
                    tiempoLabel[1] = '6';
      
                }
                else if(cifraEntera2 == 7)
                {
                    tiempoLabel[1] = '7';
       
                }
                else if(cifraEntera2 == 8)
                {
                    tiempoLabel[1] = '8';
      
                }
                else if(cifraEntera2 == 9)
                {
                    tiempoLabel[1] = '9';
      
                }
                
                
                //CIFRA ENTERA 1
                if(cifraEntera1 == 1)
                {
                    tiempoLabel[2] = '1';
        
                }
                else if(cifraEntera1 == 2)
                {
                    tiempoLabel[2] = '2';
         
                }
                else if(cifraEntera1 == 3)
                {
                    tiempoLabel[2] = '3';
         
                }
                else if(cifraEntera1 == 4)
                {
                    tiempoLabel[2] = '4';
       
                }
                else if(cifraEntera1 == 5)
                {
                    tiempoLabel[2] = '5';
         
                }
                else if(cifraEntera1 == 6)
                {
                    tiempoLabel[2] = '6';
     
                }
                else if(cifraEntera1 == 7)
                {
                    tiempoLabel[2] = '7';
        
                }
                else if(cifraEntera1 == 8)
                {
                    tiempoLabel[2] = '8';
     
                }
                else if(cifraEntera1 == 9)
                {
                    tiempoLabel[2] = '9';
       
                }
                
                tiempoLabel[3] = '.';
                
                
                //PARTE DECIMAL
                
                //CIFRA3
                if(cifra3 == 0)
                {
                    tiempoLabel[4] = '0';
        
                }
                else if(cifra3 == 1)
                {
                    
                    tiempoLabel[4] = '1';
         
                }
                else if(cifra3 == 2)
                {
                    
                    tiempoLabel[4] = '2';
       
                }
                else if(cifra3 == 3)
                {
                    
                    tiempoLabel[4] = '3';
       
                }
                else if(cifra3 == 4)
                {
                    
                    tiempoLabel[4] = '4';
      
                }
                else if(cifra3 == 5)
                {
                    
                    tiempoLabel[4] = '5';
       
                }
                else if(cifra3 == 6)
                {
                    
                    tiempoLabel[4] = '6';
        
                }
                else if(cifra3 == 7)
                {
                    
                    tiempoLabel[4] = '7';
      
                }
                else if(cifra3 == 8)
                {
                    
                    tiempoLabel[4] = '8';
       
                }
                else if(cifra3 == 9)
                {
                    
                    tiempoLabel[4] = '9';
        
                }
                
                
                //CIFRA2
                if(cifra2 == 0)
                {
                    tiempoLabel[5] = '0';
       
                }
                else if(cifra2 == 1)
                {
                    tiempoLabel[5] = '1';
        
                }
                else if(cifra2 == 2)
                {
                    
                    tiempoLabel[5] = '2';
       
                }
                else if(cifra2 == 3)
                {
                    
                    tiempoLabel[5] = '3';
       
                }
                else if(cifra2 == 4)
                {
                    
                    tiempoLabel[5] = '4';
        
                }
                else if(cifra2 == 5)
                {
                    
                    tiempoLabel[5] = '5';
        
                }
                else if(cifra2 == 6)
                {
                    
                    tiempoLabel[5] = '6';
         
                }
                else if(cifra2 == 7)
                {
                    
                    tiempoLabel[5] = '7';
        
                }
                else if(cifra2 == 8)
                {
                    
                    tiempoLabel[5] = '8';
        
                }
                else if(cifra2 == 9)
                {
                    
                    tiempoLabel[5] = '9';
        
                }
                
                
                //CIFRA1
                if(cifra1 == 0)
                {
                    tiempoLabel[6] = '0';
        
                }
                else if(cifra1 == 1)
                {
                    tiempoLabel[6] = '1';
        
                }
                else if(cifra1 == 2)
                {
                    
                    tiempoLabel[6] = '2';
        
                }
                else if(cifra1 == 3)
                {
                    
                    tiempoLabel[6] = '3';
        
                }
                else if(cifra1 == 4)
                {
                    
                    tiempoLabel[6] = '4';
       
                }
                else if(cifra1 == 5)
                {
                    
                    tiempoLabel[6] = '5';
       
                }
                else if(cifra1 == 6)
                {
                    
                    tiempoLabel[6] = '6';
        
                }
                else if(cifra1 == 7)
                {
                    
                    tiempoLabel[6] = '7';
         
                }
                else if(cifra1 == 8)
                {
                    
                    tiempoLabel[6] = '8';
        
                }
                else if(cifra1 == 9)
                {
                    
                    tiempoLabel[6] = '9';
        
                }
                
                    
                tiempoLabel[7] = ' ';
                
                tiempoLabel[8] = 's'; 
                
            }
            
            contador1++;
            
        }
        
     
    }
    
    
    //Ponemos esto para indicar que donde acaba el array
    tiempoLabel[contador1] = '\0';
    
	//Lo enviamos al label para mostrarlo por pantalla
    gtk_label_set_text(GTK_LABEL (stuff->widLabel6), tiempoLabel);
    
    
  
}




//Este método es para contabilizar el total de registros del fichero
int nRegistrosFicheroDeMiLista()
{
	fseek(listado, 0, SEEK_END);
	return ftell(listado) / sizeof(lista);
}



//Este método es para contabilizar el total de registros del fichero 2
int nRegistrosFichero2DeMiLista()
{
	fseek(listadoOrdenado, 0, SEEK_END);
	return ftell(listadoOrdenado) / sizeof(lista);
}




int main(int argc, char **argv)
{
    //1º ARCHIVO
	/**Creamos el archivo binario de mi lista de palabras en alemán.
	 * Modos de acceso:
	 * - r: Lectura, el fichero existe y se quiere acceder a su contenido.
	 * - w: Escritura, el fichero no existe y será creado para introducir datos.
	 * - a: Añadir, el fichero existe y se quiere añadir datos al final.
	 * - r+: Lectura y escritura, el archivo debe existir, si no, da error. El archivo no se sobreescribe si existiera.
	 * - w+: Lectura y escritura, si el archivo existiera se sobreescribe.
	 * - a+: Lectura y escritura, si el archivo no existe es creado. Si existe, se añaden datos al final.
	 * - b: Si quieres especificar que vas a manipular un fichero binario, tendras que añadir a estos códigos la letra b. Es decir, los códigos tendrían el siguiente aspecto: rb, wb, ab, rb+, wb+, ab+.
	 * - t: Si quieres especificar que vas a manipular un fichero de texto, tendras que añadir a estos códigos la letra t. Es decir, los códigos tendrían el siguiente aspecto: rt, wt, at, rt+, wt+, at+.
	 * **/
	if((listado=fopen("/home/pi/Desktop/Proyectos Geany/C++/Data_words_v2/Data/idiomaAlemán.dat", "rb+"))==NULL)//antes r+b
	{
		if((listado=fopen("/home/pi/Desktop/Proyectos Geany/C++/Data_words_v2/Data/idiomaAlemán.dat", "ab+"))==NULL)//antes era a+b pero este escribe datos al final del fichero
		{
			printf("No se puede crear el fichero");
		}
		else
		{	
			fclose(listado);
			
			if((listado=fopen("/home/pi/Desktop/Proyectos Geany/C++/Data_words_v2/Data/idiomaAlemán.dat", "rb+"))==NULL)//antes r+b
			{
				printf("No se puede abrir el fichero");
			}
		}
	}
	
    
    
    
    /**Declaramos las variables necesarias**/
    GtkWidget *window, *notebook, *titlePage1, *titlePage2, *titlePage4, *titlePage5, *titlePage6;
    GtkWidget *label1Page1, *label2Page1, *label3Page1, *label4Page1, *label5Page1, *label6Page1, *label7Page1, *label8Page1, *label9Page1, *label10Page1,
              *label11Page1, *label12Page1, *label13Page1, *label1Page2, 
              *label2Page2, *label3Page2, *label4Page2, *label5Page2, *label1Page4,
              *label2Page4, *label3Page4, *label4Page4, *label5Page4, *label6Page4, *label7Page4, *label8Page4, *label9Page4, *label10Page4, *label11Page4,
              *label1Page5, *label2Page5, *label3Page5, *label4Page5, *label5Page5, *label6Page5, *label7Page5, *label8Page5, 
              *label9Page5, *label10Page5, *label11Page5, *label1Page6, *label2Page6, *label3Page6, *label4Page6, *label5Page6;
    GtkWidget *page1, *page2, *page4, *page5, *page6;
    GtkWidget *entry1, *entry2, *entry3, *entry4; 
    GtkWidget *textViewMultilinea1, *textViewMultilinea2, *textViewMultilinea4, *textViewMultilinea5, *textViewMultilinea6;
    GtkWidget *buttonLimpiar1, *buttonBuscar1, *buttonLimpiar2, *buttonBuscar2, *buttonLimpiar4, *buttonListar2,
              *buttonLimpiar5, *buttonAdd, *buttonLimpiar6, *buttonAdd2, *buttonContabilizarRegistros;
    GtkWidget *radioButtonPrimeraLetra1, *radioButtonPrimeraLetra2, *radioButtonPrimeraLetra3, *radioButtonPrimeraLetra4, *radioButtonPrimeraLetra5, 
              *radioButtonPrimeraLetra6, *radioButtonPrimeraLetra7, *radioButtonPrimeraLetra8, *radioButtonPrimeraLetra9, *radioButtonPrimeraLetra10, 
              *radioButtonPrimeraLetra11, *radioButtonPrimeraLetra12, *radioButtonPrimeraLetra13, *radioButtonPrimeraLetra14, *radioButtonPrimeraLetra15, 
              *radioButtonPrimeraLetra16, *radioButtonPrimeraLetra17, *radioButtonPrimeraLetra18, *radioButtonPrimeraLetra19, *radioButtonPrimeraLetra20, 
              *radioButtonPrimeraLetra21, *radioButtonPrimeraLetra22, *radioButtonPrimeraLetra23, *radioButtonPrimeraLetra24, *radioButtonPrimeraLetra25, 
              *radioButtonPrimeraLetra26, *radioButtonPrimeraLetra27, *radioButtonPrimeraLetra28, *radioButtonSegundaLetra1, *radioButtonSegundaLetra2, 
              *radioButtonSegundaLetra3, *radioButtonSegundaLetra4, 
              *radioButtonSegundaLetra5, *radioButtonSegundaLetra6, *radioButtonSegundaLetra7, *radioButtonSegundaLetra8, *radioButtonSegundaLetra9, 
              *radioButtonSegundaLetra10, *radioButtonSegundaLetra11, *radioButtonSegundaLetra12, *radioButtonSegundaLetra13, *radioButtonSegundaLetra14, 
              *radioButtonSegundaLetra15, *radioButtonSegundaLetra16, *radioButtonSegundaLetra17, *radioButtonSegundaLetra18, *radioButtonSegundaLetra19, 
              *radioButtonSegundaLetra20, *radioButtonSegundaLetra21, *radioButtonSegundaLetra22, *radioButtonSegundaLetra23, *radioButtonSegundaLetra24, 
              *radioButtonSegundaLetra25, *radioButtonSegundaLetra26, *radioButtonSegundaLetra27, *radioButtonSegundaLetra28, *radioButtonNumLetras1, 
              *radioButtonNumLetras2, *radioButtonNumLetras3, *radioButtonNumLetras4, *radioButtonNumLetras5, *radioButtonNumLetras6, *radioButtonNumLetras7, 
              *radioButtonNumLetras8, *radioButtonNumLetras9, *radioButtonNumLetras10, *radioButtonNumLetras11, *radioButtonNumLetras12, 
              *radioButtonNumLetras13, *radioButtonNumLetras14, *radioButtonNumLetras15, *radioButtonNumLetras16, *radioButtonNumLetras17, 
              *labelRadioButtonPrimeraLetra1, *labelRadioButtonSegundaLetra1, *labelRadioButtonNumLetras1, *box, *box2, *box3;
    GtkWidget *scroll1, *scroll2, *scroll4, *scroll5, *scroll6;
    GtkWidget *vbox1Page1, *vbox2Page1, *vbox3Page1, *hbox1Page1, *hbox2Page1, *hbox3Page1, *hbox4Page1, *hbox5Page1, *hbox6Page1, *hbox7Page1, *hbox8Page1, 
              *hbox9Page1, *hbox10Page1, *vbox4Page1, *vbox5Page1, *vbox1Page4, 
              *vbox2Page4, *vbox3Page4, *hbox1Page4, *hbox2Page4, *hbox3Page4, *hbox4Page4, *hbox5Page4, *hbox6Page4, *hbox7Page4, *hbox8Page4, *hbox9Page4, 
              *hbox10Page4, *hbox11Page4, *hbox1Page5, *hbox2Page5, *hbox3Page5, *hbox4Page5, *hbox5Page5, *hbox6Page5, *hbox7Page5, *hbox8Page5, *hbox9Page5, 
              *hbox10Page5, *vbox1Page5, *vbox2Page5, *vbox3Page5, *vbox4Page5, *vbox5Page5;
    GtkWidget *layerFixed;
	
    GtkTextBuffer *text1, *text2, *text4, *text5, *text6;
    
    GtkTextIter iter1, iter2, iter4, iter5, iter6;
    
   
    
    /**Inicializar GTK + y todas sus bibliotecas de soporte / Inicializar el gtk**/
    gtk_init (&argc, &argv);
	
    /**Crea la ventana**/
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	
    /**Dale un título y muéstralo al usuario**/
    gtk_window_set_title (GTK_WINDOW (window), "German language");
	
    /**Le ponemos un borde a la ventana**/
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);
	
    /**Establecemos el tamaño de la ventana**/
    gtk_widget_set_size_request (window, 800, 600);
	
    /**Centramos la ventana en el centro de la pantalla**/
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER_ALWAYS);
	
    /**Creamos un notebook**/
    notebook = gtk_notebook_new();
	
    /**Posicionamos el notebook**/
    gtk_notebook_set_tab_pos(GTK_NOTEBOOK(notebook), GTK_POS_TOP);
    
    /**Creamos los scroll**/
    scroll1 = gtk_scrolled_window_new(NULL, NULL);
    scroll2 = gtk_scrolled_window_new(NULL, NULL);
    scroll4 = gtk_scrolled_window_new(NULL, NULL);
    scroll5 = gtk_scrolled_window_new(NULL, NULL);
    scroll6 = gtk_scrolled_window_new(NULL, NULL);
    
        
    //Primera página
    page1 = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 1);
    titlePage1 = gtk_label_new("Search group");
    layerFixed = gtk_fixed_new();
    label1Page1 = gtk_label_new("                                                Enter words to search                                                ");
    label2Page1 = gtk_label_new(" The were not found in the file  ");
    label11Page1 = gtk_label_new("\n");
    label3Page1 = gtk_label_new("To search:");
    label4Page1 = gtk_label_new("");
    label5Page1 = gtk_label_new("Not found:");
    label6Page1 = gtk_label_new("");
    label7Page1 = gtk_label_new("Time:");
    label8Page1 = gtk_label_new("");
    label13Page1 = gtk_label_new("\n");
    label12Page1 = gtk_label_new("\n\n");
    label10Page1 = gtk_label_new("\n(If the words begin with ä, \nö, ü, we write them in upper \ncase, if they are in the rest \nof the word we write them \nin lower case.\nIt does not omit: ºª·¬¡¿´¨çÇ€\n\nMax: 9000 characters.");
    
    
    /**PRIMER TextView**/
    textViewMultilinea1 = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(scroll1), textViewMultilinea1);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scroll1), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);  
    gtk_scrolled_window_set_shadow_type(GTK_SCROLLED_WINDOW(scroll1), GTK_SHADOW_ETCHED_IN);
   
    text1 = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textViewMultilinea1));
    
    gtk_text_buffer_get_iter_at_offset(text1, &iter1, 0);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textViewMultilinea1), TRUE);
    
   
    /**SEGUNDO TextView**/
    textViewMultilinea2 = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(scroll2), textViewMultilinea2);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scroll2), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);  
    gtk_scrolled_window_set_shadow_type(GTK_SCROLLED_WINDOW(scroll2), GTK_SHADOW_ETCHED_IN);
    
    text2 = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textViewMultilinea2));
    
    gtk_text_buffer_get_iter_at_offset(text2, &iter2, 0);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textViewMultilinea2), FALSE);
    
    /**Establecemos el color de los widgets del fondo de los textView**/
    const GdkRGBA colorBakgroundTextView1 = {0, 0, 0, 0.59};   
  
    gtk_widget_override_background_color(textViewMultilinea1, GTK_STATE_FLAG_NORMAL, &colorBakgroundTextView1);
    gtk_widget_override_background_color(textViewMultilinea2, GTK_STATE_FLAG_NORMAL, &colorBakgroundTextView1);
    
    /**Establecemos el color y tamaño del texto del textview**/
    
    /**BOTONES**/
    buttonLimpiar1 = gtk_button_new_with_mnemonic ("_Clear");
    gtk_widget_set_size_request(buttonLimpiar1, 70, 30);
    buttonBuscar1 = gtk_button_new_with_mnemonic ("_Search");
    gtk_widget_set_size_request(buttonBuscar1, 70, 30);
    
    /**Metemos los widgets en cajas horizontales y vericales y luego en el page1**/
    hbox1Page1 = gtk_hbox_new(TRUE, 5);
    hbox2Page1 = gtk_hbox_new(TRUE, 5);
    hbox3Page1 = gtk_hbox_new(FALSE, 5);
    hbox4Page1 = gtk_hbox_new(FALSE, 5);
    hbox5Page1 = gtk_hbox_new(FALSE, 5);
    hbox6Page1 = gtk_hbox_new(FALSE, 5);
    hbox7Page1 = gtk_hbox_new(FALSE, 5);
    hbox8Page1 = gtk_hbox_new(FALSE, 5);
    hbox9Page1 = gtk_hbox_new(FALSE, 5);
    hbox10Page1 = gtk_hbox_new(FALSE, 5);
    vbox1Page1 = gtk_vbox_new(FALSE, 5);
    vbox2Page1 = gtk_vbox_new(FALSE, 5);
    vbox3Page1 = gtk_vbox_new(FALSE, 5);
    vbox4Page1 = gtk_vbox_new(FALSE, 5);
    vbox5Page1 = gtk_vbox_new(FALSE, 5);
    
    
    //Metemos esto para ocupar espacio en la ventana
    label9Page1 = gtk_label_new("");
    gtk_box_pack_start(GTK_BOX(hbox7Page1), label9Page1, FALSE, FALSE, 2);
    gtk_box_pack_start(GTK_BOX(vbox4Page1), hbox7Page1, FALSE, FALSE, 5);
    
    //Metemos el primer label en el primer horizontal y luego en el primer vertical, también metemos el primer scroll en el primer vertical
    gtk_box_pack_start(GTK_BOX(hbox1Page1), label1Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox1Page1), hbox1Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox1Page1), scroll1, TRUE, TRUE, 5);//aquí uno
    
    //Metemos el segundo label en el segundo horizontal y luego en el segundo vertical, también metemos el segundo scroll en el segundo vertical
    gtk_box_pack_start(GTK_BOX(hbox2Page1), label2Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox3Page1), hbox2Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox3Page1), scroll2, TRUE, TRUE, 5);//aquí otro
    
    //Metemos el tercer y cuarto label en el tercer y cuarto horizontal, luego los botones lo ponemos en el quinto horizontal
    gtk_box_pack_start(GTK_BOX(hbox10Page1), label11Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox3Page1), label3Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox3Page1), label4Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox4Page1), label5Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox4Page1), label6Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox5Page1), label7Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox5Page1), label8Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox9Page1), label12Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox9Page1), label10Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox6Page1), label13Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox6Page1), buttonLimpiar1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox6Page1), buttonBuscar1, FALSE, FALSE, 5);//los valores de aquí no son la posición del botón, sino el tamaño de la caja.
    
    //Metemmos el tercer, cuarto y quinto horizontales y el tercer vertical
    gtk_box_pack_start(GTK_BOX(vbox2Page1), hbox10Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page1), hbox3Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page1), hbox4Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page1), hbox5Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page1), hbox6Page1, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page1), hbox9Page1, FALSE, FALSE, 5);
    
    //Metemos los verticales en los horizontales
    gtk_box_pack_start(GTK_BOX(hbox8Page1), vbox5Page1, TRUE, FALSE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page1), vbox1Page1, FALSE, TRUE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page1), vbox2Page1, FALSE, TRUE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page1), vbox3Page1, FALSE, TRUE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page1), vbox4Page1, FALSE, TRUE, 3);
    
    
    //Lo metemos en el contenedor page1
    gtk_container_add(GTK_CONTAINER(page1), hbox8Page1);
    
    /**LO AÑADIMOS AL NOTEBOOK**/
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), page1, titlePage1);
	
    //Segunda página
    page2 = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 1);
    titlePage2 = gtk_label_new("Individual search");
    layerFixed = gtk_fixed_new();
    label1Page2 = gtk_label_new("Enter the word to search");
    label2Page2 = gtk_label_new("Search result");
    label3Page2 = gtk_label_new("Time:");
    label4Page2 = gtk_label_new("");
    label5Page2 = gtk_label_new("\n\n\n\n(If the words begin with ä, \nö, ü, we write them in upper \ncase, if they are in the rest \nof the word we write them \nin lower case.");
    
    /**Primer entry**/
    entry1 = gtk_entry_new();
    gtk_entry_set_max_length (GTK_ENTRY (entry1), 82);//Para poner un límite de caracter del texto a introducir
    gtk_entry_set_text (GTK_ENTRY (entry1), "");//Para enviar texto
    gtk_editable_set_editable (GTK_EDITABLE (entry1), TRUE);//Para que no se pueda editar el texto
    gtk_widget_set_size_request(entry1, 280, 50);//Para establecer el tamaño
    
    /**Segundo entry**/
    entry2 = gtk_entry_new();
    gtk_entry_set_max_length (GTK_ENTRY (entry2), 82);//Para poner un límite de caracter del texto a introducir
    gtk_entry_set_text (GTK_ENTRY (entry2), "");//Para enviar texto
    gtk_editable_set_editable (GTK_EDITABLE (entry2), FALSE);//Para que no se pueda editar el texto
    gtk_widget_set_size_request(entry2, 280, 50);//Para establecer el tamaño
    
    /**Establecemos el color de los widgets entry**/
    const GdkRGBA colorBakgroundEntry1 = {0, 0, 0, 0.59};   
  
    gtk_widget_override_background_color(entry1, GTK_STATE_FLAG_NORMAL, &colorBakgroundEntry1);
    gtk_widget_override_background_color(entry2, GTK_STATE_FLAG_NORMAL, &colorBakgroundEntry1);
    
     /**BOTONES**/
    buttonLimpiar2 = gtk_button_new_with_mnemonic ("_Clear");
    gtk_widget_set_size_request(buttonLimpiar2, 70, 30);
    buttonBuscar2 = gtk_button_new_with_mnemonic ("_Search");
    gtk_widget_set_size_request(buttonBuscar2, 70, 30);
    
    /**Lo añadimos al fixed**/
    gtk_fixed_put(GTK_FIXED(layerFixed), label5Page2, 49, 5);
    gtk_fixed_put(GTK_FIXED(layerFixed), label1Page2, 420, 64);
    gtk_fixed_put(GTK_FIXED(layerFixed), entry1, 660, 52);
    gtk_fixed_put(GTK_FIXED(layerFixed), label2Page2, 515, 204);
    gtk_fixed_put(GTK_FIXED(layerFixed), entry2, 660, 192);
    gtk_fixed_put(GTK_FIXED(layerFixed), label3Page2, 560, 300);
    gtk_fixed_put(GTK_FIXED(layerFixed), label4Page2, 650, 300);
    gtk_fixed_put(GTK_FIXED(layerFixed), buttonLimpiar2, 550, 400);
    gtk_fixed_put(GTK_FIXED(layerFixed), buttonBuscar2, 680, 400);
    
    /**Lo añadimos al page2**/
    gtk_container_add(GTK_CONTAINER(page2), layerFixed);
    
    /**Luego lo añadimos al notebook**/
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), page2, titlePage2);
	
	
    //Cuarta página
    page4 = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 1);
    
    titlePage4 = gtk_label_new("Show my words");
    layerFixed = gtk_fixed_new();
    label1Page4 = gtk_label_new("    Words that I have in the file    ");
    label2Page4 = gtk_label_new("Total records:");
    label3Page4 = gtk_label_new("");
    label10Page4 = gtk_label_new("-      Filtered logs:");
    label11Page4 = gtk_label_new("");
    label4Page4 = gtk_label_new("-       Time:");
    label5Page4 = gtk_label_new("");
    
    
    label7Page4 = gtk_label_new("1st Filter - Choose the first letter of the word");
    label8Page4 = gtk_label_new("2nd Filter - Choose the second letter of the word");
    label9Page4 = gtk_label_new("3rd Filter - Choose the range of the number of letters in the word");
    
    textViewMultilinea4 = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(scroll4), textViewMultilinea4);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scroll4), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);  
    gtk_scrolled_window_set_shadow_type(GTK_SCROLLED_WINDOW(scroll4), GTK_SHADOW_ETCHED_IN);
   
    text4 = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textViewMultilinea4));
    
    gtk_text_buffer_get_iter_at_offset(text4, &iter4, 0);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textViewMultilinea4), FALSE);
    
    /**Establecemos el color de los widgets del fondo de los textView**/
    const GdkRGBA colorBakgroundTextView4 = {0, 0, 0, 0.59};   
  
    gtk_widget_override_background_color(textViewMultilinea4, GTK_STATE_FLAG_NORMAL, &colorBakgroundTextView4);
    /**Establecemos el color y tamaño del texto del textview**/
    
    /**BOTONES**/
    buttonLimpiar4 = gtk_button_new_with_mnemonic ("_Clear");
    gtk_widget_set_size_request(buttonLimpiar4, 70, 30);
    buttonListar2 = gtk_button_new_with_mnemonic ("_Show");
    gtk_widget_set_size_request(buttonListar2, 70, 30);
    buttonContabilizarRegistros = gtk_button_new_with_mnemonic ("_Count records");
    gtk_widget_set_size_request(buttonContabilizarRegistros, 70, 30);
    
    
    //RADIO BUTTON - Primera letra
    box = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 2);
    gtk_box_set_homogeneous (GTK_BOX (box), TRUE);
    
    radioButtonPrimeraLetra1 = gtk_radio_button_new (NULL);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra1), FALSE); 
    labelRadioButtonPrimeraLetra1 = gtk_label_new(" Unfiltered");
    
    gtk_container_add (GTK_CONTAINER (radioButtonPrimeraLetra1), labelRadioButtonPrimeraLetra1);
    
    radioButtonPrimeraLetra2 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra1), " A");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra2), TRUE); 
    
    radioButtonPrimeraLetra3 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra2), " B");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra3), TRUE);
    
    radioButtonPrimeraLetra4 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra3), " C");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra4), TRUE);
    
    radioButtonPrimeraLetra5 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra4), " D");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra5), TRUE);
    
    radioButtonPrimeraLetra6 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra5), " E");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra6), TRUE);
    
    radioButtonPrimeraLetra7 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra6), " F");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra7), TRUE);
    
    radioButtonPrimeraLetra8 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra7), " G");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra8), TRUE);
    
    radioButtonPrimeraLetra9 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra8), " H");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra9), TRUE);
    
    radioButtonPrimeraLetra10 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra9), " I");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra10), TRUE);
    
    radioButtonPrimeraLetra11 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra10), " J");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra11), TRUE);
    
    radioButtonPrimeraLetra12 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra11), " K");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra12), TRUE);
    
    radioButtonPrimeraLetra13 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra12), " L");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra13), TRUE);
    
    radioButtonPrimeraLetra14 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra13), " M");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra14), TRUE);
    
    radioButtonPrimeraLetra15 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra14), " N");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra15), TRUE);
    
    radioButtonPrimeraLetra16 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra15), " O");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra16), TRUE);
    
    radioButtonPrimeraLetra17 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra16), " P");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra17), TRUE);
    
    radioButtonPrimeraLetra18 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra17), " Q");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra18), TRUE);
    
    radioButtonPrimeraLetra19 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra18), " R");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra19), TRUE);
    
    radioButtonPrimeraLetra20 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra19), " S");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra20), TRUE);
    
    radioButtonPrimeraLetra21 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra20), " T");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra21), TRUE);
    
    radioButtonPrimeraLetra22 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra21), " U");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra22), TRUE);
    
    radioButtonPrimeraLetra23 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra22), " V");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra23), TRUE);
    
    radioButtonPrimeraLetra24 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra23), " W");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra24), TRUE);
    
    radioButtonPrimeraLetra25 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra24), " X");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra25), TRUE);
    
    radioButtonPrimeraLetra26 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra25), " Y");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra26), TRUE);
    
    radioButtonPrimeraLetra27 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra26), " Z");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra27), TRUE);
    
    radioButtonPrimeraLetra28 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonPrimeraLetra27), " Ä, Ö, Ü, ß");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra28), TRUE);
    
    
    
    //Establecemos el color de los widgets del fondo de los radioButton - Primera letra
    const GdkRGBA colorBakgroundRadioButton = {0, 0, 0, 1};  
    
    gtk_widget_override_background_color(radioButtonPrimeraLetra1, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra2, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra3, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra4, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra5, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra6, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra7, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra8, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra9, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra10, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra11, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra12, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra13, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra14, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra15, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra16, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra17, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra18, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra19, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra20, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra21, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra22, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra23, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra24, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra25, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra26, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra27, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    gtk_widget_override_background_color(radioButtonPrimeraLetra28, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton);
    //Establecemos el color y tamaño del texto del radioButton - Primera letra
    
    
    //RADIO BUTTON - Segunda letra
    box2 = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 2);
    gtk_box_set_homogeneous (GTK_BOX (box2), TRUE);
    
    radioButtonSegundaLetra1 = gtk_radio_button_new (NULL);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra1), FALSE); 
    labelRadioButtonSegundaLetra1 = gtk_label_new(" Unfiltered");
    
    gtk_container_add (GTK_CONTAINER (radioButtonSegundaLetra1), labelRadioButtonSegundaLetra1);
    
    
    radioButtonSegundaLetra2 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra1), " a");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra2), TRUE); 
    
    radioButtonSegundaLetra3 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra2), " b");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra3), TRUE);
   
    radioButtonSegundaLetra4 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra3), " c");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra4), TRUE);
    
    radioButtonSegundaLetra5 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra4), " d");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra5), TRUE);
    
    radioButtonSegundaLetra6 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra5), " e");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra6), TRUE);
    
    radioButtonSegundaLetra7 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra6), " f");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra7), TRUE);
    
    radioButtonSegundaLetra8 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra7), " g");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra8), TRUE);
    
    radioButtonSegundaLetra9 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra8), " h");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra9), TRUE);
    
    radioButtonSegundaLetra10 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra9), " i");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra10), TRUE);
    
    radioButtonSegundaLetra11 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra10), " j");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra11), TRUE);
    
    radioButtonSegundaLetra12 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra11), " k");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra12), TRUE);
    
    radioButtonSegundaLetra13 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra12), " l");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra13), TRUE);
    
    radioButtonSegundaLetra14 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra13), " m");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra14), TRUE);
    
    radioButtonSegundaLetra15 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra14), " n");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra15), TRUE);
    
    radioButtonSegundaLetra16 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra15), " o");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra16), TRUE);
    
    radioButtonSegundaLetra17 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra16), " p");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra17), TRUE);
    
    radioButtonSegundaLetra18 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra17), " q");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra18), TRUE);
    
    radioButtonSegundaLetra19 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra18), " r");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra19), TRUE);
    
    radioButtonSegundaLetra20 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra19), " s");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra20), TRUE);
    
    radioButtonSegundaLetra21 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra20), " t");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra21), TRUE);
    
    radioButtonSegundaLetra22 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra21), " u");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra22), TRUE);
    
    radioButtonSegundaLetra23 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra22), " v");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra23), TRUE);
    
    radioButtonSegundaLetra24 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra23), " w");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra24), TRUE);
    
    radioButtonSegundaLetra25 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra24), " x");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra25), TRUE);
    
    radioButtonSegundaLetra26 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra25), " y");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra26), TRUE);
    
    radioButtonSegundaLetra27 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra26), " z");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra27), TRUE);
    
    radioButtonSegundaLetra28 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonSegundaLetra27), " ä, ö, ü, ß");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra28), TRUE);
    
    
    
    //Establecemos el color de los widgets del fondo de los radioButton - Segunda letra
    const GdkRGBA colorBakgroundRadioButton2 = {0, 0, 0, 1};
    
    gtk_widget_override_background_color(radioButtonSegundaLetra1, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra2, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra3, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra4, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra5, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra6, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra7, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra8, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra9, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra10, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra11, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra12, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra13, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra14, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra15, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra16, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra17, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra18, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra19, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra20, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra21, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra22, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra23, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra24, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra25, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra26, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra27, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    gtk_widget_override_background_color(radioButtonSegundaLetra28, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton2);
    //Establecemos el color y tamaño del texto del radioButton - Segunda letra
    
    
    //RADIO BUTTON - Número de letras
    box3 = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 2);
    gtk_box_set_homogeneous (GTK_BOX (box3), TRUE);
    
    radioButtonNumLetras1 = gtk_radio_button_new (NULL);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras1), FALSE); 
    labelRadioButtonNumLetras1 = gtk_label_new(" Unfiltered");
    
    gtk_container_add (GTK_CONTAINER (radioButtonNumLetras1), labelRadioButtonNumLetras1);
    
    radioButtonNumLetras2 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras1), " 1 - 4 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras2), TRUE); 
    
    radioButtonNumLetras3 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras2), " 5 - 8 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras3), TRUE);
    
    radioButtonNumLetras4 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras3), " 9 - 12 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras4), TRUE);
    
    radioButtonNumLetras5 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras4), " 13 - 17 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras5), TRUE);
    
    radioButtonNumLetras6 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras5), " 18 - 22 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras6), TRUE);
    
    radioButtonNumLetras7 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras6), " 23 - 27 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras7), TRUE);
    
    radioButtonNumLetras8 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras7), " 28 - 32 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras8), TRUE);
    
    radioButtonNumLetras9 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras8), " 33 - 37 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras9), TRUE);
    
    radioButtonNumLetras10 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras9), " 38 - 42 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras10), TRUE);
    
    radioButtonNumLetras11 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras10), " 43 - 47 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras11), TRUE);
    
    radioButtonNumLetras12 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras11), " 48 - 52 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras12), TRUE);
    
    radioButtonNumLetras13 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras12), " 53 - 57 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras13), TRUE);
    
    radioButtonNumLetras14 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras13), " 58 - 62 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras14), TRUE);
    
    radioButtonNumLetras15 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras14), " 63 - 67 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras15), TRUE);
    
    radioButtonNumLetras16 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras15), " 68 - 72 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras16), TRUE);
    
    radioButtonNumLetras17 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (radioButtonNumLetras16), " 73 - 255 ");
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras17), TRUE);
    
    
    //Establecemos el color de los widgets del fondo de los radioButton - Número de letras
    const GdkRGBA colorBakgroundRadioButton3 = {0, 0, 0, 1};
    
    gtk_widget_override_background_color(radioButtonNumLetras1, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras2, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras3, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras4, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras5, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras6, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras7, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras8, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras9, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras10, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras11, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras12, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras13, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras14, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras15, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras16, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    gtk_widget_override_background_color(radioButtonNumLetras17, GTK_STATE_FLAG_NORMAL, &colorBakgroundRadioButton3);
    //Establecemos el color y tamaño del texto del radioButton - Número de letras
    
    
    /**Metemos los widgets en cajas**/
    vbox1Page4 = gtk_vbox_new(FALSE, 3);
    vbox2Page4 = gtk_vbox_new(FALSE, 3);
    vbox3Page4 = gtk_vbox_new(FALSE, 3);
    hbox1Page4 = gtk_hbox_new(FALSE, 5);
    hbox2Page4 = gtk_hbox_new(FALSE, 5);
    hbox3Page4 = gtk_hbox_new(FALSE, 5);
    hbox4Page4 = gtk_hbox_new(FALSE, 5);
    hbox5Page4 = gtk_hbox_new(FALSE, 5);
    hbox6Page4 = gtk_hbox_new(FALSE, 5);
    hbox7Page4 = gtk_hbox_new(FALSE, 5);
    hbox8Page4 = gtk_hbox_new(FALSE, 5);
    hbox9Page4 = gtk_hbox_new(FALSE, 5);
    hbox10Page4 = gtk_hbox_new(FALSE, 5);
    hbox11Page4 = gtk_hbox_new(FALSE, 5);
    
    
    /**Metemos esto para ocupar espacio en la ventana**/
    label6Page4 = gtk_label_new("             ");
    gtk_box_pack_start(GTK_BOX(hbox10Page4), label6Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox3Page4), hbox10Page4, FALSE, FALSE, 5);
    
    
    /**Label y TextView en una columna**/
    gtk_box_pack_start(GTK_BOX(vbox1Page4), label1Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox1Page4), scroll4, TRUE, TRUE, 5);
    
    
    //radioButton de la primera letra del listar hasta M en una columna
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra1, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra2, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra3, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra4, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra5, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra6, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra7, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra8, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra9, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra10, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra11, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra12, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra13, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox1Page4), radioButtonPrimeraLetra14, FALSE, FALSE, 0);
    
    
    //radioButton de la primera letra hasta la los caracteres especiales en una segunda columna
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra15, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra16, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra17, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra18, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra19, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra20, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra21, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra22, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra23, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra24, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra25, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra26, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra27, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox2Page4), radioButtonPrimeraLetra28, FALSE, FALSE, 0);
    
    
    //radioButton de la segunda letra hasta la n en una tercera columna
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra1, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra2, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra3, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra4, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra5, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra6, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra7, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra8, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra9, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra10, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra11, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra12, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra13, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra14, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox3Page4), radioButtonSegundaLetra15, FALSE, FALSE, 0);
    
    //radioButton de la segunda letra hasta los caracteres especiales en una cuarta columna
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra16, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra17, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra18, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra19, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra20, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra21, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra22, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra23, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra24, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra25, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra26, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra27, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox4Page4), radioButtonSegundaLetra28, FALSE, FALSE, 0);
    
    
    //radioButton del rango del número de letras de la palabra hasta 28-32 en una quinta columna
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras1, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras2, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras3, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras4, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras5, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras6, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras7, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox5Page4), radioButtonNumLetras8, FALSE, FALSE, 0);
    
    
    //radioButton del rango del número de letras de la palabra hasta 63-67 en una sexta columna
    gtk_box_pack_start (GTK_BOX (hbox6Page4), radioButtonNumLetras9, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox6Page4), radioButtonNumLetras10, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox6Page4), radioButtonNumLetras11, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox6Page4), radioButtonNumLetras12, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox6Page4), radioButtonNumLetras13, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox6Page4), radioButtonNumLetras14, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox6Page4), radioButtonNumLetras15, FALSE, FALSE, 0);
    
    
    //radioButton del rango del número de letras de la palabra hasta 73-255 en una septima columna
    gtk_box_pack_start (GTK_BOX (hbox7Page4), radioButtonNumLetras16, FALSE, FALSE, 0);
    gtk_box_pack_start (GTK_BOX (hbox7Page4), radioButtonNumLetras17, FALSE, FALSE, 0);
    
    
    //label y buttons en otras columnas
    gtk_box_pack_start(GTK_BOX(hbox8Page4), label2Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox8Page4), label3Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox8Page4), label10Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox8Page4), label11Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox8Page4), label4Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox8Page4), label5Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox9Page4), buttonLimpiar4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox9Page4), buttonListar2, FALSE, FALSE, 5);//los valores de aquí no son la posición del botón, sino el tamaño de la caja. 
    gtk_box_pack_start(GTK_BOX(hbox9Page4), buttonContabilizarRegistros, FALSE, FALSE, 5);
    
    //Añadimos las cajas horizontales hbox1Page4, hbox2Page4 y hbox8Page4 a una caja vertical label8Page4
    gtk_box_pack_start(GTK_BOX(vbox2Page4), label7Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox1Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox2Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), label8Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox3Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox4Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), label9Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox5Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox6Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox7Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox8Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page4), hbox9Page4, FALSE, FALSE, 5);
    
    /**Añadimos los dos cajas vertivales a una caja horizontal**/
    gtk_box_pack_start(GTK_BOX(hbox11Page4), vbox3Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox11Page4), vbox1Page4, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox11Page4), vbox2Page4, FALSE, FALSE, 5);
    
    
    /**Lo metemos en el page4**/
    gtk_container_add(GTK_CONTAINER(page4), hbox11Page4);
    
    /**Lo metemos en el notebook**/
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), page4, titlePage4);
    
    
    //Quinta página
    page5 = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 1);
    titlePage5 = gtk_label_new("Group insertion");
    layerFixed = gtk_fixed_new();
    label1Page5 = gtk_label_new("         Enter words to add          ");
    label2Page5 = gtk_label_new("   Words that I add to the file   ");
    label11Page5 = gtk_label_new("\n");
    label3Page5 = gtk_label_new("To add:");
    label4Page5 = gtk_label_new("");
    label5Page5 = gtk_label_new("Added:");
    label6Page5 = gtk_label_new("");
    label7Page5 = gtk_label_new("Time:");
    label8Page5 = gtk_label_new("");
    label10Page5 = gtk_label_new("\n\n\n\n(If the words begin with ä, \nö, ü, we write them in upper \ncase, if they are in the rest \nof the word we write them \nin lower case. \nMax: 9000 characters.");
    
    
    /**PRIMER TextView**/
    textViewMultilinea5 = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(scroll5), textViewMultilinea5);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scroll5), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);  
    gtk_scrolled_window_set_shadow_type(GTK_SCROLLED_WINDOW(scroll5), GTK_SHADOW_ETCHED_IN);
   
    text5 = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textViewMultilinea5));
    
    gtk_text_buffer_get_iter_at_offset(text5, &iter5, 0);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textViewMultilinea5), TRUE);
    
   
    /**SEGUNDO TextView**/
    textViewMultilinea6 = gtk_text_view_new();
    gtk_container_add(GTK_CONTAINER(scroll6), textViewMultilinea6);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(scroll6), GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);  
    gtk_scrolled_window_set_shadow_type(GTK_SCROLLED_WINDOW(scroll6), GTK_SHADOW_ETCHED_IN);
    
    text6 = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textViewMultilinea6));
    
    gtk_text_buffer_get_iter_at_offset(text6, &iter6, 0);
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textViewMultilinea6), FALSE);
    
    /**Establecemos el color de los widgets del fondo de los textView**/
    const GdkRGBA colorBakgroundTextView2 = {0, 0, 0, 0.59};   
  
    gtk_widget_override_background_color(textViewMultilinea5, GTK_STATE_FLAG_NORMAL, &colorBakgroundTextView2);
    gtk_widget_override_background_color(textViewMultilinea6, GTK_STATE_FLAG_NORMAL, &colorBakgroundTextView2);
    
    /**Establecemos el color y tamaño del texto del textview**/
    
    /**BOTONES**/
    buttonLimpiar5 = gtk_button_new_with_mnemonic ("_Clear");
    gtk_widget_set_size_request(buttonLimpiar5, 70, 30);
    buttonAdd = gtk_button_new_with_mnemonic ("_Add");
    gtk_widget_set_size_request(buttonAdd, 70, 30);
    
    /**Metemos los widgets en cajas horizontales y vericales y luego en el page1**/
    hbox1Page5 = gtk_hbox_new(TRUE, 5);
    hbox2Page5 = gtk_hbox_new(TRUE, 5);
    hbox3Page5 = gtk_hbox_new(FALSE, 5);
    hbox4Page5 = gtk_hbox_new(FALSE, 5);
    hbox5Page5 = gtk_hbox_new(FALSE, 5);
    hbox6Page5 = gtk_hbox_new(FALSE, 5);
    hbox7Page5 = gtk_hbox_new(FALSE, 5);
    hbox8Page5 = gtk_hbox_new(FALSE, 5);
    hbox9Page5 = gtk_hbox_new(FALSE, 5);
    hbox10Page5 = gtk_hbox_new(FALSE, 5);
    vbox1Page5 = gtk_vbox_new(FALSE, 5);
    vbox2Page5 = gtk_vbox_new(FALSE, 5);
    vbox3Page5 = gtk_vbox_new(FALSE, 5);
    vbox4Page5 = gtk_vbox_new(FALSE, 5);
    vbox5Page5 = gtk_vbox_new(FALSE, 5);
    
    //Metemos esto para ocupar espacio en la ventana
    label9Page5 = gtk_label_new("      ");
    gtk_box_pack_start(GTK_BOX(hbox7Page5), label9Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox9Page5), label10Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox4Page5), hbox7Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox5Page5), hbox9Page5, FALSE, FALSE, 5);
    
    //Metemos el primer label en el primer horizontal y luego en el primer vertical, también metemos el primer scroll en el primer vertical
    gtk_box_pack_start(GTK_BOX(hbox1Page5), label1Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox1Page5), hbox1Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox1Page5), scroll5, TRUE, TRUE, 5);
    
    //Metemos el segundo label en el segundo horizontal y luego en el segundo vertical, también metemos el segundo scroll en el segundo vertical
    gtk_box_pack_start(GTK_BOX(hbox2Page5), label2Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox3Page5), hbox2Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox3Page5), scroll6, TRUE, TRUE, 5);
    
    //Metemos el tercer y cuarto label en el tercer y cuarto horizontal, luego los botones lo ponemos en el quinto horizontal
    gtk_box_pack_start(GTK_BOX(hbox10Page5), label11Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox3Page5), label3Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox3Page5), label4Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox4Page5), label5Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox4Page5), label6Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox5Page5), label7Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox5Page5), label8Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox6Page5), buttonLimpiar5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(hbox6Page5), buttonAdd, FALSE, FALSE, 5);//los valores de aquí no son la posición del botón, sino el tamaño de la caja.
    
    //Metemmos el tercer, cuarto y quinto horizontales y el tercer vertical
    gtk_box_pack_start(GTK_BOX(vbox2Page5), hbox10Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page5), hbox3Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page5), hbox4Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page5), hbox5Page5, FALSE, FALSE, 5);
    gtk_box_pack_start(GTK_BOX(vbox2Page5), hbox6Page5, FALSE, FALSE, 5);
    
    gtk_box_pack_start(GTK_BOX(hbox8Page5), vbox4Page5, FALSE, TRUE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page5), vbox5Page5, FALSE, TRUE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page5), vbox1Page5, FALSE, TRUE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page5), vbox2Page5, FALSE, TRUE, 3);
    gtk_box_pack_start(GTK_BOX(hbox8Page5), vbox3Page5, FALSE, TRUE, 3);
    
    /**Lo añadimos al page6**/
    gtk_container_add(GTK_CONTAINER(page5), hbox8Page5);
    
    /**Luego lo añadimos al notebook**/
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), page5, titlePage5);
    
    
    //Sexta página
    page6 = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 1);
    titlePage6 = gtk_label_new("Individual insertion");
    layerFixed = gtk_fixed_new();
    label1Page6 = gtk_label_new("Enter the word to add");
    label2Page6 = gtk_label_new("Insertion result");
    label3Page6 = gtk_label_new("Time:");
    label4Page6 = gtk_label_new("");
    label5Page6 = gtk_label_new("\n\n\n\n(If the words begin with ä, ö, \nü, we write them in upper \ncase, if they are in the rest \nof the word we write them \nin lower case.");
    
    
    /**Primer entry**/
    entry3 = gtk_entry_new();
    gtk_entry_set_max_length (GTK_ENTRY (entry3), 82);//Para poner un límite de carácter del texto a introducir
    gtk_entry_set_text (GTK_ENTRY (entry3), "");//Para enviar texto
    gtk_editable_set_editable (GTK_EDITABLE (entry3), TRUE);//Para que no se pueda editar el texto
    gtk_widget_set_size_request(entry3, 280, 50);//Para establecer el tamaño
    
    
    /**Segundo entry**/
    entry4 = gtk_entry_new();
    gtk_entry_set_max_length (GTK_ENTRY (entry4), 82);//Para poner un límite de carácter del texto a introducir
    gtk_entry_set_text (GTK_ENTRY (entry4), "");//Para enviar texto
    gtk_editable_set_editable (GTK_EDITABLE (entry4), FALSE);//Para que no se pueda editar el texto
    gtk_widget_set_size_request(entry4, 280, 50);//Para establecer el tamaño
    
    
    /**Establecemos el color de los widgets entry**/
    const GdkRGBA colorBakgroundEntry3Y4 = {0, 0, 0, 0.59};   
  
    gtk_widget_override_background_color(entry3, GTK_STATE_FLAG_NORMAL, &colorBakgroundEntry3Y4);
    gtk_widget_override_background_color(entry4, GTK_STATE_FLAG_NORMAL, &colorBakgroundEntry3Y4);
    
    
     /**BOTONES**/
    buttonLimpiar6 = gtk_button_new_with_mnemonic ("_Clear");
    gtk_widget_set_size_request(buttonLimpiar6, 70, 30);
    buttonAdd2 = gtk_button_new_with_mnemonic ("_Add");
    gtk_widget_set_size_request(buttonAdd2, 70, 30);
    
    /**Lo añadimos al fixed**/
    gtk_fixed_put(GTK_FIXED(layerFixed), label5Page6, 49, 5);
    gtk_fixed_put(GTK_FIXED(layerFixed), label1Page6, 390, 60);
    gtk_fixed_put(GTK_FIXED(layerFixed), entry3, 660, 52);
    gtk_fixed_put(GTK_FIXED(layerFixed), label2Page6, 390, 200);
    gtk_fixed_put(GTK_FIXED(layerFixed), entry4, 660, 192);
    gtk_fixed_put(GTK_FIXED(layerFixed), label3Page6, 560, 300);
    gtk_fixed_put(GTK_FIXED(layerFixed), label4Page6, 650, 300);
    gtk_fixed_put(GTK_FIXED(layerFixed), buttonLimpiar6, 550, 400);
    gtk_fixed_put(GTK_FIXED(layerFixed), buttonAdd2, 680, 400);
    
    /**Lo añadimos al page2**/
    gtk_container_add(GTK_CONTAINER(page6), layerFixed);
    
    /**Luego lo añadimos al notebook**/
    gtk_notebook_append_page(GTK_NOTEBOOK(notebook), page6, titlePage6);
    
    
    /***Añadimos el notebook al window***/
    gtk_container_add(GTK_CONTAINER(window), notebook);
    
    
    /**Creamos las señales de la primera página**/	
    g_signal_connect(G_OBJECT(buttonLimpiar1), "clicked", G_CALLBACK(button_limpiar_TextView), text1);
    
    g_signal_connect(G_OBJECT(buttonLimpiar1), "clicked", G_CALLBACK(button_limpiar_TextView), text2);
    
    g_signal_connect(G_OBJECT(buttonLimpiar1), "clicked", G_CALLBACK(button_limpiar_Label), label4Page1);
    
    g_signal_connect(G_OBJECT(buttonLimpiar1), "clicked", G_CALLBACK(button_limpiar_Label), label6Page1);
    
    g_signal_connect(G_OBJECT(buttonLimpiar1), "clicked", G_CALLBACK(button_limpiar_Label), label8Page1);
    
    
    CCPTextBuffer copying1 = {text1, text2, label4Page1, label6Page1, label8Page1};
    
    g_signal_connect(G_OBJECT(buttonBuscar1), "clicked", G_CALLBACK(button_buscar_TextView), &copying1);
    
    
    
    /**Creamos las señales de la segunda página**/
    g_signal_connect(G_OBJECT(buttonLimpiar2), "clicked", G_CALLBACK(button_limpiar_Entry), entry1);
    
    g_signal_connect(G_OBJECT(buttonLimpiar2), "clicked", G_CALLBACK(button_limpiar_Entry), entry2);
    
    g_signal_connect(G_OBJECT(buttonLimpiar2), "clicked", G_CALLBACK(button_limpiar_Label), label4Page2);
    
    
    CCPEntry copying2 = {entry1, entry2, label4Page2};
    
    g_signal_connect(G_OBJECT(buttonBuscar2), "clicked", G_CALLBACK(button_buscar_Entry), &copying2);
    
   
    
    //Creamos las señales de la cuarta página
    CCPRadioButton copying3 = {radioButtonPrimeraLetra1, radioButtonPrimeraLetra2, radioButtonPrimeraLetra3, radioButtonPrimeraLetra4, radioButtonPrimeraLetra5, 
                               radioButtonPrimeraLetra6, radioButtonPrimeraLetra7, radioButtonPrimeraLetra8, radioButtonPrimeraLetra9, radioButtonPrimeraLetra10,
                               radioButtonPrimeraLetra11, radioButtonPrimeraLetra12, radioButtonPrimeraLetra13, radioButtonPrimeraLetra14, radioButtonPrimeraLetra15, 
                               radioButtonPrimeraLetra16, radioButtonPrimeraLetra17, radioButtonPrimeraLetra18, radioButtonPrimeraLetra19, radioButtonPrimeraLetra20, 
                               radioButtonPrimeraLetra21, radioButtonPrimeraLetra22, radioButtonPrimeraLetra23, radioButtonPrimeraLetra24, radioButtonPrimeraLetra25, 
                               radioButtonPrimeraLetra26, radioButtonPrimeraLetra27, radioButtonPrimeraLetra28};
    
    
    g_signal_connect(radioButtonPrimeraLetra1, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra2, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra3, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra4, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra5, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra6, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra7, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra8, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra9, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra10, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra11, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra12, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra13, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra14, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra15, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra16, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra17, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra18, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra19, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra20, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra21, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra22, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra23, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra24, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra25, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra26, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra27, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    g_signal_connect(radioButtonPrimeraLetra28, "clicked", G_CALLBACK(radio_button_primera_letra), &copying3);
    
    
    
    
    CCPRadioButton2 copying9 = {radioButtonSegundaLetra1, radioButtonSegundaLetra2, radioButtonSegundaLetra3, radioButtonSegundaLetra4, radioButtonSegundaLetra5, 
                               radioButtonSegundaLetra6, radioButtonSegundaLetra7, radioButtonSegundaLetra8, radioButtonSegundaLetra9, radioButtonSegundaLetra10,
                               radioButtonSegundaLetra11, radioButtonSegundaLetra12, radioButtonSegundaLetra13, radioButtonSegundaLetra14, radioButtonSegundaLetra15, 
                               radioButtonSegundaLetra16, radioButtonSegundaLetra17, radioButtonSegundaLetra18, radioButtonSegundaLetra19, radioButtonSegundaLetra20, 
                               radioButtonSegundaLetra21, radioButtonSegundaLetra22, radioButtonSegundaLetra23, radioButtonSegundaLetra24, radioButtonSegundaLetra25, 
                               radioButtonSegundaLetra26, radioButtonSegundaLetra27, radioButtonSegundaLetra28};
                               
                               
    g_signal_connect(radioButtonSegundaLetra1, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra2, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra3, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra4, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra5, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra6, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra7, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra8, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra9, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra10, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra11, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra12, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra13, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra14, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra15, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra16, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra17, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra18, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra19, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra20, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra21, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra22, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra23, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra24, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra25, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra26, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra27, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    g_signal_connect(radioButtonSegundaLetra28, "clicked", G_CALLBACK(radio_button_segunda_letra), &copying9);
    
    
    
    
    CCPRadioButton3 copying10 = {radioButtonNumLetras1, radioButtonNumLetras2, radioButtonNumLetras3, radioButtonNumLetras4, radioButtonNumLetras5, 
                               radioButtonNumLetras6, radioButtonNumLetras7, radioButtonNumLetras8, radioButtonNumLetras9, radioButtonNumLetras10,
                               radioButtonNumLetras11, radioButtonNumLetras12, radioButtonNumLetras13, radioButtonNumLetras14, radioButtonNumLetras15, 
                               radioButtonNumLetras16, radioButtonNumLetras17};
                               
    
    g_signal_connect(radioButtonNumLetras1, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras2, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras3, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras4, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras5, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras6, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras7, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras8, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras9, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras10, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras11, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras12, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras13, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras14, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras15, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras16, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
    
    g_signal_connect(radioButtonNumLetras16, "clicked", G_CALLBACK(radio_button_Num_letras), &copying10);
                                                         
                            
    
    g_signal_connect(G_OBJECT(buttonLimpiar4), "clicked", G_CALLBACK(button_limpiar_TextView), text4);
    g_signal_connect(G_OBJECT(buttonLimpiar4), "clicked", G_CALLBACK(button_limpiar_Label), label3Page4);
    g_signal_connect(G_OBJECT(buttonLimpiar4), "clicked", G_CALLBACK(button_limpiar_Label), label11Page4);
    g_signal_connect(G_OBJECT(buttonLimpiar4), "clicked", G_CALLBACK(button_limpiar_Label), label5Page4);
    
    
    CCPTextBuffer2 copying4 = {text4, label3Page4, label11Page4, label5Page4};
    
    
    g_signal_connect(G_OBJECT(buttonListar2), "clicked", G_CALLBACK(show_info), (gpointer) window);//Esto es para que muestre una ventana de información de que esperes 


    g_signal_connect(G_OBJECT(buttonListar2), "clicked", G_CALLBACK(button_listar_Palabras_Fichero), &copying4);
    
    
    
    CCPLabel copying5 = {label3Page4, label5Page4};
    
    
    g_signal_connect(G_OBJECT(buttonContabilizarRegistros), "clicked", G_CALLBACK(button_contabilizar_Registros_Fichero), &copying5);
    

    /**Creamos las señales de la quinta página**/
    g_signal_connect(G_OBJECT(buttonLimpiar5), "clicked", G_CALLBACK(button_limpiar_TextView), text5);
    
    g_signal_connect(G_OBJECT(buttonLimpiar5), "clicked", G_CALLBACK(button_limpiar_TextView), text6);
    
    //g_signal_connect(G_OBJECT(buttonLimpiar5), "clicked", G_CALLBACK(button_limpiar_TextView), text7);
    
    g_signal_connect(G_OBJECT(buttonLimpiar5), "clicked", G_CALLBACK(button_limpiar_Label), label4Page5);
    
    g_signal_connect(G_OBJECT(buttonLimpiar5), "clicked", G_CALLBACK(button_limpiar_Label), label6Page5);
    
    //g_signal_connect(G_OBJECT(buttonLimpiar5), "clicked", G_CALLBACK(button_limpiar_Label), label3Page7);
    
    g_signal_connect(G_OBJECT(buttonLimpiar5), "clicked", G_CALLBACK(button_limpiar_Label), label8Page5);
    
    
    CCPTextBuffer3 copying6 = {text5, text6, label4Page5, label6Page5, label8Page5};
    
    g_signal_connect(G_OBJECT(buttonAdd), "clicked", G_CALLBACK(button_add_TextView), &copying6);
    
    
    /**Creamos las señales de la sexta página**/
    g_signal_connect(G_OBJECT(buttonLimpiar6), "clicked", G_CALLBACK(button_limpiar_Entry), entry3);
    
    g_signal_connect(G_OBJECT(buttonLimpiar6), "clicked", G_CALLBACK(button_limpiar_Entry), entry4);
    
    g_signal_connect(G_OBJECT(buttonLimpiar6), "clicked", G_CALLBACK(button_limpiar_Label), label4Page6);
    
    
    CCPEntry2 copying7 = {entry3, entry4, label4Page6};
    
    g_signal_connect(G_OBJECT(buttonAdd2), "clicked", G_CALLBACK(button_add_Entry), &copying7);
    
    
    
    /**Cerramos la ventana**/
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    
    //Después de cerrar la ventana ponremos los valores de los radiobutton primera letra por defecto
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra1), TRUE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra2), FALSE);  
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra3), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra4), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra5), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra6), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra7), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra8), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra9), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra10), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra11), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra12), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra13), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra14), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra15), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra16), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra17), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra18), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra19), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra20), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra21), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra22), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra23), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra24), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra25), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra26), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra27), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonPrimeraLetra28), FALSE);
    
    
    
    //Después de cerrar la ventana ponremos los valores de los radiobutton primera letra por defecto
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra1), TRUE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra2), FALSE);  
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra3), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra4), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra5), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra6), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra7), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra8), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra9), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra10), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra11), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra12), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra13), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra14), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra15), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra16), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra17), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra18), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra19), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra20), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra21), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra22), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra23), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra24), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra25), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra26), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra27), FALSE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonSegundaLetra28), FALSE);
    
    
    //Después de cerrar la ventana ponemos los valores de los radiobutton de rango de número de letras por defecto
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras1), TRUE);
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras2), FALSE);  
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras3), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras4), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras5), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras6), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras7), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras8), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras9), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras10), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras11), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras12), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras13), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras14), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras15), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras16), FALSE); 
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(radioButtonNumLetras17), FALSE); 
    
    
    //Importamos la hoja de estilo css para gtk para modificar la interfaz gráfica 
    GtkCssProvider  *cssProvider1;
    cssProvider1  = gtk_css_provider_new();
    
    gtk_style_context_add_provider_for_screen (gdk_screen_get_default(), GTK_STYLE_PROVIDER(cssProvider1), GTK_STYLE_PROVIDER_PRIORITY_USER);
    gtk_css_provider_load_from_path(GTK_CSS_PROVIDER(cssProvider1),"/home/pi/Desktop/Proyectos Geany/C++/Data_words_v2/gtk.css",NULL);
    
    
    /**Mostramos todos los widgets**/
    gtk_widget_show_all (window);

	
    /**Pasar el control al bucle principal / Iniciar el bucle principal**/
    gtk_main ();
	
	return 0;
    
    
    
}








