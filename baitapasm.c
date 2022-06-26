#include<stdio.h>

int login(char username,int password);
int withdraw(int tienhientai);
int transfer(int id,int tienhientai);
int check(int tienhientai);
int thoatctrinh();
int menu ();

int main()
{	
	char c;
	int password,username;
	int i,j=0,id,tienrut,tienck,tienhientai=3000000;
	do{
	printf("Nhap username\n ");scanf("%d",&username);
	printf("Nhap password\n ");scanf("%d",&password);
	if(login(username,password)==1){
		printf("Ban nhap dung mk");
	do{
	    menu (); 
		printf ("\nMoi ban chon: ");
		scanf("%d",&i);
		switch(i){
	    case 1: tienhientai=withdraw(tienhientai); break; 	
	    case 2: tienhientai=transfer(id,tienhientai);break;
	    case 3: tienhientai=check(tienhientai);break;
	    case 4: thoatctrinh(); break;}
	    printf("Lua chon y hoac Y de tiep tuc: ");
		fflush(stdin);
	    c=getchar();
	} while  (c =='y' || c=='Y');printf("Nhap theo menu");
}else {
	j++;
    printf("Vui long nhap lai\n");}
}while(j<=3);printf("Ban bi khoa tk\n");
}
int login(char username,int password)
{	
     if(username ==123 && password==123) return 1;
     else  return 0;
}
int withdraw(int tienhientai)
{
	
	int tienrut;
	do{
 	printf("So tien ban can rut: ");
 	scanf("%d",&tienrut);
 		if(tienrut%50==0 && tienrut<3000000 && tienrut!=0) {
		 printf("\nBan rut thanh cong\n");
		 tienhientai-=tienrut;
         printf("So tien hien tai la %d\n",tienhientai);
		break;}
		else printf("\nSo tien phai chia het cho 50 va nho hon 3 trieu\n");
	}while(1);
	return tienhientai;
}
int transfer(int id,int tienhientai)
{
    int tknguoinhan=123456;
    int tienck;
    printf("So tien ban muon chuyen toi id nay la: ");scanf("%d",&tienck);
    tknguoinhan+=tienck;
    tienhientai-=tienck;
    printf("So tien nguoi nhan dang co la %d\n",tknguoinhan);
    printf("So tien hien tai trong tai khoan la %d\n",tienhientai);
    return (tienhientai);
}
int check(int tienhientai)
{
	
	printf("So du trong tai khoan la %d\n",tienhientai);
	return tienhientai;
}
int thoatctrinh()
{
	printf("Thoat chuong trinh");
}
int menu ()
{
	printf("\nMenu:\n");
	printf("1.Rut tien\n");
	printf("2.Chuyen khoan\n");
	printf("3.Xem so du\n");
	printf("4.Thoat chuong trinh\n");
	return 0;
}
	


