/* registerProfile_final_Bowser_fire_080750
 * address: 0x60080750   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_final_Bowser_fire_080750()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C81944 = 0;
  dword_60C81948 = 0;
  dword_60C8194C = 0;
  dword_60C81930 = (int)(float)((float)(2147500000.0 * 60.0) / 180.0);
  dword_60C81934 = (int)(float)((float)(2147500000.0 * 60.0) / 180.0);
  dword_60C81938 = (int)(float)((float)(2147500000.0 * 45.0) / 180.0);
  dword_60C8193C = (int)(float)((float)(2147500000.0 * 70.0) / 180.0);
  dword_60C81940 = (int)(float)((float)(2147500000.0 * 120.0) / 180.0);
  dword_60C8184C = CurrentStateID + 1;
  dword_60C81848 = (int)&off_60BC70FC;
  dword_60C81850 = (int)&loc_6007DD94;
  dword_60C81854 = 0;
  dword_60C81858 = (int)SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref;
  dword_60C8185C = 0;
  dword_60C81860 = (int)nullsub_2601;
  dword_60C81864 = 0;
  dword_60C8186C = CurrentStateID + 2;
  dword_60C81868 = (int)&off_60BC70FC;
  dword_60C81870 = (int)SE_BOSS_KOOPA_L_FIRE_START_ref;
  dword_60C81874 = 0;
  dword_60C81878 = (int)SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_2;
  dword_60C8187C = 0;
  dword_60C81880 = (int)nullsub_2602;
  dword_60C81884 = 0;
  dword_60C8188C = CurrentStateID + 3;
  dword_60C81888 = (int)&off_60BC70FC;
  dword_60C81890 = (int)sub_6007E1E8;
  dword_60C81894 = 0;
  dword_60C81898 = (int)sub_6007E2CC;
  dword_60C8189C = 0;
  dword_60C818A0 = (int)nullsub_2603;
  dword_60C818A4 = 0;
  dword_60C818AC = CurrentStateID + 4;
  dword_60C818A8 = (int)&off_60BC70FC;
  dword_60C818B0 = (int)sub_6007E31C;
  dword_60C818B4 = 0;
  dword_60C818B8 = (int)sub_6007E334;
  dword_60C818BC = 0;
  dword_60C818C0 = (int)nullsub_2604;
  dword_60C818C4 = 0;
  dword_60C818CC = CurrentStateID + 5;
  dword_60C818C8 = (int)&off_60BC70FC;
  dword_60C818D0 = (int)&loc_6007E374;
  dword_60C818D4 = 0;
  dword_60C818D8 = (int)SE_BOSS_KOOPA_L_FIRE_CONTINUE_ref_3;
  dword_60C818DC = 0;
  dword_60C818E0 = (int)nullsub_2605;
  dword_60C818E4 = 0;
  CurrentStateID += 6;
  dword_60C818EC = CurrentStateID;
  dword_60C818E8 = (int)&off_60BC70FC;
  dword_60C818F0 = (int)sub_6007E924;
  dword_60C818F4 = 0;
  dword_60C818F8 = (int)sub_6007E9C4;
  dword_60C818FC = 0;
  dword_60C81900 = (int)sub_6007E9E8;
  dword_60C81904 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABC020;
  Profile__ctor(&stru_60C81908, Actor_final_Bowser_fire_build, 0x2D5u, &v1, 0, 18);
  *result = &off_60BC6FCC;
  return result;
}
