/* STRM_BGM_COIN_WIN_ref_524FC4
 * address: 0x60524FC4   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_COIN_WIN_ref_524FC4(_DWORD *a1)
{
  int v2; // r0
  int *v3; // r8
  unsigned int v4; // r3
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r6
  int v8; // r6
  int v9; // r5
  int v10; // r3
  _DWORD *v11; // r6
  int v12; // r7
  int v13; // r1
  int v14; // r1
  unsigned int v15; // r2
  signed int v16; // r3
  int v17; // r1
  int v18; // r2
  unsigned int v19; // r7
  char v20; // r11
  unsigned int v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  int v24; // r1
  int v25; // t1
  int *v26; // r1

  a1[1165] = 60;
  v3 = a1 + 1155;
  v2 = a1[1155];
  if ( v2 < 1 )
  {
    v5 = 0;
    v6 = 0;
LABEL_12:
    v10 = 2;
    if ( v6 < v5 )
      v10 = 1;
    goto LABEL_14;
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = 0;
    if ( v4 < 4 )
      v7 = v4;
    ++v4;
    v8 = a1[v7 + 1038];
    v9 = FIELD_U32(v8, 3132);
    if ( *(_DWORD *)(FIELD_U32(v8, 3140) + 20) )
      v5 += v9;
    else
      v6 += v9;
  }
  while ( v2 != v4 );
  v10 = 0;
  if ( v6 <= v5 )
    goto LABEL_12;
LABEL_14:
  a1[1169] = v10;
  v11 = a1 + 1169;
  if ( v2 >= 1 )
  {
    v12 = 2;
    v13 = a1[1038];
    if ( *(_DWORD *)(FIELD_U32(v13, 3140) + 20) == v10 )
      v12 = 0;
    FIELD_U32(v13, 3044) = v12;
    v14 = *v3;
    if ( *v3 >= 2 )
    {
      v15 = 1;
      do
      {
        v16 = v15 + 1;
        if ( v15 >= 4 )
          v15 = 0;
        v17 = a1[v15 + 1038];
        v18 = 2;
        if ( *(_DWORD *)(FIELD_U32(v17, 3140) + 20) == *v11 )
          v18 = 0;
        FIELD_U32(v17, 3044) = v18;
        v15 = v16;
        v14 = *v3;
      }
      while ( v16 < *v3 );
    }
    if ( v14 >= 1 )
    {
      v19 = 0;
      v20 = 1;
      do
      {
        v21 = 0;
        if ( v19 < 4 )
          v21 = v19;
        v22 = &a1[v21];
        v25 = v22[1038];
        v23 = v22 + 1038;
        v24 = v25;
        if ( *(_DWORD *)(FIELD_U32(v25, 3140) + 20) == *v11 )
        {
          FIELD_U8(v24, 3064) = 1;
          v20 = 0;
          v26 = &dword_60CA999C;
        }
        else
        {
          if ( FIELD_U32(v24, 3072) == 3 )
            FIELD_U8(v24, 3067) = 1;
          else
            FIELD_U8(v24, 3066) = 1;
          v26 = &dword_60CA99F4;
        }
        sub_604034B0(*v23 + 56, (int)v26);
        ++v19;
      }
      while ( (int)v19 < *v3 );
      if ( (v20 & 1) == 0 )
        sub_608092D4(SoundSystem_instance, "STRM_BGM_COIN_WIN");
    }
  }
  sub_60528DF4(a1);
  sub_60473DE4(a1 + 11, 3u, &dword_60CA997C, 0);
  a1[1166] = 5;
  return sub_60528300(a1);
}
