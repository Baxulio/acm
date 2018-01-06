//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TmainTimus *mainTimus;
//---------------------------------------------------------------------------
__fastcall TmainTimus::TmainTimus(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TmainTimus::DBComboBox1Change(TObject *Sender)
{
        if(DBComboBox1->ItemIndex == 0){
                DBGrid1->DataSource->DataSet->RecNo = 1;
        }
        if(DBComboBox1->ItemIndex == 1){
                DBGrid1->DataSource->DataSet->RecNo = 2;
        }
        if(DBComboBox1->ItemIndex == 2){
                DBGrid1->DataSource->DataSet->RecNo = 3;
        }
        if(DBComboBox1->ItemIndex == 3){
                DBGrid1->DataSource->DataSet->RecNo = 4;
        }
        if(DBComboBox1->ItemIndex == 4){
                DBGrid1->DataSource->DataSet->RecNo = 5;
        }
        if(DBComboBox1->ItemIndex == 5){
                DBGrid1->DataSource->DataSet->RecNo = 6;
        }
        if(DBComboBox1->ItemIndex == 6){
                DBGrid1->DataSource->DataSet->RecNo = 7;
        }
        if(DBComboBox1->ItemIndex == 7){
                DBGrid1->DataSource->DataSet->RecNo = 8;
        }
        if(DBComboBox1->ItemIndex == 8){
                DBGrid1->DataSource->DataSet->RecNo = 9;
        }
        if(DBComboBox1->ItemIndex == 9){
                DBGrid1->DataSource->DataSet->RecNo = 10;
        }
        if(DBComboBox1->ItemIndex == 10){
                DBGrid1->DataSource->DataSet->RecNo = 11;
        }
        if(DBComboBox1->ItemIndex == 11){
                DBGrid1->DataSource->DataSet->RecNo = 12;
        }
        if(DBComboBox1->ItemIndex == 12){
                DBGrid1->DataSource->DataSet->RecNo = 13;
        }
        if(DBComboBox1->ItemIndex == 13){
                DBGrid1->DataSource->DataSet->RecNo = 14;
        }
        if(DBComboBox1->ItemIndex == 14){
                DBGrid1->DataSource->DataSet->RecNo = 15;
        }
        if(DBComboBox1->ItemIndex == 16){
                DBGrid1->DataSource->DataSet->RecNo = 17;
        }
        if(DBComboBox1->ItemIndex == 17){
                DBGrid1->DataSource->DataSet->RecNo = 18;
        }
        if(DBComboBox1->ItemIndex == 18){
                DBGrid1->DataSource->DataSet->RecNo = 19;
        }
        if(DBComboBox1->ItemIndex == 19){
                DBGrid1->DataSource->DataSet->RecNo = 20;
        }
        if(DBComboBox1->ItemIndex == 20){
                DBGrid1->DataSource->DataSet->RecNo = 21;
        }
        if(DBComboBox1->ItemIndex == 21){
                DBGrid1->DataSource->DataSet->RecNo = 22;
        }
        if(DBComboBox1->ItemIndex == 22){
                DBGrid1->DataSource->DataSet->RecNo = 23;
        }
        if(DBComboBox1->ItemIndex == 23){
                DBGrid1->DataSource->DataSet->RecNo = 24;
        }
        if(DBComboBox1->ItemIndex == 24){
                DBGrid1->DataSource->DataSet->RecNo = 25;
        }
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::CheckBox1Click(TObject *Sender)
{
        if(CheckBox1->Checked){
                DBMemo4->Visible=true;
                Label2->Visible=false;
        }
        else {
                DBMemo4->Visible=false;
                Label2->Visible=true;
        }
}
//---------------------------------------------------------------------------


void __fastcall TmainTimus::Image6MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Image5->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::Image1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Image4->Visible=false;
Image5->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::Image7MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Image5->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::Image7Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::Image6Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


void __fastcall TmainTimus::Image8MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Image4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::Image8Click(TObject *Sender)
{
SendMessage(Handle, WM_SYSCOMMAND, SC_MINIMIZE, 0);
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::Image1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
      if(Button == mbLeft)
        {
        long SC_DRAGMOVE = 0xF012;
        ReleaseCapture();
        SendMessage(mainTimus->Handle, WM_SYSCOMMAND, SC_DRAGMOVE, 0);
        }
}
//---------------------------------------------------------------------------

void __fastcall TmainTimus::FormCreate(TObject *Sender)
{
    ADOTable1->Active = true;
}
//---------------------------------------------------------------------------

