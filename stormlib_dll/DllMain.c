/*****************************************************************************/
/* DllMain.c                              Copyright (c) Ladislav Zezula 2006 */
/*---------------------------------------------------------------------------*/
/* Description: DllMain for the StormLib.dll library                         */
/*---------------------------------------------------------------------------*/
/*   Date    Ver   Who  Comment                                              */
/* --------  ----  ---  -------                                              */
/* 23.11.06  1.00  Lad  The first version of DllMain.c                       */
/*****************************************************************************/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#ifdef _WIN32
  #pragma comment(linker, "/export:GetLastError=Kernel32.GetLastError")
  #pragma comment(linker, "/export:SetLastError=Kernel32.SetLastError")
#endif

//-----------------------------------------------------------------------------
// DllMain

DWORD WINAPI DllMain(HINSTANCE hInst, DWORD dwReason, LPVOID lpReserved)
{
    UNREFERENCED_PARAMETER(hInst);
    UNREFERENCED_PARAMETER(dwReason);
    UNREFERENCED_PARAMETER(lpReserved);

    return TRUE;    
}
