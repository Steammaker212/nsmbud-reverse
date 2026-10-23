/* registerProfile_rotate_pipe_RDash_6D31CC
 * address: 0x606D31CC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_rotate_pipe_RDash_6D31CC()
{
  sead__SafeString v0[4]; // [sp+10h] [bp-20h] BYREF

  dword_60CBB574 = 0;
  dword_60CBB578 = 0;
  dword_60CBB57C = 0;
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD7DB3;
  Profile__ctor(&stru_60CBB580, Actor_rotate_pipe_RDash_build, 0x8Fu, v0, &stru_60B08CF0, 2);
  v0[0].vtable = &sead__SafeStringBase__vtable;
  v0[0].cstr = (char *)&unk_60AD7DC0;
  Profile__ctor(&stru_60CBB598, Actor_rotate_pipe_RDash_build, 0x90u, v0, &stru_60B08D14, 2);
}
