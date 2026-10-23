/* connectW_d_ref
 * address: 0x601A02F8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall connectW_d_ref(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4
  int v5; // r0
  int v7; // r7
  int v8; // r5
  _DWORD *v9; // r0
  int v10; // r1
  int v11; // r6
  int v12; // r0
  float v13; // s18
  float v14; // s20
  float v15; // s16
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r4
  int v19; // r0
  __n128 result; // q0
  float v21; // s4
  _BYTE v22[12]; // [sp+4h] [bp-8Ch] BYREF
  float v23; // [sp+10h] [bp-80h]
  float v24; // [sp+20h] [bp-70h]
  float v25; // [sp+30h] [bp-60h]
  _DWORD v26[23]; // [sp+34h] [bp-5Ch] BYREF

  v3 = a3;
  v5 = 1;
  if ( a3 < 2 )
    v5 = 2;
  sub_6017D524(v26, "connectW%d", v5 + a3);
  v7 = 0;
  v8 = 0;
  if ( a2 >= 9 )
    a2 = 0;
  v9 = (_DWORD *)(a1 + 16 * a2);
  if ( (int)v9[6] >= 1 )
  {
    v10 = v9[5];
    v8 = 0;
    if ( v10 )
      v8 = v10 - v9[7];
  }
  v11 = **(_DWORD **)(v8 + 4);
  v12 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v11 + 84))(v11, v26);
  (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v11 + 108))(v11, v12, v22);
  v13 = v23;
  v14 = v24;
  v15 = v25;
  if ( v3 >= 9 )
    v3 = 0;
  v16 = (_DWORD *)(a1 + 16 * v3);
  if ( (int)v16[6] >= 1 )
  {
    v17 = v16[5];
    if ( v17 )
      v7 = v17 - v16[7];
  }
  v18 = **(_DWORD **)(v7 + 4);
  v19 = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v18 + 84))(v18, v26);
  (*(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v18 + 108))(v18, v19, v22);
  result.n128_f32[0] = (float)(v13 + FIELD_F32(v8, 16)) - v23;
  result.n128_f32[2] = (float)(v14 + FIELD_F32(v8, 20)) - v24;
  v21 = (float)(v15 + FIELD_F32(v8, 24)) - v25;
  FIELD_U32(v7, 16) = result.n128_u32[0];
  FIELD_U32(v7, 20) = result.n128_u32[2];
  FIELD_F32(v7, 24) = v21;
  return result;
}
