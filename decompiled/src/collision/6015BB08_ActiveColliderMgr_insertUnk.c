/* ActiveColliderMgr_insertUnk
 * address: 0x6015BB08   size: 68   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ActiveColliderMgr_insertUnk(
        ActiveColliderMgrList *this,
        ActiveColliderNode *where,
        ActiveColliderNode *node)
{
  ActiveColliderNode *next; // r2

  if ( node )
  {
    if ( where )
    {
      FIELD_U32(where, 0x4) = FIELD_U32(node, 0x4);
      FIELD_U32(where, 0x8) = node;
      FIELD_U32(node, 0x4) = where;
      next = FIELD_U32(where, 0x4);
      if ( next )
        FIELD_U32(next, 0x8) = where;
      else
        FIELD_U32(this, 0x8) = where;
    }
  }
  else
  {
    (*(void (__fastcall **)(ActiveColliderMgrList *, ActiveColliderNode *))(FIELD_U32(this, 0x0) + 0xC))(this, where);// Insert Front
  }
}
