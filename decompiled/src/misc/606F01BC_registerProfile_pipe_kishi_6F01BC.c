/* registerProfile_pipe_kishi_6F01BC
 * address: 0x606F01BC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_pipe_kishi_6F01BC()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60CBC1A4 = 0;
  dword_60CBC1A8 = 0;
  dword_60CBC1AC = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AD83C5;
  Profile__ctor(&stru_60CBC1B0, Actor_pipe_kishi_build, 0x267u, &v0, &stru_60B09310, 2);
}
