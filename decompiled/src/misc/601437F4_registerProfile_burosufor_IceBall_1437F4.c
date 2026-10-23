/* registerProfile_burosufor_IceBall_1437F4
 * address: 0x601437F4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_burosufor_IceBall_1437F4()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABED56;
  Profile__ctor(&stru_60C87E58, Actor_burosufor_IceBall_build, 0x2FDu, &v1, &stru_60AF6968, 34);
  dword_60C87E74 = CurrentStateID + 1;
  dword_60C87E78 = 192;
  dword_60C87E7C = 1;
  dword_60C87E80 = 196;
  dword_60C87E84 = 1;
  dword_60C87E88 = 200;
  dword_60C87E8C = 1;
  dword_60C87E70 = (int)&off_60BD3898;
  dword_60C87E90 = (int)&dword_60C87DC8;
  CurrentStateID += 2;
  unk_60C87E98 = CurrentStateID;
  unk_60C87E9C = 204;
  unk_60C87EA0 = 1;
  dword_60C87EA4 = 208;
  dword_60C87EA8 = 1;
  dword_60C87EAC = 212;
  dword_60C87EB0 = 1;
  dword_60C87E94 = (int)&off_60BD3898;
  dword_60C87EB4 = (int)&dword_60C87DEC;
  return &dword_60C87DEC;
}
