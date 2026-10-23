/* sub_6052283C
 * address: 0x6052283C   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052283C(unsigned int a1)
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
    v3 = dword_60CA939C;
    if ( !dword_60CA939C )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA939C )
      {
        if ( ((unsigned int)&dword_60CA9450 & ~(1615997076 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9450) )
        {
          dword_60CA93A4 = (int)&unk_60CA93AC;
          dword_60CA93A0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA93A8 = 164;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA93A0);
          dword_60CA93A0 = (int)&off_60BFFE34;
          v6 = dword_60CA93A4;
          if ( (char *)dword_60CA93A4 != "LevelNum, InPlayScore, InBestScore, NewRecord, MedalGet, TieRecord, ColorTime, "
                                         "ColorCoin, Color1UP, ColorSpecial, ScorePattern, Gold, Silver, Bronze, NoMedal, Loop" )
          {
            for ( i = 0; aLevelnumInplay[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aLevelnumInplay[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA93A8 )
              i = dword_60CA93A8 - 1;
            qmemcpy(
              (void *)dword_60CA93A4,
              "LevelNum, InPlayScore, InBestScore, NewRecord, MedalGet, TieRecord, ColorTime, ColorCoin, Color1UP, ColorS"
              "pecial, ScorePattern, Gold, Silver, Bronze, NoMedal, Loop",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA93A0 = (int)&off_60BFFE1C;
          _cxa_guard_release(&dword_60CA9450);
        }
        (*(void (__fastcall **)(int *))(dword_60CA93A0 + 12))(&dword_60CA93A0);
        sub_608FBCE4(&unk_60CA9454, dword_60CA93A4, 16);
        dword_60CA939C = (int)&unk_60CA9454;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA939C;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
