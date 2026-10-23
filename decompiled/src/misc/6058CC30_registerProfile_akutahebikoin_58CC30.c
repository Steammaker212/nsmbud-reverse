/* registerProfile_akutahebikoin_58CC30
 * address: 0x6058CC30   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_akutahebikoin_58CC30()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD1E99;
  Profile__ctor(&stru_60CAF428, Actor_akutahebikoin_build, 0x1A2u, &v1, &stru_60B04B70, 8198);
  dword_60CAF440 = 0x4000000;
  return &dword_60CAF440;
}
