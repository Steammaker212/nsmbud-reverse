/* registerProfile_Flag_Switch_ONFlag_604EF4
 * address: 0x60604EF4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Flag_Switch_ONFlag_604EF4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD33C7;
  Profile__ctor(&stru_60CB2958, Actor_Flag_Switch_ONFlag_build, 8u, &v1, &stru_60B06264, 0);
  dword_60CB2974 = ++CurrentStateID;
  dword_60CB2970 = (int)&off_60C0F060;
  dword_60CB2978 = (int)nullsub_4853;
  dword_60CB297C = 0;
  dword_60CB2980 = (int)sub_60604AA8;
  dword_60CB2984 = 0;
  dword_60CB2988 = (int)nullsub_4854;
  dword_60CB298C = 0;
  return &dword_60CB2970;
}
