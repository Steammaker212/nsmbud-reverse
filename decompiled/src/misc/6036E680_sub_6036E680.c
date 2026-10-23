/* sub_6036E680
 * address: 0x6036E680   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6036E680(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s0
  float v5; // s0
  CollisionMgr *v6; // r0

  v2 = FIELD_F32(a1, 6372) - FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 6368) - FIELD_F32(a1, 108);
  v4 = sqrtf((float)((float)(v2 * v2) + (float)(v3 * v3)) + 0.0);
  if ( v4 > 0.0 )
  {
    v5 = 1.0 / v4;
    v2 = v2 * v5;
    v3 = v3 * v5;
  }
  FIELD_U32(a1, 128) = 0;
  FIELD_F32(a1, 120) = v3 * 3.5;
  FIELD_F32(a1, 124) = v2 * 3.5;
  v6 = (CollisionMgr *)(a1 + 648);
  if ( FIELD_U32(a1, 6340) )
    CollisionMgr_init(v6, (StateActor *)a1, &stru_60B003F8, 0, &stru_60B00410);
  else
    CollisionMgr_init(v6, (StateActor *)a1, &stru_60B003F8, 0, &stru_60B00404);
  FIELD_U32(a1, 6336) = 0;
  FIELD_U16(a1, 6278) = 10;
  sub_60237208(a1 + 6768, (Vec3 *)(a1 + 108), 0, 0);
  return sub_60237208(a1 + 6872, (Vec3 *)(a1 + 108), 0, 0);
}
