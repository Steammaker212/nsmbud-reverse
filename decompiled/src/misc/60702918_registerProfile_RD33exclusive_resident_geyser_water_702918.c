/* registerProfile_RD33exclusive_resident_geyser_water_702918
 * address: 0x60702918   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_RD33exclusive_resident_geyser_water_702918()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD85FB;
  Profile__ctor(&stru_60CBC694, Actor_RD33exclusive_resident_geyser_water_build, 0x7Du, &v1, &stru_60B09678, 2);
  dword_60CBC6B0 = CurrentStateID + 1;
  dword_60CBC6B4 = 212;
  dword_60CBC6B8 = 1;
  dword_60CBC6BC = 216;
  dword_60CBC6C0 = 1;
  dword_60CBC6C4 = 220;
  dword_60CBC6C8 = 1;
  dword_60CBC6AC = (int)&off_60C20B84;
  dword_60CBC6CC = (int)&stru_60CBC398;
  stru_60CBC6D0.id = CurrentStateID + 2;
  unk_60CBC6D8 = 224;
  dword_60CBC6DC = 1;
  dword_60CBC6E0 = 228;
  dword_60CBC6E4 = 1;
  dword_60CBC6E8 = 232;
  dword_60CBC6EC = 1;
  stru_60CBC6D0.vtable = &off_60C20B84;
  dword_60CBC6F0 = (int)&unk_60CBC3BC;
  *(_DWORD *)algn_60CBC6F8 = CurrentStateID + 3;
  *(_DWORD *)&algn_60CBC6F8[4] = 236;
  dword_60CBC700 = 1;
  dword_60CBC704 = 240;
  dword_60CBC708 = 1;
  dword_60CBC70C = 244;
  dword_60CBC710 = 1;
  dword_60CBC6F4 = (int)&off_60C20B84;
  dword_60CBC714 = (int)&stru_60CBC3E0;
  unk_60CBC71C = CurrentStateID + 4;
  unk_60CBC720 = 248;
  dword_60CBC724 = 1;
  dword_60CBC728 = 252;
  dword_60CBC72C = 1;
  dword_60CBC730 = 256;
  dword_60CBC734 = 1;
  dword_60CBC718 = (int)&off_60C20B84;
  dword_60CBC738 = (int)&dword_60CBC404;
  CurrentStateID += 5;
  unk_60CBC740 = CurrentStateID;
  unk_60CBC744 = 260;
  dword_60CBC748 = 1;
  dword_60CBC74C = 264;
  dword_60CBC750 = 1;
  dword_60CBC754 = 268;
  dword_60CBC758 = 1;
  dword_60CBC73C = (int)&off_60C20B84;
  dword_60CBC75C = (int)&dword_60CBC428;
  return &dword_60CBC428;
}
