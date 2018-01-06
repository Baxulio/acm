//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", main);
USEFORM("Unit2.cpp", mainTUIT);
USEFORM("Unit3.cpp", maincodeforces);
USEFORM("Unit4.cpp", mainTimus);
USEFORM("Unit5.cpp", mainAboutus);
USEFORM("Unit7.cpp", GAMES);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(Tmain), &main);
                 Application->CreateForm(__classid(TmainTUIT), &mainTUIT);
                 Application->CreateForm(__classid(Tmaincodeforces), &maincodeforces);
                 Application->CreateForm(__classid(TmainTimus), &mainTimus);
                 Application->CreateForm(__classid(TmainAboutus), &mainAboutus);
                 Application->CreateForm(__classid(TGAMES), &GAMES);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
