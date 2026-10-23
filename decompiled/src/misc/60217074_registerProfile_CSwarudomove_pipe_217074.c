/* registerProfile_CSwarudomove_pipe_217074
 * address: 0x60217074   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CSwarudomove_pipe_217074()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8D2A8 = 0;
  dword_60C8D2AC = 0;
  dword_60C8D2B0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC206B;
  Profile__ctor(&stru_60C8D2B4, Actor_CSwarudomove_pipe_build, 0x363u, &v1, 0, 0);
  *result = &off_60BD9098;
  return result;
}
