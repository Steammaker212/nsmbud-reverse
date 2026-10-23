/* sub_602C3BE4
 * address: 0x602C3BE4   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602C3BE4(int a1)
{
  FIELD_U8(a1, 6325) = 0;
  return StageActor__removeActiveColliders(a1);
}
