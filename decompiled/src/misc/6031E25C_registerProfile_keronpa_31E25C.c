/* registerProfile_keronpa_31E25C
 * address: 0x6031E25C   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_keronpa_31E25C()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60C93790 = 0;
  dword_60C93794 = 0;
  dword_60C93798 = 0;
  dword_60C9379C = 1067450368;
  dword_60C937A0 = 1067450368;
  dword_60C937A4 = 1067450368;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AC46A0;
  Profile__ctor(&stru_60C93644, Actor_keronpa_build, 0x22Cu, &v2, &stru_60AFF5AC, 18);
  *v0 = &off_60BEA6A8;
  dword_60C93660 = CurrentStateID + 1;
  dword_60C93664 = 624;
  dword_60C93668 = 1;
  dword_60C9366C = 628;
  dword_60C93670 = 1;
  dword_60C93674 = 632;
  dword_60C93678 = 1;
  dword_60C9365C = (int)&off_60BEAA10;
  dword_60C9367C = (int)&NullState;
  dword_60C9368C = 1;
  dword_60C93690 = 640;
  dword_60C93694 = 1;
  dword_60C93698 = 644;
  dword_60C9369C = 1;
  dword_60C93680 = (int)&off_60BEAA10;
  unk_60C93684 = CurrentStateID + 2;
  unk_60C93688 = 636;
  dword_60C936A0 = (int)&NullState;
  dword_60C936B0 = 1;
  dword_60C936B4 = 652;
  dword_60C936B8 = 1;
  dword_60C936BC = 656;
  dword_60C936C0 = 1;
  dword_60C936A4 = (int)&off_60BEAA10;
  *(_DWORD *)algn_60C936A8 = CurrentStateID + 3;
  *(_DWORD *)&algn_60C936A8[4] = 648;
  dword_60C936C4 = (int)&NullState;
  dword_60C936D4 = 1;
  dword_60C936D8 = 664;
  dword_60C936DC = 1;
  dword_60C936E0 = 668;
  dword_60C936E4 = 1;
  dword_60C936C8 = (int)&off_60BEAA10;
  unk_60C936CC = CurrentStateID + 4;
  unk_60C936D0 = 660;
  dword_60C936E8 = (int)&NullState;
  dword_60C936F8 = 1;
  dword_60C936FC = 676;
  dword_60C93700 = 1;
  dword_60C93704 = 680;
  dword_60C93708 = 1;
  dword_60C936EC = (int)&off_60BEAA10;
  unk_60C936F0 = CurrentStateID + 5;
  unk_60C936F4 = 672;
  dword_60C9370C = (int)&NullState;
  dword_60C9371C = 1;
  dword_60C93720 = 688;
  dword_60C93724 = 1;
  dword_60C93728 = 692;
  dword_60C9372C = 1;
  dword_60C93710 = (int)&off_60BEAA10;
  unk_60C93714 = CurrentStateID + 6;
  unk_60C93718 = 684;
  dword_60C93730 = (int)&NullState;
  dword_60C93740 = 1;
  dword_60C93744 = 448;
  dword_60C93748 = 1;
  dword_60C9374C = 452;
  dword_60C93750 = 1;
  unk_60C93734 = &off_60BEAA10;
  unk_60C93738 = CurrentStateID + 7;
  unk_60C9373C = 444;
  dword_60C93754 = (int)&NullState;
  CurrentStateID += 8;
  unk_60C9375C = CurrentStateID;
  unk_60C93760 = 456;
  dword_60C93764 = 1;
  dword_60C93768 = 460;
  dword_60C9376C = 1;
  dword_60C93770 = 464;
  dword_60C93774 = 1;
  dword_60C93758 = (int)&off_60BEAA10;
  dword_60C93778 = (int)&NullState;
  return 1;
}
