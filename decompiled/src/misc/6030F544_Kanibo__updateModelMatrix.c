/* Kanibo__updateModelMatrix
 * address: 0x6030F544   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Kanibo__updateModelMatrix(Enemy *this)
{
  int v2; // r3
  float x; // r0
  float y; // r2
  float z; // r1
  unsigned int v6; // r3
  Enemy *v7; // r4
  _DWORD *v8; // t1
  int v9; // r6
  float v10; // s0
  int result; // r0
  _BYTE v12[12]; // [sp+0h] [bp-80h] BYREF
  int v13; // [sp+Ch] [bp-74h]
  Profile *v14; // [sp+1Ch] [bp-64h]
  int v15; // [sp+2Ch] [bp-54h]
  float32x2_t v16; // [sp+30h] [bp-50h] BYREF
  float v17; // [sp+38h] [bp-48h]
  float v18; // [sp+3Ch] [bp-44h]
  float v19; // [sp+40h] [bp-40h]
  float v20; // [sp+44h] [bp-3Ch]
  float v21; // [sp+48h] [bp-38h]
  float v22; // [sp+4Ch] [bp-34h]
  float v23; // [sp+50h] [bp-30h]
  float v24; // [sp+54h] [bp-2Ch]
  float v25; // [sp+58h] [bp-28h]
  float v26; // [sp+5Ch] [bp-24h]

  v2 = *(_DWORD *)&FIELD_U32(this, 0x0)._.collisionMgr[5304];
  x = FIELD_U32(this, 0x0)._._.position.x;
  y = FIELD_U32(this, 0x0)._._.position.y;
  z = FIELD_U32(this, 0x0)._._.position.z;
  if ( (unsigned __int16)v2 == 0x10 )
  {
    v6 = BYTE2(v2);
    if ( v6 <= 0x10 && ((1 << v6) & 0x10050) != 0 )
      y = y + -1.0;
  }
  v16.n64_u64[0] = 1065353216;
  v17 = 0.0;
  v19 = 0.0;
  v20 = 1.0;
  v21 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = 1.0;
  v18 = x;
  v22 = y;
  v26 = z;
  Mtx34_rotateY(&v16, (unsigned int *)&FIELD_U32(this, 0x0)._._.rotation.y);
  v18 = v18 + (float)((float)((float)(v16.n64_f32[1] * 8.0) + (float)(v16.n64_f32[0] * 0.0)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v20 * 8.0) + (float)(v19 * 0.0)) + (float)(v21 * 0.0));
  v26 = v26 + (float)((float)((float)(v24 * 8.0) + (float)(v23 * 0.0)) + (float)(v25 * 0.0));
  Mtx34_rotateX(&v16, (unsigned int *)&FIELD_U32(this, 0x0)._._.rotation);
  v18 = v18 + (float)((float)((float)(v16.n64_f32[0] * 0.0) - (float)(v16.n64_f32[1] * 8.0)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v19 * 0.0) - (float)(v20 * 8.0)) + (float)(v21 * 0.0));
  v26 = v26 + (float)((float)((float)(v23 * 0.0) - (float)(v24 * 8.0)) + (float)(v25 * 0.0));
  Mtx34_rotateZ(&v16, (unsigned int *)&FIELD_U32(this, 0x0)._._.rotation.z);
  v8 = *((_DWORD **)this + 1575);
  v7 = this + 1;
  v9 = *v8;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v8 + 60))(*v8, &v16);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v9 + 68))(v9, &FIELD_U32(v7, 0x0)._._.maxSpeed.z);
  sub_60421880(FIELD_U32(v7, 0x0)._._._.vtable);
  (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v9 + 108))(v9, 4, v12);
  FIELD_U32(v7, 0x0)._._._.settings1 = v13;
  v10 = *(float *)&v14;
  *(_DWORD *)&FIELD_U32(v7, 0x0)._._._.movementId = v15;
  *(float *)&FIELD_U32(v7, 0x0)._._._.settigns2 = v10 + -2.0;
  (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v9 + 108))(v9, 2, v12);
  FIELD_U32(v7, 0x0)._._._.id = v13;
  FIELD_U32(v7, 0x0)._._._.profile = v14;
  result = v15;
  *(_DWORD *)&FIELD_U32(v7, 0x0)._._._.field_10 = v15;
  return result;
}
