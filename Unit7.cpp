//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include <mmsystem.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGAMES *GAMES;
//---------------------------------------------------------------------------
__fastcall TGAMES::TGAMES(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TGAMES::Image4Click(TObject *Sender)
{
    WinExec("frogus.exe",1);
    GAMES->Close();
}
//---------------------------------------------------------------------------

void __fastcall TGAMES::Image5Click(TObject *Sender)
{
    WinExec("snake.exe",1);
    GAMES->Close();
}
//---------------------------------------------------------------------------

void __fastcall TGAMES::Image2MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
     if(Button == mbLeft)
        {
        long SC_DRAGMOVE = 0xF012;
        ReleaseCapture();
        SendMessage(GAMES->Handle, WM_SYSCOMMAND, SC_DRAGMOVE, 0);
        }
}
//---------------------------------------------------------------------------

