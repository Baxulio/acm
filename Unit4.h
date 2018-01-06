//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H


//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TmainTimus : public TForm
{
__published:	// IDE-managed Components
        TDataSource *DataSource1;
        TADOTable *ADOTable1;
        TDBComboBox *DBComboBox1;
        TLabel *Label1;
        TDBGrid *DBGrid1;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TDBMemo *DBMemo1;
        TDBMemo *DBMemo2;
        TDBMemo *DBMemo3;
        TCheckBox *CheckBox1;
        TDBMemo *DBMemo4;
    TDBText *DBText1;
    TDBText *DBText2;
    TDBText *DBText3;
    TDBMemo *DBMemo5;
        TImage *Image1;
        TLabel *Label2;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image8;
        TImage *Image6;
        void __fastcall DBComboBox1Change(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall Image6MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image7MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image7Click(TObject *Sender);
        void __fastcall Image6Click(TObject *Sender);
        void __fastcall Image8MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
        void __fastcall Image8Click(TObject *Sender);
        void __fastcall Image1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
    void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TmainTimus(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainTimus *mainTimus;
//---------------------------------------------------------------------------
#endif
 