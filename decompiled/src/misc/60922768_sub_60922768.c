/* sub_60922768
 * address: 0x60922768   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60922768(int a1, unsigned int a2, int a3, int a4, char a5)
{
  int result; // r0

  if ( a2 >= 0x10 )
    a2 = 0;
  result = a1 + 12 * a2;
  FIELD_U32(result, 56) = a3;
  FIELD_U32(result, 60) = a4;
  FIELD_U8(result, 64) = 1;
  FIELD_U8(result, 65) = a5;
  return result;
}
