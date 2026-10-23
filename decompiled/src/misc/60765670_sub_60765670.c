/* sub_60765670
 * address: 0x60765670   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60765670(int result, float a2)
{
  FIELD_U32(result, 9596) = 1065353216;
  FIELD_F32(result, 9600) = a2;
  FIELD_F32(result, 9604) = a2 * 0.5;
  FIELD_U8(result, 9612) = 1;
  return result;
}
