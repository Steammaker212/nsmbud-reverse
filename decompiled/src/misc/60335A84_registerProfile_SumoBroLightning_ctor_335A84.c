/* registerProfile_SumoBroLightning_ctor_335A84
 * address: 0x60335A84   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_SumoBroLightning_ctor_335A84())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  dword_60C94094 = 0;
  dword_60C94098 = 0;
  dword_60C9409C = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC4BA7;
  Profile__ctor(&stru_60C940A0, SumoBroLightning_ctor, 0x29Du, &v2, &stru_60AFF9EC, 0);
  *v0 = &off_60BEC8EC;
  SumoBroLightning_StateID_Down._.id = CurrentStateID + 1;
  SumoBroLightning_StateID_Down._.vtable = &off_60BECA40;
  LODWORD(SumoBroLightning_StateID_Down.beginFunc) = sub_60334C70;
  HIDWORD(SumoBroLightning_StateID_Down.beginFunc) = 0;
  LODWORD(SumoBroLightning_StateID_Down.executeFunc) = SumoBroLightning_executeState_Down;
  HIDWORD(SumoBroLightning_StateID_Down.executeFunc) = 0;
  LODWORD(SumoBroLightning_StateID_Down.endFunc) = sub_60334D68;
  HIDWORD(SumoBroLightning_StateID_Down.endFunc) = 0;
  unk_60C940D8 = &off_60BECA40;
  unk_60C940DC = CurrentStateID + 2;
  dword_60C940E0 = (int)sub_60334DE0;
  dword_60C940E4 = 0;
  dword_60C940E8 = (int)SE_OBJ_KK_THUNDER_SEPARATE_ref;
  dword_60C940EC = 0;
  dword_60C940F0 = (int)nullsub_3365;
  dword_60C940F4 = 0;
  stru_60C940F8._.vtable = &off_60BECA40;
  stru_60C940F8._.id = CurrentStateID + 3;
  LODWORD(stru_60C940F8.beginFunc) = sub_60334F68;
  HIDWORD(stru_60C940F8.beginFunc) = 0;
  LODWORD(stru_60C940F8.executeFunc) = &loc_60334FDC;
  HIDWORD(stru_60C940F8.executeFunc) = 0;
  LODWORD(stru_60C940F8.endFunc) = nullsub_3366;
  HIDWORD(stru_60C940F8.endFunc) = 0;
  unk_60C94118 = &off_60BECA40;
  unk_60C9411C = CurrentStateID + 4;
  dword_60C94120 = (int)sub_60335184;
  dword_60C94124 = 0;
  dword_60C94128 = (int)nullsub_181;
  dword_60C9412C = 0;
  dword_60C94130 = (int)nullsub_182;
  dword_60C94134 = 0;
  CurrentStateID += 5;
  dword_60C9413C = CurrentStateID;
  dword_60C94138 = (int)&off_60BECA40;
  dword_60C94140 = (int)sub_603351D4;
  dword_60C94144 = 0;
  dword_60C94148 = (int)nullsub_3367;
  dword_60C9414C = 0;
  dword_60C94150 = (int)nullsub_3368;
  dword_60C94154 = 0;
  return nullsub_3368;
}
