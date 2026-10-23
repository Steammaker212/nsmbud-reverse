/* sub_603D3B70
 * address: 0x603D3B70   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603D3B70(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int *v6; // r1
  int *v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  float result; // s0

  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U8(a1, 6476) = 0;
  v2 = FIELD_U32(a1, 6512);
  if ( v2 == 2 )
  {
    sub_603D4FE8(a1, 3);
    v6 = (int *)(a1 + 6380);
    v5 = *(_DWORD **)(a1 + 6380);
    v7 = (int *)v5[3];
    v8 = v5[2];
    v9 = v5[17];
    if ( v8 > v9 )
      v7 += v9;
    v10 = *v7;
    FIELD_U32(v10, 20) = 1097859072;
    FIELD_U32(v10, 28) |= 2u;
    v11 = *v6;
    v12 = *(_DWORD *)(*v6 + 12);
    v13 = FIELD_U32(v11, 8);
    v14 = FIELD_U32(v11, 68);
    if ( v13 > v14 )
      v12 += 4 * v14;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 1069547520;
  }
  else
  {
    if ( v2 == 1 )
    {
      v3 = a1;
      v4 = 5;
    }
    else
    {
      if ( v2 )
        goto LABEL_12;
      v3 = a1;
      v4 = 3;
    }
    sub_603D4FE8(v3, v4);
  }
LABEL_12:
  v15 = *(_DWORD **)(a1 + 6380);
  v16 = v15[3];
  v17 = v15[2];
  v18 = v15[17];
  if ( v17 > v18 )
    v16 += 4 * v18;
  LODWORD(result) = (int)(float)(924580000.0 / *(float *)(*(_DWORD *)v16 + 8));
  FIELD_F32(a1, 6360) = result;
  return result;
}
