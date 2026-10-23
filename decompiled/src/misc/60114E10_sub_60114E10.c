/* sub_60114E10
 * address: 0x60114E10   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60114E10(int *a1)
{
  float v2; // r5
  float v3; // r7
  int v4; // r5
  _BYTE *v5; // r6
  char v6; // r12
  ActorBuildInfo v8; // [sp+0h] [bp-48h] BYREF

  v2 = *((float *)a1 + 1793);
  v3 = *((float *)a1 + 1792);
  memset(&v8, 0, sizeof(v8));
  v8.profile = Profile__get(0x336u);
  v8.parentId = a1[2];
  v8.position.x = v3;
  v8.position.y = v2;
  v4 = 0;
  v8.position.z = 1564.0;
  v8.field_1C = a1[40];
  v8.field_20 = 0;
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( ((unsigned int)&dword_60C80050 & ~(1611746988 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80050) )
  {
    dword_60C8004C = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C80050);
  }
  if ( v5 )
  {
    v4 = (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C8004C);
    if ( v4 )
      v4 = (int)v5;
  }
  a1[1811] = v4;
  return 7244;
}
