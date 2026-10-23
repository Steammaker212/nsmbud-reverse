/* sub_606172E0
 * address: 0x606172E0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606172E0(int a1)
{
  int result; // r0

  sub_60616F0C(a1);
  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = sub_606C8C0C(a1);
    FIELD_U32(a1, 7100) = result;
  }
  return result;
}
