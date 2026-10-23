/* registerProfile_akutafreeze_koin_57F748
 * address: 0x6057F748   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutafreeze_koin_57F748()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクター冷凍コイン";
  Profile__ctor(&stru_60CAEF64, Actor_akutafreeze_koin_build, 0x18Du, &v1, &stru_60B048CC, 8198);
  dword_60CAEF80 = ++CurrentStateID;
  dword_60CAEF7C = (int)&off_60C053F4;
  dword_60CAEF84 = (int)nullsub_4650;
  dword_60CAEF88 = 0;
  dword_60CAEF8C = (int)sub_6057EFE8;
  dword_60CAEF90 = 0;
  dword_60CAEF94 = (int)nullsub_4651;
  dword_60CAEF98 = 0;
  return &dword_60CAEF7C;
}
