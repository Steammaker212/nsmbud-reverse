/* registerProfile_airship_590A40
 * address: 0x60590A40   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_airship_590A40()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD1FAF;
  Profile__ctor(&stru_60CAF67C, Actor_airship_build, 0x10Au, &v0, &stru_60B04C48, 2);
}
