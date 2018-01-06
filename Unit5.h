//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TmainAboutus : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TImage *Image2;
        TImage *Image3;
        void __fastcall Image3MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image3Click(TObject *Sender);
        void __fastcall Image1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TmainAboutus(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainAboutus *mainAboutus;
//---------------------------------------------------------------------------
#endif
 