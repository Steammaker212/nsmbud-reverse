/* registerProfile_spawn_Tag_6E48B4
 * address: 0x606E48B4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_spawn_Tag_6E48B4()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD81A3;
  Profile__ctor(&stru_60CBBF38, Actor_spawn_Tag_build, 0x31Au, &v0, &stru_60B09148, 0);
}
