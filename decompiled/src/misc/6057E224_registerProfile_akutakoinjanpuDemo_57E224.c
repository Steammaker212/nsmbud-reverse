/* registerProfile_akutakoinjanpuDemo_57E224
 * address: 0x6057E224   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutakoinjanpuDemo_57E224()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクターコインジャンプデモ";
  Profile__ctor(&stru_60CAEEC8, Actor_akutakoinjanpuDemo_build, 0x18Fu, &v1, &stru_60B04860, 2);
  dword_60CAEEE4 = ++CurrentStateID;
  dword_60CAEEE0 = (int)&off_60C04FC8;
  dword_60CAEEE8 = (int)nullsub_4648;
  dword_60CAEEEC = 0;
  dword_60CAEEF0 = (int)sub_6057DD8C;
  dword_60CAEEF4 = 0;
  dword_60CAEEF8 = (int)nullsub_4649;
  dword_60CAEEFC = 0;
  return &dword_60CAEEE0;
}
