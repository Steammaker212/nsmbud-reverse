/* sub_60917A78
 * address: 0x60917A78   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60917A78(int a1)
{
  unsigned int *result; // r0
  int v2; // r1
  unsigned int v3; // r0
  unsigned int v4; // r1

  result = *(unsigned int **)(a1 + 192);
  if ( result != (unsigned int *)-1 )
  {
    v2 = FIELD_U32(dword_60CCFC8C, 216);
    v3 = (unsigned int)result - FIELD_U16(dword_60CCFC8C, 220);
    if ( FIELD_U32(dword_60CCFC8C, 212) > v3 )
      v2 += 12 * v3;
    result = (unsigned int *)(v2 + 8);
    do
      v4 = __ldrex(result);
    while ( __strex(v4 | 2, result) );
  }
  return result;
}
