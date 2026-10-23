/* sub_6081D400
 * address: 0x6081D400   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081D400(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0xF )
  {
    v3 = dword_60CC6C40;
    if ( !dword_60CC6C40 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CC6C40 )
      {
        if ( ((unsigned int)&dword_60CC6CB0 & ~(1619121240 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6CB0) )
        {
          dword_60CC6C48 = (int)&unk_60CC6C50;
          dword_60CC6C44 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CC6C4C = 95;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CC6C44);
          dword_60CC6C44 = (int)&off_60C2A504;
          v6 = dword_60CC6C48;
          if ( (char *)dword_60CC6C48 != "JPja, USen, USes, USfr, USpt, EUen, EUes, EUfr, EUde, EUit, EUpt, EUnl, EUru, KRko, CNzh, TWzh" )
          {
            for ( i = 0; aJpjaUsenUsesUs[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aJpjaUsenUsesUs[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CC6C4C )
              i = dword_60CC6C4C - 1;
            qmemcpy(
              (void *)dword_60CC6C48,
              "JPja, USen, USes, USfr, USpt, EUen, EUes, EUfr, EUde, EUit, EUpt, EUnl, EUru, KRko, CNzh, TWzh",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CC6C44 = (int)&off_60C2A4EC;
          _cxa_guard_release(&dword_60CC6CB0);
        }
        (*(void (__fastcall **)(int *))(dword_60CC6C44 + 12))(&dword_60CC6C44);
        sub_608FBCE4(&unk_60CC6CB4, dword_60CC6C48, 16);
        dword_60CC6C40 = (int)&unk_60CC6CB4;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CC6C40;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
