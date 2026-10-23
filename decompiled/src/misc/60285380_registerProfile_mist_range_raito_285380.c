/* registerProfile_mist_range_raito_285380
 * address: 0x60285380   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_mist_range_raito_285380()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8F108 = 0;
  dword_60C8F10C = 0;
  dword_60C8F110 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2E66;
  Profile__ctor(&stru_60C8F0E4, Actor_mist_range_raito_build, 0x316u, &v1, &stru_60AFDE18, 0);
  unk_60C8F100 = 0x64FFFFFAFAFFFFLL;
  return -84213761;
}
