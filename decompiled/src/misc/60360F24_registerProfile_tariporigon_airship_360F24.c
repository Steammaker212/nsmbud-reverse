/* registerProfile_tariporigon_airship_360F24
 * address: 0x60360F24   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_tariporigon_airship_360F24()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC513D;
  Profile__ctor(&stru_60C957AC, Actor_tariporigon_airship_build, 0x3Au, &v0, &stru_60B00170, 2);
}
