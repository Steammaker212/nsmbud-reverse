/* registerProfile_mid_pipe_faiyaPiranha_37CB18
 * address: 0x6037CB18   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_mid_pipe_faiyaPiranha_37CB18()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C967B4 = 0;
  dword_60C967B8 = 0;
  dword_60C967BC = 0;
  dword_60C96794 = -1073741824;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC559E;
  Profile__ctor(&stru_60C966B4, Actor_mid_pipe_faiyaPiranha_build, 0x306u, &v1, &stru_60B006A0, 18);
  dword_60C966D0 = CurrentStateID + 1;
  dword_60C966CC = (int)&off_60BF2038;
  dword_60C966D4 = (int)sub_6037B694;
  dword_60C966D8 = 0;
  dword_60C966DC = (int)sub_6037B6A0;
  dword_60C966E0 = 0;
  dword_60C966E4 = (int)nullsub_3458;
  dword_60C966E8 = 0;
  dword_60C966F0 = CurrentStateID + 2;
  dword_60C966F4 = 628;
  dword_60C966F8 = 1;
  dword_60C966FC = 632;
  dword_60C96700 = 1;
  dword_60C96704 = 636;
  dword_60C96708 = 1;
  dword_60C966EC = (int)&off_60BF204C;
  dword_60C9670C = (int)&dword_60C8FCC8;
  dword_60C9671C = 1;
  dword_60C96720 = 644;
  dword_60C96724 = 1;
  dword_60C96728 = 648;
  dword_60C9672C = 1;
  dword_60C96710 = (int)&off_60BF204C;
  unk_60C96714 = CurrentStateID + 3;
  unk_60C96718 = 640;
  dword_60C96730 = (int)&dword_60C8FCEC;
  dword_60C9673C = 664;
  dword_60C96740 = 1;
  dword_60C96744 = 668;
  dword_60C96748 = 1;
  dword_60C9674C = 672;
  dword_60C96750 = 1;
  dword_60C96734 = (int)&off_60BF204C;
  unk_60C96738 = CurrentStateID + 4;
  dword_60C96754 = (int)&dword_60C8FD34;
  CurrentStateID += 5;
  unk_60C9675C = CurrentStateID;
  unk_60C96760 = 612;
  dword_60C96764 = 1;
  dword_60C96768 = 616;
  dword_60C9676C = 1;
  dword_60C96770 = 620;
  dword_60C96774 = 1;
  dword_60C96758 = (int)&off_60BF204C;
  dword_60C96778 = (int)&Enemy_StateId_Frozen;
  return &Enemy_StateId_Frozen;
}
