/* registerProfile_pipe_3_710A38
 * address: 0x60710A38   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_pipe_3_710A38()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD8B10;
  Profile__ctor(&stru_60CBD220, Actor_pipe_3_build, 0x8Cu, &v0, &stru_60B09DC4, 0);
}
