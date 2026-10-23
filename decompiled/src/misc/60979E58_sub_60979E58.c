/* sub_60979E58
 * address: 0x60979E58   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60979E58(int a1)
{
  char v2; // r1
  unsigned __int8 v3; // r0
  int v4; // r8
  int v5; // r9
  unsigned int i; // r10
  int v7; // r0
  _BYTE *v8; // r0
  char v9; // r2
  char v10; // t1
  char v11; // r1
  char v12; // r1
  int v13; // r5
  int v14; // r3
  int v15; // r2
  int v16; // r6
  unsigned __int16 *v17; // r7
  _DWORD *v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r7
  float v22; // s16
  int v23; // r6
  int v24; // s1
  int v25; // s2
  int v26; // s3
  int v27; // s1
  int v28; // s2
  int v29; // s3
  char v30; // r0
  int v31; // r1
  int v32; // r1
  bool v33; // zf
  int result; // r0

  FIELD_U32(a1, 1584) = 0;
  FIELD_U32(a1, 1588) = 0;
  FIELD_U32(a1, 1592) = 1065353216;
  v2 = FIELD_U8(a1, 840);
  FIELD_U8(a1, 840) = v2 & 0xDF;
  if ( (v2 & 2) != 0 )
  {
    if ( (v2 & 0x18) == 8 )
      FIELD_U8(a1, 840) = v2 & 0xCF | 0x10;
    v3 = 0;
    FIELD_U8(a1, 843) = 0;
    v4 = FIELD_U32(a1, 20);
    if ( !v4 )
      goto LABEL_47;
    v5 = FIELD_U32(a1, 24);
    for ( i = 0; i != v4; ++i )
    {
      v13 = FIELD_U32(a1, 1616);
      v14 = a1;
      do
      {
        v15 = v14;
        v14 = FIELD_U32(v14, 208);
      }
      while ( v14 );
      v16 = v3;
      if ( FIELD_U32(a1, 1612) > i )
        v13 += 216 * i;
      if ( !FIELD_U32(v15, 1764) && (FIELD_U8(a1, 840) & 1) != 0 )
      {
        v7 = 92 * v3 + a1;
        v10 = FIELD_U8(v7, 851);
        v8 = (_BYTE *)(v7 + 851);
        v9 = v10;
        v11 = v10 & 0xFE;
        if ( FIELD_U8(v13, 196) )
          v11 = v9 | 1;
        *v8 = v11;
        if ( FIELD_U8(v13, 212) )
          v12 = v11 | 2;
        else
          v12 = v11 & 0xFD;
        *v8 = v12;
      }
      else
      {
        *(_BYTE *)(92 * v3 + a1 + 851) |= 3u;
      }
      v17 = *(unsigned __int16 **)(v5 + 4 * i);
      if ( sub_6097A1CC(a1, v17, v13, v16) )
      {
        if ( (*(int (__fastcall **)(unsigned __int16 *))(*(_DWORD *)v17 + 88))(v17) == FIELD_U32(a1, 1940)
          && v17[54] == FIELD_U32(a1, 1920) )
        {
          v18 = (_DWORD *)(92 * (__int16)v16 + a1);
          v19 = v18[219];
          v20 = v18[220];
          v21 = v18[221];
          FIELD_U32(a1, 1596) = v18[218];
          FIELD_U32(a1, 1600) = v19;
          FIELD_U32(a1, 1604) = v20;
          FIELD_U32(a1, 1608) = v21;
          FIELD_U32(a1, 1584) = v18[230];
          FIELD_U32(a1, 1588) = v18[231];
          FIELD_U32(a1, 1592) = v18[232];
        }
        v22 = FIELD_F32(v13, 28);
        v23 = 92 * (__int16)v16 + a1;
        FIELD_F32(v23, 904) = sub_6090B1D8((float *)(v23 + 872), v22);
        FIELD_U32(v23, 908) = v24;
        FIELD_U32(v23, 912) = v25;
        FIELD_U32(v23, 916) = v26;
        FIELD_F32(v23, 888) = sub_6090B1D8((float *)(v23 + 856), v22);
        FIELD_U32(v23, 892) = v27;
        FIELD_U32(v23, 896) = v28;
        FIELD_U32(v23, 900) = v29;
        v3 = FIELD_U8(a1, 843) + 1;
        FIELD_U8(a1, 843) = v3;
      }
      else
      {
        v3 = FIELD_U8(a1, 843);
      }
    }
    if ( !v3 )
    {
LABEL_47:
      if ( !sub_6090B200((float *)(a1 + 856), dword_60B45CCC) || !sub_6090B200((float *)(a1 + 872), dword_60B45CCC) )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        FIELD_U32(a1, 856) = 0;
        FIELD_U32(a1, 860) = 0;
        FIELD_U32(a1, 864) = 0;
        FIELD_U32(a1, 868) = 1065353216;
        FIELD_U32(a1, 872) = 0;
        FIELD_U32(a1, 876) = 0;
        FIELD_U32(a1, 880) = 0;
        FIELD_U32(a1, 884) = 1065353216;
      }
      if ( FIELD_F32(a1, 920) != 0.0 || FIELD_F32(a1, 924) != 0.0 || FIELD_F32(a1, 928) != 1.0 )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        FIELD_U32(a1, 920) = 0;
        FIELD_U32(a1, 924) = 0;
        FIELD_U32(a1, 928) = 1065353216;
      }
      if ( FIELD_U8(a1, 849) )
      {
        FIELD_U8(a1, 840) |= 0x10u;
        FIELD_U8(a1, 849) = 0;
      }
    }
  }
  v30 = FIELD_U8(a1, 840);
  if ( (v30 & 0x10) != 0 )
    goto LABEL_43;
  v31 = FIELD_U32(a1, 208);
  v32 = v31 ? FIELD_U32(v31, 1956) : FIELD_U32(a1, 1956);
  v33 = v32 == 2;
  if ( v32 != 2 )
    v33 = FIELD_U8(a1, 843) == 0;
  if ( !v33 )
  {
LABEL_43:
    v30 |= 0x20u;
    FIELD_U8(a1, 840) = v30;
  }
  result = v30 & 0xE3;
  FIELD_U8(a1, 840) = result;
  return result;
}
