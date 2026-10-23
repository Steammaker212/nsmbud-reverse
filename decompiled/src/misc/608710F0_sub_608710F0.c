/* sub_608710F0
 * address: 0x608710F0   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608710F0(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int v4; // r9
  int v5; // r7
  int v6; // r8
  int result; // r0
  int v8; // r11
  _DWORD *v9; // r4
  int *v10; // r5
  int v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r6
  int v15; // r0
  int v16; // r1
  int v17; // r7
  _DWORD *v18; // r4
  int *v19; // r5
  int v20; // r6
  int v21; // r0
  int v22; // r0
  int v23; // r6
  int v24; // r0
  int v25; // r1
  int v26; // r6
  _DWORD *v27; // r4
  int *v28; // r7
  int v29; // r5
  int v30; // r0
  int v31; // r0
  int v32; // r5
  int v33; // r0
  int v34; // r1

  v2 = 0;
  v3 = FIELD_U16(a1, 44);
  v4 = FIELD_U32(a1, 32);
  if ( (v3 & 4) == 0 )
  {
    v2 = 1;
    if ( (v3 & 0x10) == 0 )
      v2 = (~(v3 >> 2) & 2) + 2;
  }
  v5 = FIELD_U8(v4, 221);
  v6 = FIELD_U32(v4, 144);
  result = *(_DWORD *)(FIELD_U32(a1, 24) + dword_60BF9D80[v2]);
  v8 = FIELD_U32(result, 104);
  if ( FIELD_U8(v4, 221) )
  {
    v9 = *(_DWORD **)v6;
    v10 = (int *)(*(_DWORD *)a1 + 8);
    do
    {
      v11 = -1;
      v12 = -1;
      if ( *v9 )
        v12 = sub_6083BDB8(v8, 0, 2, (const char *)(*v9 + 2));
      *(v10 - 2) = v12;
      v13 = v9[2];
      if ( v13 )
        v11 = sub_6083BDB8(v8, 3, 2, (const char *)(v13 + 2));
      *(v10 - 1) = v11;
      v14 = -1;
      v15 = -1;
      v16 = v9[4];
      if ( v16 )
        v15 = sub_6083BDB8(v8, 4, 2, (const char *)(v16 + 2));
      *v10 = v15;
      result = v9[6];
      if ( result )
      {
        result = sub_6083BDB8(v8, 5, 2, (const char *)(result + 2));
        v14 = result;
      }
      v10[1] = v14;
      v9 += 8;
      --v5;
      v10 += 4;
    }
    while ( v5 );
  }
  v17 = FIELD_U8(v4, 222);
  if ( FIELD_U8(v4, 222) )
  {
    v18 = *(_DWORD **)(v6 + 8);
    v19 = (int *)(FIELD_U32(a1, 8) + 8);
    do
    {
      v20 = -1;
      v21 = -1;
      if ( *v18 )
        v21 = sub_6083BDB8(v8, 0, 3, (const char *)(*v18 + 2));
      *(v19 - 2) = v21;
      v22 = v18[2];
      if ( v22 )
        v20 = sub_6083BDB8(v8, 3, 3, (const char *)(v22 + 2));
      *(v19 - 1) = v20;
      v23 = -1;
      v24 = -1;
      v25 = v18[4];
      if ( v25 )
        v24 = sub_6083BDB8(v8, 4, 3, (const char *)(v25 + 2));
      *v19 = v24;
      result = v18[6];
      if ( result )
      {
        result = sub_6083BDB8(v8, 5, 3, (const char *)(result + 2));
        v23 = result;
      }
      v19[1] = v23;
      v18 += 8;
      --v17;
      v19 += 4;
    }
    while ( v17 );
  }
  v26 = FIELD_U8(v4, 227);
  if ( FIELD_U8(v4, 227) )
  {
    v27 = *(_DWORD **)(v6 + 16);
    v28 = (int *)(FIELD_U32(a1, 16) + 8);
    do
    {
      v29 = -1;
      v30 = -1;
      if ( *v27 )
        v30 = sub_6083BDB8(v8, 0, 4, (const char *)(*v27 + 2));
      *(v28 - 2) = v30;
      v31 = v27[2];
      if ( v31 )
        v29 = sub_6083BDB8(v8, 3, 4, (const char *)(v31 + 2));
      *(v28 - 1) = v29;
      v32 = -1;
      v33 = -1;
      v34 = v27[4];
      if ( v34 )
        v33 = sub_6083BDB8(v8, 4, 4, (const char *)(v34 + 2));
      *v28 = v33;
      result = v27[6];
      if ( result )
      {
        result = sub_6083BDB8(v8, 5, 4, (const char *)(result + 2));
        v32 = result;
      }
      v28[1] = v32;
      v27 += 8;
      --v26;
      v28 += 4;
    }
    while ( v26 );
  }
  return result;
}
