/* registerProfile_Flag_Switch_Switch_60495C
 * address: 0x6060495C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Flag_Switch_Switch_60495C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD339F;
  Profile__ctor(&stru_60CB2918, Actor_Flag_Switch_Switch_build, 4u, &v1, &stru_60B06240, 0);
  dword_60CB2934 = ++CurrentStateID;
  dword_60CB2930 = (int)&off_60C0EF80;
  dword_60CB2938 = (int)nullsub_4851;
  dword_60CB293C = 0;
  dword_60CB2940 = (int)sub_606044F8;
  dword_60CB2944 = 0;
  dword_60CB2948 = (int)nullsub_4852;
  dword_60CB294C = 0;
  return &dword_60CB2930;
}
