/* PlantFireball_vf65
 * address: 0x60139FD8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlantFireball_vf65(int a1)
{
  int result; // r0

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6640, &stru_60AF664C, &stru_60AF6658);
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3192) |= 0x40000000u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  result = FIELD_U32(a1, 3184) | 0x40000000;
  FIELD_U32(a1, 3184) = result;
  return result;
}
