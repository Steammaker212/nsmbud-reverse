/* registerProfile_ringu_2_618884
 * address: 0x60618884   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ringu_2_618884()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD3B06;
  Profile__ctor(&stru_60CB33AC, Actor_ringu_2_build, 0x2F0u, &v0, &stru_60B0661C, 2);
}
