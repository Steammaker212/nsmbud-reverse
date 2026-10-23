/* gsys_area_env_index_diffuse_ref
 * address: 0x60428A54   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall gsys_area_env_index_diffuse_ref(int a1, int a2)
{
  int v2; // r5
  int v4; // r6
  _DWORD *v5; // r10
  int v6; // r8
  int v7; // r9
  int v8; // r0
  int v9; // r5
  int *v10; // r7
  int v11; // r4
  int v12; // r7
  int v13; // r6
  unsigned __int16 *v14; // r0
  unsigned int v15; // r5
  size_t v16; // r2
  int v17; // r0
  int v18; // r1
  int i; // r7
  int v20; // r10
  int v21; // r4
  const char *v22; // r6
  size_t v23; // r5
  int v24; // r0
  int v25; // r1
  int *v26; // r8
  int v27; // r2
  int v28; // r3
  unsigned __int16 *v29; // r0
  size_t v30; // r9
  size_t v31; // r2
  int v32; // r0
  int v33; // r1
  int result; // r0
  int v35; // [sp+8h] [bp-28h]

  v2 = a1;
  FIELD_U16(a1, 10) = -1;
  FIELD_U16(a1, 8) = -1;
  FIELD_U16(a1, 6) = -1;
  FIELD_U16(a1, 4) = -1;
  v4 = a1 + 16;
  FIELD_U8(a1, 760) = -1;
  sub_6043DB2C(a1 + 16);
  sub_60437A74(v2 + 456, v2);
  sub_6043DB38(v4, FIELD_U32(a2, 4), v2);
  v35 = v2;
  if ( (FIELD_U32(v2, 128) & 3) != 3 )
    goto LABEL_22;
  v5 = *(_DWORD **)(v2 + 12);
  v6 = -1;
  v7 = v5[24];
  if ( v7 )
  {
    v8 = FIELD_U16(v7, 12);
    v10 = (int *)(v7 + 8 + 16 * v8);
    v9 = *v10;
    if ( FIELD_U32(v7, 8) < *v10 )
    {
      v11 = v7 + 8;
      do
      {
        v12 = 0;
        if ( (unsigned int)(v9 >> 3) <= 0x1A )
          v12 = ((unsigned __int8)aGsysAreaEnvInd[26 - (v9 >> 3)] >> (v9 & 7)) & 1;
        v13 = *(_DWORD *)(v11 + 16 * v8);
        v8 = *(unsigned __int16 *)(v11 + 16 * v8 + 2 * v12 + 4);
        v10 = (int *)(v11 + 16 * v8);
        v9 = *v10;
      }
      while ( v13 < *v10 );
    }
    v14 = (unsigned __int16 *)v10[2];
    v15 = *v14;
    v16 = v15;
    if ( v15 >= 0x1B )
      v16 = 27;
    if ( v16 )
    {
      v17 = memcmp(v14 + 1, "gsys_area_env_index_diffuse", v16);
      v18 = v17;
      if ( !v17 )
        v18 = 1;
      if ( v15 > 0x1B || v17 )
        goto LABEL_19;
      goto LABEL_17;
    }
    if ( v15 <= 0x1B )
    {
LABEL_17:
      v18 = 0;
      if ( v15 < 0x1B )
        v18 = -1;
LABEL_19:
      if ( !v18 )
        v6 = ((int)v10 - v7 - 24) >> 4;
    }
  }
  v2 = v35;
  FIELD_U8(v35, 760) = (int)*(float *)(v5[26] + *(unsigned __int16 *)(v5[22] + 32 * v6 + 18));
LABEL_22:
  for ( i = 0; i != 4; ++i )
  {
    LOWORD(v20) = -1;
    v21 = *(_DWORD *)(FIELD_U32(v2, 12) + 96);
    if ( !v21 )
      goto LABEL_42;
    v22 = off_60BFA464[i];
    v23 = strlen(v22);
    v24 = FIELD_U16(v21, 12);
    v26 = (int *)(v21 + 8 + 16 * v24);
    v25 = *v26;
    if ( FIELD_U32(v21, 8) < *v26 )
    {
      do
      {
        v27 = 0;
        if ( v23 > v25 >> 3 )
          v27 = ((unsigned __int8)v22[v23 + ~(v25 >> 3)] >> (v25 & 7)) & 1;
        v28 = *(_DWORD *)(v21 + 8 + 16 * v24);
        v24 = *(unsigned __int16 *)(v21 + 8 + 16 * v24 + 2 * v27 + 4);
        v26 = (int *)(v21 + 8 + 16 * v24);
        v25 = *v26;
      }
      while ( v28 < *v26 );
    }
    v29 = (unsigned __int16 *)v26[2];
    v30 = *v29;
    v31 = v30;
    if ( v23 < v30 )
      v31 = v23;
    if ( v31 )
    {
      v32 = memcmp(v29 + 1, v22, v31);
      v33 = 1;
      if ( v32 )
        v33 = v32;
      if ( v23 < v30 || v32 )
        goto LABEL_40;
    }
    else if ( v23 < v30 )
    {
      v2 = v35;
      goto LABEL_42;
    }
    v33 = 0;
    if ( v30 < v23 )
      v33 = -1;
LABEL_40:
    v2 = v35;
    if ( !v33 )
      v20 = ((int)v26 - v21 - 24) >> 4;
LABEL_42:
    result = v2 + 2 * i;
    FIELD_U16(result, 4) = v20;
  }
  return result;
}
