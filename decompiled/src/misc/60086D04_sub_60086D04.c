/* sub_60086D04
 * address: 0x60086D04   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60086D04(int a1)
{
  float v2; // r1
  _DWORD *v3; // r0
  int v4; // r6
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int result; // r0
  bool v13; // zf
  int speed; // [sp+4h] [bp-24h] BYREF
  CollisionMgr_Sensor sensor; // [sp+8h] [bp-20h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7612));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( FIELD_F32(a1, 124) < FIELD_F32(a1, 100) )
    {
      v2 = FIELD_F32(a1, 112);
      sensor.a = FIELD_F32(a1, 108);
      sensor.b = v2;
      sensor.c = 4500.0;
      EffectData_create(1080, (Vec3 *)&sensor, 0, 0);
    }
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
  }
  sensor.a = 0.0;
  sub_6083246C((int *)(a1 + 160), (int *)&sensor, (signed int *)(a1 + 7620));
  sensor.a = 0.0;
  speed = 107374182;
  moveValueTo((int *)(a1 + 156), (int *)&sensor, &speed);
  v4 = a1 + 7100;
  v3 = *(_DWORD **)(a1 + 7100);
  v5 = (_DWORD *)v3[3];
  v6 = v3[2];
  v7 = v3[17];
  if ( v6 > v7 )
    v5 += v7;
  if ( sub_60418548(*v5 + 4) )
    FIELD_U32(a1, 7616) |= 1u;
  v8 = *(_DWORD **)(*(_DWORD *)v4 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
    v8 += v9;
  if ( sub_60418548(*v8 + 4) )
  {
    FIELD_U32(a1, 7616) &= ~2u;
    FIELD_U32(a1, 320) = 0;
    FIELD_U32(a1, 312) = 1097859072;
    FIELD_U32(a1, 316) = 1096810496;
    FIELD_U32(a1, 304) = 0;
    FIELD_U32(a1, 308) = 1096810496;
    FIELD_U32(a1, 6836) = 0;
    FIELD_U32(a1, 6840) = 1101004800;
    FIELD_U32(a1, 6844) = 1099956224;
    FIELD_U32(a1, 6848) = 1101004800;
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5588, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF5594, 0);
    sensor.b = 12.0;
    sensor.a = 12.0;
    sensor.c = -12.0;
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 1);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AF557C, 3);
  }
  v10 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v11 )
    v10 += 4 * v11;
  result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
  v13 = (result & 0x20) == 0;
  if ( (result & 0x20) != 0 )
  {
    result = FIELD_U8(a1, 2872);
    v13 = (result & 1) == 0;
  }
  if ( !v13 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81ACC);
  return result;
}
