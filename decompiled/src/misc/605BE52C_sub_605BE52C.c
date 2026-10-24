/* sub_605BE52C
 * address: 0x605BE52C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_605BE52C(ShapedCollider *a1, StageActor *a2)
{
  ColliderListNode *result; // r0

  ShapedCollider_init(a1, a2, &stru_60B05588);
  FIELD_U32(a1, 0x150) = &FIELD_U32(a1 + (1) * 364, 0x124);
  ColliderBase_setSolidity(&FIELD_U32(a1, 0x0), 0);
  result = ColliderMgr_add(ColliderMgr_instance, &FIELD_U32(a1, 0x0));
  FIELD_U32(a1 + (1) * 364, 0x128) = 0;
  LOBYTE(FIELD_U32(a1 + (1) * 364, 0x12C)) = 0;
  return result;
}
