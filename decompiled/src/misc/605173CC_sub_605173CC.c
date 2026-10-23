/* sub_605173CC
 * address: 0x605173CC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605173CC(unsigned int a1)
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
    v3 = dword_60CA87C8;
    if ( !dword_60CA87C8 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA87C8 )
      {
        if ( ((unsigned int)&dword_60CA882C & ~(1615950884 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA882C) )
        {
          dword_60CA87D0 = (int)&unk_60CA87D8;
          dword_60CA87CC = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA87D4 = 82;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA87CC);
          dword_60CA87CC = (int)&off_60BFF1C8;
          v6 = dword_60CA87D0;
          if ( (char *)dword_60CA87D0 != "T_Gold_00, T_Silver_00, T_Bronze_00, T_Title_01, T_Title_00, T_Text_01, T_Text_00" )
          {
            for ( i = 0; aTGold00TSilver[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTGold00TSilver[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA87D4 )
              i = dword_60CA87D4 - 1;
            qmemcpy(
              (void *)dword_60CA87D0,
              "T_Gold_00, T_Silver_00, T_Bronze_00, T_Title_01, T_Title_00, T_Text_01, T_Text_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA87CC = (int)&off_60BFF1B0;
          _cxa_guard_release(&dword_60CA882C);
        }
        (*(void (__fastcall **)(int *))(dword_60CA87CC + 12))(&dword_60CA87CC);
        sub_608FBCE4(&unk_60CA8830, dword_60CA87D0, 7);
        dword_60CA87C8 = (int)&unk_60CA8830;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA87C8;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
