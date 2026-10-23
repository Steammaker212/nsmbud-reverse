/* registerProfile_raito_5EDDB0
 * address: 0x605EDDB0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_raito_5EDDB0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2CC8;
  Profile__ctor(&stru_60CB1E0C, Actor_raito_build, 0x31Fu, &v0, &stru_60B05C58, 2);
}
