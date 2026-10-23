/* sub_606D2410
 * address: 0x606D2410   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D2410(int a1, int a2, int a3)
{
  int result; // r0

  FIELD_U32(a1, 6168) = a3;
  sub_606CA3C0(a1);
  result = FIELD_U8(a1, 6185);
  if ( FIELD_U8(a1, 6185) )
    return sub_606D45F8(a1 + 6176, a2, a3);
  return result;
}
