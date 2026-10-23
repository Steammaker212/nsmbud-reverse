/* sub_600BB38C
 * address: 0x600BB38C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BB38C(int result)
{
  int v1; // r2
  int v2; // r12

  FIELD_U32(result, 120) = FIELD_U32(result, 6144);
  FIELD_U32(result, 124) = FIELD_U32(result, 6148);
  v1 = FIELD_U32(result, 112);
  v2 = FIELD_U32(result, 108);
  FIELD_U32(result, 6208) = FIELD_U32(result, 116);
  FIELD_U32(result, 6204) = v1;
  FIELD_U32(result, 6200) = v2;
  FIELD_F32(result, 6208) = FIELD_F32(result, 6208) - FIELD_F32(result, 6120);
  FIELD_U32(result, 6196) = -1073741824;
  FIELD_U32(result, 6192) = FIELD_U32(result, 6140);
  return result;
}
