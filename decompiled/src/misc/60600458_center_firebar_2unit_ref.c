/* center_firebar_2unit_ref
 * address: 0x60600458   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int center_firebar_2unit_ref()
{
  sead__SafeString v1[4]; // [sp+10h] [bp-20h] BYREF

  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD32FE;
  Profile__ctor(&stru_60CB27B4, Actor_faiaba_build, 0x177u, v1, &stru_60B0617C, 2);
  v1[0].vtable = &sead__SafeStringBase__vtable;
  v1[0].cstr = (char *)&unk_60AD3314;
  Profile__ctor(&stru_60CB27CC, Actor_faiaba_build, 0x178u, v1, &stru_60B061A0, 2);
  dword_60CB27E8 = ++CurrentStateID;
  dword_60CB27EC = 196;
  dword_60CB27F0 = 1;
  dword_60CB27F4 = 200;
  dword_60CB27F8 = 1;
  dword_60CB27FC = 204;
  dword_60CB2800 = 1;
  dword_60CB27E4 = (int)&off_60C0EAB4;
  dword_60CB2804 = (int)&dword_60CB28AC;
  unk_60CB2808 = -1056964608;
  unk_60CB280C = 1090519040;
  dword_60CB2810 = 1090519040;
  dword_60CB2814 = -1056964608;
  dword_60CB2818 = -1048576000;
  dword_60CB281C = 1090519040;
  dword_60CB2820 = 1098907648;
  dword_60CB2824 = -1056964608;
  dword_60CB2828[0] = (int)&sead__SafeStringBase__vtable;
  unk_60CB282C = "center_firebar";
  unk_60CB2830 = &sead__SafeStringBase__vtable;
  dword_60CB2834 = (int)"center_firebar_2unit";
  return sub_60000288();
}
