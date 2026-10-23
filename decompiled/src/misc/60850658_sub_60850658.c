/* sub_60850658
 * address: 0x60850658   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850658(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  unsigned __int8 v7; // r1
  int v8; // lr
  int v9; // r5
  int v10; // r7
  int v11; // r8
  int v12; // r3
  int *v13; // r10
  unsigned __int8 v14; // r0
  int *v15; // r4
  int v16; // r11
  unsigned __int8 *v17; // r1
  int v18; // r2
  unsigned int v19; // r3
  int v20; // r1
  int v21; // r2
  bool v22; // cc
  unsigned int v23; // r2
  unsigned int v24; // r3
  int v25; // r1
  bool v26; // cc
  int v27; // r3
  unsigned int v28; // r2
  _DWORD *v29; // r2
  unsigned int v30; // r4
  int v31; // r5
  int v32; // r1
  int v33; // r4
  int v34; // r0
  unsigned int v35; // r3
  int v36; // r1
  int v37; // r0
  int v38; // [sp+4h] [bp-34h]
  int v39; // [sp+8h] [bp-30h]
  int v40; // [sp+Ch] [bp-2Ch]

  result = 0;
  if ( FIELD_U16(a1, 32) >= (unsigned int)FIELD_U16(a1, 34) )
    return result;
  if ( FIELD_U8(a3, 29) == 2 )
    v6 = a3 + FIELD_U32(a3, 32);
  else
    v6 = a3 + 32;
  v39 = v6;
  v7 = FIELD_U8(a3, 28);
  if ( !v7 )
  {
LABEL_64:
    v36 = FIELD_U16(a1, 32);
    v37 = FIELD_U32(a1, 28);
    FIELD_U16(a1, 32) = v36 + 1;
    *(_DWORD *)(v37 + 8 * v36) = a2;
    *(_DWORD *)(v37 + 8 * v36 + 4) = a3;
    return 1;
  }
  v8 = 1347701829;
  v9 = 1128352838;
  v10 = 1129139270;
  v11 = 1;
  v12 = 0;
  v38 = a3;
  do
  {
    v13 = (int *)(a3 + *(_DWORD *)(v39 + 4 * v12));
    v14 = *((_BYTE *)v13 + 4);
    if ( !v14 )
      goto LABEL_62;
    v15 = v13 + 2;
    v16 = 0;
    v40 = v12;
    do
    {
      v17 = (unsigned __int8 *)v13 + v15[v16];
      v18 = *v13;
      if ( *v13 <= v8 )
      {
        if ( v18 == v9 )
        {
          v27 = v17[1];
          v20 = v17[2];
          v21 = FIELD_U8(a2, 13) & 2;
          if ( (FIELD_U8(a2, 13) & 2) != 0 )
            v21 = v11;
          if ( v27 )
            v21 = 0;
          goto LABEL_55;
        }
        if ( v18 != v10 )
        {
          if ( v18 != 1296649286 )
            goto LABEL_60;
          v19 = v17[1];
          v20 = v17[2];
          v21 = FIELD_U8(a2, 13) & 0x10;
          if ( (FIELD_U8(a2, 13) & 0x10) != 0 )
            v21 = v11;
          v22 = v19 > 2;
          goto LABEL_53;
        }
        v28 = v17[1];
        v25 = v17[2];
        v26 = v28 > 0x37;
LABEL_30:
        if ( v26 )
          v11 = 0;
        if ( v25 != 2 )
          v11 = 0;
        goto LABEL_60;
      }
      if ( v18 != 1347701830 )
      {
        if ( v18 == 1397115974 )
        {
          v35 = v17[1];
          v20 = v17[2];
          v21 = FIELD_U8(a2, 13) & 0x80;
          if ( (FIELD_U8(a2, 13) & 0x80) != 0 )
            v21 = v11;
          v22 = v35 > 6;
LABEL_53:
          if ( v22 )
            v21 = 0;
LABEL_55:
          if ( v20 != 2 )
            v21 = 0;
          v11 = v21;
          goto LABEL_60;
        }
        if ( v18 != 1398033478 )
          goto LABEL_60;
        v23 = *v17;
        v24 = v17[1];
        v25 = v17[2];
        if ( v23 > 2 )
          v11 = 0;
        v15 = v13 + 2;
        if ( ((FIELD_U32(a2, 12) >> 2) & 3u) <= v23 )
          v11 = 0;
        v26 = v24 > 4;
        goto LABEL_30;
      }
      v29 = *(_DWORD **)(a1 + 24);
      v30 = *v17;
      v31 = v17[1];
      v32 = v17[2];
      if ( !v29 )
        v11 = 0;
      if ( (FIELD_U32(a2, 16) & 3u) <= v30 )
        v11 = 0;
      if ( v32 != 1 )
        v11 = 0;
      if ( v31 )
        v11 = 0;
      if ( *(_WORD *)(FIELD_U32(a1, 12) + 12) )
      {
        v10 = v8;
        v9 = a2;
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v29 + 24))(*v29) == 1 )
        {
          v33 = 1;
          while ( v33 < *(unsigned __int16 *)(FIELD_U32(a1, 12) + 12) )
          {
            v34 = *(_DWORD *)(FIELD_U32(a1, 24) + 4 * v33++);
            if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v34 + 24))(v34) )
              goto LABEL_48;
          }
        }
        else
        {
LABEL_48:
          v11 = 0;
        }
        v15 = v13 + 2;
        v14 = *((_BYTE *)v13 + 4);
        a2 = v9;
        LOWORD(v9) = 19526;
        v8 = v10;
        LOWORD(v10) = 19526;
      }
      else
      {
        v15 = v13 + 2;
        LOWORD(v9) = 19526;
        LOWORD(v10) = 19526;
      }
      HIWORD(v9) = 17217;
      HIWORD(v10) = 17229;
LABEL_60:
      ++v16;
    }
    while ( v16 < v14 );
    a3 = v38;
    v12 = v40;
    v7 = FIELD_U8(v38, 28);
LABEL_62:
    ++v12;
  }
  while ( v12 < v7 );
  result = 1;
  if ( (v11 & 1) != 0 )
    goto LABEL_64;
  return result;
}
