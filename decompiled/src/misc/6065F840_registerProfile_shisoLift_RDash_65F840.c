/* registerProfile_shisoLift_RDash_65F840
 * address: 0x6065F840   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_shisoLift_RDash_65F840()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD59ED;
  Profile__ctor(&stru_60CB6828, Actor_shisoLift_RDash_build, 0xDCu, v1, &stru_60B07824, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD5A03;
  Profile__ctor(&stru_60CB6840, Actor_shisoLift_RDash_build, 0xDDu, v1, &stru_60B07824, 2);
  dword_60CB685C = ++CurrentStateID;
  dword_60CB6858 = (int)&off_60C14B18;
  dword_60CB6860 = (int)sub_6065E6C0;
  dword_60CB6864 = 0;
  dword_60CB6868 = (int)sub_6065E6D8;
  dword_60CB686C = 0;
  dword_60CB6870 = (int)nullsub_257;
  dword_60CB6874 = 0;
  return &dword_60CB6858;
}
