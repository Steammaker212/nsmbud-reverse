/* registerProfile_Flag_Switch_4Switch_OR_605E20
 * address: 0x60605E20   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Flag_Switch_4Switch_OR_605E20()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD34BC;
  Profile__ctor(&stru_60CB2A38, Actor_Flag_Switch_4Switch_OR_build, 2u, &v1, &stru_60B062D0, 0);
  dword_60CB2A54 = ++CurrentStateID;
  dword_60CB2A50 = (int)&off_60C0F484;
  dword_60CB2A58 = (int)nullsub_4856;
  dword_60CB2A5C = 0;
  dword_60CB2A60 = (int)sub_60605BC4;
  dword_60CB2A64 = 0;
  dword_60CB2A68 = (int)nullsub_4857;
  dword_60CB2A6C = 0;
  return &dword_60CB2A50;
}
