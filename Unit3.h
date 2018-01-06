//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class Tmaincodeforces : public TForm
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
        TDBMemo *DBMemo4;
        TDBMemo *DBMemo5;
        TCheckBox *CheckBox1;
    TDBText *DBText1;
    TDBText *DBText2;
    TDBText *DBText3;
    TDBMemo *DBMemo6;
    TImage *Image1;
    TLabel *Label2;
    TImage *Image6;
    TImage *Image7;
    TImage *Image4;
    TImage *Image5;
    TImage *Image2;
    TImage *Image3;
        void __fastcall DBComboBox1Change(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
    void __fastcall Image1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall Image6Click(TObject *Sender);
    void __fastcall Image6MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall Image1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall Image7Click(TObject *Sender);
    void __fastcall Image7MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tmaincodeforces(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmaincodeforces *maincodeforces;
//---------------------------------------------------------------------------
#endif
