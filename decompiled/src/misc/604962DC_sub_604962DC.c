/* sub_604962DC
 * address: 0x604962DC   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604962DC(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0xE )
  {
    v3 = dword_60CA01D0;
    if ( !dword_60CA01D0 )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA01D0 )
      {
        if ( ((unsigned int)&dword_60CA0268 & ~(1615422260 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA0268) )
        {
          dword_60CA01D8 = (int)&unk_60CA01E0;
          dword_60CA01D4 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA01DC = 135;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA01D4);
          dword_60CA01D4 = (int)&off_60BFDA78;
          v6 = dword_60CA01D8;
          if ( (char *)dword_60CA01D8 != "LevelNum, InOut, ColorTime, ColorCoin, Color1UP, ColorSpecial, Gold, Silver, Br"
                                         "onze, NoMedal, Loop, New, Movie, OriginalName, BestText" )
          {
            for ( i = 0; aLevelnumInoutC[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aLevelnumInoutC[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA01DC )
              i = dword_60CA01DC - 1;
            qmemcpy(
              (void *)dword_60CA01D8,
              "LevelNum, InOut, ColorTime, ColorCoin, Color1UP, ColorSpecial, Gold, Silver, Bronze, NoMedal, Loop, New, M"
              "ovie, OriginalName, BestText",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA01D4 = (int)&off_60BFDA60;
          _cxa_guard_release(&dword_60CA0268);
        }
        (*(void (__fastcall **)(int *))(dword_60CA01D4 + 12))(&dword_60CA01D4);
        sub_608FBCE4(&unk_60CA026C, dword_60CA01D8, 15);
        dword_60CA01D0 = (int)&unk_60CA026C;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA01D0;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
