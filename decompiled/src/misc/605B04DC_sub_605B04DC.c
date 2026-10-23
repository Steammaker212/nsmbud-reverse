/* sub_605B04DC
 * address: 0x605B04DC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605B04DC(int a1)
{
  _DWORD *result; // r0

  FIELD_U32(a1, 6540) = 0;
  FIELD_F32(a1, 6544) = -(float)(16.0 + 208.0);
  FIELD_U32(a1, 6548) = 1107296256;
  FIELD_U32(a1, 6552) = 1129316352;
  FIELD_U32(a1, 6236) = 0;
  FIELD_F32(a1, 6240) = -8.0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 6248) = 1090519040;
  FIELD_U32(a1, 6280) = -1082130432;
  FIELD_U32(a1, 6284) = 1065353216;
  FIELD_F32(a1, 6288) = -16.0;
  result = (_DWORD *)(a1 + 6292);
  *result = 1098907648;
  return result;
}
