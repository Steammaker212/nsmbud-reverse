/* ActiveColliderMgr_insertFront
 * address: 0x6015BB4C   size: 52   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgrList *__fastcall ActiveColliderMgr_insertFront(ActiveColliderMgrList *this, ActiveColliderNode *node)
{
  ActiveColliderNode *first; // r2

  if ( node )
  {
    first = FIELD_U32(this, 0x4);
    if ( first )
    {
      FIELD_U32(first, 0x8) = node;
      FIELD_U32(node, 0x4) = FIELD_U32(this, 0x4);
    }
    else
    {
      FIELD_U32(this, 0x8) = node;
    }
    FIELD_U32(this, 0x4) = node;
  }
  return this;
}
