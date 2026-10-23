/* sub_6099AD8C
 * address: 0x6099AD8C   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6099AD8C(_DWORD *a1, unsigned int a2, unsigned __int16 a3, __int16 a4, int a5)
{
  int i; // r6
  _DWORD *v8; // r8
  char *v9; // r10
  unsigned __int8 v10; // r0
  unsigned __int8 *v11; // r10
  int v12; // t1
  int v13; // r9
  int v14; // r1
  int v15; // r3
  int v16; // r5
  int v17; // r0
  int v18; // r0
  int *v19; // r5
  int v20; // r9
  int v21; // r1
  int *v22; // r0
  char v23; // r1
  unsigned int v25; // r1
  int v26; // r1
  _DWORD *v27; // r11
  int v28; // t1
  int *v29; // [sp+0h] [bp-40h]
  int *v30; // [sp+4h] [bp-3Ch]
  _DWORD *v32; // [sp+Ch] [bp-34h]
  int (**v33)(void); // [sp+10h] [bp-30h]
  _DWORD *v34; // [sp+14h] [bp-2Ch]
  _BYTE *v35; // [sp+18h] [bp-28h]

  LOWORD(i) = a4;
  v34 = a1 + 1078;
  v8 = a1 + 1079;
  v33 = (int (**)(void))(a1 + 1071);
  v35 = (char *)a1 + 4277;
  v32 = a1 + 1077;
  v29 = a1 + 15;
  v30 = a1 + 7;
  do
  {
    v9 = (char *)a1 + (unsigned __int16)i;
    v12 = (unsigned __int8)v9[4172];
    v11 = (unsigned __int8 *)(v9 + 4172);
    v10 = v12;
    if ( !v12 )
      return 0;
    v13 = 0;
    for ( i = *((unsigned __int8 *)a1 + (unsigned __int16)i + 4204); ; ++i )
    {
      v14 = *(_DWORD *)(*v32 + 4 * i);
      if ( !v14 )
        break;
      if ( v14 >= 1 )
      {
        v15 = 0;
        while ( *(_DWORD *)(*v34 + 16 * i + 4 * v15) > a2 || *(_DWORD *)(*v8 + 16 * i + 4 * v15) < a2 )
        {
          if ( ++v15 >= v14 )
            goto LABEL_16;
        }
        break;
      }
LABEL_16:
      if ( ++v13 >= v10 )
        return 0;
    }
    if ( *v35 )
      v16 = (*v33)();
    else
      v16 = 0;
    sub_6099B034((int)a1, i, v16);
    if ( !nn__fontll__ScalableFontEngine__CheckGlyphExist((nn__fontll__ScalableFontEngine *)(a1[2] + 180 * v16), a2) )
    {
      v10 = *v11;
      goto LABEL_16;
    }
    v17 = sub_60998FD0(v30, a2, a3, (unsigned __int16)i);
    if ( v17 )
    {
      v25 = FIELD_U8(v17, 32);
      FIELD_U8(v17, 32) = v25 | 1;
      if ( a5 >= 0 )
        FIELD_U32(v17, 36) |= 1 << a5;
      return (v25 >> 1) & 1;
    }
    v18 = sub_6099902C(v30, a2, a3, i);
    if ( v18 )
    {
      FIELD_U8(v18, 32) |= 3u;
      if ( a5 >= 0 )
        FIELD_U32(v18, 36) |= 1 << a5;
      v26 = *(_DWORD *)v18;
      v28 = a1[11];
      v27 = a1 + 11;
      *(_DWORD *)v18 = v28;
      FIELD_U32(v26, 4) = v27;
      *(_DWORD *)(*v27 + 4) = v18;
      *v27 = v26;
      return 1;
    }
    v19 = (int *)a1[16];
    v20 = 0;
    while ( 1 )
    {
      v22 = v19;
      if ( v19 == v29 )
        break;
      v23 = *((_BYTE *)v19 + 32);
      v19 = (int *)v19[1];
      if ( (v23 & 0x11) == 0 )
      {
        v21 = *v19;
        *(_DWORD *)(*v22 + 4) = v19;
        *v19 = *v22;
        FIELD_U32(v21, 4) = v22;
        *v22 = v21;
        sub_60999294(v30);
        ++v20;
      }
    }
  }
  while ( v20 );
  a1[1068] = 1;
  return 0;
}
