/* sub_6041838C
 * address: 0x6041838C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_6041838C(ModelAnimation *result)
{
  ModelAnimation *v1; // r1

  v1 = result;
  if ( FIELD_F32(result, 0x14) < 0.0 )
    v1 = (ModelAnimation *)&FIELD_U32(result, 0x4);
  FIELD_U32(result, 0x10) = FIELD_U32(v1, 0x0);
  FIELD_U32(result, 0x18) = FIELD_U32(result, 0x18) & 0xFFFFFFC1 | 2;
  return result;
}
