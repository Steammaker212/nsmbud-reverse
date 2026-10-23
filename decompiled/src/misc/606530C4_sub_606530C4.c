/* sub_606530C4
 * address: 0x606530C4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606530C4(int a1, _DWORD *a2, float *a3)
{
  unsigned int v3; // r0
  float result; // s0

  v3 = ((FIELD_U32(a1, 24) >> 8) & 0xF) + 1;
  if ( v3 <= 2 )
    v3 = 2;
  *a2 = 2 * v3;
  result = (float)(16 * v3);
  *a3 = result;
  return result;
}
