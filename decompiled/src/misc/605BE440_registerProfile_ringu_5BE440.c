/* registerProfile_ringu_5BE440
 * address: 0x605BE440   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_ringu_5BE440()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD25E3;
  Profile__ctor(&stru_60CB0874, Actor_ringu_build, 0x2F2u, &v0, &stru_60B05564, 2);
}
