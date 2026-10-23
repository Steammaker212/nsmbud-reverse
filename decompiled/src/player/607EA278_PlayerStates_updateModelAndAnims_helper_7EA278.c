/* PlayerStates_updateModelAndAnims_helper_7EA278
 * address: 0x607EA278   size: 2280   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_updateModelAndAnims_helper_7EA278(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int result; // r0
  _DWORD v7[82]; // [sp+84h] [bp-474h] BYREF
  _DWORD v8[82]; // [sp+1CCh] [bp-32Ch] BYREF
  _DWORD v9[56]; // [sp+314h] [bp-1E4h] BYREF
  _DWORD v10[65]; // [sp+3F4h] [bp-104h] BYREF

  v10[0] = "SE_DEMO_OP_C10_V_TALK";
  v10[1] = 0;
  v10[2] = "SE_DEMO_OP_C10_SHAKE";
  v10[3] = 0;
  v10[4] = "SE_DEMO_OP_C10_V_SURPRIZE";
  v10[5] = 0;
  v10[6] = "SE_DEMO_OP_C20_SHOT_CASTLE";
  v10[7] = 0;
  v10[8] = "SE_DEMO_OP_C20_KP_SHIP_PRPL";
  v10[9] = 1;
  v10[10] = "SE_DEMO_OP_C20_SHIP_PRPL";
  v10[11] = 1;
  v10[12] = "SE_DEMO_OP_C20_SHIP_FIRE";
  v10[13] = 0;
  v10[14] = "SE_DEMO_OP_C30_KPHAND_APPR";
  v10[15] = 0;
  v10[16] = "SE_DEMO_OP_C30_KPHAND_FINGER";
  v10[17] = 0;
  v10[18] = "SE_DEMO_OP_C30_KPHAND_MOVE";
  v10[19] = 0;
  v10[20] = "SE_DEMO_OP_C40_V_KEIKAI";
  v10[21] = 0;
  v10[22] = "SE_DEMO_OP_C40_KPHAND_MOVE";
  v10[23] = 0;
  v10[24] = "SE_DEMO_OP_C40_KPHAND_CHAIR";
  v10[25] = 0;
  v10[26] = "SE_DEMO_OP_C40_KPHAND_CRASH";
  v10[27] = 0;
  v10[28] = "SE_DEMO_OP_C40_KPHAND_CATCH";
  v10[29] = 1;
  v10[30] = "SE_DEMO_OP_C50_KPHAND_THROW";
  v10[31] = 0;
  v10[32] = "SE_DEMO_OP_C61_V_THROW";
  v10[33] = 1;
  v10[34] = "SE_DEMO_OP_C62_V_THROW";
  v10[35] = 1;
  v10[36] = "SE_DEMO_OP_C62_HIT_TREE";
  v10[37] = 0;
  v10[38] = "SE_DEMO_OP_C62_TREE_BOUND";
  v10[39] = 0;
  v10[40] = "SE_DEMO_OP_C62_TREE_REBOUND";
  v10[41] = 0;
  v10[42] = "SE_DEMO_OP_C70_DONGURI_BOUND1";
  v10[43] = 0;
  v10[44] = "SE_DEMO_OP_C70_DONGURI_BOUND2";
  v10[45] = 0;
  v10[46] = "SE_DEMO_OP_C70_LAND_SLIP";
  v10[47] = 0;
  v10[48] = "SE_DEMO_OP_C70_V_AWAKE";
  v10[49] = 0;
  v10[50] = "SE_DEMO_OP_C70_DASH";
  v10[51] = 1;
  v10[52] = "SE_DEMO_OP_C80_DASH";
  v10[53] = 1;
  v10[54] = "SE_DEMO_OP_C70_V_GO";
  v10[55] = 0;
  v9[0] = "SE_RD_DEMO_OP_C10_V_TALK";
  v9[1] = 0;
  v9[2] = "SE_DEMO_OP_C10_SHAKE";
  v9[3] = 0;
  v9[4] = "SE_RD_DEMO_OP_C10_V_SURPRIZE";
  v9[5] = 0;
  v9[6] = "SE_DEMO_OP_C20_SHOT_CASTLE";
  v9[7] = 0;
  v9[8] = "SE_DEMO_OP_C20_KP_SHIP_PRPL";
  v9[9] = 1;
  v9[10] = "SE_DEMO_OP_C20_SHIP_PRPL";
  v9[11] = 1;
  v9[12] = "SE_DEMO_OP_C20_SHIP_FIRE";
  v9[13] = 0;
  v9[14] = "SE_DEMO_OP_C30_KPHAND_APPR";
  v9[15] = 0;
  v9[16] = "SE_DEMO_OP_C30_KPHAND_FINGER";
  v9[17] = 0;
  v9[18] = "SE_DEMO_OP_C30_KPHAND_MOVE";
  v9[19] = 0;
  v9[20] = "SE_RD_DEMO_OP_C40_V_KEIKAI";
  v9[21] = 0;
  v9[22] = "SE_DEMO_OP_C40_KPHAND_MOVE";
  v9[23] = 0;
  v9[24] = "SE_DEMO_OP_C40_KPHAND_CHAIR";
  v9[25] = 0;
  v9[26] = "SE_DEMO_OP_C40_KPHAND_CRASH";
  v9[27] = 0;
  v9[28] = "SE_DEMO_OP_C40_KPHAND_CATCH";
  v9[29] = 1;
  v9[30] = "SE_DEMO_OP_C50_KPHAND_THROW";
  v9[31] = 0;
  v9[32] = "SE_RD_DEMO_OP_C61_V_THROW";
  v9[33] = 1;
  v9[34] = "SE_RD_DEMO_OP_C62_V_THROW";
  v9[35] = 1;
  v9[36] = "SE_DEMO_OP_C62_HIT_TREE";
  v9[37] = 0;
  v9[38] = "SE_DEMO_OP_C62_TREE_BOUND";
  v9[39] = 0;
  v9[40] = "SE_DEMO_OP_C62_TREE_REBOUND";
  v9[41] = 0;
  v9[42] = "SE_DEMO_OP_C70_DONGURI_BOUND1";
  v9[43] = 0;
  v9[44] = "SE_DEMO_OP_C70_DONGURI_BOUND2";
  v9[45] = 0;
  v9[46] = "SE_RD_DEMO_OP_C70_LAND_SLIP";
  v9[47] = 0;
  v9[48] = "SE_RD_DEMO_OP_C70_V_AWAKE";
  v9[49] = 0;
  v9[50] = "SE_DEMO_OP_C70_DASH";
  v9[51] = 1;
  v9[52] = "SE_RD_DEMO_OP_C80_DASH";
  v9[53] = 1;
  v9[54] = "SE_RD_DEMO_OP_C70_V_GO";
  v9[55] = 0;
  v8[0] = "SE_DEMO_ED_C10_SHIP_PRPL";
  v8[1] = 1;
  v8[2] = "SE_DEMO_ED_C10_V_TESHITA";
  v8[3] = 1;
  v8[4] = "SE_DEMO_ED_C10_JUMP1_JR";
  v8[5] = 0;
  v8[6] = "SE_DEMO_ED_C10_JUMP2_JR";
  v8[7] = 0;
  v8[8] = "SE_DEMO_ED_C10_JUMP3_JR";
  v8[9] = 0;
  v8[10] = "SE_DEMO_ED_C10_LAND1_JR";
  v8[11] = 0;
  v8[12] = "SE_DEMO_ED_C10_LAND2_JR";
  v8[13] = 0;
  v8[14] = "SE_DEMO_ED_C10_LAND3_JR";
  v8[15] = 0;
  v8[16] = "SE_DEMO_ED_C10_V_JR_SNATCH_PCH";
  v8[17] = 0;
  v8[18] = "SE_DEMO_ED_C10_V_KP_NOTICE_PINCH";
  v8[19] = 0;
  v8[20] = "SE_DEMO_ED_C10_KP_LAND";
  v8[21] = 0;
  v8[22] = "SE_DEMO_ED_C10_V_KP_AWAKE";
  v8[23] = 0;
  v8[24] = "SE_DEMO_ED_C10_V_KP_NOTICE";
  v8[25] = 0;
  v7[0] = "SE_DEMO_ED_C10_SHIP_PRPL";
  v7[1] = 1;
  v8[26] = "SE_DEMO_ED_C10_KP_FOOTNOTE";
  v8[27] = 0;
  v7[2] = "SE_DEMO_ED_C10_V_TESHITA";
  v7[3] = 1;
  v8[28] = "SE_DEMO_ED_C10_KP_JUMP";
  v8[29] = 0;
  v7[4] = "SE_DEMO_ED_C10_JUMP1_JR";
  v7[5] = 0;
  v8[30] = "SE_DEMO_ED_C10_KP_V_JUMP";
  v8[31] = 0;
  v7[6] = "SE_DEMO_ED_C10_JUMP2_JR";
  v7[7] = 0;
  v8[32] = "SE_DEMO_ED_C10_KP_PILLAR";
  v8[33] = 0;
  v7[8] = "SE_DEMO_ED_C10_JUMP3_JR";
  v7[9] = 0;
  v8[34] = "SE_DEMO_ED_C10_KP_JUMP2";
  v8[35] = 0;
  v7[10] = "SE_DEMO_ED_C10_LAND1_JR";
  v7[11] = 0;
  v8[36] = "SE_DEMO_ED_C10_KP_V_JUMP2";
  v8[37] = 0;
  v7[12] = "SE_DEMO_ED_C10_LAND2_JR";
  v7[13] = 0;
  v8[38] = "SE_DEMO_ED_C10_KP_CATCH_AIRSHIP";
  v8[39] = 0;
  v7[14] = "SE_DEMO_ED_C10_LAND3_JR";
  v7[15] = 0;
  v8[40] = "SE_DEMO_ED_C10_V_TESHITA_HIMEI";
  v8[41] = 0;
  v7[16] = "SE_DEMO_ED_C10_V_JR_SNATCH_PCH";
  v7[17] = 0;
  v8[42] = "SE_DEMO_ED_C20_SHIP_PRPL";
  v8[43] = 1;
  v7[18] = "SE_DEMO_ED_C10_V_KP_NOTICE_PINCH";
  v7[19] = 0;
  v7[20] = "SE_DEMO_ED_C10_KP_LAND";
  v7[21] = 0;
  v7[22] = "SE_DEMO_ED_C10_V_KP_AWAKE";
  v7[23] = 0;
  v7[24] = "SE_DEMO_ED_C10_V_KP_NOTICE";
  v7[25] = 0;
  v8[44] = "SE_DEMO_ED_C20_SHIP_CRASH";
  v8[45] = 0;
  v7[26] = "SE_DEMO_ED_C10_KP_FOOTNOTE";
  v7[27] = 0;
  v8[46] = "SE_DEMO_ED_C20_CROWN_PRPL";
  v8[47] = 1;
  v7[28] = "SE_DEMO_ED_C10_KP_JUMP";
  v7[29] = 0;
  v8[48] = "SE_DEMO_ED_C30_CROWN_PRPL";
  v8[49] = 1;
  v7[30] = "SE_DEMO_ED_C10_KP_V_JUMP";
  v7[31] = 0;
  v8[50] = "SE_DEMO_ED_C30_V_MARIO_HUM";
  v8[51] = 0;
  v7[32] = "SE_DEMO_ED_C10_KP_PILLAR";
  v7[33] = 0;
  v8[52] = "SE_DEMO_ED_C30_V_KO_L_HUM";
  v8[53] = 0;
  v7[34] = "SE_DEMO_ED_C10_KP_JUMP2";
  v7[35] = 0;
  v8[54] = "SE_DEMO_ED_C30_FIREWORKS";
  v8[55] = 0;
  v7[36] = "SE_DEMO_ED_C10_KP_V_JUMP2";
  v7[37] = 0;
  v8[56] = "SE_DEMO_ED_C30_MARIO_FN";
  v8[57] = 0;
  v7[38] = "SE_DEMO_ED_C10_KP_CATCH_AIRSHIP";
  v7[39] = 0;
  v8[58] = "SE_DEMO_ED_C30_KO_FN";
  v8[59] = 0;
  v7[40] = "SE_DEMO_ED_C10_V_TESHITA_HIMEI";
  v7[41] = 0;
  v8[60] = "SE_DEMO_ED_C30_LUIGE_FN";
  v8[61] = 0;
  v7[42] = "SE_DEMO_ED_C20_SHIP_PRPL";
  v7[43] = 1;
  v8[62] = "SE_DEMO_ED_C30_V_LUIGE_HAPPY";
  v8[63] = 0;
  v8[64] = "SE_DEMO_ED_C30_V_KO_L_HEY";
  v8[65] = 0;
  v8[66] = "SE_DEMO_ED_C30_V_PCH_TALK_TO_MARIO";
  v8[67] = 0;
  v8[68] = "SE_DEMO_ED_C30_V_MARIO_ANSWER";
  v8[69] = 0;
  v8[70] = "SE_DEMO_ED_C30_V_KO_R_GAYA01";
  v8[71] = 0;
  v8[72] = "SE_DEMO_ED_C30_V_KO_R_GAYA04";
  v8[73] = 0;
  v8[74] = "SE_DEMO_ED_C30_MARIO_FN2";
  v8[75] = 0;
  v7[44] = "SE_DEMO_ED_C20_SHIP_CRASH";
  v7[45] = 0;
  v8[76] = "SE_DEMO_ED_C30_V_MARIO_OHYEAH";
  v8[77] = 0;
  v7[46] = "SE_DEMO_ED_C20_CROWN_PRPL";
  v7[47] = 1;
  v7[48] = "SE_DEMO_ED_C30_CROWN_PRPL";
  v7[49] = 1;
  v8[78] = "SE_DEMO_ED_C30_V_MARIO_IHHI";
  v8[79] = 0;
  v8[80] = "SE_DEMO_ED_C30_KP_V_ESCAPE";
  v8[81] = 0;
  v7[50] = "SE_DEMO_ED_C30_V_MARIO_HUM";
  v7[51] = 0;
  v7[52] = "SE_DEMO_ED_C30_V_KO_L_HUM";
  v7[53] = 0;
  v7[54] = "SE_DEMO_ED_C30_FIREWORKS";
  v7[55] = 0;
  v7[56] = "SE_DEMO_ED_C30_MARIO_FN";
  v7[57] = 0;
  v7[58] = "SE_DEMO_ED_C30_KO_FN";
  v7[59] = 0;
  v7[60] = "SE_DEMO_ED_C30_LUIGE_FN";
  v7[61] = 0;
  v7[62] = "SE_RD_DEMO_ED_C30_V_LUIGE_HAPPY";
  v7[63] = 0;
  v7[64] = "SE_DEMO_ED_C30_V_KO_L_HEY";
  v7[65] = 0;
  v7[66] = "SE_DEMO_ED_C30_V_PCH_TALK_TO_MARIO";
  v7[67] = 0;
  v7[68] = "SE_DEMO_ED_C30_V_MARIO_ANSWER";
  v7[69] = 0;
  v7[70] = "SE_DEMO_ED_C30_V_KO_R_GAYA01";
  v7[71] = 0;
  v7[72] = "SE_DEMO_ED_C30_V_KO_R_GAYA04";
  v7[73] = 0;
  v7[74] = "SE_DEMO_ED_C30_MARIO_FN2";
  v7[75] = 0;
  v7[76] = "SE_RD_DEMO_ED_C30_V_MARIO_OHYEAH";
  v7[77] = 0;
  v7[78] = "SE_DEMO_ED_C30_V_MARIO_IHHI";
  v7[79] = 0;
  v7[80] = "SE_DEMO_ED_C30_KP_V_ESCAPE";
  v7[81] = 0;
  if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) != 0 )
  {
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v4 = v7;
    else
      v4 = v8;
  }
  else if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v4 = v9;
  }
  else
  {
    v4 = v10;
  }
  v5 = &v4[2 * a2];
  *a3 = *v5;
  result = v5[1];
  *a4 = result;
  return result;
}
