/* sub_6008B6B0
 * address: 0x6008B6B0   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6008B6B0(int *a1)
{
  float v2; // r4
  float v3; // r7
  int v4; // r4
  _BYTE *v5; // r6
  char v6; // r12
  ActorBuildInfo v7; // [sp+0h] [bp-48h] BYREF

  v2 = *((float *)a1 + 1793);
  v3 = *((float *)a1 + 1792);
  memset(&v7, 0, sizeof(v7));
  v7.profile = Profile__get(0x175u);
  v7.parentId = a1[2];
  v7.position.x = v3;
  v7.position.y = v2;
  v4 = 0;
  v7.position.z = 1564.0;
  v7.field_1C = a1[40];
  v7.field_20 = 0;
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
  if ( ((unsigned int)&dword_60C80050 & ~(1611183948 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80050) )
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
  if ( ((unsigned int)&dword_60C81104 & ~(1611184076 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81100) == 1 )
    {
      FIELD_U32(v4, 9448) = 1;
      FIELD_U32(v4, 9452) = 15;
    }
  }
}
