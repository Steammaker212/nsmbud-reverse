/* sub_6052BEBC
 * address: 0x6052BEBC   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052BEBC(int a1, unsigned int a2)
{
  void *v4; // r11
  _BYTE *v5; // r1
  int v6; // r2
  int v7; // r9
  _BYTE *v8; // r4
  int i; // r7
  unsigned int v11; // r3
  int v12; // r3
  int v13; // r4
  int *v14; // r1
  unsigned int v15; // r0
  int v16; // r9
  float *v17; // r5
  float v18; // s0
  unsigned int v19; // r0
  char v20; // r1
  float v21; // s2
  float v22; // s4
  float *v23; // r2
  float v24; // s4
  int v25; // r4
  int *v26; // r1

  v4 = (void *)sead__GlobalRandom__sInstance;
  if ( FIELD_U32(a1, 3084) )
  {
    v5 = (_BYTE *)(a1 + 2940);
    v6 = 0;
    if ( FIELD_U8(a1, 2940) )
    {
      v5 = (_BYTE *)(a1 + 2988);
      if ( FIELD_U8(a1, 2988) )
      {
        v7 = 0;
        v5 = (_BYTE *)(a1 + 3036);
        if ( FIELD_U8(a1, 3036) )
          return v7;
        v6 = 2;
      }
      else
      {
        v6 = 1;
      }
    }
    v11 = 0;
    v7 = 1;
    if ( a2 < 4 )
      v11 = a2;
    v12 = *(_DWORD *)(a1 + 4 * v11 + 3156);
    *v5 = 1;
    v13 = a1 + 48 * v6;
    FIELD_U32(v13, 2948) = v12;
    FIELD_U32(v13, 2952) = 1133772800;
    FIELD_U32(v13, 2956) = 0;
    FIELD_U32(v13, 2968) = a2;
    FIELD_U32(v13, 2976) = 10;
    FIELD_U8(v13, 2980) = 0;
    v14 = dword_6052C144;
    if ( FIELD_U8(v13, 2972) )
      v14 = &dword_6052C144[1];
    FIELD_U32(v13, 2984) = *v14;
    FIELD_U32(v13, 2964) = (((12 * (unsigned __int64)sead__Random__getU32(v4)) >> 32 << 24) & 0xF000000) + 0x4000000;
  }
  else
  {
    v8 = (_BYTE *)(a1 + 60);
    for ( i = 1; ; i += 2 )
    {
      if ( !*v8 )
      {
        --i;
        goto LABEL_20;
      }
      if ( !v8[48] )
        break;
      v8 += 96;
      if ( (unsigned int)(i + 1) >= 0x3C )
        return 0;
    }
    v8 += 48;
LABEL_20:
    v15 = a2;
    if ( a2 >= 4 )
      v15 = 0;
    v16 = a1 + 4 * v15;
    v17 = (float *)(v16 + 3204);
    do
      v18 = (float)(int)(((15 * (unsigned __int64)sead__Random__getU32(v4)) >> 32) - 7);
    while ( (float)(*v17 * v18) >= 0.0 );
    *v17 = v18;
    if ( FIELD_U32(v16, 3108) == 1 )
    {
      v19 = FIELD_U32(v16, 3092);
      v20 = 1;
      v21 = FIELD_F32(v16, 3124);
    }
    else
    {
      v21 = FIELD_F32(v16, 3124);
      v20 = 0;
      v22 = v21 + FIELD_F32(v16, 3140);
      FIELD_F32(v16, 3124) = v22;
      v19 = (unsigned int)v22;
    }
    v23 = (float *)(v16 + 3156);
    v7 = 1;
    v24 = *v23;
    *v8 = 1;
    v25 = a1 + 48 * i;
    FIELD_F32(v25, 68) = v24 + (float)(v18 * 8.0);
    FIELD_U32(v25, 72) = 1133772800;
    FIELD_U32(v25, 76) = 0;
    FIELD_U32(v25, 88) = a2;
    FIELD_U32(v25, 96) = v19 - (unsigned int)v21;
    FIELD_U8(v25, 100) = v20;
    v26 = dword_6052C144;
    if ( FIELD_U8(v25, 92) )
      v26 = &dword_6052C144[1];
    FIELD_U32(v25, 104) = *v26;
    FIELD_U32(v25, 84) = (((12 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32 << 24)
                           & 0xF000000)
                          + 0x4000000;
  }
  return v7;
}
