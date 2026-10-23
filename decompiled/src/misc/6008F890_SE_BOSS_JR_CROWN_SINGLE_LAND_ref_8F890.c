/* SE_BOSS_JR_CROWN_SINGLE_LAND_ref_8F890
 * address: 0x6008F890   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_SINGLE_LAND_ref_8F890(CollisionActor *a1)
{
  int result; // r0

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    if ( FIELD_F32(a1, 0x7C) < FIELD_F32(a1, 0x64) )
      sub_60813430(&a1[1].collisionMgr[2764], "SE_BOSS_JR_CROWN_SINGLE_LAND", 0);
    FIELD_F32(a1, 0x7C) = 0.0;
    return 0;
  }
  return result;
}
