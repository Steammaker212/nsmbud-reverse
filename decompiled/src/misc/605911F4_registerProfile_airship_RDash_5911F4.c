/* registerProfile_airship_RDash_5911F4
 * address: 0x605911F4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_airship_RDash_5911F4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD1FE7;
  Profile__ctor(&stru_60CAF6D4, Actor_airship_RDash_build, 0x10Cu, &v0, &stru_60B04C6C, 2);
}
