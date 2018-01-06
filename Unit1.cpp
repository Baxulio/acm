//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit7.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

Tmain *main;
//---------------------------------------------------------------------------

__fastcall Tmain::Tmain(TComponent* Owner)
        : TForm(Owner)
{
}

void __fastcall Tmain::Image7Click(TObject *Sender)
{
      mainTUIT->Visible=True;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image7MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Image6->Visible=true;
if(Image2->Visible && Image3->Visible && Image4->Visible)
                GAMES->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
  Image6->Visible=false;
  Image2->Visible=false;
  Image3->Visible=false;
  Image4->Visible=false;
  Image5->Visible=false;
  Image13->Visible=false;
  Image16->Visible=false;
  Image18->Visible=false;
  Image21->Visible=false;

}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image8MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
      Image2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image8Click(TObject *Sender)
{
        mainTimus->Visible = True;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image9Click(TObject *Sender)
{
          maincodeforces->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image9MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
      Image3->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image10MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
        Image4->Visible=true;
        if(Image2->Visible && Image3->Visible && Image6->Visible)
                GAMES->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image11MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
 Image21->Visible=true;
 Image5->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall Tmain::Image14MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Image13->Visible=true;
if(Image16->Visible)Image16->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image11Click(TObject *Sender)
{
          mainAboutus->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image13Click(TObject *Sender)
{
main->Close();
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
   if(Button == mbLeft)
        {
        long SC_DRAGMOVE = 0xF012;
        ReleaseCapture();
        SendMessage(main->Handle, WM_SYSCOMMAND, SC_DRAGMOVE, 0);
        }
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image17Click(TObject *Sender)
{
          SendMessage(Handle, WM_SYSCOMMAND, SC_MINIMIZE, 0);
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image17MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
                     Image16->Visible=true;
                     if(Image13->Visible)Image13->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall Tmain::Image10Click(TObject *Sender)
{
WinExec("motiv.exe",1);
}
//---------------------------------------------------------------------------


void __fastcall Tmain::Image15MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
      Image18->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image20Click(TObject *Sender)
{

if(Image19->Visible)
        {
                Image19->Visible=false;
                sndPlaySound(NULL,SND_ASYNC);
        }
else {
        Image19->Visible=true;
        sndPlaySound("volna.wav",SND_ASYNC);  
        }
}
//---------------------------------------------------------------------------



void __fastcall Tmain::Image1Click(TObject *Sender)
{
if(GAMES->Visible)GAMES->Close();
}
//---------------------------------------------------------------------------


void __fastcall Tmain::Image21Click(TObject *Sender)
{
mainAboutus->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall Tmain::FormCreate(TObject *Sender)
{
    ADOConnection1->ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source="+ExtractFilePath(Application->ExeName)+"/ACMdatabase.mdb;Mode=Share Deny None;Jet OLEDB:System database="";Jet OLEDB:Registry Path="";Jet OLEDB:Database Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Database Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLEDB:Global Bulk Transactions=1;Jet OLEDB:New Database Password="";Jet OLEDB:Create System Database=False;Jet OLEDB:Encrypt Database=False;Jet OLEDB:Don't Copy Locale on Compact=False;Jet OLEDB:Compact Without Replica Repair=False;Jet OLEDB:SFP=False;";
    ADOConnection1->Connected = true;
}
//---------------------------------------------------------------------------

