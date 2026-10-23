/* sub_6042C000
 * address: 0x6042C000   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042C000(_DWORD *result, _DWORD *a2)
{
  result[193] = 1065353216;
  result[194] = 0;
  result[195] = 0;
  result[197] = 0;
  result[198] = 1065353216;
  result[199] = 0;
  result[201] = 0;
  result[202] = 0;
  result[203] = 1065353216;
  result[196] = *a2;
  result[200] = a2[1];
  result[204] = a2[2];
  result[1] = *a2;
  result[2] = a2[1];
  result[3] = a2[2];
  return result;
}
