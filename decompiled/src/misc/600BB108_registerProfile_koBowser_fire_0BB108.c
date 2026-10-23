/* registerProfile_koBowser_fire_0BB108
 * address: 0x600BB108   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_koBowser_fire_0BB108()
{
  _DWORD *result; // r0
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C835F0 = 0;
  dword_60C835F4 = 0;
  dword_60C835F8 = 0;
  dword_60C83600 = CurrentStateID + 1;
  dword_60C83604 = 316;
  dword_60C83608 = 1;
  dword_60C8360C = 320;
  dword_60C83610 = 1;
  dword_60C83614 = 324;
  dword_60C83618 = 1;
  dword_60C835FC = (int)&off_60BC9BAC;
  dword_60C8361C = (int)&NullState;
  dword_60C8362C = 1;
  dword_60C83630 = 332;
  dword_60C83634 = 1;
  dword_60C83638 = 336;
  dword_60C8363C = 1;
  unk_60C83620 = &off_60BC9BAC;
  unk_60C83624 = CurrentStateID + 2;
  unk_60C83628 = 328;
  dword_60C83640 = (int)&NullState;
  dword_60C83650 = 1;
  dword_60C83654 = 344;
  dword_60C83658 = 1;
  dword_60C8365C = 348;
  dword_60C83660 = 1;
  unk_60C83644 = &off_60BC9BAC;
  unk_60C83648 = CurrentStateID + 3;
  unk_60C8364C = 340;
  dword_60C83664 = (int)&NullState;
  CurrentStateID += 4;
  dword_60C83674 = 1;
  dword_60C83678 = 356;
  dword_60C8367C = 1;
  dword_60C83680 = 360;
  dword_60C83684 = 1;
  unk_60C83668 = &off_60BC9BAC;
  unk_60C8366C = CurrentStateID;
  unk_60C83670 = 352;
  dword_60C83688 = (int)&NullState;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABCC32;
  Profile__ctor(&stru_60C8368C, Actor_koBowser_fire_build, 0x2B7u, &v1, &stru_60AF5838, 18);
  *result = &off_60BC99C4;
  return result;
}
