/* sub_607DDFA8
 * address: 0x607DDFA8   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DDFA8(int a1, __int16 *a2, float *a3)
{
  int v6; // r1
  __int16 *v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r2
  char *v11; // r6
  _DWORD *v12; // r0
  unsigned int v13; // r4
  unsigned int v14; // r10
  unsigned int v15; // r6
  unsigned int v16; // r2
  unsigned __int64 v17; // r0
  float v18; // s16
  __int16 *v19; // r3
  int v20; // kr00_4
  __int16 v21; // r7
  unsigned int v22; // r1
  int v23; // r0
  unsigned int v24; // r2
  __int16 *v25; // r3
  int v26; // kr04_4
  __int16 v27; // r7
  unsigned __int64 v28; // r0
  float v29; // s0
  float *v30; // r2
  float *v31; // r3
  int result; // r0
  float v33; // [sp+8h] [bp-30h] BYREF
  _DWORD v34[11]; // [sp+Ch] [bp-2Ch] BYREF

  if ( !a3 )
    nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
  v6 = FIELD_U32(a1, 1576);
  v7 = a2;
  if ( v6 != 1 )
  {
    v8 = FIELD_U32(a1, 1580);
    if ( v8 < 0 )
    {
      nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0);
      v6 = FIELD_U32(a1, 1576);
      v8 = FIELD_U32(a1, 1580);
    }
    v7 = (__int16 *)(a1 + 2072);
    v9 = a1 + 768 * v8;
    v10 = FIELD_U32(v9, 368);
    v11 = *(char **)(v9 + 364);
    v12 = (_DWORD *)(v9 + (v10 >> 1));
    if ( (v10 & 1) != 0 )
      v11 = *(char **)&v11[*v12];
    ((void (__fastcall *)(_DWORD *, __int16 *, int, int, int))v11)(v12, a2, a1 + 2072, v6 * FIELD_U32(a1, 1584), 1);
  }
  v13 = 0;
  sub_607DE2AC(a1, v7, 0, a3, a3 + 1);
  sub_607DE2AC(a1, v7, 1, a3 + 2, a3 + 3);
  FIELD_U32(a1, 1588) += FIELD_U32(a1, 1584);
  sub_607DD710(a1 + 1536, a3, a1 + 1592);
  v14 = FIELD_U32(a1, 1576);
  v15 = FIELD_U32(a1, 1584);
  v16 = v14 * v15;
  if ( !(v14 * v15) )
  {
    v18 = 0.0;
    if ( v15 )
      goto LABEL_19;
LABEL_22:
    v23 = 0;
    v24 = 0;
    goto LABEL_26;
  }
  if ( (v16 & 1) != 0 )
  {
    v13 = 1;
    v17 = (unsigned int)(*a2 * *a2);
    if ( v16 == 1 )
      goto LABEL_18;
  }
  else
  {
    v17 = 0;
    if ( v16 == 1 )
      goto LABEL_18;
  }
  v19 = &a2[v13 + 1];
  do
  {
    v13 += 2;
    v20 = *(v19 - 1) * *(v19 - 1);
    v21 = *v19;
    v19 += 2;
    v17 += (unsigned int)v20 + (unsigned __int64)(unsigned int)(v21 * v21);
  }
  while ( v13 < v16 );
LABEL_18:
  v18 = (float)v17;
  if ( !v15 )
    goto LABEL_22;
LABEL_19:
  if ( (v15 & 1) != 0 )
  {
    v24 = 0;
    v22 = 1;
    v23 = FIELD_S16(a1, 1592) * FIELD_S16(a1, 1592);
    if ( v15 == 1 )
      goto LABEL_26;
  }
  else
  {
    v22 = 0;
    v23 = 0;
    v24 = 0;
    if ( v15 == 1 )
      goto LABEL_26;
  }
  v25 = (__int16 *)(a1 + 2 * v22 + 1594);
  do
  {
    v22 += 2;
    v26 = *(v25 - 1) * *(v25 - 1);
    v27 = *v25;
    v25 += 2;
    v24 = (__PAIR64__(v24, v26) + (unsigned int)v23 + (unsigned int)(v27 * v27)) >> 32;
    v23 += v26 + v27 * v27;
  }
  while ( v22 < v15 );
LABEL_26:
  v28 = __PAIR64__(v24, v23) * v14;
  if ( v28 )
  {
    v29 = sqrtf(v18 / (float)v28);
    v30 = (float *)v34;
    v34[0] = 1065353216;
    v31 = (float *)v34;
    v33 = v29 * *a3;
    if ( v33 < 1.0 )
      v31 = &v33;
    *a3 = *v31;
    v34[0] = 1065353216;
    v33 = v29 * a3[2];
    if ( v33 < 1.0 )
      v30 = &v33;
    result = *(_DWORD *)v30;
  }
  else
  {
    result = 0;
    *a3 = 0.0;
  }
  *((_DWORD *)a3 + 2) = result;
  return result;
}
