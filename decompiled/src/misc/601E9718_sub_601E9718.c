/* sub_601E9718
 * address: 0x601E9718   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E9718()
{
  char v0; // r12
  int v1; // r6
  char v2; // r12
  int v3; // r8
  int v4; // r4
  int v5; // r7
  int v6; // r0
  bool v7; // zf
  int v8; // r6
  char v9; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r7
  _DWORD v12[30]; // [sp+10h] [bp-78h] BYREF

  v12[0] = 0;
  memset(&v12[2], 0, 72);
  sub_601905DC(v12);
  v12[0] = 51;
  v12[1] = sub_601916C8(dword_60C8996C, 51);
  if ( ((unsigned int)&dword_60C8B1A0 & ~(1612617584 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B1A0) )
  {
    dword_60C8B1D0 = 871;
    dword_60C8B1D4 = 872;
    dword_60C8B1D8 = 873;
    dword_60C8B1DC = 874;
    dword_60C8B1E0 = 875;
    dword_60C8B1E4 = 876;
    dword_60C8B1E8 = 877;
    _cxa_guard_release(&dword_60C8B1A0);
  }
  v12[4] = *(_DWORD *)(*(_DWORD *)sub_601693A0(dword_60C8B1D0) + 8);
  v12[5] = *(_DWORD *)(*(_DWORD *)sub_601693A0(dword_60C8B1D4) + 8);
  v12[6] = *(_DWORD *)(*(_DWORD *)sub_601693A0(dword_60C8B1D8) + 8);
  v12[7] = *(_DWORD *)(*(_DWORD *)sub_601693A0(dword_60C8B1DC) + 8);
  v12[8] = *(_DWORD *)(*(_DWORD *)sub_601693A0(dword_60C8B1E0) + 8);
  v12[9] = *(_DWORD *)(*(_DWORD *)sub_601693A0(dword_60C8B1E4) + 8);
  v12[10] = *(_DWORD *)(*(_DWORD *)sub_601693A0(dword_60C8B1E8) + 8);
  v1 = sub_601693A0(885);
  v3 = 9;
  v4 = FIELD_U32(ActorMgr__instance, 27180);
  while ( 1 )
  {
    v5 = *(_DWORD *)v1;
    if ( ((unsigned int)&dword_60C88AA0 & ~(1612618004 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
    {
      dword_60C88A9C = (int)&off_60BD4BB0;
      _cxa_guard_release(&dword_60C88AA0);
    }
    if ( v5 )
    {
      v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C88A9C);
      v7 = v6 == 1;
      if ( v6 == 1 )
        v7 = FIELD_U32(v5, 240) == 0;
      if ( v7 )
        break;
    }
    if ( v1 != v4 )
    {
      v1 = sub_601693C0(885, v1 + 4);
      if ( v1 != v4 )
        continue;
    }
    goto LABEL_16;
  }
  v3 = 10;
  v12[11] = *(_DWORD *)(*(_DWORD *)v1 + 8);
LABEL_16:
  v8 = sub_601693A0(884);
  while ( 1 )
  {
    v10 = *(int (__fastcall ****)(_DWORD, int *))v8;
    if ( ((unsigned int)&dword_60C88AA0 & ~(1612618240 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
    {
      dword_60C88A9C = (int)&off_60BD4BB0;
      _cxa_guard_release(&dword_60C88AA0);
    }
    if ( v10 && (**v10)(v10, &dword_60C88A9C) == 1 )
      break;
    if ( v8 != v4 )
    {
      v8 = sub_601693C0(884, v8 + 4);
      if ( v8 != v4 )
        continue;
    }
    return sub_60191160((_DWORD *)dword_60C8996C, v12);
  }
  v12[v3 + 2] = *(_DWORD *)(*(_DWORD *)v8 + 8);
  return sub_60191160((_DWORD *)dword_60C8996C, v12);
}
