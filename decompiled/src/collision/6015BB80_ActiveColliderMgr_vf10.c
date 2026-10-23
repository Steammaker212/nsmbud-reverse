/* ActiveColliderMgr_vf10
 * address: 0x6015BB80   size: 44   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgrList *__fastcall ActiveColliderMgr_vf10(ActiveColliderMgrList *this)
{
  ActiveColliderMgrList *i; // r4

  for ( i = this;
        FIELD_U32(i, 0x4);
        this = (ActiveColliderMgrList *)(*(int (__fastcall **)(ActiveColliderMgrList *))(FIELD_U32(i, 0x0) + 4))(i) )
  {
    ;
  }
  return this;
}
