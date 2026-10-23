/* ActiveColliderMgr_inserBack
 * address: 0x6015B1FC   size: 52   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgrList *__fastcall ActiveColliderMgr_inserBack(ActiveColliderMgrList *this, ActiveColliderNode *node)
{
  ActiveColliderNode *tmp; // r2

  if ( node )
  {
    tmp = FIELD_U32(this, 0x8);
    if ( tmp )
    {
      FIELD_U32(tmp, 0x4) = node;
      FIELD_U32(node, 0x8) = FIELD_U32(this, 0x8);
    }
    else
    {
      FIELD_U32(this, 0x4) = node;
    }
    FIELD_U32(this, 0x8) = node;
  }
  return this;
}
