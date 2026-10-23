/* sub_60036DD0
 * address: 0x60036DD0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60036DD0(int a1)
{
  float v2; // r5
  float v3; // r7
  int (__fastcall ***v4)(_DWORD, int *); // r5
  _BYTE *v5; // r6
  char v6; // r12
  int v7; // r0
  ActorBuildInfo v9; // [sp+0h] [bp-48h] BYREF

  v2 = FIELD_F32(a1, 7160);
  v3 = FIELD_F32(a1, 7156);
  memset(&v9, 0, sizeof(v9));
  v9.profile = Profile__get(0x33Au);
  v9.parentId = FIELD_U32(a1, 8);
  v9.position.x = v3;
  v9.position.y = v2;
  v4 = 0;
  v9.position.z = 1564.0;
  v9.field_1C = FIELD_U32(a1, 160);
  v9.field_20 = 0;
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v9, 0);
  if ( ((unsigned int)&dword_60C80050 & ~(1610837612 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80050) )
  {
    dword_60C8004C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C80050);
  }
  if ( v5 )
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))(**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C8004C);
    if ( v4 )
      v4 = (int (__fastcall ***)(_DWORD, int *))v5;
  }
  FIELD_U32(a1, 7244) = v4;
  if ( ((unsigned int)&dword_60C80058 & ~(1610837740 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
  {
    dword_60C80054 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C80058);
  }
  if ( v4 )
  {
    v7 = (**v4)(v4, &dword_60C80054);
    if ( v7 )
      v7 = (int)v4;
  }
  else
  {
    v7 = 0;
  }
  FIELD_U32(a1, 7624) = v7;
  FIELD_U8(a1, 7248) = 1;
  return 7248;
}
