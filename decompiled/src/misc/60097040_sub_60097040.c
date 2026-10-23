/* sub_60097040
 * address: 0x60097040   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60097040(int a1)
{
  signed int v2; // r5
  float result; // s0
  int v4; // r6
  char v5; // r12
  unsigned int v6; // r0
  int v7; // r1
  float *v8; // r1
  float v9; // s8
  Vec2 v10; // [sp+0h] [bp-18h] BYREF

  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BC7BF0, 0);
  StageActor__distanceToPlayer((StateActor *)a1, &v10);
  v2 = sub_6000F7B8(v10.y, v10.x);
  v4 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611231380 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) )
  {
    v6 = v2;
    if ( (FIELD_U8(a1, 23) & 0x10) == 0 )
    {
      v7 = dword_60C823D8;
      if ( FIELD_U32(v4, 80) )
      {
        if ( v2 < 0x80000000 - dword_60C823D8 )
          v2 = 0x80000000 - dword_60C823D8;
        if ( v2 < 0 )
          v2 = 0x80000000;
        v6 = v2;
      }
      else
      {
        v6 = -1;
        if ( v2 >= -1 )
        {
          if ( v2 <= (unsigned int)dword_60C823D8 )
            v7 = v2;
          if ( v2 == -1 )
            v7 = -1;
          v6 = v7;
        }
      }
    }
    FIELD_U32(a1, 164) = v6 - 0x40000000;
    v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v9 = (float)(v6 & 0xFFFFFF);
    FIELD_F32(a1, 120) = (float)(v8[2] + (float)((float)(v9 * v8[3]) * 0.000000059605)) * 1.3333;
    result = (float)(*v8 + (float)((float)(v9 * v8[1]) * 0.000000059605)) * 1.3333;
    FIELD_F32(a1, 124) = result;
    FIELD_U32(a1, 128) = 0;
  }
  else
  {
    FIELD_U8(a1, 19) = 1;
  }
  return result;
}
