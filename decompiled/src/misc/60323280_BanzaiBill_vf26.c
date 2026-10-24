/* BanzaiBill_vf26
 * address: 0x60323280   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf26(Actor *a1)
{
  Vec3 *p_movementId; // r1
  int v3; // r0

  if ( Actor__getProfileId(a1) == 630 || Actor__getProfileId(a1) == 632 )
  {
    p_movementId = (Vec3 *)&FIELD_U8(a1 + (1) * 80, 0x1C);
    v3 = 556;
  }
  else
  {
    p_movementId = (Vec3 *)&FIELD_U8(a1 + (1) * 80, 0x1C);
    v3 = 545;
  }
  return EffectData_create(v3, p_movementId, 0, 0);
}
