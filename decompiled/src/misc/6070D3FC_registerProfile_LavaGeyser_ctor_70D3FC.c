/* registerProfile_LavaGeyser_ctor_70D3FC
 * address: 0x6070D3FC   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int registerProfile_LavaGeyser_ctor_70D3FC()
{
  _DWORD *v0; // r0
  sead__SafeString v2; // [sp+10h] [bp-20h] BYREF

  dword_60CBCA5C = 0;
  dword_60CBCA60 = 0;
  dword_60CBCA64 = 0;
  v2.vtable = &sead__SafeStringBase__vtable;
  v2.cstr = (char *)&unk_60AD88DE;
  Profile__ctor(&stru_60CBCA68, LavaGeyser_ctor, 0x80u, &v2, &stru_60B09C5C, 2);
  *v0 = &off_60C2137C;
  dword_60CBCA84 = CurrentStateID + 1;
  dword_60CBCA88 = 676;
  dword_60CBCA8C = 1;
  dword_60CBCA90 = 680;
  dword_60CBCA94 = 1;
  dword_60CBCA98 = 684;
  dword_60CBCA9C = 1;
  dword_60CBCA80 = (int)&off_60C21688;
  dword_60CBCAA0 = (int)&NullState;
  dword_60CBCAB0 = 1;
  dword_60CBCAB4 = 692;
  dword_60CBCAB8 = 1;
  dword_60CBCABC = 696;
  dword_60CBCAC0 = 1;
  unk_60CBCAA4 = &off_60C21688;
  unk_60CBCAA8 = CurrentStateID + 2;
  unk_60CBCAAC = 688;
  dword_60CBCAC4 = (int)&NullState;
  dword_60CBCAD4 = 1;
  dword_60CBCAD8 = 704;
  dword_60CBCADC = 1;
  dword_60CBCAE0 = 708;
  dword_60CBCAE4 = 1;
  unk_60CBCAC8 = &off_60C21688;
  unk_60CBCACC = CurrentStateID + 3;
  unk_60CBCAD0 = 700;
  dword_60CBCAE8 = (int)&NullState;
  dword_60CBCAF8 = 1;
  dword_60CBCAFC = 716;
  dword_60CBCB00 = 1;
  dword_60CBCB04 = 720;
  dword_60CBCB08 = 1;
  unk_60CBCAEC = &off_60C21688;
  unk_60CBCAF0 = CurrentStateID + 4;
  unk_60CBCAF4 = 712;
  dword_60CBCB0C = (int)&NullState;
  dword_60CBCB1C = 1;
  dword_60CBCB20 = 728;
  dword_60CBCB24 = 1;
  dword_60CBCB28 = 732;
  dword_60CBCB2C = 1;
  unk_60CBCB10 = &off_60C21688;
  unk_60CBCB14 = CurrentStateID + 5;
  unk_60CBCB18 = 724;
  dword_60CBCB30 = (int)&NullState;
  dword_60CBCB40 = 1;
  dword_60CBCB44 = 740;
  dword_60CBCB48 = 1;
  dword_60CBCB4C = 744;
  dword_60CBCB50 = 1;
  unk_60CBCB34 = &off_60C21688;
  unk_60CBCB38 = CurrentStateID + 6;
  unk_60CBCB3C = 736;
  dword_60CBCB54 = (int)&NullState;
  CurrentStateID += 7;
  unk_60CBCB5C = CurrentStateID;
  unk_60CBCB60 = 748;
  dword_60CBCB64 = 1;
  dword_60CBCB68 = 752;
  dword_60CBCB6C = 1;
  dword_60CBCB70 = 756;
  dword_60CBCB74 = 1;
  dword_60CBCB58 = (int)&off_60C21688;
  dword_60CBCB78 = (int)&NullState;
  return 1;
}
