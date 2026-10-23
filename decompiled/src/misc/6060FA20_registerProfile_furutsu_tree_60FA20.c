/* registerProfile_furutsu_tree_60FA20
 * address: 0x6060FA20   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_furutsu_tree_60FA20()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD38B1;
  Profile__ctor(&stru_60CB3030, Actor_furutsu_tree_build, 0x2F5u, &v0, &stru_60B0647C, 0);
}
