/* sub_60172C50
 * address: 0x60172C50   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60172C50(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r5
  _DWORD *v6; // r6
  char *v7; // r0
  int i; // r2
  int v9; // r7
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // s2
  int v16; // r2
  int result; // r0
  int v18; // r1
  unsigned int v19; // r7
  unsigned int v20; // r3
  int v21; // r3
  unsigned int v22; // r7
  int v23; // r7
  _DWORD *v24; // r7
  int v25; // r2
  int v26; // r6
  int v27; // r7
  unsigned int v28; // r7
  unsigned int v29; // r3
  unsigned int v30; // r0
  int v31; // r3
  _DWORD *v32; // r0
  int v33; // r1
  int v34; // r3
  unsigned int v35; // [sp+4h] [bp-24h] BYREF
  int v36; // [sp+8h] [bp-20h]
  int v37; // [sp+Ch] [bp-1Ch]

  sub_60193518(a1 + 248, FIELD_F32(a1, 44), FIELD_F32(a1, 48), FIELD_F32(a1, 52), FIELD_F32(a1, 56));
  if ( FIELD_U8(dword_60CC6D78, 28) )
  {
    v2 = 0;
    FIELD_U32(a1, 572) = 34;
    v3 = sub_601A443C(dword_60C89E18, 7, 0);
    if ( FIELD_S32(v3, 28) >= 1 )
    {
      while ( !sub_60183054(v3, v2, 0x80000) )
      {
        if ( ++v2 >= FIELD_U32(v3, 28) )
          goto LABEL_18;
      }
      v11 = sub_60182E38(v3, v2);
      sub_601A02B0(dword_60C89E00, a1 + 64, 7, 0, v11);
      FIELD_U32(a1, 64) = 1166843904;
      FIELD_U32(a1, 68) = 1150681088;
      FIELD_U32(a1, 72) = -996392960;
    }
LABEL_18:
    v12 = FIELD_U32(a1, 64);
    FIELD_U32(a1, 548) = v12;
    v13 = FIELD_U32(a1, 68);
    FIELD_U32(a1, 552) = v13;
    v14 = FIELD_U32(a1, 72);
    FIELD_U32(a1, 556) = v14;
    FIELD_U32(a1, 100) = v12;
    FIELD_U32(a1, 104) = v13;
    FIELD_U32(a1, 108) = v14;
    FIELD_U32(a1, 364) = v12;
    FIELD_U32(a1, 368) = v13;
    FIELD_U32(a1, 372) = v14;
    FIELD_U32(a1, 328) = v12;
    FIELD_U32(a1, 332) = v13;
    FIELD_U32(a1, 336) = v14;
    FIELD_U32(a1, 580) = 1;
  }
  else
  {
    v4 = sub_601CF9C0(dword_60C8AEF0);
    v35 = -1;
    v36 = -1;
    v37 = -1;
    sub_6019EC34(&v35, v4 + 1032);
    v5 = sub_601A443C(dword_60C89E18, v35, v36);
    v6 = (_DWORD *)sub_60182E38(v5, v37);
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    v7 = (char *)v6[1];
    if ( v7 == "W6C1" )
    {
LABEL_12:
      v9 = 25;
      if ( FIELD_S32(v5, 28) >= 1 )
      {
        v10 = 0;
        while ( !sub_60183038(v5, v10, 0x40000000) )
        {
          if ( ++v10 >= FIELD_U32(v5, 28) )
            goto LABEL_20;
        }
        v9 = v10;
      }
LABEL_20:
      v37 = v9;
    }
    else
    {
      for ( i = 0; i <= 0x80000; ++i )
      {
        if ( v7[i] != aW6c1[i] )
          break;
        if ( !v7[i] )
          goto LABEL_12;
      }
    }
    *(__n64 *)(a1 + 100) = sub_60170BD8(a1, &v35);
    FIELD_U32(a1, 108) = v15;
  }
  v16 = 0;
  result = dword_60CC6D78;
  v18 = dword_60C89E18;
  v19 = FIELD_U32(dword_60CC6D78, 416);
  v20 = FIELD_U32(dword_60CC6D78, 412);
  if ( v19 >= 2 )
    v19 = 0;
  if ( v20 >= 9 )
    v20 = 0;
  v21 = *(_DWORD *)(dword_60C89E18 + 8 * v20 + 4 * v19 + 2336);
  FIELD_U32(a1, 60) = v21;
  if ( v21 != 5 )
  {
    v22 = FIELD_U32(result, 412);
    if ( v22 >= 9 )
      v22 = 0;
    v23 = 3 * v22;
    if ( FIELD_U32(result, 416) < 2u )
      v16 = FIELD_U32(result, 416);
    v24 = (_DWORD *)(v18 + 8 * v23 + 12 * v16);
    v25 = v24[602];
    v26 = v24[603];
    v27 = v24[604];
    if ( v21 == 2 )
    {
      FIELD_U32(a1, 124) = v25;
      FIELD_U32(a1, 128) = v26;
      FIELD_U32(a1, 132) = v27;
      v28 = 0;
      v29 = FIELD_U32(result, 412);
      v30 = FIELD_U32(result, 416);
      if ( v29 >= 9 )
        v29 = 0;
      v31 = 3 * v29;
      if ( v30 < 2 )
        v28 = v30;
      v32 = (_DWORD *)(v18 + 8 * v31 + 12 * v28);
      v33 = v32[656];
      v34 = v32[657];
      result = v32[658];
      FIELD_U32(a1, 136) = v33;
      FIELD_U32(a1, 140) = v34;
      FIELD_U32(a1, 144) = result;
      FIELD_U32(a1, 100) = v25;
    }
    else if ( v21 == 3 )
    {
      FIELD_U32(a1, 100) = v25;
      FIELD_U32(a1, 104) = v26;
      FIELD_U32(a1, 108) = v27;
      return a1 + 100;
    }
  }
  return result;
}
