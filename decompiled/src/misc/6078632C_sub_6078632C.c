/* sub_6078632C
 * address: 0x6078632C   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6078632C(int *result)
{
  int v1; // r2
  int v2; // r1
  int v3; // r3
  int *v4; // lr
  int *v5; // r12
  unsigned int v6; // lr
  int v7; // r1
  int v8; // r2
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r4
  int v13; // r3
  int v14; // r4
  bool v15; // vf
  int v16; // r2
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r2
  int v21; // r3
  int v22; // r1

  v1 = result[1];
  if ( (v1 & 3) != 0 )
  {
    v2 = 0;
    v3 = 0;
    result[2] = 0;
    goto LABEL_8;
  }
  if ( (v1 & 0x400) != 0 )
  {
    v3 = result[33] | result[32];
    v2 = v3 & ~result[2];
    result[2] = v3;
LABEL_8:
    result[3] = v2;
    if ( (v1 & 0x100) == 0 )
      goto LABEL_22;
LABEL_21:
    v1 &= ~0x100u;
    v3 &= ~1u;
    v2 &= ~1u;
    result[1] = v1;
    result[2] = v3;
    result[3] = v2;
    goto LABEL_22;
  }
  if ( FIELD_U8(dword_60C9CF0C, 1392) )
  {
    v2 = 0;
    v3 = 0;
    result[2] = 0;
    v4 = result + 2;
    result[3] = 0;
    v5 = result + 3;
    if ( (v1 & 4) == 0 )
      goto LABEL_18;
LABEL_17:
    v3 &= 0xFFFFFF3F;
    v2 &= 0xFFFFFF3F;
    *v4 = v3;
    *v5 = v2;
    goto LABEL_18;
  }
  v5 = result + 3;
  v6 = *result;
  if ( (unsigned int)*result >= 4 )
    v6 = 0;
  v7 = dword_60C9CF0C + 312 * v6;
  v4 = result + 2;
  v3 = FIELD_U32(v7, 288);
  result[2] = v3;
  v2 = FIELD_U32(v7, 20);
  *v5 = v2;
  if ( ((v3 | v2) & 0x10) != 0 )
  {
    v3 &= 0xFFFFDFDF;
    v2 &= 0xFFFFDFDF;
    *v4 = v3;
    *v5 = v2;
  }
  if ( ((v3 | v2) & 0x80) != 0 )
  {
    v3 &= ~0x40u;
    v2 &= ~0x40u;
    *v4 = v3;
    *v5 = v2;
  }
  if ( (v1 & 4) != 0 )
    goto LABEL_17;
LABEL_18:
  if ( (v1 & 8) != 0 )
  {
    v3 &= ~8u;
    v2 &= ~8u;
    *v4 = v3;
    *v5 = v2;
  }
  if ( (v1 & 0x100) != 0 )
    goto LABEL_21;
LABEL_22:
  if ( (v1 & 0x200) != 0 )
  {
    result[1] = v1 & 0xFFFFFDFF;
    result[37] = 9;
    if ( (v2 & 0x1000) != 0 )
      goto LABEL_29;
LABEL_28:
    v2 &= ~8u;
    result[2] = v3 & 0xFFFFFFF7;
    result[3] = v2;
    goto LABEL_29;
  }
  v8 = result[37];
  if ( v8 )
  {
    v9 = v8 - 1;
    result[37] = v9;
    if ( v9 )
    {
      if ( (v2 & 0x1000) == 0 )
        goto LABEL_28;
    }
  }
LABEL_29:
  if ( !*((_BYTE *)result + 136) && *((_BYTE *)result + 137) )
  {
    *((_BYTE *)result + 137) = 0;
    result[35] = 0;
    result[36] = 0;
  }
  *((_BYTE *)result + 136) = 0;
  v10 = result[7];
  v11 = result[5];
  if ( v10 >= 1 && v10 >= v11 )
    result[7] = --v10;
  if ( v10 < v11 )
  {
    v12 = result[6];
    v13 = v10 + 1;
    if ( v12 < 1 )
      v12 = v11;
    v14 = v12 - 1;
    result[6] = v14;
    result[7] = v13;
    v15 = __OFSUB__(v14, v11);
    v16 = v14 - v11;
    if ( v16 < 0 != v15 )
      v16 = v14;
    *(_DWORD *)(result[4] + 4 * v16) = v2;
  }
  v17 = result[21];
  v18 = result[19];
  if ( v17 >= 1 && v17 >= v18 )
    result[21] = --v17;
  if ( v17 < v18 )
  {
    v19 = result[20];
    v20 = v17 + 1;
    if ( v19 < 1 )
      v19 = v18;
    v21 = v19 - 1;
    v15 = __OFSUB__(v21, v18);
    v22 = v21 - v18;
    result[20] = v21;
    result[21] = v20;
    if ( v22 < 0 != v15 )
      v22 = v21;
    *(_DWORD *)(result[18] + 4 * v22) = result[2];
  }
  result[33] = 0;
  return result;
}
