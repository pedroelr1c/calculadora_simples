#include<iostream> // com essa biblioteca da para usar os comandos system.
#include<stdio.h> // biblioteca padr�o.
#include<locale.h> // biblioteca pra incrementar as acentua��es do portugues.




void menu(); // comando void e usado para guardar uma cadeia de comandos que ser� usado somante quando for chamdos.
			// os comandos void devem ficar fora do int main().
			
float x,y,r; // variaveis para receber os vaores (x,y) e um para armazenar o resultado(r).
int opc,retorno = -1; // variavel paar fazer a escolha do usuario (opc).
				     // o retorno uma variavel para impedir bugs ou possiveis a��es invalidas pelo usuario.
char letra; // variavel responsavel pra armazenar codigos invalidos do usuario.


void erro(); // void para quando o usuario digitar uma letra ou qualquer caractere diferente de um numero.

void inst(); //void das instru�oes.

void mu(); //void da multiplica�ao.
	
void di(); // void da divisao.

void c(); // void dos creditos.

void re();

void su(); // void da subtra��o.

void ad(); //void da adi��o.
	
void regras(); //void das regras/instru��es.

    int main(){ // inicio do do programa.
		setlocale(LC_ALL, "Portuguese");
		printf("%d\n\n", sizeof(menu()));
        menu();

      return 0;
 }
 
 void erro()
{
printf("\n\n=====VALOR INVALIDO=====\n\n|TENTE ULTILIZAR NUMEROS|\n(1 2 3  ... 8 9 0)\n\n\n\n");
}
 
 void inst()
{
printf("\n======================================\n| DIGITE ( 0 ) PARA RETORNA AO MENU |\n|   DIGITE OS NUMEROS DA OPER��O:   |\n======================================\n\n");	
}
 
 void mu()
{
	
	
	do // come�o da repeti��o para limpar codigo invalido.
	{
	inst();
	retorno = scanf("%f", &x); // o scanf vai receber o retorno, quando um numero e digitado o retorno � igual a 1, quando algo que nao seja.
	                          // um numero for digitado o retorno sera zero, ja que nenhum numero foi armazenado.
		do // assim entramos em uma repeti�ao.
		{
			letra = getchar();   //getchat() ler os caracteres digitado no buffer do teclado, e ira apagar esse caractere, que sera guardado na variavel letra.
		} while(letra != '\n'); //que por sua vez sera repetido ate letra ser diferente ou igual a \n que e a tecla enter, que sempre sera a ultima tecla no buffer do teclado.
		if(retorno == 0) // quando uma letra for digitada o progama vai entrar nesse if apos todos os caracteres digiados for apagados.
		{
		system("cls"); //system("cls"); esse comando limpa tudo que esta na tela acima desse comando.
		erro();	//onde em seguida ira chamar o void erro();.
		scanf("%d", &opc);
		system("cls");
		}
	} while(retorno == 0); //fina da repeti�ao
	if(x == 0) // se o x for igual a zero o void menu(); sera chamado.
	{
		system("cls");
		menu();
	
	}
	else // se nao for, fara a opera��o.
	{
		printf("x\n");
	    scanf("%f", &y);
	do	// onde teremos a mesma repeti�ao para codigos invalidos.
	{
		do
		{
			letra = getchar();
		} while(letra != '\n');

	} while(retorno == 0);
	    r = (x * y);
	    printf("\n\nO valor �: %.2f\n\n", r);
	    system("pause");
	    system("cls");
	    mu();
	}	
		
}
 
 void di()
{
 	do{
	
 	inst();
 	retorno = scanf("%f", &x);
 	
 	do
 	{
 		letra = getchar();
 		
	 }while(letra != '\n');
	 if(retorno == 0)
	 {
	 	system("cls");
 		erro();
 	}
	}while(retorno == 0);
	if(x == -0)
	{
		system("cls");
		menu();
	}
	else
	{
		printf("/\n");
		scanf("%f", &y);
		if(y == 0) // se o denominador for 0 ira mostrar uma mensagem de erro.
		{
			printf("         CODIGO INVALIDO\nO DENOMINADOR N�O PODE SER ZERO (0)\n\n");
			system("pause");
			system("cls");
			di();
		}
		do
		{
			do
			{
				letra = getchar();
			}while(letra != '\n');
		}while(retorno == 0);
		r = (x / y);
		printf("\n\nO valor �: %.2f\n\n", r);
	    system("pause");
	    system("cls");
	    di();
		
	}
 }
 
 void re()
{
	printf("SISTEMA DE ADMINISTRADOR!\n\n");
	printf("INFORMA��ES SOBRE O RETORNO\n");
	printf("DIGITE UMA LETRA OU NUMERO\n>>");
		int x, admre;
		admre = scanf("%d", &x);
		system("cls");
		do 
		{
			
			letra = getchar();
	
		}while(letra != '\n');
		printf("\n\nvalor do retorno (%d) \n", admre);
		printf("\nnumero digiado (%d) \n", x);
	    printf("\nquando retorno � menos um (-1), significa que foi digitado uma letra\n\n");
	    printf("\nquandoo retorno for um (1), significa que foi digiado um numero\n\n");
	    printf("isso ocorreu dessa maneira\n\n\n");
	    system("pause");
	    system("cls");
	    printf("	int x, admre; \n\n\n		admre = scanf(%% d, &x);\\n\n\n		do\n\n\n		{\n\n\n			letra = getchar();\n\n\n		}while(letra != '\\N');\n\n\n");
		printf("A VARIAVE LETRA VAI RECEBER getchar(); QUE VAI APAGAR\nOS CARACTERES DIGIADO NO TECLADO\nONDE ISSO VAI SE REPETIR ATE O �LTIMO CARACTERE SER A TECLA ENTER OU (\\N)\n\n\n");
		system("pause");
		system("cls");

			

	

	    printf("digite 0 para voltar\ndigite outra tecla pra continuar\n>> ");
		scanf("%f", &opc);
		switch(opc)
		{
			case 0:
				system("cls");
       			c();
       			break;
       		default:
       			system("cls");
       			re();
		}	
}
 
 void c()
{
	
    printf("                   ======================\n");
    printf("                   | PROGRAMA FEITO POR |\n\n ");
    printf("                  |  @joao_pedroxbr    |\n");
    printf("                   ======================\n\n\n\n\n");
    printf(" 25/03/2023 - vers�o: 1.0 \n\n");
    printf("Digite 0 pra voltar\n>> ");
    scanf("%f", &x);
    if(x == 2214) {
    	system("cls");
		re();
    }
    else
    {
    	system("cls");
        menu();
	}
}
 
 void su()
{
do{
    inst();
    
    retorno = scanf("%f", &x);
        do{
        letra = getchar();
        
        } while(letra != '\n');
        if(retorno == 0){
    system("cls");
    erro();	
	}       
} while(retorno == 0);
    
    if(x == -0) {
		system("cls");
        menu();
    }
    else
    {
        printf("-\n");
        scanf("%f", &y);
        r = (x - y);
        printf("\n\nO valor �: %.2f\n\n", r);
        system("pause");
        system("cls");
        su();

     }
}
 
 void regras()
{
		printf("======================================================================\n");
	printf("                       - COMO USAR A CALCULADORA -\n");
	printf("======================================================================\n");
	printf("\n ESSE PROGRAMA TEM A CAPACIDADE DE EFETUAR AS 4 OPERA�OES PRICIPAIS \n");
	printf(" COMO A ADI��O (+) SUBTRA��O (-) DIVIS�O (/) E A MULTIPLICA��O (*)\n\n");
	printf("----------------------------------------------------------------------\n\n");
	printf(" A CALCULADORA S� FARA A OPERA��O DE 2 NUMEROS ENTENDIDOS COMO\n");
	printf(" O PRIMEIRO NUMERO (X) E O SEGUNDO (Y)\n\n");
	printf("----------------------------------------------------------------------\n\n");
	printf(" NO VALOR X AO DIGITAR O NUMERO (0) A CALCUADORA VOLTARA AO MENU \n");
	printf(" INICIAL, ESSA FUN��O SERA APLICADA A TODAS AS OPERA��ES\n\n");
	printf("======================================================================\n");
	printf("\n\n PORXIMO ->\n ");
	system("pause");
	system("cls");
	printf("======================================================================\n");
	printf("                       - COMO USAR A CALCULADORA -\n");
	printf("======================================================================\n");
	printf("\n PARA A ULTILIZA��O DE NUMEROS REAIS UTILIZE VIRGULA (,) PARA O \n");
	printf(" VALOR APOS A VIRGUA SER REGISTRADO. \n\n");
	printf("----------------------------------------------------------------------\n\n");
	printf("NA DIVISAO N�O � POSSIVEL ULTILIZAR O ZERO (0) NO DENOMINADOR (Y)\n\n");
	printf("======================================================================\n\n");
	printf("PRESSIONE QUALQUER TECLA PARA VOLTAR AO MENU\n>> ");
	scanf("%d", &opc);
	system("cls");
	menu();
}

 
 void menu() // void do menu
{
	do
	{
		
			printf("vers�o 1.0\n\n===================\n");
			printf("     CALCUADORA\n");	
			printf("-------------------\n");	
		    printf("(0) CREDITOS\n(1) ADI��O\n(2) SUBTRA��O\n(3) MULTIPLICA��O\n(4) DIVIS�O\n(5) INSTRU��ES\n(6) SAIR\n");
		    printf("===================\n\n");
		    retorno = scanf("%d", &opc);		
			do // repeti��o para codigo invalido.
			{
				letra = getchar();
			}while (letra != '\n');	
				if(retorno == 0){
				system("cls");
				
				}
				else
				{
				    system("cls");
				    switch(opc)
			
			        {
			        	
			        case 1:	
			            ad();
			
			            break;
			        case 2:
			            su();
			
			            break;
			        case 3:
			        	mu();
			        	
			        	break;
			        case 4:
			        	di();
			        	
			        	break;
			        	
			        case 5:
			        	regras();
			        	
			        	break;
			        case 6:
			        	printf("\n\n\n\nFECAHNDO...\n\n\n\n");
			        	int main();
			        	
						break; 
			        case 0:
			            c();
			            break;
			        }
				} 
			
	}while(retorno == 0);

	
}

 
 void ad()
{
	
	do 
	{
	    inst();
	    retorno = scanf("%f", &x);
	    
	    do
	    {
	    	
	        letra = getchar();
	    
	    } while(letra != '\n');
	    if(retorno == 0){
	    system("cls");
	    erro();	
		}
	    
	} while(retorno == 0);
	    if(x == -0) {
	    	system("cls");
	        menu();
	    }
	   
	    else
	    {
	        printf("+\n"); 
			retorno = scanf("%f", &y);
	       do
		   {
			 do
			 {
			  letra = getchar();	
			 } while (letra != '\n');
			  if(retorno == 0){
	    		system("cls");
	   	 		erro();
	   	 		ad();
	   	 	}
	       
	    } while (retorno == 0);
	        r = (x + y);
	        printf("\n\nO valor � %.2f\n\n", r);
	        system("pause");
	        system("cls");
	        ad();
	    }   
	
	}

