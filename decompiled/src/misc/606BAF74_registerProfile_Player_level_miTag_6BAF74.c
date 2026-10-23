/* registerProfile_Player_level_miTag_6BAF74
 * address: 0x606BAF74   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_Player_level_miTag_6BAF74()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7727;
  Profile__ctor(&stru_60CBA588, Actor_Player_level_miTag_build, 0x348u, &v0, &stru_60B087F8, 0);
}
