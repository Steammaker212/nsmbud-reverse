/* registerProfile_ZN3AmpC3EPK14ActorBuildI_259D74
 * address: 0x60259D74   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_ZN3AmpC3EPK14ActorBuildI_259D74()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C8E05C = 0;
  dword_60C8E060 = 0;
  dword_60C8E064 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC2915;
  Profile__ctor(&stru_60C8E068, Amp__ctor, 0x300u, &v1, &stru_60AFD86C, 0);
  dword_60C8E084 = CurrentStateID + 1;
  dword_60C8E080 = (int)&off_60BDAEA8;
  dword_60C8E088 = (int)body_wait_ref;
  dword_60C8E08C = 0;
  dword_60C8E090 = (int)&loc_60258428;
  dword_60C8E094 = 0;
  dword_60C8E098 = (int)nullsub_3102;
  dword_60C8E09C = 0;
  unk_60C8E0A0 = &off_60BDAEA8;
  unk_60C8E0A4 = CurrentStateID + 2;
  dword_60C8E0A8 = (int)body_stop_ref;
  dword_60C8E0AC = 0;
  dword_60C8E0B0 = (int)&loc_60258518;
  dword_60C8E0B4 = 0;
  dword_60C8E0B8 = (int)nullsub_3103;
  dword_60C8E0BC = 0;
  dword_60C8E0C0 = (int)&off_60BDAEA8;
  *(_DWORD *)algn_60C8E0C4 = CurrentStateID + 3;
  dword_60C8E0C8 = (int)body_wait_ref_2585C0;
  dword_60C8E0CC = 0;
  dword_60C8E0D0 = (int)sub_602586D8;
  dword_60C8E0D4 = 0;
  dword_60C8E0D8 = (int)sub_60258730;
  dword_60C8E0DC = 0;
  CurrentStateID += 4;
  dword_60C8E0E4 = CurrentStateID;
  dword_60C8E0E8 = 456;
  dword_60C8E0EC = 1;
  dword_60C8E0F0 = 460;
  dword_60C8E0F4 = 1;
  dword_60C8E0F8 = 464;
  dword_60C8E0FC = 1;
  dword_60C8E0E0 = (int)&off_60BDAEBC;
  dword_60C8E100 = (int)&stru_60C90710;
  return &stru_60C90710;
}
