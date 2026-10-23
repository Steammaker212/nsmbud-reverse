/* registerProfile_reruefekutospawn_buroku_6C06DC
 * address: 0x606C06DC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_reruefekutospawn_buroku_6C06DC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD7814;
  Profile__ctor(&stru_60CBA8CC, Actor_reruefekutospawn_buroku_build, 0x14Cu, &v0, &stru_60B08958, 4098);
}
