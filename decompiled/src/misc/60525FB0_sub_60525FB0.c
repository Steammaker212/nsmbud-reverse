/* sub_60525FB0
 * address: 0x60525FB0   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60525FB0(_DWORD *a1)
{
  char v1; // r12
  int result; // r0
  int v4; // [sp+4h] [bp-Ch] BYREF

  if ( ((unsigned int)&dword_60CAA0BC & ~(1616011212 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA0BC) )
  {
    dword_60CA9EA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EA8 = (int)"N_Pos2P_00";
    dword_60CA9EAC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EB0 = (int)"N_Pos2P_01";
    dword_60CA9EB4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EB8 = (int)"N_Pos3P_00";
    dword_60CA9EBC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EC0 = (int)"N_Pos3P_01";
    dword_60CA9EC4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EC8 = (int)"N_Pos3P_02";
    dword_60CA9ECC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9ED0 = (int)"N_Pos4P_00";
    dword_60CA9ED4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9ED8 = (int)"N_Pos4P_01";
    dword_60CA9EDC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EE0 = (int)"N_Pos4P_02";
    dword_60CA9EE4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EE8 = (int)"N_Pos4P_03";
    dword_60CA9EEC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EF0 = (int)"N_PosT1vs2_00";
    dword_60CA9EF4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9EF8 = (int)"N_PosT1vs2A_00";
    dword_60CA9EFC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F00 = (int)"N_PosT1vs2AScore_00";
    dword_60CA9F04 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F08 = (int)"N_PosT1vs2B_00";
    dword_60CA9F0C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F10 = (int)"N_PosT1vs2B_01";
    dword_60CA9F14 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F18 = (int)"N_PosT1vs2BScore_00";
    dword_60CA9F1C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F20 = (int)"N_PosT2vs1_00";
    dword_60CA9F24 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F28 = (int)"N_PosT2vs1A_00";
    dword_60CA9F2C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F30 = (int)"N_PosT2vs1A_01";
    dword_60CA9F34 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F38 = (int)"N_PosT2vs1AScore_00";
    dword_60CA9F3C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F40 = (int)"N_PosT2vs1B_00";
    dword_60CA9F44 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F48 = (int)"N_PosT2vs1BScore_00";
    dword_60CA9F4C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F50 = (int)"N_PosT2vs2_00";
    dword_60CA9F54 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F58 = (int)"N_PosT2vs2A_00";
    dword_60CA9F5C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F60 = (int)"N_PosT2vs2A_01";
    dword_60CA9F64 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F68 = (int)"N_PosT2vs2AScore_00";
    dword_60CA9F6C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F70 = (int)"N_PosT2vs2B_00";
    dword_60CA9F74 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F78 = (int)"N_PosT2vs2B_01";
    dword_60CA9F7C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F80 = (int)"N_PosT2vs2BScore_00";
    dword_60CA9F84 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F88 = (int)"N_PosT1vs3_00";
    dword_60CA9F8C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F90 = (int)"N_PosT1vs3A_00";
    dword_60CA9F94 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9F98 = (int)"N_PosT1vs3AScore_00";
    dword_60CA9F9C = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FA0 = (int)"N_PosT1vs3B_00";
    dword_60CA9FA4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FA8 = (int)"N_PosT1vs3B_01";
    dword_60CA9FAC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FB0 = (int)"N_PosT1vs3B_02";
    dword_60CA9FB4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FB8 = (int)"N_PosT1vs3BScore_00";
    dword_60CA9FBC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FC0 = (int)"N_PosT3vs1_00";
    dword_60CA9FC4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FC8 = (int)"N_PosT3vs1A_02";
    dword_60CA9FCC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FD0 = (int)"N_PosT3vs1A_01";
    dword_60CA9FD4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FD8 = (int)"N_PosT3vs1A_00";
    dword_60CA9FDC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FE0 = (int)"N_PosT3vs1AScore_00";
    dword_60CA9FE4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FE8 = (int)"N_PosT3vs1B_00";
    dword_60CA9FEC = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FF0 = (int)"N_PosT3vs1BScore_00";
    dword_60CA9FF4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9FF8 = (int)"N_Score_01";
    dword_60CA9FFC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA000 = (int)"N_ScoreABase_00";
    dword_60CAA004 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA008 = (int)"N_ScoreBBase_00";
    dword_60CAA00C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA010 = (int)"N_ScoreBase_00";
    dword_60CAA014 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA018 = (int)"N_ScoreTeamA_00";
    dword_60CAA01C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA020 = (int)"N_ScoreA_00";
    dword_60CAA024 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA028 = (int)"N_ScoreTeamB_00";
    dword_60CAA02C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA030 = (int)"N_ScoreB_00";
    dword_60CAA034 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA038 = (int)"N_Text_00";
    dword_60CAA03C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA040 = (int)"N_Round_00";
    dword_60CAA044 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA048 = (int)"N_Result_00";
    dword_60CAA04C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA050 = (int)"N_TotalCoin_00";
    dword_60CAA054 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA058 = (int)"N_StarCoinBonus_00";
    dword_60CAA05C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA060 = (int)"N_BonusCoin_00";
    dword_60CAA064 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA068 = (int)"N_TeamA_00";
    dword_60CAA06C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA070 = (int)"N_TeamB_00";
    dword_60CAA074 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA078 = (int)"N_Draw_00";
    dword_60CAA07C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA080 = (int)"N_1st_00";
    dword_60CAA084 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA088 = (int)"N_1st_01";
    dword_60CAA08C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA090 = (int)"N_1st_02";
    dword_60CAA094 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA098 = (int)"N_2nd_00";
    dword_60CAA09C = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0A0 = (int)"N_2nd_01";
    dword_60CAA0A4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0A8 = (int)"N_2nd_02";
    dword_60CAA0AC = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0B0 = (int)"N_ScoreTeamAAll_00";
    dword_60CAA0B4 = (int)&sead__SafeStringBase__vtable;
    dword_60CAA0B8 = (int)"N_ScoreTeamBAll_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CAA0BC);
  }
  v4 = 67;
  sub_6047518C((int)(a1 + 11), (int)(a1 + 943), &dword_60CA9EA4, &v4);
  *(_BYTE *)(a1[985] + 64) &= ~1u;
  *(_BYTE *)(a1[989] + 64) &= ~1u;
  result = a1[991];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
