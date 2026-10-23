/* registerProfile_CSgeyser_218834
 * address: 0x60218834   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_CSgeyser_218834()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C8D314 = 0;
  dword_60C8D318 = 0;
  dword_60C8D31C = 0;
  dword_60C8D324 = CurrentStateID + 1;
  dword_60C8D328 = 92;
  dword_60C8D32C = 1;
  dword_60C8D330 = 96;
  dword_60C8D334 = 1;
  dword_60C8D338 = 100;
  dword_60C8D33C = 1;
  dword_60C8D320 = (int)&off_60BD91BC;
  dword_60C8D340 = (int)&NullState;
  dword_60C8D350 = 1;
  dword_60C8D354 = 108;
  dword_60C8D358 = 1;
  dword_60C8D35C = 112;
  dword_60C8D360 = 1;
  stru_60C8D344.vtable = &off_60BD91BC;
  stru_60C8D344.id = CurrentStateID + 2;
  unk_60C8D34C = 104;
  dword_60C8D364 = (int)&NullState;
  dword_60C8D374 = 1;
  dword_60C8D378 = 120;
  dword_60C8D37C = 1;
  dword_60C8D380 = 124;
  dword_60C8D384 = 1;
  stru_60C8D368.vtable = &off_60BD91BC;
  stru_60C8D368.id = CurrentStateID + 3;
  unk_60C8D370 = 116;
  dword_60C8D388 = (int)&NullState;
  CurrentStateID += 4;
  dword_60C8D398 = 1;
  dword_60C8D39C = 132;
  dword_60C8D3A0 = 1;
  dword_60C8D3A4 = 136;
  dword_60C8D3A8 = 1;
  stru_60C8D38C.vtable = &off_60BD91BC;
  stru_60C8D38C.id = CurrentStateID;
  unk_60C8D394 = 128;
  dword_60C8D3AC = (int)&NullState;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC20C3;
  Profile__ctor(&stru_60C8D3B0, Actor_CSgeyser_build, 0x37Eu, &v1, 0, 0);
  *result = &off_60BD911C;
  return result;
}
