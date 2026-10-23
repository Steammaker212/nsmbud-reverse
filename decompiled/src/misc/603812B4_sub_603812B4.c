/* sub_603812B4
 * address: 0x603812B4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_603812B4(int a1)
{
  float *v2; // r8
  CollisionMgr *v4; // r5
  int *v5; // r7
  float v6; // s18
  float v7; // s0
  float v8; // r0
  float v9; // r2
  float v10; // r1
  int v11; // r4
  int v12; // r6
  CollisionMgr *v13; // r0
  CollisionMgr_Sensor *v14; // r1
  int v15; // r2
  char *result; // r0
  CollisionMgr_Sensor v17; // [sp+0h] [bp-50h] BYREF

  v2 = (float *)(a1 + 6372);
  v4 = (CollisionMgr *)(a1 + 648);
  v5 = (int *)(a1 + 6324);
  v6 = FIELD_F32(a1, 6372);
  v7 = -(float)(v6 * (float)((float)((float)FIELD_S32(a1, 6324) * 16.0) + -6.0));
  v8 = v7;
  v9 = v6 * -4.0;
  if ( v7 < (float)(v6 * -4.0) )
  {
    v9 = v7;
    v8 = v6 * -4.0;
  }
  FIELD_F32(a1, 6332) = v9;
  FIELD_F32(a1, 6336) = v8;
  FIELD_U32(a1, 6340) = 1090519040;
  CollisionMgr_setSensor(v4, (CollisionMgr_Sensor *)(a1 + 6332), 0);
  v10 = FIELD_F32(a1, 6336);
  v17.a = FIELD_F32(a1, 6332);
  v17.b = v10;
  v17.c = -FIELD_F32(a1, 6340);
  CollisionMgr_setSensor(v4, &v17, 1);
  FIELD_U32(a1, 6344) = 0;
  v11 = a1 + 6344;
  FIELD_U32(v11, 4) = 0;
  FIELD_F32(v11, 8) = -(float)(v6 * (float)((float)((float)*v5 * 16.0) + -4.0));
  if ( *v2 <= 0.0 )
  {
    v12 = 2;
    v13 = v4;
    v14 = (CollisionMgr_Sensor *)v11;
    v15 = 2;
  }
  else
  {
    v12 = 3;
    v13 = v4;
    v14 = (CollisionMgr_Sensor *)v11;
    v15 = 3;
  }
  CollisionMgr_setSensor(v13, v14, v15);
  result = (char *)v4 + 8 * v12;
  *((_DWORD *)result + 632) |= 0x10000800u;
  return result;
}
