/* registerProfile_gorogoro_2C7BEC
 * address: 0x602C7BEC   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_gorogoro_2C7BEC()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C9170C = 0;
  dword_60C91710 = 0;
  dword_60C91714 = 0;
  unk_60C91708 = (int)(float)((float)(2147500000.0 * 40.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC3A9E;
  Profile__ctor(&stru_60C9162C, Actor_gorogoro_build, 0x232u, &v2, &stru_60AFE898, 2);
  *v0 = &off_60BE526C;
  dword_60C91648 = CurrentStateID + 1;
  dword_60C9164C = 676;
  dword_60C91650 = 1;
  dword_60C91654 = 680;
  dword_60C91658 = 1;
  dword_60C9165C = 684;
  dword_60C91660 = 1;
  dword_60C91644 = (int)&off_60BE5590;
  dword_60C91664 = (int)&NullState;
  dword_60C91674 = 1;
  dword_60C91678 = 628;
  dword_60C9167C = 1;
  dword_60C91680 = 632;
  dword_60C91684 = 1;
  dword_60C91668 = (int)&off_60BE5590;
  unk_60C9166C = CurrentStateID + 2;
  unk_60C91670 = 624;
  dword_60C91688 = (int)&NullState;
  dword_60C91698 = 1;
  dword_60C9169C = 692;
  dword_60C916A0 = 1;
  dword_60C916A4 = 696;
  dword_60C916A8 = 1;
  unk_60C9168C = &off_60BE5590;
  unk_60C91690 = CurrentStateID + 3;
  unk_60C91694 = 688;
  dword_60C916AC = (int)&NullState;
  dword_60C916BC = 1;
  dword_60C916C0 = 704;
  dword_60C916C4 = 1;
  dword_60C916C8 = 708;
  dword_60C916CC = 1;
  unk_60C916B0 = &off_60BE5590;
  unk_60C916B4 = CurrentStateID + 4;
  unk_60C916B8 = 700;
  dword_60C916D0 = (int)&NullState;
  CurrentStateID += 5;
  *(_DWORD *)algn_60C916D8 = CurrentStateID;
  *(_DWORD *)&algn_60C916D8[4] = 712;
  dword_60C916E0 = 1;
  dword_60C916E4 = 716;
  dword_60C916E8 = 1;
  dword_60C916EC = 720;
  dword_60C916F0 = 1;
  dword_60C916D4 = (int)&off_60BE5590;
  dword_60C916F4 = (int)&NullState;
  return 1;
}
