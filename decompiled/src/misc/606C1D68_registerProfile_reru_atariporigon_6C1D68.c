/* registerProfile_reru_atariporigon_6C1D68
 * address: 0x606C1D68   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_reru_atariporigon_6C1D68()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7870;
  Profile__ctor(&stru_60CBA94C, Actor_reru_atariporigon_build, 0x64u, &v0, &stru_60B089A0, 2);
}
