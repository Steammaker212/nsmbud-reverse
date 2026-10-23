/* sub_602DE104
 * address: 0x602DE104   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DE104(int a1)
{
  float v2; // s0
  int result; // r0
  float v4; // r1
  Vec3 v5; // [sp+4h] [bp-1Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    result = 0;
    FIELD_U32(a1, 124) = 0;
    if ( !FIELD_U8(a1, 6160) )
    {
      if ( (FIELD_U8(a1, 2880) & 1) == 0 )
      {
        v4 = FIELD_F32(a1, 112);
        v5.x = FIELD_F32(a1, 108);
        v5.y = v4;
        v5.z = 4500.0;
        EffectData_create(728, &v5, 0, 0);
        result = 1;
      }
      FIELD_U8(a1, 6160) = result;
    }
  }
  return result;
}
