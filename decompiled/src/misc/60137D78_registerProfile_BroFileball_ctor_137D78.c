/* registerProfile_BroFileball_ctor_137D78
 * address: 0x60137D78   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateVirtual *registerProfile_BroFileball_ctor_137D78()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  dword_60C87868 = 0;
  dword_60C8786C = 0;
  dword_60C87870 = 0;
  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60ABEBB6;
  Profile__ctor(&stru_60C87874, BroFileball_ctor, 0x2FBu, &v1, &stru_60AF6698, 34);
  dword_60C87890 = CurrentStateID + 1;
  dword_60C87894 = 192;
  dword_60C87898 = 1;
  dword_60C8789C = 196;
  dword_60C878A0 = 1;
  dword_60C878A4 = 200;
  dword_60C878A8 = 1;
  dword_60C8788C = (int)&off_60BD25D8;
  dword_60C878AC = (int)&stru_60C877D8;
  CurrentStateID += 2;
  *(_DWORD *)algn_60C878B4 = CurrentStateID;
  *(_DWORD *)&algn_60C878B4[4] = 204;
  *(_DWORD *)&algn_60C878B4[8] = 1;
  dword_60C878C0 = 208;
  dword_60C878C4 = 1;
  dword_60C878C8 = 212;
  dword_60C878CC = 1;
  dword_60C878B0 = (int)&off_60BD25D8;
  dword_60C878D0 = (int)&stru_60C877FC;
  return &stru_60C877FC;
}
