/* sub_60045B70
 * address: 0x60045B70   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60045B70(int a1)
{
  _DWORD *v1; // r6
  float v2; // s2
  float v3; // s4
  float v4; // s6
  _DWORD *v5; // r2
  _DWORD *v6; // lr
  float v7; // s0
  float v8; // s8
  _DWORD *v9; // r3
  _DWORD *v10; // r1
  _DWORD *v11; // r4
  float v12; // s2
  _DWORD **v13; // r0
  int v14; // r7
  int v15; // t1
  _DWORD *v16; // r5
  _DWORD **v17; // r12
  _DWORD *v18; // r6
  int v19; // r3
  _DWORD *v20; // r7
  _DWORD *v21; // r0

  v1 = (_DWORD *)(a1 + 11392);
  v2 = FIELD_F32(a1, 10916)
     + (float)((float)((float)(FIELD_F32(a1, 10908) * 0.0) - (float)(FIELD_F32(a1, 10904) * 10.0))
             + (float)(FIELD_F32(a1, 10912) * 0.0));
  FIELD_F32(a1, 10916) = v2;
  v3 = FIELD_F32(a1, 10932)
     + (float)((float)((float)(FIELD_F32(a1, 10924) * 0.0) - (float)(FIELD_F32(a1, 10920) * 10.0))
             + (float)(FIELD_F32(a1, 10928) * 0.0));
  FIELD_F32(a1, 10932) = v3;
  FIELD_F32(a1, 10948) = FIELD_F32(a1, 10948)
                         + (float)((float)((float)(FIELD_F32(a1, 10940) * 0.0) - (float)(FIELD_F32(a1, 10936) * 10.0))
                                 + (float)(FIELD_F32(a1, 10944) * 0.0));
  v4 = FIELD_F32(a1, 108);
  v5 = (_DWORD *)(a1 + 11372);
  v6 = (_DWORD *)(a1 + 11376);
  v7 = v2 - v4;
  FIELD_F32(a1, 11372) = v2 - v4;
  v8 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 11376) = (float)(v3 - v8) + 2.0;
  v9 = (_DWORD *)(a1 + 11380);
  FIELD_F32(a1, 11380) = FIELD_F32(a1, 11336) - v4;
  v10 = (_DWORD *)(a1 + 11384);
  FIELD_F32(a1, 11384) = (float)(FIELD_F32(a1, 11340) - v8) + 2.0;
  v11 = (_DWORD *)(a1 + 11388);
  v12 = FIELD_F32(a1, 11360) - v4;
  FIELD_F32(a1, 11388) = v12;
  FIELD_F32(a1, 11392) = (float)(FIELD_F32(a1, 11364) - v8) + 2.0;
  v15 = FIELD_U32(a1, 9200);
  v13 = (_DWORD **)(a1 + 9200);
  v14 = v15;
  v16 = v13 - 1;
  v17 = v13 - 86;
  if ( v7 <= v12 )
  {
    *(float *)v14 = v7;
    FIELD_U32(v14, 4) = *v6;
    v20 = *v13;
    if ( *v16 > 1u )
      v20 += 2;
    *v20 = *v9;
    v5 = v11;
    v20[1] = *v10;
  }
  else
  {
    *(float *)v14 = v12;
    FIELD_U32(v14, 4) = *v1;
    v18 = *v13;
    v19 = *v9;
    if ( *v16 > 1u )
      v18 += 2;
    *v18 = v19;
    v18[1] = *v10;
  }
  v21 = *v13;
  if ( *v16 > 2u )
    v21 += 4;
  *v21 = *v5;
  v21[1] = v5[1];
  return SolidOnTopCollider_execute(v17);
}
