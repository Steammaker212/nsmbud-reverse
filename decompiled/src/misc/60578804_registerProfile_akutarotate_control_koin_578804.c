/* registerProfile_akutarotate_control_koin_578804
 * address: 0x60578804   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutarotate_control_koin_578804()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクター回転制御コイン";
  Profile__ctor(&stru_60CAEC64, Actor_akutarotate_control_koin_build, 0x195u, &v1, &stru_60B04724, 8196);
  dword_60CAEC80 = ++CurrentStateID;
  dword_60CAEC7C = (int)&off_60C0472C;
  dword_60CAEC84 = (int)nullsub_4639;
  dword_60CAEC88 = 0;
  dword_60CAEC8C = (int)sub_60577E9C;
  dword_60CAEC90 = 0;
  dword_60CAEC94 = (int)nullsub_4640;
  dword_60CAEC98 = 0;
  return &dword_60CAEC7C;
}
