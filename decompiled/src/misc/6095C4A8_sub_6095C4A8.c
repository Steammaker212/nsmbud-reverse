/* sub_6095C4A8
 * address: 0x6095C4A8   size: 1020   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095C4A8(int a1)
{
  int v1; // r10
  int v2; // r3
  int v3; // r5
  int v4; // r4
  int v5; // r11
  int v6; // r6
  int *v7; // r8
  int v8; // r10
  int v9; // r6
  int v10; // t1
  int v11; // r0
  int v12; // r1
  int i; // r2
  int v14; // r0
  int v15; // r8
  int v16; // r4
  int *v17; // r11
  int v18; // r9
  int v19; // r10
  int v20; // r6
  int v21; // r4
  int v22; // t1
  int v23; // r0
  int v24; // r1
  int j; // r2
  int v26; // r8
  int v27; // r6
  int v28; // r1
  int v29; // r7
  int v30; // r2
  int v31; // r0
  int v32; // r4
  int v33; // r5
  _DWORD *v34; // r5
  int v35; // r0
  int v36; // r5
  int v37; // r2
  int v38; // r0
  int v39; // t1
  int v41; // [sp+4h] [bp-3Ch]
  int v42; // [sp+8h] [bp-38h]
  int v43; // [sp+10h] [bp-30h]
  int v44; // [sp+10h] [bp-30h]
  int v45; // [sp+14h] [bp-2Ch]

  v1 = a1;
  v42 = FIELD_U32(a1, 400);
  if ( v42 )
  {
    v2 = 0;
    v41 = FIELD_U32(a1, 404);
    do
    {
      v45 = v2;
      v3 = v41 + 2088 * v2;
      FIELD_U32(v3, 1728) = 0;
      v43 = FIELD_U32(v1, 400);
      if ( v43 )
      {
        v4 = FIELD_U32(v1, 404);
        v5 = 0;
        v6 = v3 + 1972;
        v7 = (int *)(v3 + 1976);
        while ( 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
          v8 = *v7;
          v9 = v4 + 2088 * v5;
          v10 = FIELD_U32(v9, 84);
          v9 += 84;
          (*(void (__fastcall **)(int))(v10 + 12))(v9);
          v11 = FIELD_U32(v9, 4);
          if ( v8 == v11 )
            break;
          v12 = *v7;
          for ( i = 1; *(unsigned __int8 *)(v12 + i - 1) == *(unsigned __int8 *)(v11 + i - 1); i += 2 )
          {
            if ( !*(_BYTE *)(v12 + i - 1) )
              goto LABEL_16;
            if ( i >= 524289 || *(unsigned __int8 *)(v12 + i) != *(unsigned __int8 *)(v11 + i) )
              break;
            if ( !*(_BYTE *)(v12 + i) )
              goto LABEL_16;
          }
          v1 = a1;
          v6 = v3 + 1972;
          if ( ++v5 == v43 )
            goto LABEL_15;
        }
LABEL_16:
        FIELD_U8(v3, 844) = v5;
        if ( (unsigned __int8)v5 != 255 )
        {
          v1 = a1;
          v14 = FIELD_U32(a1, 404);
          if ( FIELD_U32(a1, 400) > (unsigned int)(char)v5 )
            v14 += 2088 * (char)v5;
          goto LABEL_22;
        }
        v1 = a1;
      }
      else
      {
LABEL_15:
        FIELD_U8(v3, 844) = -1;
      }
      v14 = 0;
LABEL_22:
      FIELD_U32(v3, 208) = v14;
      LOBYTE(v15) = -1;
      v44 = FIELD_U32(v1, 400);
      if ( v44 )
      {
        v16 = FIELD_U32(v1, 404);
        v17 = (int *)(v3 + 2032);
        v15 = 0;
        v18 = v3 + 2028;
        while ( 1 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v3 + 2028);
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v3 + 2028);
          v19 = v16;
          v20 = v16 + 2088 * v15;
          v21 = *v17;
          v22 = FIELD_U32(v20, 84);
          v20 += 84;
          (*(void (__fastcall **)(int))(v22 + 12))(v20);
          v23 = FIELD_U32(v20, 4);
          if ( v21 == v23 )
            break;
          v24 = *v17;
          for ( j = 1; *(unsigned __int8 *)(v24 + j - 1) == *(unsigned __int8 *)(v23 + j - 1); j += 2 )
          {
            if ( !*(_BYTE *)(v24 + j - 1) )
              goto LABEL_35;
            if ( j >= 524289 || *(unsigned __int8 *)(v24 + j) != *(unsigned __int8 *)(v23 + j) )
              break;
            if ( !*(_BYTE *)(v24 + j) )
              goto LABEL_35;
          }
          ++v15;
          v16 = v19;
          if ( v15 == v44 )
          {
            LOBYTE(v15) = -1;
            break;
          }
        }
LABEL_35:
        v1 = a1;
      }
      FIELD_U8(v3, 845) = v15;
      FIELD_U8(v3, 842) = 0;
      v2 = v45 + 1;
    }
    while ( v45 + 1 != v42 );
  }
  v26 = v1 + 420;
  sub_608DEA40((char *)(v1 + 420), FIELD_U32(v1, 432), (int (__fastcall *)(char *, char *))sub_6097C4F0);
  v27 = FIELD_U32(v1, 424);
  v28 = FIELD_U32(v1, 432);
  if ( v27 != v1 + 420 )
  {
    v29 = v27 - v28;
    v30 = 0;
    do
    {
      if ( !FIELD_U32(v29, 208) )
      {
        v31 = v30++ << 9;
        FIELD_U32(v29, 2084) = v31;
      }
      v27 = FIELD_U32(v27, 4);
      v29 = v27 - v28;
    }
    while ( v27 - v28 != v26 - v28 );
    v27 = FIELD_U32(v1, 424);
    v28 = FIELD_U32(v1, 432);
    if ( v27 != v26 )
    {
      v32 = v27 - v28;
      do
      {
        v33 = FIELD_U32(v32, 208);
        if ( v33 )
        {
          FIELD_U32(v32, 2084) = FIELD_U32(v33, 2084) + 2 * v30;
          FIELD_U8(v33, 842) = 0;
          v34 = *(_DWORD **)(v32 + 208);
          v35 = v34[432];
          if ( v35 < v34[433] )
          {
            *(_DWORD *)(v34[434] + 4 * v35) = v32;
            ++v34[432];
          }
          LOBYTE(v36) = 0;
          if ( (FIELD_U8(v1, 9748) & 4) == 0 )
            v36 = *(_DWORD *)(FIELD_U32(v32, 208) + 1728);
          ++v30;
          FIELD_U8(v32, 842) = v36;
        }
        v27 = FIELD_U32(v27, 4);
        v32 = v27 - v28;
      }
      while ( v27 - v28 != v26 - v28 );
      v27 = FIELD_U32(v1, 424);
      v28 = FIELD_U32(v1, 432);
    }
  }
  if ( v27 != v26 )
  {
    v37 = v26 - v28;
    v38 = v27;
    do
      v38 = FIELD_U32(v38, 4);
    while ( v38 - v28 != v37 );
    for ( ; v27 - v28 != v37; v27 = FIELD_U32(v27, 4) )
      ;
  }
  v39 = FIELD_U16(v1, 9748);
  FIELD_U16(v1, 9748) = v39 | 0x40;
  return v39 | 0x40;
}
