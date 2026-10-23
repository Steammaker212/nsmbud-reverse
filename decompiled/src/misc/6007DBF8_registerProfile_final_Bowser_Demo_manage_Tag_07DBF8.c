/* registerProfile_final_Bowser_Demo_manage_Tag_07DBF8
 * address: 0x6007DBF8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_final_Bowser_Demo_manage_Tag_07DBF8()
{
  sead__SafeString v1; // [sp+10h] [bp-18h] BYREF

  dword_60C817B8 = 0;
  dword_60C817BC = 0;
  dword_60C817C0 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABBFEB;
  Profile__ctor(&stru_60C817C4, Actor_final_Bowser_Demo_manage_Tag_build, 0x2B4u, &v1, &stru_60AF54E4, 0);
  dword_60C817E0 = CurrentStateID + 1;
  dword_60C817E4 = 192;
  dword_60C817E8 = 1;
  dword_60C817EC = 196;
  dword_60C817F0 = 1;
  dword_60C817F4 = 200;
  dword_60C817F8 = 1;
  dword_60C817DC = (int)&off_60BC6FB8;
  dword_60C817FC = (int)&dword_60C7F67C;
  unk_60C81804 = CurrentStateID + 2;
  unk_60C81808 = 204;
  dword_60C8180C = 1;
  dword_60C81810 = 208;
  dword_60C81814 = 1;
  dword_60C81818 = 212;
  dword_60C8181C = 1;
  dword_60C81800 = (int)&off_60BC6FB8;
  dword_60C81820 = (int)&unk_60C7F6A0;
  CurrentStateID += 3;
  *(_DWORD *)algn_60C81828 = CurrentStateID;
  *(_DWORD *)&algn_60C81828[4] = 228;
  dword_60C81830 = 1;
  dword_60C81834 = 232;
  dword_60C81838 = 1;
  dword_60C8183C = 236;
  dword_60C81840 = 1;
  dword_60C81824 = (int)&off_60BC6FB8;
  dword_60C81844 = (int)&dword_60C7F6E8;
  return &dword_60C7F6E8;
}
