/* sub_6016BC68
 * address: 0x6016BC68   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6016BC68(Actor *a1)
{
  Actor *parent; // r0

  FIELD_U32(a1, 0x0) = (int)&off_60BD4C5C;
  parent = FIELD_U32(a1 + (6) * 80, 0x38);
  if ( parent )
  {
    operator_delete(parent);
    FIELD_U32(a1 + (6) * 80, 0x38) = 0;
  }
  nullsub_113(&FIELD_U32(a1 + (4) * 80, 0x20));
  nullsub_111(&FIELD_U32(a1 + (3) * 80, 0x18));
  return Actor__dtor(a1);
}
