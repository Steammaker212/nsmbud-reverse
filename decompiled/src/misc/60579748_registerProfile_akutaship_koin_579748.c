/* registerProfile_akutaship_koin_579748
 * address: 0x60579748   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutaship_koin_579748()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60CAED10 = 0;
  dword_60CAED14 = 0;
  dword_60CAED18 = 0;
  dword_60CAED28 = 0;
  dword_60CAED24 = 0;
  dword_60CAED20 = 0;
  dword_60CAED1C = 0;
  dword_60CAED2C = -1056964608;
  unk_60CAED30 = 1094713344;
  unk_60CAED34 = 1090519040;
  unk_60CAED38 = -1069547520;
  unk_60CAED3C = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = "アクター風船コイン";
  Profile__ctor(&stru_60CAECC4, Actor_akutaship_koin_build, 0x1A4u, &v1, &stru_60B0476C, 8198);
  dword_60CAECE0 = ++CurrentStateID;
  dword_60CAECDC = (int)&off_60C04A58;
  dword_60CAECE4 = (int)sub_60578EB4;
  dword_60CAECE8 = 0;
  dword_60CAECEC = (int)sub_60578FB8;
  dword_60CAECF0 = 0;
  dword_60CAECF4 = (int)nullsub_235;
  dword_60CAECF8 = 0;
  return &dword_60CAECDC;
}
