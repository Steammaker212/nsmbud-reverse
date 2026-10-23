/* registerProfile_totenPlayer_7C8DBC
 * address: 0x607C8DBC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_totenPlayer_7C8DBC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60ADC1DD;
  Profile__ctor(&stru_60CC51CC, Actor_totenPlayer_build, 0x1BBu, &v0, &stru_60B0D068, 0);
}
