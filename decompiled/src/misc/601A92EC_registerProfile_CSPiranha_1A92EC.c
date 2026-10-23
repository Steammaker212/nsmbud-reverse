/* registerProfile_CSPiranha_1A92EC
 * address: 0x601A92EC   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_CSPiranha_1A92EC()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-18h] BYREF

  dword_60C8A504 = 0;
  dword_60C8A508 = 0;
  dword_60C8A50C = 0;
  dword_60C8A500 = (int)(float)((float)(2147500000.0 * -90.0) / 180.0);
  dword_60C8A510 = 1098907648;
  dword_60C8A514 = 0;
  dword_60C8A518 = 1110966272;
  dword_60C8A51C = 0;
  dword_60C8A3C4 = (int)&sead__SafeStringBase__vtable;
  *(_DWORD *)algn_60C8A3C8 = "dokan_attack";
  *(_DWORD *)&algn_60C8A3C8[4] = &sead__SafeStringBase__vtable;
  dword_60C8A3D0 = (int)"dead_ice";
  sub_60000288();
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60ABFC3D;
  Profile__ctor(&stru_60C8A3D4, Actor_CSPiranha_build, 0x376u, &v2, 0, 0);
  *v0 = &off_60BD6280;
  dword_60C8A3F0 = CurrentStateID + 1;
  dword_60C8A3EC = (int)&off_60BD6348;
  dword_60C8A3F4 = (int)sub_601A975C;
  dword_60C8A3F8 = 0;
  dword_60C8A3FC = (int)sub_601A9770;
  dword_60C8A400 = 0;
  dword_60C8A404 = (int)sub_601A9798;
  dword_60C8A408 = 0;
  unk_60C8A40C = &off_60BD6348;
  unk_60C8A410 = CurrentStateID + 2;
  dword_60C8A414 = (int)sub_601A97A4;
  dword_60C8A418 = 0;
  dword_60C8A41C = (int)sub_601A97C8;
  dword_60C8A420 = 0;
  dword_60C8A424 = (int)nullsub_2946;
  dword_60C8A428 = 0;
  unk_60C8A42C = &off_60BD6348;
  unk_60C8A430 = CurrentStateID + 3;
  dword_60C8A434 = (int)sub_601A9830;
  dword_60C8A438 = 0;
  dword_60C8A43C = (int)sub_601A983C;
  dword_60C8A440 = 0;
  dword_60C8A444 = (int)nullsub_2947;
  dword_60C8A448 = 0;
  unk_60C8A44C = &off_60BD6348;
  unk_60C8A450 = CurrentStateID + 4;
  dword_60C8A454 = (int)sub_601A9868;
  dword_60C8A458 = 0;
  dword_60C8A45C = (int)sub_601A9890;
  dword_60C8A460 = 0;
  dword_60C8A464 = (int)nullsub_2948;
  dword_60C8A468 = 0;
  dword_60C8A46C = (int)&off_60BD6348;
  unk_60C8A470 = CurrentStateID + 5;
  dword_60C8A474 = (int)sub_601A98EC;
  dword_60C8A478 = 0;
  dword_60C8A47C = (int)sub_601A993C;
  dword_60C8A480 = 0;
  dword_60C8A484 = (int)nullsub_2949;
  dword_60C8A488 = 0;
  unk_60C8A48C = &off_60BD6348;
  unk_60C8A490 = CurrentStateID + 6;
  dword_60C8A494 = (int)nullsub_2950;
  dword_60C8A498 = 0;
  dword_60C8A49C = (int)sub_601A9950;
  dword_60C8A4A0 = 0;
  dword_60C8A4A4 = (int)nullsub_2951;
  dword_60C8A4A8 = 0;
  dword_60C8A4AC = (int)&off_60BD6348;
  unk_60C8A4B0 = CurrentStateID + 7;
  CurrentStateID += 8;
  dword_60C8A4D0 = CurrentStateID;
  dword_60C8A4B4 = (int)sub_601A9AD4;
  dword_60C8A4CC = (int)&off_60BD6348;
  dword_60C8A4B8 = 0;
  dword_60C8A4D4 = (int)sub_601A9BD0;
  dword_60C8A4BC = (int)sub_601A9AF4;
  dword_60C8A4D8 = 0;
  dword_60C8A4C0 = 0;
  dword_60C8A4DC = (int)sub_601A9BF8;
  dword_60C8A4C4 = (int)nullsub_2952;
  dword_60C8A4C8 = 0;
  dword_60C8A4E0 = 0;
  dword_60C8A4E4 = (int)nullsub_2953;
  dword_60C8A4E8 = 0;
  return &dword_60C8A4CC;
}
