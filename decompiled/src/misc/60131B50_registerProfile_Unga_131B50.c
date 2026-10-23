/* registerProfile_Unga_131B50
 * address: 0x60131B50   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*registerProfile_Unga_131B50())()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-10h] BYREF

  unk_60C87570 = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  dword_60C87574 = (int)(float)((float)(2147500000.0 * -30.0) / 180.0);
  dword_60C87578 = (int)(float)(2147500000.0 / 180.0);
  unk_60C8757C = (int)(float)((float)(2147500000.0 * 15.0) / 180.0);
  unk_60C87580 = (int)(float)((float)(2147500000.0 * 0.25) / 180.0);
  dword_60C87584 = (int)(float)((float)(2147500000.0 * 0.5) / 180.0);
  dword_60C87588 = (int)(float)((float)(2147500000.0 * 3.0) / 180.0);
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABE9CF;
  Profile__ctor(&stru_60C87478, Actor_Unga_build, 0x2C2u, &v2, 0, 0);
  *v0 = &off_60BD1D54;
  dword_60C87494 = CurrentStateID + 1;
  dword_60C87490 = (int)&off_60BD1E88;
  dword_60C87498 = (int)sub_6012F32C;
  dword_60C8749C = 0;
  dword_60C874A0 = (int)sub_6012F33C;
  dword_60C874A4 = 0;
  dword_60C874A8 = (int)nullsub_2852;
  dword_60C874AC = 0;
  unk_60C874B0 = &off_60BD1E88;
  unk_60C874B4 = CurrentStateID + 2;
  dword_60C874B8 = (int)SE_BOSS_WOOGAN_YOKAN_ref;
  dword_60C874BC = 0;
  dword_60C874C0 = (int)&loc_6012F464;
  dword_60C874C4 = 0;
  dword_60C874C8 = (int)nullsub_2853;
  dword_60C874CC = 0;
  unk_60C874D0 = &off_60BD1E88;
  unk_60C874D4 = CurrentStateID + 3;
  dword_60C874D8 = (int)sub_6012FBF4;
  dword_60C874DC = 0;
  dword_60C874E0 = (int)sub_6012FDFC;
  dword_60C874E4 = 0;
  dword_60C874E8 = (int)nullsub_2854;
  dword_60C874EC = 0;
  unk_60C874F0 = &off_60BD1E88;
  unk_60C874F4 = CurrentStateID + 4;
  dword_60C874F8 = (int)sub_6012FEF4;
  dword_60C874FC = 0;
  dword_60C87500 = (int)sub_60130024;
  dword_60C87504 = 0;
  dword_60C87508 = (int)nullsub_2855;
  dword_60C8750C = 0;
  unk_60C87510 = &off_60BD1E88;
  unk_60C87514 = CurrentStateID + 5;
  dword_60C87518 = (int)sub_601300E0;
  dword_60C8751C = 0;
  dword_60C87520 = (int)sub_601301C4;
  dword_60C87524 = 0;
  dword_60C87528 = (int)nullsub_2856;
  dword_60C8752C = 0;
  dword_60C87530 = (int)&off_60BD1E88;
  *(_DWORD *)algn_60C87534 = CurrentStateID + 6;
  dword_60C87538 = (int)sub_60130538;
  dword_60C8753C = 0;
  dword_60C87540 = (int)sub_601305CC;
  dword_60C87544 = 0;
  dword_60C87548 = (int)nullsub_2857;
  dword_60C8754C = 0;
  CurrentStateID += 7;
  dword_60C87554 = CurrentStateID;
  dword_60C87550 = (int)&off_60BD1E88;
  dword_60C87558 = (int)sub_60130694;
  dword_60C8755C = 0;
  dword_60C87560 = (int)sub_601306CC;
  dword_60C87564 = 0;
  dword_60C87568 = (int)nullsub_147;
  dword_60C8756C = 0;
  return nullsub_147;
}
