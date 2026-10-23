/* sub_603ADD84
 * address: 0x603ADD84   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603ADD84(StateActor *a1)
{
  float v1; // s0
  int *v2; // r12
  int v3; // r2
  int v4; // r3
  bool v5; // zf
  int v6; // r3
  bool v7; // zf
  int v8; // r3
  bool v9; // zf
  int v10; // r3
  bool v11; // zf
  unsigned int v12; // r3
  int v13; // r4
  unsigned int v14; // r0
  int direction; // r4
  float v17; // s2
  int v18; // r4
  float v19; // s2
  int v20; // r4
  float v21; // s2
  int v22; // r4
  float v23; // s2
  float v24; // s2
  float v25; // s2
  float v26; // s2
  Vec2 v27; // [sp+0h] [bp-10h] BYREF

  v1 = 1000000000.0;
  v2 = &a1[1]._._.field_22C;
  v3 = -1;
  v4 = FIELD_U32(PlayerMgr_instance, 32);
  v5 = v4 == 0;
  if ( v4 )
    v5 = (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0;
  if ( !v5 )
  {
    direction = FIELD_U32(a1, 0x50);
    v17 = FIELD_F32(a1, 0x6C) - (float)(FIELD_F32(v4, 108) + FIELD_F32(v4, 572));
    if ( direction == 1 )
    {
      if ( v17 <= 0.0 )
        goto LABEL_5;
    }
    else if ( v17 >= 0.0 )
    {
      goto LABEL_5;
    }
    if ( *v2 != 1 || FIELD_U8(v4, 80) == direction )
    {
      v1 = 1000000000.0;
      v24 = fabsf(v17);
      if ( v24 < 1000000000.0 )
      {
        v1 = v24;
        v3 = 0;
      }
    }
  }
LABEL_5:
  v6 = FIELD_U32(PlayerMgr_instance, 36);
  v7 = v6 == 0;
  if ( v6 )
    v7 = (FIELD_U8(PlayerMgr_instance, 66) & 2) == 0;
  if ( !v7 )
  {
    v18 = FIELD_U32(a1, 0x50);
    v19 = FIELD_F32(a1, 0x6C) - (float)(FIELD_F32(v6, 108) + FIELD_F32(v6, 572));
    if ( v18 == 1 )
    {
      if ( v19 <= 0.0 )
        goto LABEL_9;
    }
    else if ( v19 >= 0.0 )
    {
      goto LABEL_9;
    }
    if ( *v2 != 1 || FIELD_U8(v6, 80) == v18 )
    {
      v25 = fabsf(v19);
      if ( v1 > v25 )
      {
        v1 = v25;
        v3 = 1;
      }
    }
  }
LABEL_9:
  v8 = FIELD_U32(PlayerMgr_instance, 40);
  v9 = v8 == 0;
  if ( v8 )
    v9 = (FIELD_U8(PlayerMgr_instance, 66) & 4) == 0;
  if ( !v9 )
  {
    v20 = FIELD_U32(a1, 0x50);
    v21 = FIELD_F32(a1, 0x6C) - (float)(FIELD_F32(v8, 108) + FIELD_F32(v8, 572));
    if ( v20 == 1 )
    {
      if ( v21 <= 0.0 )
        goto LABEL_13;
    }
    else if ( v21 >= 0.0 )
    {
      goto LABEL_13;
    }
    if ( *v2 != 1 || FIELD_U8(v8, 80) == v20 )
    {
      v26 = fabsf(v21);
      if ( v1 > v26 )
      {
        v1 = v26;
        v3 = 2;
      }
    }
  }
LABEL_13:
  v10 = FIELD_U32(PlayerMgr_instance, 44);
  v11 = v10 == 0;
  if ( v10 )
    v11 = (FIELD_U8(PlayerMgr_instance, 66) & 8) == 0;
  if ( !v11 )
  {
    v22 = FIELD_U32(a1, 0x50);
    v23 = FIELD_F32(a1, 0x6C) - (float)(FIELD_F32(v10, 108) + FIELD_F32(v10, 572));
    if ( v22 == 1 )
    {
      if ( v23 > 0.0 )
      {
LABEL_57:
        if ( *v2 != 1 || FIELD_U8(v10, 80) == v22 )
        {
          v12 = 3;
          if ( v1 > fabsf(v23) )
            goto LABEL_18;
        }
      }
    }
    else if ( v23 < 0.0 )
    {
      goto LABEL_57;
    }
  }
  v12 = v3;
  if ( v3 == -1 )
  {
LABEL_21:
    v13 = 0;
    v27.x = 0.0;
    v27.y = 0.0;
    v14 = StageActor__distanceToPlayer(a1, &v27);
    if ( v14 != -1 )
    {
      if ( v14 >= 4 )
        v14 = 0;
      return *(_DWORD *)(PlayerMgr_instance + 4 * v14 + 32);
    }
    return v13;
  }
LABEL_18:
  if ( v12 >= 4 )
    v12 = 0;
  v13 = *(_DWORD *)(PlayerMgr_instance + 4 * v12 + 32);
  if ( !v13 )
    goto LABEL_21;
  return v13;
}
