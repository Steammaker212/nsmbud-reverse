/* sub_606DEACC
 * address: 0x606DEACC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606DEACC(int a1)
{
  float *v1; // r1
  _DWORD *result; // r0

  FIELD_F32(a1, 6540) = 16.0 + 664.0;
  FIELD_U32(a1, 6544) = 0;
  FIELD_U32(a1, 6548) = 1143341056;
  FIELD_U32(a1, 6552) = 1107296256;
  FIELD_U32(a1, 6236) = 1090519040;
  FIELD_U32(a1, 6240) = 0;
  FIELD_U32(a1, 6244) = 1090519040;
  FIELD_U32(a1, 6248) = 0;
  FIELD_U32(a1, 6280) = 1065353216;
  FIELD_U32(a1, 6284) = -1082130432;
  v1 = (float *)(a1 + 6292);
  result = (_DWORD *)(a1 + 6288);
  *result = 1098907648;
  *v1 = -16.0;
  return result;
}
