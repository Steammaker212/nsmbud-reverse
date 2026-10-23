/* sub_60492F00
 * address: 0x60492F00   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60492F00(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 6 )
  {
    v3 = dword_60C9FCCC;
    if ( !dword_60C9FCCC )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C9FCCC )
      {
        if ( ((unsigned int)&dword_60C9FD24 & ~(1615408984 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD24) )
        {
          dword_60C9FCD4 = (int)&unk_60C9FCDC;
          dword_60C9FCD0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C9FCD8 = 71;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9FCD0);
          dword_60C9FCD0 = (int)&off_60BFD930;
          v6 = dword_60C9FCD4;
          if ( (char *)dword_60C9FCD4 != "TouchDecide, Unselect, InOutNew, LoopNew, InMedal, LoopMedal, OutMedal" )
          {
            for ( i = 0; aTouchdecideUns[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTouchdecideUns[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C9FCD8 )
              i = dword_60C9FCD8 - 1;
            qmemcpy((void *)dword_60C9FCD4, "TouchDecide, Unselect, InOutNew, LoopNew, InMedal, LoopMedal, OutMedal", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C9FCD0 = (int)&off_60BFD918;
          _cxa_guard_release(&dword_60C9FD24);
        }
        (*(void (__fastcall **)(int *))(dword_60C9FCD0 + 12))(&dword_60C9FCD0);
        sub_608FBCE4(&unk_60C9FD28, dword_60C9FCD4, 7);
        dword_60C9FCCC = (int)&unk_60C9FD28;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C9FCCC;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
