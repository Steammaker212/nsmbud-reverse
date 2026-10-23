/* registerProfile_pipe_jointo_5F78D8
 * address: 0x605F78D8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_pipe_jointo_5F78D8()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD2FFF;
  Profile__ctor(&stru_60CB239C, Actor_pipe_jointo_build, 0x341u, &v0, &stru_60B05F18, 2);
}
