/* sub_60258C1C
 * address: 0x60258C1C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60258C1C(int a1)
{
  _DWORD **v1; // r4
  int v2; // r1
  int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r6
  float v6; // s0
  _DWORD *v7; // t1
  float32x2_t v9; // [sp+0h] [bp-80h] BYREF
  int v10; // [sp+8h] [bp-78h]
  int v11; // [sp+Ch] [bp-74h]
  int v12; // [sp+10h] [bp-70h]
  int v13; // [sp+14h] [bp-6Ch]
  int v14; // [sp+18h] [bp-68h]
  float v15; // [sp+1Ch] [bp-64h]
  int v16; // [sp+20h] [bp-60h]
  int v17; // [sp+24h] [bp-5Ch]
  int v18; // [sp+28h] [bp-58h]
  int v19; // [sp+2Ch] [bp-54h]
  unsigned int v20; // [sp+30h] [bp-50h] BYREF
  unsigned int v21; // [sp+34h] [bp-4Ch] BYREF
  unsigned int v22; // [sp+38h] [bp-48h] BYREF
  _BYTE v23[12]; // [sp+40h] [bp-40h] BYREF
  _DWORD *v24; // [sp+4Ch] [bp-34h]
  _DWORD *v25; // [sp+5Ch] [bp-24h]
  _DWORD *v26; // [sp+6Ch] [bp-14h]

  v1 = (_DWORD **)a1;
  v2 = FIELD_U32(a1, 116);
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 160);
  v5 = FIELD_U32(a1, 164);
  v6 = FIELD_F32(a1, 112) + FIELD_F32(a1, 6428);
  v20 = FIELD_U32(a1, 156);
  v21 = v4;
  v22 = v5;
  v9.n64_u64[0] = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 1065353216;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v11 = v3;
  v15 = v6;
  v19 = v2;
  Mtx34_rotateY(&v9, &v21);
  Mtx34_rotateX(&v9, &v20);
  Mtx34_rotateZ(&v9, &v22);
  v7 = v1[1575];
  v1 += 1575;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v7 + 60))(*v7, &v9);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v1 + 68))(**v1, v1 + 148);
  (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)**v1 + 108))(**v1, 0, v23);
  v1[1] = v24;
  v1[2] = v25;
  v1[3] = v26;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 52))(**v1);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
}
