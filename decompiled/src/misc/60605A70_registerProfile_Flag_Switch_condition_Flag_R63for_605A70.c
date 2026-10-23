/* registerProfile_Flag_Switch_condition_Flag_R63for_605A70
 * address: 0x60605A70   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Flag_Switch_condition_Flag_R63for_605A70()
{
  sead__SafeString v0[3]; // [sp+10h] [bp-18h] BYREF

  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD342F;
  Profile__ctor(&stru_60CB29D8, Actor_Flag_Switch_condition_Flag_R63for_build, 5u, v0, &stru_60B062AC, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD3454;
  Profile__ctor(&stru_60CB29F0, Actor_Flag_Switch_condition_Flag_R63for_2_build, 6u, v0, &stru_60B062AC, 0);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD348B;
  Profile__ctor(&stru_60CB2A08, Actor_Flag_Switch_condition_Flag_R63for_3_build, 7u, v0, &stru_60B062AC, 0);
}
