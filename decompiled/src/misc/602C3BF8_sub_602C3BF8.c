/* sub_602C3BF8
 * address: 0x602C3BF8   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602C3BF8(StageActor *this)
{
  *((_BYTE *)this + 6325) = 1;
  return StageActor__addActiveColliders(this);
}
