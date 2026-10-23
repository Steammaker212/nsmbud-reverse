/* lift_huriko_yougan_ref
 * address: 0x6063CD38   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int lift_huriko_yougan_ref()
{
  sead__SafeString v1[5]; // [sp+14h] [bp-2Ch] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD4EF3;
  Profile__ctor(&stru_60CB55DC, Actor_lava_pendulum_Lift_RDash_build, 0x62u, v1, &stru_60B07320, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD4F0C;
  Profile__ctor(&stru_60CB55F4, Actor_lava_pendulum_Lift_RDash_build, 0x63u, v1, &stru_60B07320, 2);
  dword_60CB560C = (int)&sead__SafeStringBase__vtable;
  dword_60CB5610 = (int)"lift_huriko_yougan_S";
  dword_60CB5614 = (int)&sead__SafeStringBase__vtable;
  dword_60CB5618 = (int)"lift_huriko_yougan_ring_S";
  dword_60CB561C = -1042284544;
  dword_60CB5620 = 1086324736;
  dword_60CB5624 = 1105199104;
  dword_60CB5628 = 1086324736;
  dword_60CB562C = 1107820544;
  dword_60CB5630 = (int)&sead__SafeStringBase__vtable;
  dword_60CB5634 = (int)"lift_huriko_yougan_M";
  dword_60CB5638 = (int)&sead__SafeStringBase__vtable;
  dword_60CB563C = (int)"lift_huriko_yougan_ring_M";
  dword_60CB5640 = -1037041664;
  dword_60CB5644 = 1086324736;
  dword_60CB5648 = 1110441984;
  dword_60CB564C = 1086324736;
  unk_60CB5650 = 1112014848;
  unk_60CB5654 = &sead__SafeStringBase__vtable;
  unk_60CB5658 = "lift_huriko_yougan_L";
  dword_60CB565C = (int)&sead__SafeStringBase__vtable;
  dword_60CB5660 = (int)"lift_huriko_yougan_ring_L";
  dword_60CB5664 = -1032847360;
  dword_60CB5668 = 1086324736;
  dword_60CB566C = 1114636288;
  dword_60CB5670 = 1086324736;
  dword_60CB5674 = 1115947008;
  sub_60000288();
  unk_60CB5678 = &sead__SafeStringBase__vtable;
  unk_60CB567C = "lift_huriko_yougan_S";
  dword_60CB5680 = (int)&sead__SafeStringBase__vtable;
  dword_60CB5684 = (int)"lift_huriko_yougan_ring_S";
  dword_60CB5688 = -1042284544;
  dword_60CB568C = 1086324736;
  dword_60CB5690 = 1105199104;
  dword_60CB5694 = 1086324736;
  unk_60CB5698 = 1109393408;
  unk_60CB569C = &sead__SafeStringBase__vtable;
  unk_60CB56A0 = "lift_huriko_yougan_M";
  dword_60CB56A4 = (int)&sead__SafeStringBase__vtable;
  dword_60CB56A8 = (int)"lift_huriko_yougan_ring_M";
  dword_60CB56AC = -1037041664;
  dword_60CB56B0 = 1086324736;
  dword_60CB56B4 = 1110441984;
  dword_60CB56B8 = 1086324736;
  unk_60CB56BC = 1112014848;
  unk_60CB56C0 = &sead__SafeStringBase__vtable;
  unk_60CB56C4 = "lift_huriko_yougan_L";
  dword_60CB56C8 = (int)&sead__SafeStringBase__vtable;
  dword_60CB56CC = (int)"lift_huriko_yougan_ring_L";
  dword_60CB56D0 = -1032847360;
  dword_60CB56D4 = 1086324736;
  dword_60CB56D8 = 1114636288;
  dword_60CB56DC = 1086324736;
  dword_60CB56E0 = 1115947008;
  return sub_60000288();
}
