/* registerProfile_chibiyoshi_StaffRoll_749E7C
 * address: 0x60749E7C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateBase *registerProfile_chibiyoshi_StaffRoll_749E7C()
{
  sead__SafeString v1; // [sp+10h] [bp-10h] BYREF

  v1.vtable = &sead__SafeStringBase__vtable;
  v1.cstr = (char *)&unk_60AD9C22;
  Profile__ctor(&stru_60CBE788, Actor_chibiyoshi_StaffRoll_build, 0x349u, &v1, 0, 0);
  dword_60CBE7A4 = CurrentStateID + 1;
  dword_60CBE7A0 = (int)&off_60C237E8;
  dword_60CBE7A8 = (int)sub_607496E0;
  dword_60CBE7AC = 0;
  dword_60CBE7B0 = (int)sub_60749710;
  dword_60CBE7B4 = 0;
  dword_60CBE7B8 = (int)sub_60749740;
  dword_60CBE7BC = 0;
  CurrentStateID += 2;
  dword_60CBE7C4 = CurrentStateID;
  dword_60CBE7C8 = 184;
  dword_60CBE7CC = 1;
  dword_60CBE7D0 = 188;
  dword_60CBE7D4 = 1;
  dword_60CBE7D8 = 192;
  dword_60CBE7DC = 1;
  dword_60CBE7C0 = (int)&off_60C237FC;
  dword_60CBE7E0 = (int)&stru_60CBE73C;
  return &stru_60CBE73C;
}
