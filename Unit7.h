//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TGAMES : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TImage *Image4;
        TImage *Image5;
        TImage *Image2;
        void __fastcall Image4Click(TObject *Sender);
        void __fastcall Image5Click(TObject *Sender);
        void __fastcall Image2MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TGAMES(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGAMES *GAMES;
//---------------------------------------------------------------------------
#endif
