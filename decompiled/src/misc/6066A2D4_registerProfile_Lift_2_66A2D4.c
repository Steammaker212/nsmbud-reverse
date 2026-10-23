/* registerProfile_Lift_2_66A2D4
 * address: 0x6066A2D4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_Lift_2_66A2D4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD5C7C;
  Profile__ctor(&stru_60CB6CA4, Actor_Lift_2_build, 0x103u, &v1, &stru_60B07A00, 2);
  dword_60CB6CC0 = ++CurrentStateID;
  dword_60CB6CBC = (int)&off_60C151F0;
  dword_60CB6CC4 = (int)nullsub_5085;
  dword_60CB6CC8 = 0;
  dword_60CB6CCC = (int)sub_60668F88;
  dword_60CB6CD0 = 0;
  dword_60CB6CD4 = (int)nullsub_5086;
  dword_60CB6CD8 = 0;
  dword_60CB6CDC = 0x800000;
  dword_60CB6CE0 = 3145728;
  dword_60CB6CE4 = 11534336;
  return &dword_60CB6CE4;
}
