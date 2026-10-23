/* sub_6034D134
 * address: 0x6034D134   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034D134(int a1)
{
  unsigned int *v1; // r4
  float v2; // s18
  float v3; // s18
  unsigned int v4; // t1
  float32x2_t v6; // [sp+0h] [bp-50h] BYREF
  float v7; // [sp+8h] [bp-48h]
  float v8; // [sp+Ch] [bp-44h]
  float v9; // [sp+10h] [bp-40h]
  float v10; // [sp+14h] [bp-3Ch]
  float v11; // [sp+18h] [bp-38h]
  float v12; // [sp+1Ch] [bp-34h]
  float v13; // [sp+20h] [bp-30h]
  float v14; // [sp+24h] [bp-2Ch]
  float v15; // [sp+28h] [bp-28h]
  float v16; // [sp+2Ch] [bp-24h]

  v1 = (unsigned int *)a1;
  v2 = FIELD_F32(a1, 148);
  sub_6039FB38(a1, &v6);
  v3 = v2 * 7.0;
  v8 = v8 + (float)((float)((float)(v3 * v6.n64_f32[1]) + (float)(v6.n64_f32[0] * 0.0)) + (float)(v7 * 0.0));
  v12 = v12 + (float)((float)((float)(v3 * v10) + (float)(v9 * 0.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v3 * v14) + (float)(v13 * 0.0)) + (float)(v15 * 0.0));
  Mtx34_rotateX(&v6, v1 + 1860);
  v8 = v8 + (float)((float)((float)(v6.n64_f32[0] * 0.0) - (float)(v6.n64_f32[1] * v3)) + (float)(v7 * 0.0));
  v12 = v12 + (float)((float)((float)(v9 * 0.0) - (float)(v10 * v3)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * v3)) + (float)(v15 * 0.0));
  v4 = v1[1707];
  v1 += 1707;
  (*(void (__fastcall **)(unsigned int, float32x2_t *))(*(_DWORD *)v4 + 60))(v4, &v6);
  (*(void (__fastcall **)(unsigned int, unsigned int *))(*(_DWORD *)*v1 + 68))(*v1, v1 - 75);
  (*(void (__fastcall **)(unsigned int))(*(_DWORD *)*v1 + 52))(*v1);
  return (*(int (__fastcall **)(unsigned int))(*(_DWORD *)*v1 + 56))(*v1);
}
