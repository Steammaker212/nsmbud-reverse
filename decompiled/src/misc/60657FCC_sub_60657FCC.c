/* sub_60657FCC
 * address: 0x60657FCC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60657FCC(int a1)
{
  ColliderBase *v1; // r1

  v1 = (ColliderBase *)(a1 + 6360);
  if ( FIELD_U8(dword_60CC6D78, 109032) )
    return ColliderMgr_add(ColliderMgr_instance, v1);
  else
    return ColliderMgr_removeRelated1(ColliderMgr_instance, v1);
}
