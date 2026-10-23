/* StarCoinBase_onDraw
 * address: 0x605F485C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall StarCoinBase_onDraw(StarCoinBase *this)
{
  DrawMgr_drawModel2(DrawMgr_instance, (_DWORD *)FIELD_U32(this, 0x17D8));
  return 1;
}
