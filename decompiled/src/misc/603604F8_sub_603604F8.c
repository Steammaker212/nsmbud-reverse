/* sub_603604F8
 * address: 0x603604F8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603604F8(Enemy *a1)
{
  (*(void (__fastcall **)(Enemy *))(FIELD_U32(a1, 0x0) + 640))(a1);
  return Enemy__vfDC(a1);
}
