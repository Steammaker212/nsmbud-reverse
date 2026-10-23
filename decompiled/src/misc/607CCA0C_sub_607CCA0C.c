/* sub_607CCA0C
 * address: 0x607CCA0C   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CCA0C(int a1)
{
  int *v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r1
  int v6; // r2
  int v7; // r1
  int v8; // r2
  float v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  int result; // r0
  CollisionMgr_Sensor v13; // [sp+0h] [bp-30h] BYREF

  FIELD_U32(a1, 1236) &= ~8u;
  if ( !sub_607D6C28(a1) )
    FIELD_U32(a1, 1236) |= 8u;
  v2 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1);
  v3 = *v2;
  v4 = v2[1];
  FIELD_U32(a1, 6884) = v2[2];
  FIELD_U32(a1, 6876) = v3;
  FIELD_U32(a1, 6880) = v4;
  v5 = v2[3];
  v6 = v2[4];
  FIELD_U32(a1, 6872) = v2[5];
  FIELD_U32(a1, 6868) = v6;
  FIELD_U32(a1, 6864) = v5;
  v7 = v2[6];
  v8 = v2[7];
  FIELD_U32(a1, 6896) = v2[8];
  FIELD_U32(a1, 6892) = v8;
  FIELD_U32(a1, 6888) = v7;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6876), 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6864), 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), (CollisionMgr_Sensor *)(a1 + 6888), 0);
  v9 = FIELD_F32(a1, 6892);
  v13.a = FIELD_F32(a1, 6888);
  v13.b = v9;
  v13.c = -FIELD_F32(a1, 6896);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), &v13, 1);
  FIELD_U8(a1, 3856) = 0;
  FIELD_U8(a1, 3860) = 0;
  FIELD_U8(a1, 3873) = 0;
  FIELD_U8(a1, 3869) = 0;
  FIELD_U8(a1, 3865) = 0;
  FIELD_U8(a1, 3863) = 0;
  FIELD_U8(a1, 3862) = 0;
  FIELD_U8(a1, 3861) = 0;
  FIELD_U8(a1, 3859) = 0;
  FIELD_U8(a1, 3858) = 0;
  FIELD_U8(a1, 3857) = 0;
  FIELD_U8(a1, 3872) = 0;
  FIELD_U8(a1, 3875) = 0;
  FIELD_U8(a1, 3874) = 0;
  FIELD_U8(a1, 3868) = 0;
  FIELD_U8(a1, 3871) = 0;
  FIELD_U8(a1, 3870) = 0;
  FIELD_U8(a1, 3864) = 0;
  FIELD_U8(a1, 3867) = 0;
  FIELD_U8(a1, 3866) = 0;
  FIELD_U32(a1, 3884) = 64;
  FIELD_U32(a1, 3876) = 64;
  FIELD_U32(a1, 3860) = 64;
  FIELD_U32(a1, 3868) = 64;
  FIELD_U32(a1, 3880) = 2;
  if ( !FIELD_U32(a1, 11360) )
  {
    result = 66;
    FIELD_U32(a1, 3884) = 66;
    FIELD_U32(a1, 3876) = 66;
    FIELD_U32(a1, 3860) = 66;
    goto LABEL_13;
  }
  sub_6076107C(a1);
  if ( FIELD_F32(a1, 124) > 0.0 || (FIELD_U8(a1, 1236) & 0x20) != 0 )
    FIELD_U32(a1, 3872) |= 0x660u;
  v10 = FIELD_U8(a1, 84);
  v11 = 0;
  if ( v10 < 4 )
    v11 = (char)v10;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v11 + 32);
  if ( result )
  {
    result = FIELD_U32(result, 1320);
    if ( result == 8 )
    {
      FIELD_U32(a1, 3884) |= 0x4000u;
      FIELD_U32(a1, 3876) |= 0x4000u;
      FIELD_U32(a1, 3860) |= 0x4000u;
      result = FIELD_U32(a1, 3868) | 0x4000;
LABEL_13:
      FIELD_U32(a1, 3868) = result;
    }
  }
  return result;
}
