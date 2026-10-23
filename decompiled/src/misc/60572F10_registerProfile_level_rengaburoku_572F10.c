/* registerProfile_level_rengaburoku_572F10
 * address: 0x60572F10   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_level_rengaburoku_572F10()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD18AF;
  Profile__ctor(&stru_60CAEA08, Actor_level_rengaburoku_build, 0x134u, &v0, &stru_60B04550, 4098);
}
