/* sub_60513080
 * address: 0x60513080   size: 1180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60513080(int a1)
{
  int v2; // r4
  int v3; // r6
  int v4; // r9
  int v5; // r8
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int i; // r3
  unsigned int v10; // r0
  int v11; // r8
  int v12; // r10
  int v13; // r7
  int v14; // r1
  int v15; // r0
  char v16; // r11
  unsigned int v17; // r5
  int v18; // r0
  int v19; // r4
  int v20; // r0
  int v21; // r1
  int j; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r1
  int *v26; // r4
  unsigned int v27; // r5
  int v28; // r0
  int *v29; // r0
  unsigned int result; // r0
  _BOOL4 v31; // r6
  _BOOL4 v32; // r7
  int v33; // r1
  int v34; // r8
  int v35; // r4
  int v36; // r0
  unsigned int v37; // s0
  int v38; // r1
  int v39; // r2
  int k; // r7
  int v41; // r4
  unsigned int v42; // r5
  int v43; // [sp+0h] [bp-30h]
  int v44; // [sp+4h] [bp-2Ch]
  int v45; // [sp+8h] [bp-28h]

  sub_60502548(a1 + 3704);
  v2 = 0;
  FIELD_U16(a1, 4756) = 0;
  v44 = a1 + 3744;
  sub_6047EABC((_DWORD *)(a1 + 3744));
  v3 = sub_605117A0(a1);
  v4 = a1 + 56;
  v45 = a1;
  v5 = dword_60CA84C4;
  v6 = sub_6047482C(a1 + 56, 5u);
  v7 = 0;
  if ( v6 )
  {
    v8 = FIELD_U32(v6, 56);
    if ( v5 == v8 )
    {
LABEL_10:
      v7 = 0;
      v10 = (int)FIELD_F32(v6, 16);
      if ( v10 <= 4 )
        v7 = dword_60B03830[v10];
    }
    else
    {
      for ( i = 1; *(unsigned __int8 *)(v5 + i - 1) == *(unsigned __int8 *)(v8 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v5 + i - 1) )
          goto LABEL_10;
        if ( i >= 524289 || *(unsigned __int8 *)(v5 + i) != *(unsigned __int8 *)(v8 + i) )
          break;
        if ( !*(_BYTE *)(v5 + i) )
          goto LABEL_10;
      }
      v7 = 0;
    }
  }
  v43 = a1 + 56;
  v11 = v7 + v3;
  v12 = a1 + 5784;
  v13 = a1 + 3756;
  do
  {
    v14 = *(_DWORD *)(v12 + 4 * v2);
    if ( v14 != 256 )
    {
      v15 = sub_608DE61C(v13, v14) - FIELD_U32(v45, 3768);
      if ( v2 < v3 || v2 >= v11 )
      {
        v16 = 0;
        FIELD_U8(v15, 208) = 0;
        v17 = *(_DWORD *)(v12 + 4 * v2);
        sub_6047EE74(v44, v17);
      }
      else
      {
        v16 = 1;
        FIELD_U8(v15, 208) = 1;
        v17 = *(_DWORD *)(v12 + 4 * v2);
        sub_6047EFCC(v44, v17);
      }
      v18 = v45;
      if ( v17 < 0x100 )
        v18 = v45 + v17;
      FIELD_U8(v18, 4204) = v16;
    }
    ++v2;
  }
  while ( v2 != 35 );
  v19 = dword_60CA84C4;
  v20 = sub_6047482C(v4, 5u);
  if ( v20 )
  {
    v21 = FIELD_U32(v20, 56);
    if ( v19 == v21 )
    {
LABEL_32:
      v23 = (int)FIELD_F32(v20, 16);
      if ( (unsigned int)(v23 - 2) >= 2 && v23 )
      {
        if ( v23 != 1 )
          goto LABEL_41;
        v24 = 5920;
      }
      else
      {
        v24 = 5916;
      }
      v26 = (int *)(v45 + v24);
      v25 = *(_DWORD *)(v45 + v24);
      if ( v25 != 256 )
      {
        *(_BYTE *)(sub_608DE61C(v13, v25) - FIELD_U32(v45, 3768) + 208) = 1;
        v27 = *v26;
        sub_6047EFCC(v44, *v26);
        v28 = v45;
        if ( v27 < 0x100 )
          v28 = v45 + v27;
        FIELD_U8(v28, 4204) = 1;
      }
    }
    else
    {
      for ( j = 1; *(unsigned __int8 *)(v19 + j - 1) == *(unsigned __int8 *)(v21 + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(v19 + j - 1) )
          goto LABEL_32;
        if ( j >= 524289 || *(unsigned __int8 *)(v19 + j) != *(unsigned __int8 *)(v21 + j) )
          break;
        if ( !*(_BYTE *)(v19 + j) )
          goto LABEL_32;
      }
    }
  }
LABEL_41:
  v29 = sub_60511640(v45);
  result = *(_DWORD *)(sub_60834614(v29) + 492);
  if ( result )
    return result;
  if ( LevelInfo_instance )
  {
    v31 = sub_6040E394(FIELD_U8(LevelInfo_instance, 16), FIELD_U8(LevelInfo_instance, 17));
    v32 = sub_6040E438(LevelInfo_instance);
  }
  else
  {
    v31 = 0;
    v32 = 0;
  }
  v33 = dword_60CC6D78;
  if ( !dword_60CC6D78 || !FIELD_U8(dword_60CC6D78, 109032) )
  {
    if ( !LevelInfo_instance )
    {
LABEL_50:
      if ( (FIELD_U8(v33, 44) & 1) == 0 && !FIELD_U8(dword_60C99DD4, 1380) )
      {
        result = v32 || v31 || FIELD_U8(dword_60C99DD4, 1397) != 0;
        if ( !result )
          return result;
      }
      goto LABEL_53;
    }
    if ( !sub_6040E4C8(LevelInfo_instance) )
    {
      v33 = dword_60CC6D78;
      goto LABEL_50;
    }
  }
LABEL_53:
  v34 = sub_605117A0(v45);
  v35 = dword_60CA84C4;
  v36 = sub_6047482C(v43, 5u);
  v38 = 0;
  if ( v36 )
  {
    v39 = FIELD_U32(v36, 56);
    if ( v35 == v39 )
    {
LABEL_62:
      v37 = (int)FIELD_F32(v36, 16);
      if ( v37 <= 4 )
        v38 = dword_60B03830[v37];
    }
    else
    {
      for ( k = 1; *(unsigned __int8 *)(v35 + k - 1) == *(unsigned __int8 *)(v39 + k - 1); k += 2 )
      {
        if ( !*(_BYTE *)(v35 + k - 1) )
          goto LABEL_62;
        if ( k >= 524289 || *(unsigned __int8 *)(v35 + k) != *(unsigned __int8 *)(v39 + k) )
          break;
        if ( !*(_BYTE *)(v35 + k) )
          goto LABEL_62;
      }
    }
  }
  result = v34 + v38 - 1;
  if ( result <= 0x22 )
  {
    v41 = v45;
    v42 = *(_DWORD *)(v45 + 4 * result + 5784);
    sub_6047EEC4(v44, v42, *(float *)&v37);
    result = 4204;
    if ( v42 < 0x100 )
      v41 = v45 + v42;
    FIELD_U8(v41, 4204) = 0;
  }
  return result;
}
