/* registerProfile_wanwan_RDash_3DD140
 * address: 0x603DD140   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_wanwan_RDash_3DD140()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC6195;
  Profile__ctor(&stru_60C99300, Actor_wanwan_RDash_build, 0x16Fu, &v0, &stru_60B0139C, 2);
}
