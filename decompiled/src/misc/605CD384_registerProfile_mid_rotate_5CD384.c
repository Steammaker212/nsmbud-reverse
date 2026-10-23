/* registerProfile_mid_rotate_5CD384
 * address: 0x605CD384   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mid_rotate_5CD384()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2993;
  Profile__ctor(&stru_60CB0F64, Actor_mid_rotate_build, 0x28u, &v0, &stru_60B057E8, 0);
}
