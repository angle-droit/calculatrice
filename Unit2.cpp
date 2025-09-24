//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{

	String prommpt = Edit1->Text;
	int posOp = 0;
	wchar_t op = 0;

	if (prommpt.Pos("+") > 0) {
		posOp = prommpt.Pos(L"+"); op = '+';
	}
	if (prommpt.Pos("-") > 0) {
		posOp = prommpt.Pos(L"-"); op = '-';
	}
	if (prommpt.Pos("/") > 0) {
		posOp = prommpt.Pos(L"/"); op = '/';
	}
	if (prommpt.Pos("*") > 0) {
		posOp = prommpt.Pos(L"*"); op = '*';
	}

	double a = StrToFloat(prommpt.SubString(1, posOp - 1));
	double b = StrToFloat(prommpt.SubString(posOp + 1, prommpt.Length() - posOp	));
	double resultat = 0;

	if (op == '+') resultat = a + b;
	else if (op == '-') resultat = a - b;
	else if (op == '/') resultat = a / b;
	else if (op == '*') resultat = a *b;

	ShowMessage(L"Result : " + FloatToStr(resultat));

}
//---------------------------------------------------------------------------
