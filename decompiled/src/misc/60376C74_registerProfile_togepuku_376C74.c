/* registerProfile_togepuku_376C74
 * address: 0x60376C74   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_togepuku_376C74()
{
  sead__SafeString v1; // [sp+10h] [bp-20h] BYREF

  dword_60C96468 = 0;
  dword_60C9646C = 0;
  dword_60C96470 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AC5502;
  Profile__ctor(&stru_60C96348, Actor_togepuku_build, 0x21Bu, &v1, &stru_60B00580, 18);
  dword_60C96364 = CurrentStateID + 1;
  dword_60C96368 = 652;
  dword_60C9636C = 1;
  dword_60C96370 = 656;
  dword_60C96374 = 1;
  dword_60C96378 = 660;
  dword_60C9637C = 1;
  dword_60C96360 = (int)&off_60BF12B0;
  dword_60C96380 = (int)&dword_60C96224;
  dword_60C96390 = 1;
  dword_60C96394 = 692;
  dword_60C96398 = 1;
  dword_60C9639C = 696;
  dword_60C963A0 = 1;
  unk_60C96384 = &off_60BF12B0;
  unk_60C96388 = CurrentStateID + 2;
  unk_60C9638C = 688;
  dword_60C963A4 = (int)&dword_60C96290;
  dword_60C963B0 = 676;
  dword_60C963B4 = 1;
  dword_60C963B8 = 680;
  dword_60C963BC = 1;
  dword_60C963C0 = 684;
  dword_60C963C4 = 1;
  unk_60C963A8 = &off_60BF12B0;
  unk_60C963AC = CurrentStateID + 3;
  dword_60C963C8 = (int)&dword_60C9626C;
  dword_60C963D0 = CurrentStateID + 4;
  dword_60C963CC = (int)&off_60BF12C4;
  dword_60C963D4 = (int)sub_60375874;
  dword_60C963D8 = 0;
  dword_60C963DC = (int)&loc_603758A8;
  dword_60C963E0 = 0;
  dword_60C963E4 = (int)nullsub_3441;
  dword_60C963E8 = 0;
  dword_60C963F0 = CurrentStateID + 5;
  dword_60C963F4 = 612;
  dword_60C963F8 = 1;
  dword_60C963FC = 616;
  dword_60C96400 = 1;
  dword_60C96404 = 620;
  dword_60C96408 = 1;
  dword_60C963EC = (int)&off_60BF12B0;
  dword_60C9640C = (int)&Enemy_StateId_Frozen;
  dword_60C96410 = (int)&off_60BF12C4;
  *(_DWORD *)algn_60C96414 = CurrentStateID + 6;
  dword_60C96418 = (int)sub_60375B08;
  dword_60C9641C = 0;
  dword_60C96420 = (int)&loc_60375B30;
  dword_60C96424 = 0;
  dword_60C96428 = (int)nullsub_3442;
  dword_60C9642C = 0;
  CurrentStateID += 7;
  unk_60C96434 = CurrentStateID;
  unk_60C96438 = 456;
  dword_60C9643C = 1;
  dword_60C96440 = 460;
  dword_60C96444 = 1;
  dword_60C96448 = 464;
  dword_60C9644C = 1;
  dword_60C96430 = (int)&off_60BF12B0;
  dword_60C96450 = (int)&dword_60C962B4;
  unk_60C96460 = 0x4780000046100000LL;
  return 1175453696;
}
