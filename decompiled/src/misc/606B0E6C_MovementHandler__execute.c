/* MovementHandler__execute
 * address: 0x606B0E6C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall MovementHandler__execute(MovementHandler *a1)
{
  FIELD_U32(a1, 0x34) = FIELD_U32(a1, 0x30);
  return StateMgr__execute(&FIELD_U32(a1, 0xD4).manager);
}
