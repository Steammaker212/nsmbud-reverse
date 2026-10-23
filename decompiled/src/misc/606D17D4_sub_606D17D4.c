/* sub_606D17D4
 * address: 0x606D17D4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606D17D4(int a1)
{
  unsigned int v1; // r5
  ColliderBase *v2; // r4
  ColliderListNode *result; // r0

  v1 = FIELD_U32(a1, 6156);
  v2 = *(ColliderBase **)(a1 + 6152);
  do
  {
    result = ColliderMgr_removeRelated1(ColliderMgr_instance, v2);
    v2 = (ColliderBase *)((char *)v2 + 656);
  }
  while ( (unsigned int)v2 < v1 );
  return result;
}
