/* registerProfile_neshiku_6A5398
 * address: 0x606A5398   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_neshiku_6A5398()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7044;
  Profile__ctor(&stru_60CB9AD8, Actor_neshiku_build, 0xB0u, &v0, &stru_60B08468, 2);
}
