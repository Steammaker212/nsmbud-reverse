/* registerProfile_pipe_jointomame_5F7F20
 * address: 0x605F7F20   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_pipe_jointomame_5F7F20()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD301B;
  Profile__ctor(&stru_60CB23BC, Actor_pipe_jointomame_build, 0x342u, &v0, &stru_60B05F3C, 2);
}
