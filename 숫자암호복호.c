#include <stdio.h>
#include <string.h>

void delay(unsigned int delay_time ){

unsigned int i = 0;
while(i<(delay_time*2500000)){ /* 200 x 2500000 => 0.9초 */

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


 printf ( " \n\n\n 암호화하려는 숫자를 입력하세요 (최대8글자) \n\n\n ");
gets( i_number);

 while (1) {
 
retry:
 strlength=strlen(i_number);  //입력숫자 길이
   
   if (strlength > 8){

     printf( "8글자 이내로 입력해주세요 ");
     rewind(stdin);
     gets(i_number);
     continue;
   }
       

  for(i=0; i<strlength; i++){
    if(  ( '0' <= i_number[i]) && (i_number[i]<= '9')  ) /*숫자만 입력됐는지 검사 */
        {  
          /*공란*/
        }

   else {   /* 숫자 이외의 입력이 있다면 */
   
   printf(" 숫자만 다시 입력해주세요\n\n");
  rewind(stdin);
  gets(i_number);
  strlength=strlen(i_number); 
  
   if(strlength >8 ){
    goto retry;
   }
    else{
      i=-1; /* 1글자 입력 시 for문을 벗어나서 -1로 초기화해줌*/
   continue;
    }
    }
          /* 이 아래부터 수정하면됌 위에는 완벽히 됌 */
  }
   

    printf(" 올바르게 입력됐습니다.\n\n ");
    printf( " 암호화중.10%% \n ");
    delay(200);
    printf( " 암호화중..25%%\n ");
    delay(200);
    printf( " 암호화중...55%%\n ");
    delay(100);
    printf( " 암호화중....80%%\n ");
    delay(300);
    printf( " 암호화중.....100%%\n ");
    delay(200);
  
     

   for(i=0; i<strlength; i++)  /* 데이터 암호화 */
      o_number[i]= ((i_number[i]) ^(0xFFFFFFFF));
   
   

    printf( "\n\n 암호화한 코드 : %s \n\n" , o_number );
    printf(" 암호를 해독하려면 '네' 라고 말하세요.\n");
    delay(15000);
    
    printf("  뻥입니다ㅋ 아무 키나 눌러주세요 ");
    rewind(stdin);
    gets(c);

  for(i=0; i<strlength; i++)  /* 데이터 복호화 */
      o_number[i]= ((o_number[i]) ^ (0xFFFFFFFF));

      
     printf( "\n\n 복호화한 코드 : %s \n\n" , o_number );
   
     printf( "\n\n 다른 숫자를 암호화 하려면 숫자를 입력해주세요 (8자리 이하) ");

     rewind(stdin);
     gets(i_number);
     
     
  }
    return 0 ;
}