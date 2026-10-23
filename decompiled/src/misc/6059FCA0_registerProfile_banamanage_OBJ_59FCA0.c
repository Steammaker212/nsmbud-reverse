/* registerProfile_banamanage_OBJ_59FCA0
 * address: 0x6059FCA0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_banamanage_OBJ_59FCA0()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = "同期バーナー管理OBJ";
  Profile__ctor(&stru_60CAFCF8, Actor_banamanage_OBJ_build, 0x14u, &v0, &stru_60B04E30, 0);
}
