/* STRM_BGM_COIN_WIN_ref
 * address: 0x605242AC   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_COIN_WIN_ref(_DWORD *a1)
{
  int *v2; // r5
  unsigned int v3; // r7
  char v4; // r10
  unsigned int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // t1
  int *v10; // r1
  int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r2
  int v14; // r2
  int v15; // r7
  int v16; // r3
  int v17; // r7
  int v18; // r1
  int v19; // r6
  int v20; // r1
  int v21; // r2
  int v22; // r3

  a1[1165] = 60;
  sub_605288D4(a1);
  v2 = a1 + 1155;
  if ( (int)a1[1155] >= 1 )
  {
    v3 = 0;
    v4 = 1;
    do
    {
      v5 = 0;
      if ( v3 < 4 )
        v5 = v3;
      v6 = &a1[v5];
      v9 = v6[1038];
      v7 = v6 + 1038;
      v8 = v9;
      if ( FIELD_U32(v9, 3044) > 1u )
      {
        if ( FIELD_U32(v8, 3072) == 3 )
          FIELD_U8(v8, 3067) = 1;
        else
          FIELD_U8(v8, 3066) = 1;
        v10 = &dword_60CA99F4;
      }
      else
      {
        FIELD_U8(v8, 3064) = 1;
        v4 = 0;
        v10 = &dword_60CA999C;
      }
      sub_604034B0(*v7 + 56, (int)v10);
      v11 = *v2;
      ++v3;
    }
    while ( (int)v3 < *v2 );
    if ( (v4 & 1) == 0 )
    {
      sub_608092D4(SoundSystem_instance, "STRM_BGM_COIN_WIN");
      v11 = *v2;
    }
    if ( v11 >= 1 )
    {
      v12 = 0;
      do
      {
        v13 = 0;
        if ( v12 < 4 )
          v13 = v12;
        v14 = a1[v13 + 1038];
        v15 = FIELD_U32(v14, 3044);
        if ( FIELD_U8(v14, 4) )
        {
          v16 = v15 == 0;
        }
        else
        {
          v16 = FIELD_U32(v14, 3044);
          if ( v15 != 1 )
            v16 = 0;
          if ( !v15 )
            v16 = 2;
        }
        v17 = FIELD_U32(v14, 3140);
        v18 = 99;
        ++v12;
        v19 = FIELD_U32(v17, 40) + v16;
        if ( v19 < 99 )
          v18 = FIELD_U32(v17, 40) + v16;
        if ( v19 < 0 )
          v18 = 0;
        FIELD_U32(v17, 40) = v18;
        v20 = FIELD_U32(v14, 3140);
        v21 = FIELD_U32(v20, 44) + v16;
        v22 = 99;
        if ( v21 < 99 )
          v22 = v21;
        if ( v21 < 0 )
          v22 = 0;
        FIELD_U32(v20, 44) = v22;
      }
      while ( (int)v12 < *v2 );
    }
  }
  sub_60473DE4(a1 + 11, 3u, &dword_60CA997C, 0);
  return sub_60528300(a1);
}
