/* sub_6037A1D8
 * address: 0x6037A1D8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037A1D8(int a1)
{
  float v1; // s0
  float v2; // r1
  float v3; // r2
  EnemyFreezeMgr_Info v5; // [sp+0h] [bp-28h] BYREF

  if ( FIELD_U32(a1, 6352) == 1 && !FIELD_U8(a1, 6386) )
    return sub_603BDD88(a1);
  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 108);
  v5.settings = 0;
  v5.position.x = v3;
  v5.position.y = v1 + -4.0;
  v5.position.z = v2;
  v5.scale.x = 1.15;
  v5.scale.y = 1.15;
  v5.scale.z = 1.15;
  v5.field_1C = 0;
  return EnemyFreezeMgr_freeze((EnemyFreezeMgr *)(a1 + 6152), &v5, 1u);
}
