/* registerProfile_koBlooper_2C5334
 * address: 0x602C5334   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_koBlooper_2C5334()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C91540 = 0;
  dword_60C91544 = 0;
  dword_60C91548 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC3A8E;
  Profile__ctor(&stru_60C9154C, Actor_koBlooper_build, 0x325u, &v1, &stru_60AFE840, 2);
  dword_60C91564 = 0x8000000;
  flt_60C91568[0] = 0.0625;
  flt_60C91568[1] = -0.024414;
  dword_60C91570 = 131072000;
  dword_60C91574 = 2147418112;
  dword_60C91578 = 0x2000000;
  dword_60C9157C = 0x80000;
  dword_60C91580 = 0x80000;
  dword_60C91588 = CurrentStateID + 1;
  dword_60C91584 = (int)&off_60BE5244;
  dword_60C9158C = (int)sub_602C3B08;
  dword_60C91590 = 0;
  dword_60C91594 = (int)nullsub_3258;
  dword_60C91598 = 0;
  dword_60C9159C = (int)nullsub_3259;
  dword_60C915A0 = 0;
  unk_60C915A4 = &off_60BE5244;
  unk_60C915A8 = CurrentStateID + 2;
  dword_60C915AC = (int)sub_602C3BE4;
  dword_60C915B0 = 0;
  dword_60C915B4 = (int)nullsub_3260;
  dword_60C915B8 = 0;
  dword_60C915BC = (int)sub_602C3BF8;
  dword_60C915C0 = 0;
  unk_60C915C4 = &off_60BE5244;
  unk_60C915C8 = CurrentStateID + 3;
  dword_60C915CC = (int)sub_602C3C08;
  dword_60C915D0 = 0;
  dword_60C915D4 = (int)sub_602C3C80;
  dword_60C915D8 = 0;
  dword_60C915DC = (int)nullsub_3261;
  dword_60C915E0 = 0;
  dword_60C915E8 = CurrentStateID + 4;
  dword_60C915EC = 456;
  dword_60C915F0 = 1;
  dword_60C915F4 = 460;
  dword_60C915F8 = 1;
  dword_60C915FC = 464;
  dword_60C91600 = 1;
  dword_60C915E4 = (int)&off_60BE5258;
  dword_60C91604 = (int)&stru_60C90710;
  CurrentStateID += 5;
  unk_60C9160C = CurrentStateID;
  unk_60C91610 = 480;
  dword_60C91614 = 1;
  dword_60C91618 = 484;
  dword_60C9161C = 1;
  dword_60C91620 = 488;
  dword_60C91624 = 1;
  dword_60C91608 = (int)&off_60BE5258;
  dword_60C91628 = (int)&stru_60C90758;
  return &stru_60C90758;
}
