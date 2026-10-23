/* sub_60666E28
 * address: 0x60666E28   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60666E28(int a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r5
  ColliderListNode *result; // r0

  FIELD_U32(a1, 8056) = nullsub_5082;
  v1 = a1 + 8056;
  FIELD_U32(a1, 8060) = 0;
  v2 = a1 + 6104;
  do
  {
    result = ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v2 + 16));
    v2 += 488;
  }
  while ( v2 < v1 );
  return result;
}
