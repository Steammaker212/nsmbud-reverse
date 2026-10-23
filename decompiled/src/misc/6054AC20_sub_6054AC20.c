/* sub_6054AC20
 * address: 0x6054AC20   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6054AC20(int a1)
{
  int *v2; // r0
  char v3; // r12
  int v4; // r5
  int v5; // r1
  int v6; // r2
  float v7; // r0
  int v8; // s2
  float v9; // s0
  float v10; // s4
  float v11; // s2
  double v12; // d16
  int v13; // r0
  int v14; // r0
  float v15; // r2
  int v16; // r3
  float v17; // [sp+0h] [bp-38h] BYREF
  float v18; // [sp+4h] [bp-34h]
  int v19; // [sp+8h] [bp-30h]
  float v20; // [sp+Ch] [bp-2Ch] BYREF
  float v21; // [sp+10h] [bp-28h]
  int v22; // [sp+14h] [bp-24h]
  _DWORD v23[8]; // [sp+18h] [bp-20h] BYREF

  v2 = (int *)sub_60008598(ActorMgr__instance, 459, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( v2 != *(int **)(ActorMgr__instance + 27180) )
  {
    v4 = *v2;
    if ( ((unsigned int)&dword_60C7B364 & ~(1616161912 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
    {
      v5 = FIELD_U32(v4, 112);
      v6 = FIELD_U32(v4, 116);
      v23[0] = FIELD_U32(v4, 108);
      v23[1] = v5;
      v23[2] = v6;
      sub_608332CC(a1 + 3648, v23, 0.08, 7.0, 2.0);
      v7 = FIELD_F32(a1, 3652);
      v20 = FIELD_F32(a1, 3648);
      v17 = v20;
      v21 = v7;
      v22 = 0;
      v18 = v7;
      v19 = 0;
      sub_60833074(&v17);
      *(float *)&v8 = 500.0;
      v9 = v17;
      if ( v17 > 500.0 || (*(float *)&v8 = -500.0, v17 < -500.0) )
      {
        v9 = *(float *)&v8;
        v17 = *(float *)&v8;
      }
      v10 = 180.0;
      v11 = v18;
      if ( v18 > 180.0 || (v10 = -280.0, v18 < -280.0) )
      {
        v11 = v10;
        v18 = v10;
      }
      v20 = v9;
      v21 = v11;
      v22 = v19;
      sub_608330EC((int)&v20);
      v12 = atan2f(FIELD_F32(a1, 3652) - v21, FIELD_F32(a1, 3648) - v20) / 6.28 * 360.0;
      v13 = sub_6047482C(a1 + 44, 1u);
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v13 + 96))(v13, (float)((810 - (int)v12) % 360));
      v14 = FIELD_U32(a1, 4);
      v15 = v18;
      v16 = v19;
      FIELD_F32(v14, 24) = v17;
      FIELD_F32(v14, 28) = v15;
      FIELD_U32(v14, 32) = v16;
      FIELD_U8(v14, 64) |= 0x10u;
    }
  }
}
