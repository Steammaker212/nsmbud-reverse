/* sub_600E3774
 * address: 0x600E3774   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E3774(int a1)
{
  float v2; // s16
  float v3; // s0
  CollisionMgr_Sensor v4; // [sp+0h] [bp-50h] BYREF
  CollisionMgr_Sensor sensor; // [sp+10h] [bp-40h] BYREF
  CollisionMgr_Sensor v6; // [sp+1Ch] [bp-34h] BYREF
  CollisionMgr_Sensor v7; // [sp+28h] [bp-28h] BYREF

  v2 = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  v3 = (*(float (__fastcall **)(int, float))(*(_DWORD *)a1 + 200))(a1, v2);
  v6.a = 0.0;
  v6.b = 0.0;
  sensor.a = 0.0;
  sensor.b = 0.0;
  v4.a = 0.0;
  v4.b = 0.0;
  v6.c = v2 * v3;
  sensor.c = -(float)(v2 * v3);
  v4.c = v2 * v3;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &sensor, 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v6, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v4, 0);
  v7.b = v4.b;
  v7.a = v4.a;
  v7.c = -v4.c;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v7, 1);
}
