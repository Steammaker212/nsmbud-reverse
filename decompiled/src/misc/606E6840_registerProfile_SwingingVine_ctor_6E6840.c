/* registerProfile_SwingingVine_ctor_6E6840
 * address: 0x606E6840   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_SwingingVine_ctor_6E6840()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD81D6;
  Profile__ctor(&stru_60CBBF88, SwingingVine_ctor, 0xEEu, &v0, &stru_60B091B4, 2);
}
