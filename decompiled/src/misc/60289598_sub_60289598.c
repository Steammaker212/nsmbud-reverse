/* sub_60289598
 * address: 0x60289598   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60289598(int a1)
{
  _BYTE *v2; // r5
  int v3; // r0
  int result; // r0
  _BYTE *v5; // r5
  int v6; // r1
  int speed; // [sp+4h] [bp-2Ch] BYREF
  CollisionMgr_Sensor sensor; // [sp+8h] [bp-28h] BYREF

  v2 = (_BYTE *)(a1 + 6607);
  if ( FIELD_U8(a1, 6607) )
  {
    v3 = FIELD_U32(a1, 80);
    sensor.a = 1.5046e-36;
    if ( moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v3], (int *)&sensor) )
      *v2 = 0;
  }
  v5 = (_BYTE *)(a1 + 6605);
  result = FIELD_S8(a1, 6605);
  if ( result == 1 )
  {
    speed = 0x8000000;
    sensor.a = 0.0;
    moveValueTo((int *)(a1 + 156), (int *)&sensor, &speed);
    CollisionActor__handleGravity((CollisionActor *)a1);
    CollisionActor__handleSpeed((CollisionActor *)a1);
    CollisionActor__sub_600034C8((CollisionActor *)a1);
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 304) = 0;
      FIELD_U32(a1, 308) = 1098907648;
      FIELD_U32(a1, 312) = 1094713344;
      FIELD_U32(a1, 316) = 1098907648;
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEE4, 2);
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFDEF0, 0);
      sensor.b = 28.0;
      sensor.a = 12.0;
      sensor.c = -12.0;
      CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 1);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F20C);
    }
  }
  else if ( !FIELD_U8(a1, 6605) )
  {
    sensor.a = -284.44;
    speed = 0x8000000;
    moveValueTo((int *)(a1 + 156), (int *)&sensor, &speed);
    CollisionActor__handleGravity((CollisionActor *)a1);
    CollisionActor__handleSpeed((CollisionActor *)a1);
    CollisionActor__sub_600034C8((CollisionActor *)a1);
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      result = a1 + 6584;
      v6 = FIELD_U32(a1, 6584);
      if ( v6 )
      {
        *(_DWORD *)result = v6 - 1;
      }
      else
      {
        FIELD_U32(a1, 124) = 0x40000000;
        result = (unsigned __int8)*v5 + 1;
        *v5 = result;
      }
    }
  }
  return result;
}
