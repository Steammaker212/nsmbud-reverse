/* sub_607D57F0
 * address: 0x607D57F0   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D57F0(int a1)
{
  int v2; // r6
  int v3; // r0
  float v4; // s0
  float v5; // s0
  float v6; // s18
  float v7; // s16
  int v9; // [sp+0h] [bp-60h] BYREF
  _BYTE v10[12]; // [sp+4h] [bp-5Ch] BYREF
  float32x2_t v11; // [sp+10h] [bp-50h] BYREF
  float v12; // [sp+18h] [bp-48h]
  float v13; // [sp+1Ch] [bp-44h]
  float v14; // [sp+20h] [bp-40h]
  float v15; // [sp+24h] [bp-3Ch]
  float v16; // [sp+28h] [bp-38h]
  float v17; // [sp+2Ch] [bp-34h]
  float v18; // [sp+30h] [bp-30h]
  float v19; // [sp+34h] [bp-2Ch]
  float v20; // [sp+38h] [bp-28h]
  float v21; // [sp+3Ch] [bp-24h]

  v2 = **(_DWORD **)(a1 + 24);
  (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)v2 + 100))(v2, 15, &v11, v10);
  v3 = 0;
  v9 = 0;
  v4 = FIELD_F32(a1, 312);
  if ( v4 > 0.0 && (FIELD_U8(a1, 200) & 0x20) == 0 )
  {
    v3 = (int)(float)((float)dword_60CC5440[0] * v4);
    v9 = v3;
  }
  v5 = FIELD_F32(a1, 320);
  if ( v5 <= 0.0 )
  {
    v7 = 0.0;
    v6 = 0.0;
  }
  else
  {
    v6 = v5 * 3.0;
    v7 = v5 * 0.0;
    if ( v3 > (int)(float)(v5 * (float)dword_60CC5444) )
      v9 = (int)(float)(v5 * (float)dword_60CC5444);
  }
  Mtx34_rotateZ(&v11, (unsigned int *)&v9);
  v13 = v13 + (float)((float)((float)(v7 * v11.n64_f32[1]) + (float)(v6 * v11.n64_f32[0])) + (float)(v7 * v12));
  v17 = v17 + (float)((float)((float)(v7 * v15) + (float)(v6 * v14)) + (float)(v7 * v16));
  v21 = v21 + (float)((float)((float)(v7 * v19) + (float)(v6 * v18)) + (float)(v7 * v20));
  return (*(int (__fastcall **)(int, int, float32x2_t *, _BYTE *, int))(*(_DWORD *)v2 + 96))(v2, 15, &v11, v10, v9);
}
