/* sub_602DADF4
 * address: 0x602DADF4   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DADF4(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s0
  float v9; // s2
  float v10; // s4
  int v11; // r6
  float32x2_t v12; // [sp+0h] [bp-40h] BYREF
  float v13; // [sp+8h] [bp-38h]
  float v14; // [sp+Ch] [bp-34h]
  float v15; // [sp+10h] [bp-30h]
  float v16; // [sp+14h] [bp-2Ch]
  float v17; // [sp+18h] [bp-28h]
  float v18; // [sp+1Ch] [bp-24h]
  float v19; // [sp+20h] [bp-20h]
  float v20; // [sp+24h] [bp-1Ch]
  float v21; // [sp+28h] [bp-18h]
  float v22; // [sp+2Ch] [bp-14h]

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C91D28 + 8))() )
  {
    sub_602DB924(a1 + 6824);
    sub_602DB924(a1 + 6888);
    sub_602DB924(a1 + 6952);
    sub_602DB924(a1 + 7016);
    sub_602DB924(a1 + 7080);
    sub_602DB924(a1 + 7144);
    return sub_602DB924(a1 + 7208);
  }
  else
  {
    v12.n64_u64[0] = 1065353216;
    v13 = 0.0;
    v15 = 0.0;
    v16 = 1.0;
    v17 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
    v21 = 1.0;
    v14 = FIELD_F32(a1, 108);
    v18 = FIELD_F32(a1, 112);
    v22 = FIELD_F32(a1, 116);
    Mtx34_rotateY(&v12, (unsigned int *)(a1 + 160));
    v5 = FIELD_F32(a1, 572);
    v6 = FIELD_F32(a1, 576);
    v7 = FIELD_F32(a1, 580);
    v14 = v14 + (float)((float)((float)(v12.n64_f32[1] * v6) + (float)(v12.n64_f32[0] * v5)) + (float)(v13 * v7));
    v18 = v18 + (float)((float)((float)(v16 * v6) + (float)(v15 * v5)) + (float)(v17 * v7));
    v22 = v22 + (float)((float)((float)(v20 * v6) + (float)(v19 * v5)) + (float)(v21 * v7));
    Mtx34_rotateZ(&v12, (unsigned int *)(a1 + 164));
    Mtx34_rotateX(&v12, (unsigned int *)(a1 + 156));
    v8 = FIELD_F32(a1, 572);
    v9 = FIELD_F32(a1, 576);
    v10 = FIELD_F32(a1, 580);
    v14 = v14
        + (float)((float)((float)-(float)(v8 * v12.n64_f32[0]) - (float)(v12.n64_f32[1] * v9)) - (float)(v13 * v10));
    v18 = v18 + (float)((float)((float)-(float)(v8 * v15) - (float)(v16 * v9)) - (float)(v17 * v10));
    v22 = v22 + (float)((float)((float)-(float)(v8 * v19) - (float)(v20 * v9)) - (float)(v21 * v10));
    sub_604218E0(*(_DWORD **)(a1 + 6300));
    v11 = **(_DWORD **)(a1 + 6300);
    (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v11 + 60))(v11, &v12);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v11 + 68))(v11, a1 + 6792);
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 52))(v11);
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 56))(v11);
    return sub_602DBA9C(a1);
  }
}
