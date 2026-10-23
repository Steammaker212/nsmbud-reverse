/* Enemy__beginState_DieFumi
 * address: 0x602A7D9C   size: 456   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602D6B18 : SledgeBro
//   - 0x60266130 : BrosBase
//   - 0x600260D0 : BossBase
//   - 0x603100CC : Kanibo
signed int __fastcall Enemy__beginState_DieFumi(Enemy *a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  int v4; // r3
  float v5; // r0
  float v6; // r1
  unsigned int v7; // r0
  int *v8; // r1
  signed int result; // r0

  v2 = *(_DWORD **)(PlayerMgr_instance + 32);
  if ( v2 && v2[2852] == FIELD_U32(a1, 0x0)._._._.id
    || (v2 = *(_DWORD **)(PlayerMgr_instance + 36)) != 0 && v2[2852] == FIELD_U32(a1, 0x0)._._._.id
    || (v2 = *(_DWORD **)(PlayerMgr_instance + 40)) != 0 && v2[2852] == FIELD_U32(a1, 0x0)._._._.id
    || (v2 = *(_DWORD **)(PlayerMgr_instance + 44)) != 0 && v2[2852] == FIELD_U32(a1, 0x0)._._._.id )
  {
    Player_ReleaseCarryableEnemy(v2, (int)a1);
  }
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0)._._._.vtable + 72))(a1);
  v3 = SLOBYTE(FIELD_U32(a1, 0x17EC));
  if ( v3 >= 0 )
  {
    v4 = SLOBYTE(FIELD_U32(a1, 0x17F4));
    if ( (unsigned __int8)v4 > 3u )
    {
      if ( (unsigned __int8)v4 == 4 )
        sub_600229B0(0.0, 24.0, dword_60C7F52C, (int)a1, v3);
    }
    else
    {
      sub_60022760(0.0, 24.0, dword_60C7F52C, (int)a1, v3, v4);
    }
  }
  CollisionMgr_vf14((int)FIELD_U32(a1, 0x0)._.collisionMgr);
  v5 = FIELD_F32(a1, 0x17DC);
  FIELD_U32(a1, 0x0)._._.speed.x = FIELD_F32(a1, 0x17D8);
  FIELD_U32(a1, 0x0)._._.speed.y = v5;
  FIELD_U32(a1, 0x0)._._.speed.z = 0.0;
  v6 = FIELD_F32(a1, 0x17E0);
  FIELD_U32(a1, 0x0)._._.maxSpeed.x = 0.0;
  FIELD_U32(a1, 0x0)._._.maxSpeed.y = v6;
  FIELD_U32(a1, 0x0)._._.maxSpeed.z = 0.0;
  FIELD_U32(a1, 0x188C) = FIELD_U32(a1, 0x17F0);
  FIELD_U32(a1, 0x0)._._.xAcceleration = 0.0;
  FIELD_U32(a1, 0x0)._._.field_64 = FIELD_F32(a1, 0x17E4);
  v7 = (unsigned int)FIELD_U32(a1, 0x0)._._.rotation.y >> 31;
  FIELD_U32(a1, 0x0)._._.direction = v7;
  FIELD_U32(a1, 0x0)._._.rotation.y = Enemy_CommonRotations[v7];
  v8 = dword_602A7F80;
  result = 6056;
  if ( (FIELD_U32(a1, 0x0)._._.field_57 & 2) != 0 )
    v8 = &dword_602A7F80[1];
  LODWORD(FIELD_U32(a1, 0x0)._._.position.z) = *v8;
  LOBYTE(FIELD_U32(a1, 0x0)._.field_17A8) = 1;
  return result;
}
