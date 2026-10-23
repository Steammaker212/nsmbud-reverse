/* sub_6056BC14
 * address: 0x6056BC14   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6056BC14(int a1)
{
  float v2; // r1
  float v3; // r2
  Vec3 v5; // [sp+0h] [bp-18h] BYREF

  if ( sub_6078A50C(PlayerMgr_instance) <= 1 )
    return (_BYTE *)sub_6056B740(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v5.x = FIELD_F32(a1, 108);
  v5.y = v2;
  v5.z = v3;
  EffectData_create(573, &v5, 0, a1 + 144);
  return StageActor__delete((StateActor *)a1, 1);
}
