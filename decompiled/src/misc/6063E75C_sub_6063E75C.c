/* sub_6063E75C
 * address: 0x6063E75C   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063E75C(int a1)
{
  float *v2; // r12
  unsigned int v3; // r0
  _DWORD *v4; // r5
  int v5; // r2
  int v6; // r1
  int *v7; // r0
  int v8; // r0
  int *v9; // r1
  int result; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // [sp+4h] [bp-1Ch] BYREF
  int speed; // [sp+8h] [bp-18h] BYREF
  int target; // [sp+Ch] [bp-14h] BYREF

  v2 = (float *)(a1 + 6240);
  v4 = (_DWORD *)(a1 + 6232);
  v3 = FIELD_U32(a1, 6232);
  v5 = -16777216;
  FIELD_F32(a1, 108) = *v2
                       + (float)((float)(*(float *)((char *)&sinLutTable[2] + ((v3 >> 20) & 0xFF0))
                                       + (float)((float)((float)(v3 & 0xFFFFFF)
                                                       * *(float *)((char *)&sinLutTable[3] + ((v3 >> 20) & 0xFF0)))
                                               * 0.000000059605))
                               * 32.0);
  if ( FIELD_U32(a1, 80) == 1 )
    v5 = 0x1000000;
  *v4 = v5 + v3;
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v6 = 0x4000000;
  if ( (unsigned int)(*v4 - 1) < 0x7FFFFFFF )
    v6 = -67108864;
  speed = 0x400000;
  target = v6;
  moveValueTo((int *)(a1 + 6252), &target, &speed);
  v7 = (int *)(a1 + 6244);
  if ( FIELD_U32(a1, 6180) )
  {
    speed = -33554432;
    v14 = 0x800000;
    if ( !moveValueTo(v7, &speed, &v14) )
      goto LABEL_11;
    v8 = 0;
  }
  else
  {
    speed = 0x2000000;
    v14 = 0x800000;
    if ( !moveValueTo(v7, &speed, &v14) )
      goto LABEL_11;
    v8 = 1;
  }
  FIELD_U32(a1, 6180) = v8;
LABEL_11:
  v9 = dword_6063E98C;
  if ( (FIELD_U8(a1, 27) & 0x20) == 0 )
    v9 = &dword_6063E98C[1];
  result = dword_60CC6484;
  if ( (float)(FIELD_F32(dword_60CC6484, 132) - *(float *)v9) >= FIELD_F32(a1, 112) )
  {
    FIELD_U8(a1, 6160) = 0;
    v11 = FIELD_U32(a1, 6124);
    FIELD_U32(a1, 108) = v11;
    v12 = FIELD_U32(a1, 6128);
    FIELD_U32(a1, 112) = v12;
    v13 = FIELD_U32(a1, 6132);
    FIELD_U32(a1, 116) = v13;
    FIELD_U32(a1, 584) = v11;
    FIELD_U32(a1, 588) = v12;
    FIELD_U32(a1, 592) = v13;
    FIELD_U32(a1, 608) = v11;
    FIELD_U32(a1, 612) = v12;
    FIELD_U32(a1, 616) = v13;
    sub_60160948((_DWORD *)(a1 + 6344));
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6344));
    if ( (FIELD_U8(a1, 27) & 0x20) != 0 )
    {
      ++FIELD_U32(a1, 6216);
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB5830);
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB5850);
    }
  }
  return result;
}
