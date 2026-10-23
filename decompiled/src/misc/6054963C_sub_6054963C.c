/* sub_6054963C
 * address: 0x6054963C   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054963C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r4
  char v5; // r12
  int v6; // r5
  signed int i; // r6

  result = 0;
  if ( !a1 )
  {
    v3 = dword_60CAC640;
    if ( !dword_60CAC640 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CAC640 )
      {
        if ( ((unsigned int)&dword_60CAC658 & ~(1616156308 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAC658) )
        {
          dword_60CAC648 = (int)&unk_60CAC650;
          dword_60CAC644 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CAC64C = 5;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CAC644);
          dword_60CAC644 = (int)&off_60BD5434;
          v6 = dword_60CAC648;
          if ( (char *)dword_60CAC648 != "Down" )
          {
            for ( i = 0; aDown_0[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aDown_0[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CAC64C )
              i = dword_60CAC64C - 1;
            qmemcpy((void *)dword_60CAC648, "Down", i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CAC644 = (int)&off_60BD4F38;
          _cxa_guard_release(&dword_60CAC658);
        }
        (*(void (__fastcall **)(int *))(dword_60CAC644 + 12))(&dword_60CAC644);
        sub_608FBCE4(&unk_60CAC65C, dword_60CAC648, 1);
        dword_60CAC640 = (int)&unk_60CAC65C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CAC640;
    }
    return *(_DWORD *)v3;
  }
  return result;
}
