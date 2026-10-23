/* registerProfile_RDash55exclusive_moai_692124
 * address: 0x60692124   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_RDash55exclusive_moai_692124()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD6950;
  Profile__ctor(&stru_60CB9010, Actor_RDash55exclusive_moai_build, 0xACu, &v1, &stru_60B07EC0, 2);
  dword_60CB902C = CurrentStateID + 1;
  dword_60CB9028 = (int)&off_60C17A84;
  dword_60CB9030 = (int)nullsub_5153;
  dword_60CB9034 = 0;
  dword_60CB9038 = (int)nullsub_5154;
  dword_60CB903C = 0;
  dword_60CB9040 = (int)nullsub_5155;
  dword_60CB9044 = 0;
  dword_60CB904C = CurrentStateID + 2;
  dword_60CB9048 = (int)&off_60C17A84;
  dword_60CB9050 = (int)sub_606911FC;
  dword_60CB9054 = 0;
  dword_60CB9058 = (int)sub_6069120C;
  dword_60CB905C = 0;
  dword_60CB9060 = (int)nullsub_5156;
  dword_60CB9064 = 0;
  dword_60CB906C = CurrentStateID + 3;
  dword_60CB9068 = (int)&off_60C17A84;
  dword_60CB9070 = (int)sub_60691248;
  dword_60CB9074 = 0;
  dword_60CB9078 = (int)SE_OBJ_ICICLE_L_SIGN_ref_2;
  dword_60CB907C = 0;
  dword_60CB9080 = (int)sub_606913E0;
  dword_60CB9084 = 0;
  dword_60CB908C = CurrentStateID + 4;
  dword_60CB9088 = (int)&off_60C17A84;
  dword_60CB9090 = (int)sub_606913FC;
  dword_60CB9094 = 0;
  dword_60CB9098 = (int)sub_60691454;
  dword_60CB909C = 0;
  dword_60CB90A0 = (int)nullsub_5157;
  dword_60CB90A4 = 0;
  CurrentStateID += 5;
  dword_60CB90AC = CurrentStateID;
  dword_60CB90A8 = (int)&off_60C17A84;
  dword_60CB90B0 = (int)SE_OBJ_IWAHEM_SHOCK_ref_2;
  dword_60CB90B4 = 0;
  dword_60CB90B8 = (int)nullsub_5158;
  dword_60CB90BC = 0;
  dword_60CB90C0 = (int)nullsub_5159;
  dword_60CB90C4 = 0;
  return 0;
}
