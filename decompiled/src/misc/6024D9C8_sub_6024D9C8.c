/* sub_6024D9C8
 * address: 0x6024D9C8   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024D9C8(int a1, float a2)
{
  int v3; // r0
  int *v4; // r5
  int v5; // r0
  bool v6; // zf
  float v7; // s0
  int result; // r0
  int *v9; // r2
  float v10; // s0
  float v11; // s10
  float v12; // s2
  float v13; // s6
  Vec2 v14; // [sp+0h] [bp-18h] BYREF

  v4 = (int *)(a1 + 11816);
  v3 = FIELD_U32(a1, 11816);
  if ( v3 == 3 )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v7 = CollisionActor__handleSpeed((CollisionActor *)a1);
    CollisionMgr_process((_BYTE *)(a1 + 648), v7);
    if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
      FIELD_U32(a1, 124) = 0;
  }
  else
  {
    if ( v3 == 2 )
    {
      CollisionMgr_process((_BYTE *)(a1 + 648), a2);
      v5 = FIELD_U32(a1, 2872) & 0x10400;
      v6 = v5 == 1024;
      if ( v5 == 1024 )
      {
        FIELD_U32(a1, 124) = 0;
        v5 = 3;
      }
    }
    else
    {
      if ( v3 != 1 )
        goto LABEL_14;
      CollisionMgr_process((_BYTE *)(a1 + 648), a2);
      v5 = FIELD_U32(a1, 2872) & 0x10400;
      v6 = v5 == 1024;
      if ( v5 == 1024 )
      {
        FIELD_U32(a1, 124) = 0;
        v5 = 2;
      }
    }
    if ( v6 )
      *v4 = v5;
  }
LABEL_14:
  result = StageActor__distanceToPlayer((StateActor *)a1, &v14);
  if ( result == -1 )
    return result;
  v9 = dword_6024DBBC;
  if ( FIELD_U32(a1, 6336) )
    v9 = &dword_6024DBBC[1];
  v10 = *(float *)v9;
  if ( FIELD_U8(a1, 6352) )
  {
    v11 = (float)FIELD_U32(a1, 6356);
    v12 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v13 = FIELD_F32(dword_60CC6484, 124);
    if ( v12 < (float)(v13 - (float)(v11 * 16.0))
      && v12 > (float)((float)(v11 * 16.0) + (float)(v13 - FIELD_F32(dword_60CC6484, 108)))
      && v14.y < 0.0
      && fabsf(v14.x) < v10 )
    {
LABEL_25:
      FIELD_U32(a1, 80) = v14.x < 0.0;
      FIELD_U8(a1, 6332) = result;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DDF8);
    }
  }
  else if ( v14.y < 0.0 && fabsf(v14.x) < v10 )
  {
    goto LABEL_25;
  }
  return result;
}
