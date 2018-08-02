//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    Client = MySQLClient(IdTCPClient1, SG1, Memo1);
    Cl = MyClientMod(IdTCPClient1, SG1, Memo1);
    Cl.Loggin = "test";
    Cl.Pass = "test";
    Cl.bNeedColumnNames = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ED1KeyPress(TObject *Sender, char &Key)
{
    if(Key == 13)
    {
        if(CheckBox1->Checked)
        {
            if(ED1->Text != "")
            {
                vCo.push_back(ED1->Text);
                nCom = vCo.size();
                Cl.SendCommand(ED1->Text, CB1->Text);
            }
        }
        else
        {
            ManageHostAndPort();

            AnsiString sCommand = ED1->Text;
            if(CB1->Text != "")
                sCommand += "||" + CB1->Text;
            Client.SendClientCommand(sCommand);
        }
        ED1->SelectAll();
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    ManageHostAndPort();

    if(!CheckBox1->Checked)
        Client.SendClientCommand("show databases");
    else
        Cl.SendCommand("show databases", "");

    CB1->Clear();
    CB1->Items->Add("");
    for(int nY = Cl.bNeedColumnNames; nY < SG1->RowCount; nY++)
        CB1->Items->Add(Cl.GetFieldValue(nY, Cl.bNeedColumnNames));
}
//---------------------------------------------------------------------------
void TForm1::ManageHostAndPort()
{
    if(LE1->Text == "")
        LE1->Text = "127.0.0.1";
    if(LE2->Text == "")
        LE2->Text = "37111";

    IdTCPClient1->Host = LE1->Text;
    IdTCPClient1->Port = StrToInt(LE2->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    ManageHostAndPort();
    if(!CheckBox1->Checked)
        Client.SendClientCommand("Control>>HideForm");
    else
        Cl.SendCommand("Control>>HideForm", "");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
    ManageHostAndPort();
    if(!CheckBox1->Checked)
        Client.SendClientCommand("Control>>ShowForm");
    else
        Cl.SendCommand("Control>>ShowForm", "");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
    ManageHostAndPort();
    if(!CheckBox1->Checked)
        Client.SendClientCommand("update info set off = 1");
    else
        Cl.SendCommand("update info set off = 1", "tvtask");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
    ManageHostAndPort();
    if(!CheckBox1->Checked)
        Client.SendClientCommand("update info set off = 0");
    else
        Cl.SendCommand("update info set off = 0", "tvtask");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
    Cl.bNeedColumnNames = CheckBox2->Checked;
}
//---------------------------------------------------------------------------
/*AnsiString GetTableFromCommand(const StringsContainer &strCont)
{
    int i = 0;
    while(strCont.Vector[++i] != "from" && i<strCont.Vector.size())

    if(i<strCont.Vector.size()) // значит слово найдено
        return strCont.Vector[i+1];
return "";
}*/
//---------------------------------------------------------------------------
void __fastcall TForm1::SG1KeyPress(TObject *Sender, char &Key)
{
    /* Та хрен с ним! Лень ковыряться
    if(Key == 13)
    {
        StringsContainer strCont;
        strCont.BreakString(vCo.end(), " ");
        if(strCont.Vector[0].LowerCase() == "select")
        {
            AnsiString sTable = GetTableFromCommand(strCont);
            if(sTable != "")
            {
                ED1->Text = "update " + sTable ""
            }
        }
    }*/
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ED1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == 38)
    {
        if(nCom>0)
        {
            nCom--;
            ED1->Text = vCo[nCom];
        }
    }
    else if(Key == 40)
    {
        nCom++;
        if(nCom>=vCo.size())
            nCom = vCo.size()-1;
        ED1->Text = vCo[nCom];
    }

}
//---------------------------------------------------------------------------

