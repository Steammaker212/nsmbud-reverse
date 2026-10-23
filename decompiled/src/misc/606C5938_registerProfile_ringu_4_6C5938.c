/* registerProfile_ringu_4_6C5938
 * address: 0x606C5938   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ringu_4_6C5938()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7942;
  Profile__ctor(&stru_60CBABC0, Actor_ringu_4_build, 0x2EFu, &v0, &stru_60B08A64, 2);
}
