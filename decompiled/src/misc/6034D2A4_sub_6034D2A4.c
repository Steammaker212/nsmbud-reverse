/* sub_6034D2A4
 * address: 0x6034D2A4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6034D2A4(int a1, int a2, int a3)
{
  CollisionMgr *v5; // r6
  CollisionMgr_Sensor *v6; // r0
  CollisionMgr_Sensor *v7; // r0
  int v8; // r7
  float v9; // r1
  CollisionMgr_Sensor v10; // [sp+0h] [bp-28h] BYREF

  v5 = (CollisionMgr *)(a1 + 648);
  v6 = (CollisionMgr_Sensor *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1);
  CollisionMgr_setSensor(v5, v6, 3);
  v7 = (CollisionMgr_Sensor *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1);
  CollisionMgr_setSensor(v5, v7 + 1, 2);
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1);
  CollisionMgr_setSensor(v5, (CollisionMgr_Sensor *)(v8 + 24), 0);
  v9 = FIELD_F32(v8, 28);
  v10.a = FIELD_F32(v8, 24);
  v10.b = v9;
  v10.c = -FIELD_F32(v8, 32);
  CollisionMgr_setSensor(v5, &v10, 1);
  if ( a3 == 1 )
  {
    sub_6034CE90(a1);
  }
  else if ( !a3 )
  {
    sub_6034D134(a1);
  }
}
