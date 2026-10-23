/* sub_602C2178
 * address: 0x602C2178   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C2178(int a1)
{
  float v2; // s0
  float v3; // r1
  int result; // r0
  CollisionMgr_Sensor v5; // [sp+0h] [bp-28h] BYREF

  sub_602C1BE0(a1, 1);
  v2 = FIELD_F32(a1, 6412) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 6316) = v2 + 8.0;
  FIELD_F32(a1, 6328) = v2 + -8.0;
  FIELD_F32(a1, 6332) = v2 + -6.0;
  FIELD_F32(a1, 6336) = v2 + 6.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 6308), 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 6320), 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 6332), 0);
  v3 = FIELD_F32(a1, 6336);
  v5.a = FIELD_F32(a1, 6332);
  v5.b = v3;
  v5.c = -FIELD_F32(a1, 6340);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v5, 1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = 0;
  if ( (result & 0x440000) != 0 && (result & 0x10000000) == 0
    || (result & 0x880000) != 0 && (result &= 0x20000000u) == 0 )
  {
    FIELD_U32(a1, 120) = 0;
    return 0;
  }
  return result;
}
