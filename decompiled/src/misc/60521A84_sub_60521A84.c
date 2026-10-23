/* sub_60521A84
 * address: 0x60521A84   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60521A84(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // r5

  if ( ((unsigned int)dword_60CA9774 & ~(1615993504 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA9774) )
  {
    dword_60CA9794 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9798 = (int)off_60C5CB34;
    dword_60CA979C = (int)&sead__SafeStringBase__vtable;
    dword_60CA97A0 = (int)"ResultChallenge_ScoreCoinCount_00";
    dword_60CA97A4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA97A8 = (int)"ResultChallenge_ScoreCoinCount_00";
    dword_60CA97AC = (int)&sead__SafeStringBase__vtable;
    dword_60CA97B0 = (int)"ResultChallenge_Score1UPCount_00";
    dword_60CA97B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA97B8 = (int)"ResultChallenge_ScoreEnemyLost_00";
    dword_60CA97BC = (int)&sead__SafeStringBase__vtable;
    dword_60CA97C0 = (int)off_60C5CB34;
    dword_60CA97C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA97C8 = (int)"ResultChallenge_ScoreBubbleCount_00";
    dword_60CA97CC = (int)&sead__SafeStringBase__vtable;
    dword_60CA97D0 = (int)"ResultChallenge_ScoreEnemyLost_00";
    dword_60CA97D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA97D8 = (int)"ResultChallenge_ScoreMetPataCount_00";
    dword_60CA97DC = (int)&sead__SafeStringBase__vtable;
    dword_60CA97E0 = (int)off_60C5CB34;
    dword_60CA97E4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA97E8 = (int)off_60C5CB34;
    sub_60000288();
    _cxa_guard_release(dword_60CA9774);
  }
  if ( ((unsigned int)&dword_60CA9774[1] & ~(1615993744 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9774[1]) )
  {
    dword_60CA97F0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA97F4 = (int)off_60C5CB34;
    dword_60CA97F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA97FC = (int)"ResultChallenge_ScoreCoinCount_00";
    dword_60CA9800 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9804 = (int)"ResultChallenge_ScoreCoinCount_00";
    dword_60CA9808 = (int)&sead__SafeStringBase__vtable;
    dword_60CA980C = (int)"ResultChallenge_Score1UPCount_00";
    dword_60CA9810 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9814 = (int)"ResultChallenge_ScoreEnemyLost_00";
    dword_60CA9818 = (int)&sead__SafeStringBase__vtable;
    dword_60CA981C = (int)off_60C5CB34;
    dword_60CA9820 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9824 = (int)"ResultChallenge_ScoreBubbleCount_00";
    dword_60CA9828 = (int)&sead__SafeStringBase__vtable;
    dword_60CA982C = (int)"ResultChallenge_ScoreEnemyLost_00";
    dword_60CA9830 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9834 = (int)"ResultChallenge_ScoreMetPataCount_00";
    dword_60CA9838 = (int)&sead__SafeStringBase__vtable;
    dword_60CA983C = (int)off_60C5CB34;
    dword_60CA9840 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9844 = (int)off_60C5CB34;
    sub_60000288();
    _cxa_guard_release(&dword_60CA9774[1]);
  }
  if ( ((unsigned int)&dword_60CA9774[2] & ~(1615993992 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9774[2]) )
  {
    dword_60CA9850[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA9854 = (int)"ResultChallenge_PlayScoreText_00";
    dword_60CA9858 = (int)&sead__SafeStringBase__vtable;
    dword_60CA985C = (int)"ResultChallenge_PlayScoreText_Coin00";
    dword_60CA9860 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9864 = (int)"ResultChallenge_PlayScoreText_Coin00";
    dword_60CA9868 = (int)&sead__SafeStringBase__vtable;
    dword_60CA986C = (int)"ResultChallenge_PlayScoreText_UP00";
    dword_60CA9870 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9874 = (int)"ResultChallenge_PlayScoreText_Count00";
    dword_60CA9878 = (int)&sead__SafeStringBase__vtable;
    dword_60CA987C = (int)off_60C5CB34;
    dword_60CA9880 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9884 = (int)off_60C5CB34;
    dword_60CA9888 = (int)&sead__SafeStringBase__vtable;
    dword_60CA988C = (int)"ResultChallenge_PlayScoreText_Count00";
    dword_60CA9890 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9894 = (int)off_60C5CB34;
    dword_60CA9898 = (int)&sead__SafeStringBase__vtable;
    dword_60CA989C = (int)off_60C5CB34;
    dword_60CA98A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98A4 = (int)"ResultChallenge_PlayScoreText_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA9774[2]);
  }
  if ( ((unsigned int)&dword_60CA9774[3] & ~(1615994232 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9774[3]) )
  {
    dword_60CA98B0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA98B4 = (int)"ResultChallenge_BestScoreText_00";
    dword_60CA98B8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98BC = (int)"ResultChallenge_BestScoreText_Coin00";
    dword_60CA98C0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98C4 = (int)"ResultChallenge_BestScoreText_Coin00";
    dword_60CA98C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98CC = (int)"ResultChallenge_BestScoreText_UP00";
    dword_60CA98D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98D4 = (int)"ResultChallenge_BestScoreText_Count00";
    dword_60CA98D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98DC = (int)off_60C5CB34;
    dword_60CA98E0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98E4 = (int)off_60C5CB34;
    dword_60CA98E8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98EC = (int)"ResultChallenge_BestScoreText_Count00";
    dword_60CA98F0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98F4 = (int)off_60C5CB34;
    dword_60CA98F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA98FC = (int)off_60C5CB34;
    dword_60CA9900 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9904 = (int)"ResultChallenge_BestScoreText_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA9774[3]);
  }
  result = dword_60C9A1F0;
  v4 = FIELD_U8(dword_60C9A1F0, 6476);
  if ( v4 != 9 )
  {
    if ( v4 == 5 )
    {
      FIELD_U8(a1, 4310) = 1;
      result = FIELD_U32(a1, 3788);
      FIELD_U8(result, 64) &= ~1u;
    }
    else
    {
      if ( **((_BYTE **)&unk_60CA9770 + 2 * v4 + 10) )
        sub_6047E0EC((_DWORD *)&unk_60CA9770 + 2 * v4 + 9, FIELD_U32(a1, 3800), 0);
      if ( *(_BYTE *)dword_60CA97F0[2 * v4 + 1] )
        sub_6047E0EC(&dword_60CA97F0[2 * v4], FIELD_U32(a1, 3816), 0);
      if ( *(_BYTE *)dword_60CA9850[2 * v4 + 1] )
        sub_6047E0EC(&dword_60CA9850[2 * v4], FIELD_U32(a1, 3792), 0);
      result = *(unsigned __int8 *)dword_60CA98B0[2 * v4 + 1];
      if ( *(_BYTE *)dword_60CA98B0[2 * v4 + 1] )
        return sub_6047E0EC(&dword_60CA98B0[2 * v4], FIELD_U32(a1, 3820), 0);
    }
  }
  return result;
}
