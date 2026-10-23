/* SE_DUMMY_ref
 * address: 0x6080B514   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_DUMMY_ref(int result)
{
  FIELD_U32(result, 56) = "SE_DUMMY";
  FIELD_U32(result, 60) = "SE_DUMMY";
  FIELD_U32(result, 64) = 1065353216;
  FIELD_U32(result, 68) = 1065353216;
  FIELD_U8(result, 72) = 1;
  return result;
}
