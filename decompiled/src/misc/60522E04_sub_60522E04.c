/* sub_60522E04
 * address: 0x60522E04   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60522E04(unsigned int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r8
  signed int i; // r7

  result = 0;
  if ( a1 <= 0x12 )
  {
    v3 = dword_60CA94CC;
    if ( !dword_60CA94CC )
    {
      v4 = sub_608FBC5C();
      sead__CriticalSection__lock(v4);
      if ( !dword_60CA94CC )
      {
        if ( ((unsigned int)&dword_60CA9634 & ~(1615998556 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9634) )
        {
          dword_60CA94D4 = (int)&unk_60CA94DC;
          dword_60CA94D0 = (int)&BufferedSafeStringBase_char_vtable_probably;
          dword_60CA94D8 = 344;
          sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&dword_60CA94D0);
          dword_60CA94D0 = (int)&off_60BFFE64;
          v6 = dword_60CA94D4;
          if ( (char *)dword_60CA94D4 != "T_PlayScoreText_00, T_PlayScore_00, T_PlayScore_01, T_PlayScoreTime_00, T_BestS"
                                         "core_00, T_BestScoreTime_00, T_BestScore_01, T_BestScoreText_00, T_BestScoreNew"
                                         "_00, T_BestScoreNew_01, T_BestScoreTimeNew_00, T_BestScoreTimeNew_01, T_CourseN"
                                         "ame_01, T_CourseName_00, T_Text_01, T_Text_00, T_GoldMedalGet_00, T_SilverMedal"
                                         "Get_00, T_BronzeMedalGet_00" )
          {
            for ( i = 0; aTPlayscoretext[i]; i += 2 )
            {
              if ( i >= 0x80000 )
              {
                i = 0;
                break;
              }
              if ( !aTPlayscoretext[i + 1] )
              {
                ++i;
                break;
              }
            }
            if ( i >= dword_60CA94D8 )
              i = dword_60CA94D8 - 1;
            qmemcpy(
              (void *)dword_60CA94D4,
              "T_PlayScoreText_00, T_PlayScore_00, T_PlayScore_01, T_PlayScoreTime_00, T_BestScore_00, T_BestScoreTime_00"
              ", T_BestScore_01, T_BestScoreText_00, T_BestScoreNew_00, T_BestScoreNew_01, T_BestScoreTimeNew_00, T_BestS"
              "coreTimeNew_01, T_CourseName_01, T_CourseName_00, T_Text_01, T_Text_00, T_GoldMedalGet_00, T_SilverMedalGe"
              "t_00, T_BronzeMedalGet_00",
              i);
            *(_BYTE *)(v6 + i) = 0;
          }
          dword_60CA94D0 = (int)&off_60BFFE4C;
          _cxa_guard_release(&dword_60CA9634);
        }
        (*(void (__fastcall **)(int *))(dword_60CA94D0 + 12))(&dword_60CA94D0);
        sub_608FBCE4(&unk_60CA9638, dword_60CA94D4, 19);
        dword_60CA94CC = (int)&unk_60CA9638;
      }
      sead__CriticalSection__unlock(v4);
      v3 = dword_60CA94CC;
    }
    return *(_DWORD *)(v3 + 4 * a1);
  }
  return result;
}
