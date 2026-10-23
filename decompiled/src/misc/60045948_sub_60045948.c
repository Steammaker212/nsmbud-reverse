/* sub_60045948
 * address: 0x60045948   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60045948(int a1)
{
  float v1; // s2
  float v2; // s4
  _DWORD *v3; // r2
  float v4; // s6
  _DWORD *v5; // lr
  float v6; // s0
  float v7; // s8
  _DWORD *v8; // r3
  _DWORD *v9; // r1
  _DWORD *v10; // r4
  float v11; // s2
  _DWORD *v12; // r6
  _DWORD **v13; // r0
  int v14; // r7
  int v15; // t1
  _DWORD *v16; // r5
  _DWORD **v17; // r12
  _DWORD *v18; // r6
  int v19; // r3
  _DWORD *v20; // r7
  _DWORD *v21; // r0

  v1 = FIELD_F32(a1, 10964)
     + (float)((float)((float)(FIELD_F32(a1, 10956) * 0.0) + (float)(FIELD_F32(a1, 10952) * 10.0))
             + (float)(FIELD_F32(a1, 10960) * 0.0));
  FIELD_F32(a1, 10964) = v1;
  v2 = FIELD_F32(a1, 10980)
     + (float)((float)((float)(FIELD_F32(a1, 10972) * 0.0) + (float)(FIELD_F32(a1, 10968) * 10.0))
             + (float)(FIELD_F32(a1, 10976) * 0.0));
  FIELD_F32(a1, 10980) = v2;
  v3 = (_DWORD *)(a1 + 11264);
  FIELD_F32(a1, 10996) = FIELD_F32(a1, 10996)
                         + (float)((float)((float)(FIELD_F32(a1, 10988) * 0.0) + (float)(FIELD_F32(a1, 10984) * 10.0))
                                 + (float)(FIELD_F32(a1, 10992) * 0.0));
  v4 = FIELD_F32(a1, 108);
  v5 = (_DWORD *)(a1 + 11268);
  v6 = v1 - v4;
  FIELD_F32(a1, 11264) = v1 - v4;
  v7 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 11268) = (float)(v2 - v7) + 2.0;
  v8 = (_DWORD *)(a1 + 11272);
  FIELD_F32(a1, 11272) = FIELD_F32(a1, 11228) - v4;
  v9 = (_DWORD *)(a1 + 11276);
  FIELD_F32(a1, 11276) = (float)(FIELD_F32(a1, 11232) - v7) + 2.0;
  v10 = (_DWORD *)(a1 + 11280);
  v11 = FIELD_F32(a1, 11252) - v4;
  FIELD_F32(a1, 11280) = v11;
  v12 = (_DWORD *)(a1 + 11284);
  FIELD_F32(a1, 11284) = (float)(FIELD_F32(a1, 11256) - v7) + 2.0;
  v15 = FIELD_U32(a1, 8680);
  v13 = (_DWORD **)(a1 + 8680);
  v14 = v15;
  v16 = v13 - 1;
  v17 = v13 - 86;
  if ( v6 <= v11 )
  {
    *(float *)v14 = v6;
    FIELD_U32(v14, 4) = *v5;
    v20 = *v13;
    if ( *v16 > 1u )
      v20 += 2;
    *v20 = *v8;
    v3 = v10;
    v20[1] = *v9;
  }
  else
  {
    *(float *)v14 = v11;
    FIELD_U32(v14, 4) = *v12;
    v18 = *v13;
    v19 = *v8;
    if ( *v16 > 1u )
      v18 += 2;
    *v18 = v19;
    v18[1] = *v9;
  }
  v21 = *v13;
  if ( *v16 > 2u )
    v21 += 4;
  *v21 = *v3;
  v21[1] = v3[1];
  return SolidOnTopCollider_execute(v17);
}
