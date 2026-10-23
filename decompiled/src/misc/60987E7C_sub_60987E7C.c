/* sub_60987E7C
 * address: 0x60987E7C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60987E7C(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = sub_6084C7C0(a1);
  *result = off_60C5FE04;
  result[1] = 255;
  result[2] = 255;
  result[7] = 0;
  result[6] = 0;
  result[5] = 0;
  result[4] = 0;
  result[3] = 0;
  result[8] = 1065353216;
  result[9] = 1065353216;
  result[10] = 0;
  result[11] = a2;
  result[12] = a3;
  *((_BYTE *)result + 53) = -1;
  *((_BYTE *)result + 54) = -1;
  *((_BYTE *)result + 55) = -1;
  *((_BYTE *)result + 52) = 1;
  return result;
}
