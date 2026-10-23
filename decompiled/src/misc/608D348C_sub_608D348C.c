/* sub_608D348C
 * address: 0x608D348C   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D348C(int a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r4
  _DWORD *v5; // r4
  int v6; // t1
  int v7; // r0
  int v8; // r10
  int v9; // r9
  int v10; // r11
  int v11; // r5
  int v12; // r7
  int v13; // r6
  float v14; // s20
  int v16; // [sp+4h] [bp-7Ch]
  int v17; // [sp+8h] [bp-78h]
  int v18; // [sp+Ch] [bp-74h]
  int v19; // [sp+10h] [bp-70h]
  int v20; // [sp+14h] [bp-6Ch]
  int v21; // [sp+20h] [bp-60h]
  _DWORD *v22; // [sp+24h] [bp-5Ch]
  int v23; // [sp+28h] [bp-58h]
  int v24; // [sp+2Ch] [bp-54h]
  int v25; // [sp+30h] [bp-50h]
  int v26; // [sp+34h] [bp-4Ch]
  int v27; // [sp+38h] [bp-48h]

  v16 = FIELD_U32(a1, 180);
  if ( v16 < 1 )
  {
    LOBYTE(v2) = 1;
  }
  else
  {
    v2 = 1;
    v3 = 0;
    v20 = 0;
    v19 = 0;
    do
    {
      v18 = v2;
      v17 = v3;
      v4 = a1 + 244 * v3;
      v6 = FIELD_U32(v4, 184);
      v5 = (_DWORD *)(v4 + 184);
      v7 = 1;
      if ( v6 >= 1 )
      {
        v8 = v20;
        v9 = v19;
        v7 = 1;
        v10 = 0;
        v22 = v5;
        do
        {
          v11 = a1 + v8;
          v12 = a1 + v9;
          if ( *(_BYTE *)(a1 + v8 + 1168)
            || (v7 = 0, (unsigned int)(1000 * FIELD_U32(v12, 192)) < FIELD_U32(a1, 1512))
            && (sub_608D36D0(a1, a1 + v8 + 1168, v12 + 188), v5 = v22, v7 = 0, FIELD_U8(v11, 1168)) )
          {
            v13 = FIELD_U32(v11, 1172);
            if ( v13 )
            {
              if ( FIELD_U8(v13, 177) )
              {
                if ( FIELD_U32(v13, 332) - 5 <= 0 )
                {
                  sub_608C77DC(FIELD_U32(v11, 1172));
                  v7 = 0;
                  FIELD_U32(v11, 1172) = 0;
                }
                else
                {
                  FIELD_U32(v13, 332) -= 5;
                  FIELD_F32(v13, 184) = FIELD_F32(a1, 44) * (float)((float)FIELD_U8(v12, 208) / 255.0);
                  FIELD_F32(v13, 188) = FIELD_F32(a1, 48) * FIELD_F32(v12, 204);
                  v21 = FIELD_U8(v12, 209);
                  v14 = FIELD_F32(a1, 132);
                  v23 = FIELD_U32(a1, 136);
                  v24 = FIELD_U32(a1, 140);
                  v25 = FIELD_U32(a1, 144);
                  v26 = FIELD_U32(a1, 148);
                  v27 = FIELD_U32(a1, 152);
                  memmove((void *)(v13 + 204), (const void *)(a1 + 76), 0x38u);
                  FIELD_F32(v13, 260) = v14 + (float)((float)(v21 - 64) * 0.015625);
                  FIELD_U32(v13, 264) = v23;
                  FIELD_U32(v13, 268) = v24;
                  FIELD_U32(v13, 272) = v25;
                  FIELD_U32(v13, 276) = v26;
                  FIELD_U32(v13, 280) = v27;
                  FIELD_U32(v13, 336) = FIELD_U32(a1, 64);
                  FIELD_U32(v13, 340) = FIELD_U32(a1, 68);
                  v7 = 0;
                }
                v5 = v22;
              }
              else
              {
                FIELD_U32(v11, 1172) = 0;
              }
            }
          }
          ++v10;
          v8 += 8;
          v9 += 24;
        }
        while ( v10 < *v5 );
      }
      v2 = v18 & v7;
      v3 = v17 + 1;
      v20 += 84;
      v19 += 244;
    }
    while ( v17 + 1 != v16 );
  }
  FIELD_U32(a1, 1512) += 5000;
  return v2 & 1;
}
