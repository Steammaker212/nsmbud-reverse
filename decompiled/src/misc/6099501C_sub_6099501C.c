/* sub_6099501C
 * address: 0x6099501C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6099501C(_DWORD *a1)
{
  _DWORD *result; // r0

  result = sub_60992DB8(a1);
  *result = off_60C606E8;
  result[8] = 0;
  result[7] = 0;
  result[6] = 0;
  result[5] = 0;
  result[9] = 1120403456;
  result[10] = 1120403456;
  result[11] = 1120403456;
  result[12] = 0x40000000;
  result[13] = 0;
  result[14] = 1101004800;
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  *((_BYTE *)result + 72) = 1;
  return result;
}
