/* sub_600FBEB8
 * address: 0x600FBEB8   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600FBEB8(int *a1)
{
  float v2; // r5
  float v3; // r7
  int v4; // r5
  _BYTE *v5; // r6
  char v6; // r12
  int v7; // r1
  ActorBuildInfo v8; // [sp+0h] [bp-48h] BYREF

  v2 = *((float *)a1 + 1793);
  v3 = *((float *)a1 + 1792);
  memset(&v8, 0, sizeof(v8));
  v8.profile = Profile__get(0x172u);
  v8.parentId = a1[2];
  v8.position.x = v3;
  v8.position.y = v2;
  v4 = 0;
  v8.position.z = 1564.0;
  v8.field_1C = a1[40];
  v8.field_20 = 0;
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
  if ( ((unsigned int)&dword_60C80050 & ~(1611644756 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80050) )
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
  if ( ((unsigned int)&dword_60C8110C & ~(1611644884 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8110C) )
  {
    dword_60C81108 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C8110C);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81108) == 1 )
  {
    FIELD_U32(v4, 9448) = a1[5] & 0xF;
    v7 = 5 * ((unsigned __int8)a1[5] >> 4);
    if ( !((unsigned __int8)a1[5] >> 4) )
      v7 = 15;
    FIELD_U32(v4, 9452) = v7;
  }
}
