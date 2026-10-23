/* registerProfile_ZN15SpinyUpsideDownC3EPK_37AA1C
 * address: 0x6037AA1C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *registerProfile_ZN15SpinyUpsideDownC3EPK_37AA1C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C965B8 = 0;
  dword_60C965BC = 0;
  dword_60C965C0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5559;
  Profile__ctor(&stru_60C965C4, SpinyUpsideDown__ctor, 0x206u, &v1, &stru_60B0062C, 530);
  dword_60C965E0 = CurrentStateID + 1;
  dword_60C965DC = (int)&off_60BF17A8;
  dword_60C965E4 = (int)sub_60379C1C;
  dword_60C965E8 = 0;
  dword_60C965EC = (int)&loc_60379D04;
  dword_60C965F0 = 0;
  dword_60C965F4 = (int)nullsub_3456;
  dword_60C965F8 = 0;
  dword_60C96600 = CurrentStateID + 2;
  dword_60C965FC = (int)&off_60BF17A8;
  dword_60C96604 = (int)sub_60379E28;
  dword_60C96608 = 0;
  dword_60C9660C = (int)sub_60379E48;
  dword_60C96610 = 0;
  dword_60C96614 = (int)nullsub_3457;
  dword_60C96618 = 0;
  CurrentStateID += 3;
  dword_60C96620 = CurrentStateID;
  dword_60C96624 = 784;
  dword_60C96628 = 1;
  dword_60C9662C = 788;
  dword_60C96630 = 1;
  dword_60C96634 = 792;
  dword_60C96638 = 1;
  dword_60C9661C = (int)&off_60BF17BC;
  dword_60C9663C = (int)&ShellEnemy_StateID_slide;
  dword_60C96640[0] = -1610612736;
  unk_60C96644 = 1610612736;
  return dword_60C96640;
}
