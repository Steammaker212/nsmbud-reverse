/* sub_606475C4
 * address: 0x606475C4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606475C4(int a1)
{
  ColliderListNode *result; // r0

  FIELD_U8(a1, 7092) = 0;
  result = ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return result;
}
