/* registerProfile_guragurarock_2CA6B4
 * address: 0x602CA6B4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void registerProfile_guragurarock_2CA6B4()
{
  sead__SafeString v0; // [sp+10h] [bp-18h] BYREF

  dword_60C917A8 = 0;
  *(_DWORD *)algn_60C917AC = 0;
  *(_DWORD *)&algn_60C917AC[4] = 22;
  *(_DWORD *)&algn_60C917AC[8] = 0x10000;
  *(_DWORD *)&algn_60C917AC[12] = 0x8000000;
  *(_DWORD *)&algn_60C917AC[16] = 3276800;
  dword_60C917C0 = 1441792;
  dword_60C917C4 = 39190528;
  dword_60C917CC = CurrentStateID + 1;
  dword_60C917C8 = (int)&off_60BE59A4;
  dword_60C917D0 = (int)sub_602C9A78;
  dword_60C917D4 = 0;
  dword_60C917D8 = (int)sub_602C9A88;
  dword_60C917DC = 0;
  dword_60C917E0 = (int)nullsub_3262;
  dword_60C917E4 = 0;
  unk_60C917E8 = &off_60BE59A4;
  unk_60C917EC = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C9180C = CurrentStateID;
  dword_60C91808 = (int)&off_60BE59A4;
  dword_60C917F0 = (int)sub_602C9C40;
  dword_60C917F4 = 0;
  dword_60C91810 = (int)sub_602C9CA0;
  dword_60C91814 = 0;
  dword_60C917F8 = (int)sub_602C9C4C;
  dword_60C917FC = 0;
  dword_60C91818 = (int)nullsub_3264;
  dword_60C9181C = 0;
  dword_60C91800 = (int)nullsub_3263;
  dword_60C91804 = 0;
  dword_60C91820 = (int)nullsub_3265;
  dword_60C91824 = 0;
  v0.vtable = &sead__SafeStringBase__vtable;
  v0.cstr = (char *)&unk_60AC3B3E;
  Profile__ctor(&stru_60C91828, Actor_guragurarock_build, 0xE9u, &v0, &stru_60AFE9E0, 2);
}
