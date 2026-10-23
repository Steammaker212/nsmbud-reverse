/* registerProfile_akutawater_level_koin_58EC38
 * address: 0x6058EC38   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_akutawater_level_koin_58EC38()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD1F74;
  Profile__ctor(&stru_60CAF564, Actor_akutawater_level_koin_build, 0x197u, &v0, &stru_60B04C24, 8198);
}
