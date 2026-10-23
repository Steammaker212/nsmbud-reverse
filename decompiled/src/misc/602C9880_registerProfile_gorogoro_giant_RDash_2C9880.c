/* registerProfile_gorogoro_giant_RDash_2C9880
 * address: 0x602C9880   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_gorogoro_giant_RDash_2C9880()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r0
  sead__SafeString v3[4]; // [sp+10h] [bp-20h] BYREF

  dword_60C9179C = 0;
  dword_60C917A0 = 0;
  dword_60C917A4 = 0;
  dword_60C91798 = (int)(float)((float)(2147500000.0 * 40.0) / 180.0);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  v3[0].cstr = (char *)&unk_60AC3AD2;
  Profile__ctor(&stru_60C91718, Actor_gorogoro_giant_RDash_build, 0x233u, v3, &stru_60AFE93C, 2);
  v3[0].vtable = &sead__SafeStringBase__vtable;
  *v0 = &off_60BE55A4;
  v3[0].cstr = (char *)&unk_60AC3AEB;
  Profile__ctor(&stru_60C91730, Actor_gorogoro_giant_RDash_build, 0x234u, v3, &stru_60AFE93C, 2);
  *v1 = &off_60BE55B0;
  dword_60C9174C = CurrentStateID + 1;
  dword_60C91750 = 624;
  dword_60C91754 = 1;
  dword_60C91758 = 628;
  dword_60C9175C = 1;
  dword_60C91760 = 632;
  dword_60C91764 = 1;
  dword_60C91748 = (int)&off_60BE58C4;
  dword_60C91768 = (int)&dword_60CBBFB8;
  CurrentStateID += 2;
  *(_DWORD *)algn_60C91770 = CurrentStateID;
  *(_DWORD *)&algn_60C91770[4] = 456;
  *(_DWORD *)&algn_60C91770[8] = 1;
  *(_DWORD *)&algn_60C91770[12] = 460;
  dword_60C91780 = 1;
  dword_60C91784 = 464;
  dword_60C91788 = 1;
  dword_60C9176C = (int)&off_60BE58C4;
  dword_60C9178C = (int)&stru_60C90710;
  return &stru_60C90710;
}
