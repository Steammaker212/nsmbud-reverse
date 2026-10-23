/* sub_602B8EB4
 * address: 0x602B8EB4   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B8EB4(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  int v4; // r0
  unsigned int v5; // r1
  _DWORD **v6; // r7
  int v7; // r1
  unsigned int v8; // r0
  unsigned int v9; // r0
  float32x2_t v11; // [sp+0h] [bp-68h] BYREF
  float v12; // [sp+8h] [bp-60h]
  float v13; // [sp+Ch] [bp-5Ch]
  float v14; // [sp+10h] [bp-58h]
  float v15; // [sp+14h] [bp-54h]
  float v16; // [sp+18h] [bp-50h]
  float v17; // [sp+1Ch] [bp-4Ch]
  float v18; // [sp+20h] [bp-48h]
  float v19; // [sp+24h] [bp-44h]
  float v20; // [sp+28h] [bp-40h]
  float v21; // [sp+2Ch] [bp-3Ch]
  unsigned int v22; // [sp+30h] [bp-38h] BYREF
  unsigned int v23; // [sp+34h] [bp-34h] BYREF
  unsigned int v24; // [sp+38h] [bp-30h] BYREF

  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v22 = FIELD_U32(a1, 156);
  v23 = v2;
  v24 = v3;
  v4 = FIELD_U32(a1, 160);
  if ( v4 < 0 && v4 != 0x80000000 )
    v4 = -v4;
  v5 = dword_60C91060;
  if ( dword_60C91060 < 0 && dword_60C91060 != 0x80000000 )
    v5 = -dword_60C91060;
  v6 = (_DWORD **)(a1 + 6300);
  if ( v4 >= v5 )
  {
    v7 = (*v6)[3];
    v8 = (*v6)[17];
    if ( (*v6)[2] > v8 )
      v7 += 4 * v8;
    v9 = (int)(float)((float)(2147500000.0
                            * (float)((float)(*(float *)(*(_DWORD *)v7 + 20) * 22.5) / *(float *)(*(_DWORD *)v7 + 8)))
                    / 180.0);
    v23 += (int)(float)((float)*(int *)algn_60C91064
                      * (float)(*(float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0))
                              + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v9 >> 20) & 0xFF0))
                                              * (float)(v9 & 0xFFFFFF))
                                      * 0.000000059605)));
  }
  v11.n64_u64[0] = 1065353216;
  v12 = 0.0;
  v14 = 0.0;
  v15 = 1.0;
  v16 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v20 = 1.0;
  v13 = FIELD_F32(a1, 108);
  v17 = FIELD_F32(a1, 112);
  v21 = FIELD_F32(a1, 116);
  Mtx34_rotateY(&v11, &v23);
  v13 = v13 + (float)((float)((float)(v11.n64_f32[1] * 12.0) + (float)(v11.n64_f32[0] * 0.0)) + (float)(v12 * 0.0));
  v17 = v17 + (float)((float)((float)(v15 * 12.0) + (float)(v14 * 0.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v19 * 12.0) + (float)(v18 * 0.0)) + (float)(v20 * 0.0));
  Mtx34_rotateX(&v11, &v22);
  v13 = v13 + (float)((float)((float)(v11.n64_f32[0] * 0.0) - (float)(v11.n64_f32[1] * 12.0)) + (float)(v12 * 0.0));
  v17 = v17 + (float)((float)((float)(v14 * 0.0) - (float)(v15 * 12.0)) + (float)(v16 * 0.0));
  v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 12.0)) + (float)(v20 * 0.0));
  Mtx34_rotateZ(&v11, &v24);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v6 + 60))(**v6, &v11);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v6 + 68))(**v6, a1 + 6632);
  return sub_60421880(*v6);
}
