/* sub_6003F398
 * address: 0x6003F398   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_6003F398(_BYTE *a1)
{
  ColliderBase *v1; // r4
  ColliderListNode *result; // r0

  v1 = (ColliderBase *)(a1 + 6336);
  a1[11679] = 1;
  a1[11693] = 0;
  a1[11694] = 0;
  result = (ColliderListNode *)sub_601536B0(ColliderMgr_instance, a1 + 6336);
  if ( !result )
    return ColliderMgr_removeRelated1(ColliderMgr_instance, v1);
  return result;
}
