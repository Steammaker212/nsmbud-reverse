/* sub_6078667C
 * address: 0x6078667C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6078667C(_DWORD *result, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r2

  switch ( a2 )
  {
    case 1:
    case 10:
      result[2] = 0;
      result[3] = 0;
      result[32] = 0;
      result[33] = 0;
      break;
    case 2:
      result[2] &= 0xFFFFFF3F;
      v2 = result[3] & 0xFFFFFF3F;
      goto LABEL_5;
    case 3:
      result[2] &= ~8u;
      v2 = result[3] & 0xFFFFFFF7;
LABEL_5:
      result[3] = v2;
      break;
    case 5:
      v3 = result[1] & 0xFFFFFFBF;
      goto LABEL_8;
    case 6:
      v3 = result[1] & 0xFFFFFFDF;
LABEL_8:
      result[1] = v3;
      break;
    default:
      break;
  }
  result[1] |= 1 << a2;
  return result;
}
