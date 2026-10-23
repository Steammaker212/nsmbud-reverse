/* SE_BOSS_JR_CROWN_SINGLE_LAND_ref
 * address: 0x6008D808   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_SINGLE_LAND_ref(CollisionActor *a1)
{
  float v2; // s0
  float x; // s2
  float v4; // s0
  float v5; // s0
  int result; // r0

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  sub_60095344(a1, v2);
  x = FIELD_F32(a1, 0x6C);
  v4 = FIELD_F32(dword_60CC6484, 208) + -80.0;
  if ( x >= v4 )
  {
    v5 = FIELD_F32(dword_60CC6484, 216) + 80.0;
    if ( x > v5 )
      FIELD_F32(a1, 0x6C) = v5;
  }
  else
  {
    FIELD_F32(a1, 0x6C) = v4;
  }
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    if ( FIELD_F32(a1, 0x7C) < -1.0 )
      sub_60813430(&a1[1].collisionMgr[2764], "SE_BOSS_JR_CROWN_SINGLE_LAND", 0);
    FIELD_F32(a1, 0x7C) = 0.0;
    return 0;
  }
  return result;
}
