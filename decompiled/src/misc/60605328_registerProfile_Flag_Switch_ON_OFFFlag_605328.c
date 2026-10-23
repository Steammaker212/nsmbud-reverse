/* registerProfile_Flag_Switch_ON_OFFFlag_605328
 * address: 0x60605328   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Flag_Switch_ON_OFFFlag_605328()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD33F2;
  Profile__ctor(&stru_60CB2998, Actor_Flag_Switch_ON_OFFFlag_build, 9u, &v1, &stru_60B06288, 0);
  dword_60CB29B4 = ++CurrentStateID;
  dword_60CB29B0 = (int)&off_60C0F140;
  dword_60CB29B8 = (int)sub_6060501C;
  dword_60CB29BC = 0;
  dword_60CB29C0 = (int)sub_6060503C;
  dword_60CB29C4 = 0;
  dword_60CB29C8 = (int)nullsub_4855;
  dword_60CB29CC = 0;
  return &dword_60CB29B0;
}
