/* sub_60492030
 * address: 0x60492030   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60492030(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 3 )
  {
    v3 = dword_60C9FB08;
    if ( !dword_60C9FB08 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60C9FB08 )
      {
        if ( ((unsigned int)&dword_60C9FB70 & ~(1615405192 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FB70) )
        {
          dword_60C9FB10 = (int)&unk_60C9FB18;
          dword_60C9FB0C = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60C9FB14 = 85;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60C9FB0C);
          dword_60C9FB0C = (int)&off_60BFD870;
          v6 = dword_60C9FB10;
          if ( (char *)dword_60C9FB10 != "Pa_ScrollBtnTime_00, Pa_ScrollBtnCoin_00, Pa_ScrollBtn1UP_00, Pa_ScrollBtnSpecial_00" )
          {
            for ( i = 0; aPaScrollbtntim_0[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aPaScrollbtntim_0[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60C9FB14 )
              i = dword_60C9FB14 - 1;
            qmemcpy(
              (void *)dword_60C9FB10,
              "Pa_ScrollBtnTime_00, Pa_ScrollBtnCoin_00, Pa_ScrollBtn1UP_00, Pa_ScrollBtnSpecial_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60C9FB0C = (int)&off_60BFD858;
          _cxa_guard_release(&dword_60C9FB70);
        }
        (*(void (__fastcall **)(int *))(dword_60C9FB0C + 12))(&dword_60C9FB0C);
        sub_608FBCE4(&unk_60C9FB74, dword_60C9FB10, 4);
        dword_60C9FB08 = (int)&unk_60C9FB74;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60C9FB08;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
