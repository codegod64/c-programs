int main(){
    char c;
    scanf("%c",&c);
    if((int)c>=65 && (int)c<=122){
        printf("%c is aplhabet",c);
    }
    if((int)c>=48 && (int)c<=57){
       printf("%c is digit",c); 
    }
    if(((int)c>=58 && (int)c<=64)||((int)c>=33 && (int)c<=47) ){
        printf("%c is a special character",c);
    }
    return 0;
}