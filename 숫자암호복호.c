#include <stdio.h>
#include <string.h>

void delay(unsigned int delay_time ){

unsigned int i = 0;
while(i<(delay_time*2500000)){ /* 200 x 2500000 => 0.9�� */

  i++;

}



}

int main (){

 char c[2]={0,};
 int i;
 char i_number[9]={0,};
 char o_number[9]={0,};
 int strlength;
 char* p;
 p=i_number;


 printf ( " \n\n\n ��ȣȭ�Ϸ��� ���ڸ� �Է��ϼ��� (�ִ�8����) \n\n\n ");
gets( i_number);

 while (1) {
 
retry:
 strlength=strlen(i_number);  //�Է¼��� ����
   
   if (strlength > 8){

     printf( "8���� �̳��� �Է����ּ��� ");
     rewind(stdin);
     gets(i_number);
     continue;
   }
       

  for(i=0; i<strlength; i++){
    if(  ( '0' <= i_number[i]) && (i_number[i]<= '9')  ) /*���ڸ� �Էµƴ��� �˻� */
        {  
          /*����*/
        }

   else {   /* ���� �̿��� �Է��� �ִٸ� */
   
   printf(" ���ڸ� �ٽ� �Է����ּ���\n\n");
  rewind(stdin);
  gets(i_number);
  strlength=strlen(i_number); 
  
   if(strlength >8 ){
    goto retry;
   }
    else{
      i=-1; /* 1���� �Է� �� for���� ����� -1�� �ʱ�ȭ����*/
   continue;
    }
    }
          /* �� �Ʒ����� �����ϸ�� ������ �Ϻ��� �� */
  }
   

    printf(" �ùٸ��� �Էµƽ��ϴ�.\n\n ");
    printf( " ��ȣȭ��.10%% \n ");
    delay(200);
    printf( " ��ȣȭ��..25%%\n ");
    delay(200);
    printf( " ��ȣȭ��...55%%\n ");
    delay(100);
    printf( " ��ȣȭ��....80%%\n ");
    delay(300);
    printf( " ��ȣȭ��.....100%%\n ");
    delay(200);
  
     

   for(i=0; i<strlength; i++)  /* ������ ��ȣȭ */
      o_number[i]= ((i_number[i]) ^(0xFFFFFFFF));
   
   

    printf( "\n\n ��ȣȭ�� �ڵ� : %s \n\n" , o_number );
    printf(" ��ȣ�� �ص��Ϸ��� '��' ��� ���ϼ���.\n");
    delay(15000);
    
    printf("  ���Դϴ٤� �ƹ� Ű�� �����ּ��� ");
    rewind(stdin);
    gets(c);

  for(i=0; i<strlength; i++)  /* ������ ��ȣȭ */
      o_number[i]= ((o_number[i]) ^ (0xFFFFFFFF));

      
     printf( "\n\n ��ȣȭ�� �ڵ� : %s \n\n" , o_number );
   
     printf( "\n\n �ٸ� ���ڸ� ��ȣȭ �Ϸ��� ���ڸ� �Է����ּ��� (8�ڸ� ����) ");

     rewind(stdin);
     gets(i_number);
     
     
  }
    return 0 ;
}