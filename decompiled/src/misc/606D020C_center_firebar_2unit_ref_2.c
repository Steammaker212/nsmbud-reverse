/* center_firebar_2unit_ref_2
 * address: 0x606D020C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int center_firebar_2unit_ref_2()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60CBB470 = 0;
  dword_60CBB474 = 0;
  dword_60CBB478 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD7D62;
  Profile__ctor(&stru_60CBB440, Actor_mid_faiaba_build, 0x17Au, &v1, &stru_60B08C74, 2);
  dword_60CBB47C = -1056964608;
  dword_60CBB480 = 1090519040;
  dword_60CBB484 = 1090519040;
  dword_60CBB488 = -1056964608;
  dword_60CBB48C = -1048576000;
  dword_60CBB490 = 1090519040;
  dword_60CBB494 = 1098907648;
  dword_60CBB498 = -1056964608;
  dword_60CBB458 = (int)&sead__SafeStringBase__vtable;
  unk_60CBB45C = "center_firebar";
  unk_60CBB460 = &sead__SafeStringBase__vtable;
  dword_60CBB464 = (int)"center_firebar_2unit";
  return sub_60000288();
}
