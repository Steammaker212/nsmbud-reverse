/* registerProfile_Lift_child_RDash_67FA18
 * address: 0x6067FA18   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Lift_child_RDash_67FA18()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD63BF;
  Profile__ctor(&stru_60CB8014, Actor_Lift_child_RDash_build, 0xBAu, &v1, &stru_60B07D18, 2);
  dword_60CB8030 = CurrentStateID + 1;
  dword_60CB802C = (int)&off_60C169E8;
  dword_60CB8034 = (int)nullsub_5128;
  dword_60CB8038 = 0;
  dword_60CB803C = (int)sub_6067F55C;
  dword_60CB8040 = 0;
  dword_60CB8044 = (int)nullsub_263;
  dword_60CB8048 = 0;
  CurrentStateID += 2;
  dword_60CB8050 = CurrentStateID;
  dword_60CB8054 = 192;
  dword_60CB8058 = 1;
  dword_60CB805C = 196;
  dword_60CB8060 = 1;
  dword_60CB8064 = 200;
  dword_60CB8068 = 1;
  dword_60CB804C = (int)&off_60C169FC;
  dword_60CB806C = (int)&dword_60CB7F2C;
  return &dword_60CB7F2C;
}
