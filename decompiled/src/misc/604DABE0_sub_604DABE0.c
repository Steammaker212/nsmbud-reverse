/* sub_604DABE0
 * address: 0x604DABE0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DABE0(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0xC )
  {
    v3 = dword_60CA43F4;
    if ( !dword_60CA43F4 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA43F4 )
      {
        if ( ((unsigned int)&dword_60CA4474 & ~(1615703096 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4474) )
        {
          dword_60CA43FC = (int)&unk_60CA4404;
          dword_60CA43F8 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA4400 = 112;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA43F8);
          dword_60CA43F8 = (int)&off_60BFE4A8;
          v6 = dword_60CA43FC;
          if ( (char *)dword_60CA43FC != "Mode, ScrollToR, ScrollToL, InOutMenuBtn, PlayerNum, c1vs2, c1vs3, c2vs1, c2vs2"
                                         ", c3vs1, Select, Loop, LoopArrow" )
          {
            for ( i = 0; aModeScrolltorS[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aModeScrolltorS[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA4400 )
              i = dword_60CA4400 - 1;
            qmemcpy(
              (void *)dword_60CA43FC,
              "Mode, ScrollToR, ScrollToL, InOutMenuBtn, PlayerNum, c1vs2, c1vs3, c2vs1, c2vs2, c3vs1, Select, Loop, LoopArrow",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA43F8 = (int)&off_60BFE490;
          _cxa_guard_release(&dword_60CA4474);
        }
        (*(void (__fastcall **)(int *))(dword_60CA43F8 + 12))(&dword_60CA43F8);
        sub_608FBCE4(&unk_60CA4478, dword_60CA43FC, 13);
        dword_60CA43F4 = (int)&unk_60CA4478;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA43F4;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
