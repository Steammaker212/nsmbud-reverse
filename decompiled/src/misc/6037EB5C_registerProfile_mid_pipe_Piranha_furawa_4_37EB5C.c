/* registerProfile_mid_pipe_Piranha_furawa_4_37EB5C
 * address: 0x6037EB5C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_mid_pipe_Piranha_furawa_4_37EB5C()
{
  sead__SafeString v0; // [sp+10h] [bp-10h] BYREF

  dword_60C9693C = 0;
  dword_60C96940 = 0;
  dword_60C96944 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC5674;
  Profile__ctor(&stru_60C96948, Actor_mid_pipe_Piranha_furawa_4_build, 0x307u, &v0, &stru_60B00730, 18);
}
