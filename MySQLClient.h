//---------------------------------------------------------------------------

#ifndef MySQLClientH
#define MySQLClientH

#include <IdTCPClient.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------


class MySQLClient
{
    public:
    TIdTCPClient *Cli;
    TStringGrid *SG;
    TMemo *Memo;

    AnsiString sRequestID;
    AnsiString sIP;


    private://Funcs
    void AddErrorMessage(AnsiString sID);
    AnsiString CodeString(AnsiString str);
    void ClearSG();

    public://Funcs
    // Constructors
    MySQLClient(){Cli = 0; SG = 0; Memo = 0;}
    MySQLClient(TIdTCPClient *iCli, TStringGrid *iSG, TMemo *iMemo);


    void SendCommand(AnsiString sCommand);
    void SendClientCommand(AnsiString sCommand);
    void CheckFieldWidth(AnsiString sValue, int nX);
    void ReceiveReply(int nReqY = 0, int nReqX = 0);
    void ReceiveClientReply(int nReqY = 0, int nReqX = 0);
    void Log(AnsiString sMess);
    AnsiString GetFieldValue(int nY = 0, int nX = 0);

};





#endif
