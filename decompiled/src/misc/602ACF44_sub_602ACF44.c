/* sub_602ACF44
 * address: 0x602ACF44   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ACF44(int a1)
{
  float *v2; // r1
  int v3; // r0
  float v4; // s2
  int v5; // r1
  unsigned int v6; // r6
  float *v7; // r7
  float v8; // r0
  float v9; // r1
  bool v10; // cc
  unsigned int v11; // r0
  int v12; // r7
  _DWORD *v13; // r2
  _DWORD *v14; // r7
  unsigned int v15; // r5
  int v16; // r5
  int result; // r0
  _BYTE v18[12]; // [sp+8h] [bp-70h] BYREF
  int v19; // [sp+14h] [bp-64h]
  int v20; // [sp+18h] [bp-60h]
  _DWORD v21[2]; // [sp+30h] [bp-48h] BYREF
  _DWORD v22[16]; // [sp+38h] [bp-40h] BYREF

  v2 = (float *)(a1 + 6796);
  v3 = 40;
  do
  {
    --v3;
    v4 = *(v2 - 4) + FIELD_F32(a1, 184);
    *(v2 - 2) = *(v2 - 5) + FIELD_F32(a1, 180);
    *(v2 - 1) = v4;
    *(_BYTE *)v2 = *((_BYTE *)v2 - 12);
    v2 -= 3;
  }
  while ( v3 );
  v5 = FIELD_U32(a1, 112);
  v6 = 0;
  FIELD_U32(a1, 6308) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6312) = v5;
  v7 = (float *)(a1 + 6320);
  while ( 1 )
  {
    if ( *((_BYTE *)v7 + 8) )
    {
      v8 = *v7;
      v9 = v7[1];
      v19 = 0;
      v20 = 0;
      *(float *)v22 = v8;
      *(float *)v21 = v8;
      *(float *)&v22[1] = v9 + 1.0;
      *(float *)&v21[1] = v9 + 24.0;
      if ( ((int (__fastcall *)(int, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D6F0)(a1 + 652, v18, v22, v21, 8) == 1 )
        break;
    }
    v7 += 3;
    v10 = (int)(v6 + 2) < 41;
    ++v6;
    if ( !v10 )
      goto LABEL_17;
  }
  if ( (int)(39 - v6) >= 1 )
  {
    v11 = v6 + 1;
    if ( v6 >= 0x29 )
      v6 = 0;
    v12 = a1 + 12 * v6;
    v13 = (_DWORD *)(v12 + 6312);
    v14 = (_DWORD *)(v12 + 6308);
    do
    {
      v15 = 0;
      if ( v11 < 0x29 )
        v15 = v11;
      v16 = a1 + 12 * v15;
      if ( FIELD_U8(v16, 6316) )
      {
        FIELD_U32(v16, 6308) = *v14;
        FIELD_U32(v16, 6312) = *v13;
      }
      ++v11;
    }
    while ( v11 != 40 );
  }
LABEL_17:
  result = FIELD_U32(a1, 2872) & 1;
  FIELD_U8(a1, 6316) = result;
  return result;
}
