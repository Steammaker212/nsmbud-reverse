/* sub_606BB22C
 * address: 0x606BB22C   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BB22C(int a1)
{
  float v2; // r6
  ColliderBase *v3; // r7
  int v4; // r1
  int v5; // r0
  float v6; // s16
  float v7; // s2
  float v8; // r0
  float v9; // s0
  float v10; // r1
  float v11; // r2
  float *v12; // r3
  float *v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r1
  float v17; // r2
  int v18; // r3
  float *v19; // r2
  int *v20; // r6
  float *v21; // r3
  int v23; // [sp+0h] [bp-50h] BYREF
  int v24; // [sp+4h] [bp-4Ch] BYREF
  SolidOnTopColliderInfo info; // [sp+8h] [bp-48h] BYREF
  _DWORD v26[12]; // [sp+20h] [bp-30h] BYREF

  v2 = 0.0;
  memset(&info, 0, 16);
  memset(v26, 0, 16);
  info.points = (Vec2 *)v26;
  info.rotation = FIELD_U32(a1, 164);
  v3 = (ColliderBase *)(a1 + 6104);
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6104), (StageActor *)a1, &info);
  FIELD_U32(a1, 6240) |= 0x200u;
  FIELD_U32(a1, 6328) = 4;
  v4 = FIELD_U32(a1, 20) & 0xF0;
  v5 = FIELD_U32(a1, 20) & 3;
  v6 = (float)(unsigned int)(v4 + 16);
  if ( v5 == 2 )
  {
    v9 = 0.0;
    v8 = 0.0;
    v10 = 0.0 - v6;
    v7 = v6;
  }
  else
  {
    if ( v5 == 1 )
    {
      v7 = 0.0;
      v11 = (float)(unsigned int)(v4 + 16);
      v2 = 0.0;
      v9 = v11;
      v8 = 0.0;
      v10 = 0.0;
      goto LABEL_10;
    }
    if ( v5 )
    {
      v9 = 0.0;
      v8 = 0.0;
      v2 = 0.0 - v6;
      v7 = (float)(unsigned int)(v4 + 16);
    }
    else
    {
      v7 = 0.0;
      v8 = (float)(unsigned int)(v4 + 16);
      v2 = 0.0;
      v9 = v8;
    }
    v10 = 0.0;
  }
  v11 = 0.0;
LABEL_10:
  FIELD_F32(a1, 492) = v9;
  FIELD_F32(a1, 496) = v7;
  v12 = *(float **)(a1 + 6448);
  *v12 = v8;
  v12[1] = v2;
  v13 = *(float **)(a1 + 6448);
  if ( FIELD_U32(a1, 6444) > 1u )
    v13 += 2;
  *v13 = v11;
  v13[1] = v10;
  ColliderMgr_add(ColliderMgr_instance, v3);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6552), (StageActor *)a1, &info);
    FIELD_U32(a1, 6688) |= 0x200u;
    FIELD_U32(a1, 6776) = 4;
    v14 = 0;
    v24 = 0;
    v23 = 0;
    v15 = FIELD_U32(a1, 20) & 3;
    if ( v15 == 1 )
    {
      v16 = -1056964608;
      v17 = v6;
      v18 = -1056964608;
    }
    else
    {
      if ( v15 )
      {
        v19 = (float *)&v24;
        if ( v15 == 2 )
          v19 = (float *)&v23;
        v14 = 1090519040;
        if ( v15 == 2 )
          v14 = -1056964608;
        *v19 = *v19 - v6;
        v17 = *(float *)&v14;
        v16 = v23;
        v18 = v24;
        goto LABEL_23;
      }
      v16 = 1090519040;
      v14 = LODWORD(v6);
      v17 = 0.0;
      v18 = 1090519040;
    }
    v24 = v16;
    v23 = v16;
LABEL_23:
    v20 = *(int **)(a1 + 6896);
    *v20 = v14;
    v20[1] = v18;
    v21 = *(float **)(a1 + 6896);
    if ( FIELD_U32(a1, 6892) > 1u )
      v21 += 2;
    *v21 = v17;
    *((_DWORD *)v21 + 1) = v16;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6552));
  }
  FIELD_F32(a1, 500) = v6 + v6;
  FIELD_F32(a1, 504) = v6 + v6;
  FIELD_U32(a1, 516) = 1141374976;
  FIELD_U32(a1, 520) = 1141374976;
  FIELD_U32(a1, 524) = 1136132096;
  FIELD_U32(a1, 528) = 1136132096;
  return 1;
}
