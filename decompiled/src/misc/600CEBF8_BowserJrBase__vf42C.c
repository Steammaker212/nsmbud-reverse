/* BowserJrBase__vf42C
 * address: 0x600CEBF8   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
void __fastcall BowserJrBase__vf42C(int r0_0)
{
  float v2; // r1
  signed int v3; // r0
  char v4; // r12
  int v5; // r5
  float v6; // s18
  unsigned int v7; // r0
  int *v8; // r5
  int v9; // r6
  float v10; // s0
  int v11; // r0
  int *v12; // r4
  int v13; // r0
  Vec2 v14; // [sp+0h] [bp-30h] BYREF
  Vec2 a1; // [sp+8h] [bp-28h] BYREF

  v2 = FIELD_F32(r0_0, 112);
  v14.x = FIELD_F32(r0_0, 108);
  v14.y = v2;
  v3 = distanceToPLayer(&a1, &v14);
  FIELD_U32(r0_0, 7240) = v3;
  if ( v3 >= 0 || (v3 = FIELD_U32(dword_60CBFA90, 440), FIELD_U32(r0_0, 7240) = v3, v3 >= 0) )
  {
    if ( (unsigned int)v3 >= 4 )
      v3 = 0;
    v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
    if ( ((unsigned int)&dword_60C7B364 & ~(1611459708 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1 )
    {
      v6 = FIELD_F32(v5, 108) - FIELD_F32(r0_0, 7132);
      v7 = sub_6000F7B8(FIELD_F32(v5, 112) - FIELD_F32(r0_0, 7136), sqrtf((float)(v6 * v6) + 0.0));
      FIELD_U32(r0_0, 7128) = v7;
      v8 = (int *)(r0_0 + 7128);
      v9 = v7 - FIELD_U32(r0_0, 164) - *(_DWORD *)(FIELD_U32(r0_0, 7244) + 164);
      FIELD_U32(r0_0, 7128) = v9;
      if ( v9 >= (*(int (__fastcall **)(int))(*(_DWORD *)r0_0 + 1052))(r0_0) )
      {
        if ( *v8 >= 536870913 )
          *v8 = 0x20000000;
      }
      else
      {
        *v8 = (*(int (__fastcall **)(int))(*(_DWORD *)r0_0 + 1052))(r0_0);
      }
      if ( v6 >= 0.0 )
      {
        if ( v6 <= 100.0 )
          v11 = sub_608FBB48(v6 / 100.0);
        else
          v11 = 0x40000000 - sub_608FBB48(100.0 / v6);
      }
      else
      {
        v10 = -v6;
        if ( v6 >= -100.0 )
          v11 = -sub_608FBB48(v10 / 100.0);
        else
          v11 = sub_608FBB48(100.0 / v10) - 0x40000000;
      }
      FIELD_U32(r0_0, 7124) = v11;
      v12 = (int *)(r0_0 + 7124);
      if ( v11 >= -536870912 )
      {
        if ( v11 < 536870913 )
          return;
        v13 = 0x20000000;
      }
      else
      {
        v13 = -536870912;
      }
      *v12 = v13;
    }
  }
}
