/* sub_601B126C
 * address: 0x601B126C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B126C(int a1, unsigned int a2)
{
  unsigned int v2; // r3
  int result; // r0

  v2 = 0;
  if ( a2 < 5 )
    v2 = a2;
  result = a1 + 4 * v2;
  FIELD_U8(result, 18) = 0;
  FIELD_U16(result, 16) = word_60AFC118[a2];
  return result;
}
