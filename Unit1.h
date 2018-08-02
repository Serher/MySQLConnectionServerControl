//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include "MySQLClient.h"
#include "MyClientMod.h"

#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <ExtCtrls.hpp>
#include "trayicon.h"
#include <IdAntiFreeze.hpp>
#include <IdAntiFreezeBase.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TStringGrid *SG1;
    TEdit *ED1;
    TIdTCPClient *IdTCPClient1;
    TMemo *Memo1;
    TLabeledEdit *LE1;
    TLabeledEdit *LE2;
    TComboBox *CB1;
    TButton *Button1;
    TButton *Button2;
    TButton *Button3;
    TLabel *Label1;
    TButton *Button4;
    TButton *Button5;
    TTrayIcon *TrayIcon1;
    TCheckBox *CheckBox1;
    TCheckBox *CheckBox2;
    void __fastcall ED1KeyPress(TObject *Sender, char &Key);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall Button4Click(TObject *Sender);
    void __fastcall Button5Click(TObject *Sender);
    void __fastcall CheckBox2Click(TObject *Sender);
    void __fastcall SG1KeyPress(TObject *Sender, char &Key);
    void __fastcall ED1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
    void ManageHostAndPort();

    MySQLClient Client;
    MyClientMod Cl;

    std::vector<AnsiString> vCo;
    unsigned nCom;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
