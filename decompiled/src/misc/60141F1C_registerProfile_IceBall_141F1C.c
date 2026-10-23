/* registerProfile_IceBall_141F1C
 * address: 0x60141F1C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *registerProfile_IceBall_141F1C()
{
  _DWORD *v0; // r0
  int v1; // r4
  sead__SafeString v3; // [sp+10h] [bp-18h] BYREF

  v3.vtable = &sead__SafeStringBase__vtable;
  v3.cstr = (char *)&unk_60ABED43;
  Profile__ctor(&stru_60C87D48, Actor_IceBall_build, 0x1DAu, &v3, &stru_60AF68F4, 130);
  *v0 = &off_60BD3434;
  dword_60C87D64 = CurrentStateID + 1;
  dword_60C87D68 = 192;
  dword_60C87D6C = 1;
  dword_60C87D70 = 196;
  dword_60C87D74 = 1;
  dword_60C87D78 = 200;
  dword_60C87D7C = 1;
  dword_60C87D60 = (int)&off_60BD3580;
  dword_60C87D80 = (int)&dword_60C87DC8;
  v1 = CurrentStateID + 2;
  CurrentStateID += 3;
  dword_60C87D88 = v1;
  dword_60C87D84 = (int)&off_60BD3594;
  dword_60C87D8C = (int)sub_60140A94;
  dword_60C87D90 = 0;
  dword_60C87D94 = (int)sub_60140BA8;
  dword_60C87D98 = 0;
  dword_60C87D9C = (int)nullsub_2870;
  dword_60C87DA0 = 0;
  *(_DWORD *)algn_60C87DA8 = CurrentStateID;
  *(_DWORD *)&algn_60C87DA8[4] = 204;
  dword_60C87DB0 = 1;
  dword_60C87DB4 = 208;
  dword_60C87DB8 = 1;
  dword_60C87DBC = 212;
  dword_60C87DC0 = 1;
  dword_60C87DA4 = (int)&off_60BD3580;
  dword_60C87DC4 = (int)&dword_60C87DEC;
  return &dword_60C87DEC;
}
