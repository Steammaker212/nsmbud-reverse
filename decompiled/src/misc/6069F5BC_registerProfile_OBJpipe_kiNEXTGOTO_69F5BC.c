/* registerProfile_OBJpipe_kiNEXTGOTO_69F5BC
 * address: 0x6069F5BC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_OBJpipe_kiNEXTGOTO_69F5BC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD6E37;
  Profile__ctor(&stru_60CB97F4, Actor_OBJpipe_kiNEXTGOTO_build, 0x86u, &v0, &stru_60B081A4, 2);
}
