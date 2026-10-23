/* sub_60263968
 * address: 0x60263968   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60263968(Enemy *a1)
{
  int x; // r3
  int y; // r6
  int z; // r5
  float v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // s0
  float v9; // s8
  Enemy *v10; // r6
  float32x2_t v12; // [sp+0h] [bp-58h] BYREF
  float v13; // [sp+8h] [bp-50h]
  float v14; // [sp+Ch] [bp-4Ch]
  float v15; // [sp+10h] [bp-48h]
  float v16; // [sp+14h] [bp-44h]
  float v17; // [sp+18h] [bp-40h]
  float v18; // [sp+1Ch] [bp-3Ch]
  float v19; // [sp+20h] [bp-38h]
  float v20; // [sp+24h] [bp-34h]
  float v21; // [sp+28h] [bp-30h]
  float v22; // [sp+2Ch] [bp-2Ch]
  int v23; // [sp+30h] [bp-28h] BYREF
  int v24; // [sp+34h] [bp-24h] BYREF
  int v25; // [sp+38h] [bp-20h] BYREF

  x = FIELD_U32(a1, 0x0)._._.rotation.x;
  y = FIELD_U32(a1, 0x0)._._.rotation.y;
  z = FIELD_U32(a1, 0x0)._._.rotation.z;
  v5 = FIELD_U32(a1, 0x0)._._.position.y;
  v6 = FIELD_U32(a1, 0x0)._._.position.z;
  v7 = FIELD_U32(a1, 0x0)._._.position.x;
  v25 = z;
  v24 = y;
  v23 = x;
  v12.n64_u64[0] = 1065353216;
  v13 = 0.0;
  v15 = 0.0;
  v16 = 1.0;
  v17 = 0.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 1.0;
  v14 = v7;
  v18 = v5;
  v22 = v6;
  Mtx34_rotateY(&v12, (unsigned int *)&v24);
  v8 = FIELD_U32(a1, 0x0)._._.effectOffset.y;
  v14 = v14 + (float)((float)((float)(v8 * v12.n64_f32[1]) + (float)(v12.n64_f32[0] * 0.0)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v8 * v16) + (float)(v15 * 0.0)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v8 * v20) + (float)(v19 * 0.0)) + (float)(v21 * 0.0));
  Mtx34_rotateX(&v12, (unsigned int *)&v23);
  v9 = FIELD_U32(a1, 0x0)._._.effectOffset.y;
  v14 = v14 + (float)((float)((float)(v12.n64_f32[0] * 0.0) - (float)(v12.n64_f32[1] * v9)) + (float)(v13 * 0.0));
  v18 = v18 + (float)((float)((float)(v15 * 0.0) - (float)(v16 * v9)) + (float)(v17 * 0.0));
  v22 = v22 + (float)((float)((float)(v19 * 0.0) - (float)(v20 * v9)) + (float)(v21 * 0.0));
  Mtx34_rotateZ(&v12, (unsigned int *)&v25);
  v10 = a1 + 1;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(**(_DWORD **)a1[1]._._._._.vtable + 60))(
    *(_DWORD *)a1[1]._._._._.vtable,
    &v12);
  (*(void (__fastcall **)(_DWORD, char *))(**(_DWORD **)FIELD_U32(v10, 0x0)._._._.vtable + 68))(
    *(_DWORD *)FIELD_U32(v10, 0x0)._._._.vtable,
    &a1[1].field_17F8);
  sub_604218E0((_DWORD *)a1[1]._._._._.vtable);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)FIELD_U32(v10, 0x0)._._._.vtable + 52))(*(_DWORD *)FIELD_U32(v10, 0x0)._._._.vtable);
  sub_602640A0(a1);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)FIELD_U32(v10, 0x0)._._._.vtable + 56))(*(_DWORD *)FIELD_U32(v10, 0x0)._._._.vtable);
}
