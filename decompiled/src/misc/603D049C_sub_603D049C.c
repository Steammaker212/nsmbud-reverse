/* sub_603D049C
 * address: 0x603D049C   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D049C(int a1, float *a2)
{
  float v3; // s16
  int v5; // r6
  float v6; // s20
  float v7; // s22
  int v8; // r7
  float v9; // s18
  float v10; // s24
  int v11; // r7
  float v12; // s24
  float v13; // s26
  float v14; // s18
  int v15; // r7
  float v16; // s24
  float v17; // s26
  float v18; // s16
  int v19; // r7
  float v20; // s18
  float v21; // s24

  v3 = 9999.0;
  v5 = 0;
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v8
    && PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1
    && FIELD_U8(v8, 532) == FIELD_U8(a1, 532) )
  {
    v9 = FIELD_F32(v8, 108);
    v10 = FIELD_F32(v8, 112);
    v3 = sqrtf((float)((float)(v10 - v7) * (float)(v10 - v7)) + (float)((float)(v9 - v6) * (float)(v9 - v6)));
    v5 = 1;
    if ( v3 >= 9999.0 )
    {
      v3 = 9999.0;
    }
    else
    {
      *a2 = v9;
      a2[1] = v10;
    }
  }
  v11 = FIELD_U32(PlayerMgr_instance, 36);
  if ( v11
    && PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) == 1
    && FIELD_U8(v11, 532) == FIELD_U8(a1, 532)
    && (v12 = FIELD_F32(v11, 108),
        v13 = FIELD_F32(v11, 112),
        v14 = sqrtf((float)((float)(v13 - v7) * (float)(v13 - v7)) + (float)((float)(v12 - v6) * (float)(v12 - v6))),
        v5 = 1,
        v14 < v3) )
  {
    *a2 = v12;
    a2[1] = v13;
  }
  else
  {
    v14 = v3;
  }
  v15 = FIELD_U32(PlayerMgr_instance, 40);
  if ( v15
    && PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1
    && FIELD_U8(v15, 532) == FIELD_U8(a1, 532)
    && (v16 = FIELD_F32(v15, 108),
        v17 = FIELD_F32(v15, 112),
        v18 = sqrtf((float)((float)(v17 - v7) * (float)(v17 - v7)) + (float)((float)(v16 - v6) * (float)(v16 - v6))),
        v5 = 1,
        v18 < v14) )
  {
    *a2 = v16;
    a2[1] = v17;
  }
  else
  {
    v18 = v14;
  }
  v19 = FIELD_U32(PlayerMgr_instance, 44);
  if ( v19 )
  {
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1
      && FIELD_U8(v19, 532) == FIELD_U8(a1, 532) )
    {
      v20 = FIELD_F32(v19, 108);
      v21 = FIELD_F32(v19, 112);
      v5 = 1;
      if ( sqrtf((float)((float)(v21 - v7) * (float)(v21 - v7)) + (float)((float)(v20 - v6) * (float)(v20 - v6))) < v18 )
      {
        *a2 = v20;
        a2[1] = v21;
      }
    }
  }
  return v5;
}
