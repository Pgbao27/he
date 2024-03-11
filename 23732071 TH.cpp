#include<stdio.h>
#include<string.h>
#include<conio.h>
#define MAX 100


struct Date
{
	unsigned char ngay;
	unsigned char thang;
	int nam;
};
typedef struct SinhVien
{
	char msv[11];
	char hoten[31];
	struct Date ns;
	char gt;
	char lop[8];
	float dtb;
}SV;


void NhapNgaySinh(Date &d);
void XuatNgaySinh(Date d);
void Nhap1sv(SV &x);
void Xuat1sv(SV x);
void Nhapsl(int &n);
void Nhapds(SV a[],int n);
void Xuatds(SV a[],int n);
void Xuatds5(SV a[], int n);
void XuatdsCNTT(SV a[], int n);

int main()
{
	SV a[MAX];
	int chon=0;
	int n=0;
	printf("Hay nhap so luong SV: "); Nhapsl(n);
	do{
		printf("1. Nhap danh sach sinh vien.\n");
		printf("2. Xuat danh sach sinh vien.\n");
		printf("3. Xuat danh sach sinh vien dtb > 5.\n");
		printf("4. Xuat danh sach sinh vien thuoc nganh cntt.\n");
		printf("5. Xuat danh sach sinh vien.\n");
		printf("6. Xuat danh sach sinh vien.\n");
		printf("7. Xuat danh sach sinh vien.\n");
		printf("8. Xuat danh sach sinh vien.\n");
		printf("9. Xuat danh sach sinh vien.\n");
		printf("0. Ket thuc.\n");
		printf("Chon:"); scanf("%d",&chon);
		switch(chon)
		{
			case 1:
			{
			Nhapds(a,n);		
			}
			break;
			case 2:
			{
			Xuatds(a,n);	
			}
			break;
			case 3:
			{
			Xuatds5(a,n);
			}
			break;
			case 4:
			break;
			case 5:
			break;
			case 6:
			break;
			case 7:
			break;
			case 8:
			break;
			case 9:
			break;
			default:
			break;
		}
	}while(chon!=0&&chon>0&&chon<10);
}
void NhapNgaySinh(Date &d)
{
	printf("\nNhap vao ngay: ");scanf("%u",&d.ngay);
	printf("\nNhap vao thang: ");scanf("%u",&d.thang);
	printf("\nNhap vao nam: ");scanf("%d",&d.nam);
}
void XuatNgaySinh(Date d)
{
	printf("%02u / %02u/ %4d", d.ngay, d.thang, d.nam);
}
void Nhap1sv (SV &x)
{ 
	printf("Nhap ma sinh vien: ");
	scanf("%s", &x.msv);
	printf("Nhap ho ten: ");
	fflush(stdin); 
	gets(x.hoten); 
	printf("Nhap ngay thang nam sinh: ");
	NhapNgaySinh(x.ns); printf("Nhap lop: "); 
	scanf("%s", &x.lop); 
	do
	{ 
		printf("Nhap gioi tinh x-nu, y-nam: "); 
		x.gt=getche(); 
	}while (x.gt!='x' && x.gt!='y'); 
	printf("\nNhap vao diem trung binh: "); 
	scanf("%f", &x.dtb); 
}
void Xuat1sv (SV x)
{
	printf("\n%-11s\t%30s\t",x.msv, x.hoten);
	if (x.gt=='x') printf("nu\t");
	else printf("nam\t");
	XuatNgaySinh(x.ns);
	printf("\t%-8s\t%.1f\n",x.lop,x.dtb);
}
void Nhapsl(int &n)
{
	n=1;
	do
	{
	scanf("%d",&n);
	if (n<=0) printf("Vui long nhap lai: ");
	}while(n<=0);
}
void Nhapds(SV a[],int n)
{
	printf("NHAP DANH SACH SINH VIEN-------\n");
	for (int i=0;i<n;i++)
	{
		printf("nhap sinh vien thu %d:\n",i+1);
		Nhap1sv(a[i]);
	}
}
void Xuatds(SV a[], int n)
{
	printf("DANH SACH SINH VIEN---------");
	for(int i=0;i<n;i++)
		Xuat1sv(a[i]);
}
void Xuatds5(SV a[], int n)
{
	printf("DANH SACH SINH VIEN DTB > 5---------");
	for(int i=0;i<n;i++)
		if(a[i].dtb>5)
		Xuat1sv(a[i]);
}
void XuatdsCNTT(SV a[], int n)
{
	printf("DANH SACH SINH VIEN DTB > 5---------");
	for(int i=0;i<n;i++)
		if(a[i].msv==CNTT) // DOI LAI THANH CHECK A B
		Xuat1sv(a[i]);
}

