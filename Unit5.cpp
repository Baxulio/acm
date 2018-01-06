//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TmainAboutus *mainAboutus;
//---------------------------------------------------------------------------
__fastcall TmainAboutus::TmainAboutus(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TmainAboutus::Image3MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Image2->Visible=true; 
}
//---------------------------------------------------------------------------
void __fastcall TmainAboutus::Image1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Image2->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TmainAboutus::Image3Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------
void __fastcall TmainAboutus::Image1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
  if(Button == mbLeft)
        {
        long SC_DRAGMOVE = 0xF012;
        ReleaseCapture();
        SendMessage(mainAboutus->Handle, WM_SYSCOMMAND, SC_DRAGMOVE, 0);
        }
}
//---------------------------------------------------------------------------
