//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Graphics.hpp>
#include <MPlayer.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
//---------------------------------------------------------------------------
class Tmain : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image14;
        TImage *Image13;
        TImage *Image16;
        TImage *Image17;
        TImage *Image12;
        TImage *Image15;
        TImage *Image18;
        TImage *Image19;
        TImage *Image20;
        TImage *Image21;
    TADOConnection *ADOConnection1;
        void __fastcall Image7Click(TObject *Sender);
        void __fastcall Image7MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image8MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image8Click(TObject *Sender);
        void __fastcall Image9Click(TObject *Sender);
        void __fastcall Image9MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image10MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image11MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image14MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image11Click(TObject *Sender);
        void __fastcall Image13Click(TObject *Sender);
        void __fastcall Image1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall Image17Click(TObject *Sender);
        void __fastcall Image17MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image10Click(TObject *Sender);
        void __fastcall Image15MouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall Image20Click(TObject *Sender);
        void __fastcall Image1Click(TObject *Sender);
        void __fastcall Image21Click(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tmain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmain *main;
//---------------------------------------------------------------------------
#endif
