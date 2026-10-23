/* sub_605430CC
 * address: 0x605430CC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605430CC(int result, int a2)
{
  FIELD_U8(result, 3586) = 1;
  FIELD_U32(result, 3552) = a2;
  FIELD_U32(result, 3580) = 255;
  FIELD_U8(result, 3585) = 0;
  return result;
}
