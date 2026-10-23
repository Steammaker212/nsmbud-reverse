/* registerProfile_pipe_4_710B4C
 * address: 0x60710B4C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_pipe_4_710B4C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD8B22;
  Profile__ctor(&stru_60CBD238, Actor_pipe_4_build, 0x8Bu, &v0, &stru_60B09DFC, 0);
}
