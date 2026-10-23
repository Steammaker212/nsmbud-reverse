/* registerProfile_akutarotate_control_for_koin_58B0C4
 * address: 0x6058B0C4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutarotate_control_for_koin_58B0C4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクター回転制御用コイン";
  Profile__ctor(&stru_60CAF358, Actor_akutarotate_control_for_koin_build, 0x19Du, &v1, &stru_60B04B04, 8198);
  dword_60CAF374 = ++CurrentStateID;
  dword_60CAF370 = (int)&off_60C0661C;
  dword_60CAF378 = (int)nullsub_4667;
  dword_60CAF37C = 0;
  dword_60CAF380 = (int)nullsub_4668;
  dword_60CAF384 = 0;
  dword_60CAF388 = (int)nullsub_4669;
  dword_60CAF38C = 0;
  return &dword_60CAF370;
}
