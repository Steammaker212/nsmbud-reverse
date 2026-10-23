/* sub_602207C8
 * address: 0x602207C8   size: 1168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602207C8(int a1)
{
  _DWORD *v1; // r10
  int v2; // r4
  int *v3; // r8
  int v4; // r0
  int v6; // r5
  int *v7; // r0
  int *v8; // r11
  int v9; // r5
  int v10; // r8
  int v11; // r9
  int v12; // r10
  int v13; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r5
  int v22; // r1
  _DWORD *v23; // r2
  int v24; // r3
  bool v25; // zf
  int v26; // r1
  int v27; // r3
  bool v28; // zf
  int v29; // r1
  _DWORD v31[3]; // [sp+Ch] [bp-64h] BYREF
  int v32; // [sp+18h] [bp-58h] BYREF
  int v33; // [sp+1Ch] [bp-54h]
  int *v34; // [sp+20h] [bp-50h]
  int v35; // [sp+24h] [bp-4Ch] BYREF
  unsigned int v36[13]; // [sp+3Ch] [bp-34h] BYREF

  memset((void *)(a1 + 16), 0, 40);
  v1 = v31;
  v2 = 0;
  v3 = &dword_60C8D4EC;
  do
  {
    while ( 1 )
    {
      v6 = sub_6021EE50(1, v2);
      v7 = (int *)sub_60186FEC(dword_60CC6D78 + 984, 1u, v2);
      if ( v6 == -1 || v7[3] )
        goto LABEL_6;
      v8 = v3;
      v9 = *v7;
      v10 = v7[1];
      v11 = (int)v1;
      v12 = v7[2];
      v32 = 0;
      v33 = 0;
      v34 = 0;
      sub_608DEB0C(&v32, 6, (int)&v35);
      v31[0] = v9;
      v31[1] = v10;
      v31[2] = v12;
      v1 = (_DWORD *)v11;
      v13 = sub_601DFFE4(v11);
      v14 = sub_6022036C(v13, v11, 0);
      if ( v14 )
      {
        v14 = sub_60178694(v13, 0);
        if ( v32 < v33 )
        {
          v34[v32] = v14;
          v14 = ++v32;
        }
      }
      v15 = sub_6022036C(v14, v11, 1u);
      if ( v15 )
      {
        v15 = sub_60178694(v13, 1u);
        if ( v32 < v33 )
        {
          v34[v32] = v15;
          v15 = ++v32;
        }
      }
      v16 = sub_6022036C(v15, v11, 2u);
      v3 = v8;
      if ( v16 == 1 )
      {
        v16 = sub_60178694(v13, 2u);
        if ( v32 < v33 )
        {
          v34[v32] = v16;
          v16 = ++v32;
        }
      }
      v17 = sub_6022036C(v16, v11, 3u);
      if ( v17 == 1 )
      {
        v17 = sub_60178694(v13, 3u);
        if ( v32 < v33 )
        {
          v34[v32] = v17;
          v17 = ++v32;
        }
      }
      v18 = sub_6022036C(v17, v11, 4u);
      if ( v18 == 1 )
      {
        v18 = sub_60178694(v13, 4u);
        if ( v32 < v33 )
        {
          v34[v32] = v18;
          v18 = ++v32;
        }
      }
      if ( sub_6022036C(v18, v11, 5u) == 1 )
      {
        v19 = sub_60178694(v13, 5u);
        if ( v32 < v33 )
          v34[v32++] = v19;
      }
      sead__Random__init(v36);
      sub_608DEBEC(&v32, v36);
      v20 = v32;
      if ( v32 <= 0 )
        goto LABEL_2;
      if ( !v2 )
        break;
      if ( v2 != 1 )
      {
        while ( 1 )
        {
          v21 = *v34;
          memmove(v34, v34 + 1, 4 * v20 - 4);
          v26 = v32;
          v20 = --v32;
          if ( !v21 )
            goto LABEL_2;
          v27 = FIELD_U32(dword_60C8D4EC, 36);
          v28 = v27 == v21;
          if ( v27 != v21 )
            v28 = FIELD_U32(dword_60C8D4EC, 40) == v21;
          if ( !v28 )
          {
            if ( v2 != 2 )
            {
              if ( FIELD_U32(dword_60C8D4EC, 44) == v21 )
                goto LABEL_49;
              if ( v2 == 3 )
                goto LABEL_48;
            }
            if ( FIELD_U32(dword_60C8D4EC, 48) != v21 )
            {
              if ( v2 == 4 )
                goto LABEL_3;
LABEL_48:
              if ( FIELD_U32(dword_60C8D4EC, 52) != v21 )
                goto LABEL_3;
            }
          }
LABEL_49:
          if ( v26 <= 1 )
            goto LABEL_2;
        }
      }
      do
      {
        v21 = *v34;
        memmove(v34, v34 + 1, 4 * v20 - 4);
        v22 = v32;
        v20 = --v32;
        if ( !v21 )
          break;
        v23 = (_DWORD *)*v8;
        v24 = *(_DWORD *)(*v8 + 36);
        v25 = v24 == v21;
        if ( v24 != v21 )
          v25 = v23[11] == v21;
        if ( !v25 && v23[12] != v21 && v23[13] != v21 )
          goto LABEL_3;
      }
      while ( v22 > 1 );
LABEL_2:
      v2 = 0;
    }
    while ( 1 )
    {
      v21 = *v34;
      memmove(v34, v34 + 1, 4 * v20 - 4);
      v29 = v32;
      v20 = --v32;
      if ( !v21 )
        goto LABEL_2;
      if ( FIELD_U32(dword_60C8D4EC, 40) != v21
        && FIELD_U32(dword_60C8D4EC, 44) != v21
        && FIELD_U32(dword_60C8D4EC, 48) != v21
        && FIELD_U32(dword_60C8D4EC, 52) != v21 )
      {
        break;
      }
      if ( v29 <= 1 )
        goto LABEL_2;
    }
LABEL_3:
    v4 = 0;
    if ( (unsigned int)v2 < 5 )
      v4 = v2;
    *(_DWORD *)(a1 + 4 * v4 + 36) = v21;
LABEL_6:
    ++v2;
  }
  while ( v2 <= 4 );
  return 0;
}
