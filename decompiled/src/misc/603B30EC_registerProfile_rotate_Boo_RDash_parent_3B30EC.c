/* registerProfile_rotate_Boo_RDash_parent_3B30EC
 * address: 0x603B30EC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_Boo_RDash_parent_3B30EC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5B11;
  Profile__ctor(&stru_60C97DD0, Actor_rotate_Boo_RDash_parent_build, 0x311u, &v0, &stru_60B00B8C, 0);
}
