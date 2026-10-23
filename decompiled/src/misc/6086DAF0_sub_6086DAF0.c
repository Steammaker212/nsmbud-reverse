/* sub_6086DAF0
 * address: 0x6086DAF0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086DAF0(int a1, int a2)
{
  int result; // r0
  int v5; // r6
  int i; // r7

  result = FIELD_U16(a1, 26);
  if ( result )
  {
    v5 = 0;
    for ( i = 0; i < result; ++i )
    {
      sub_6086C63C(FIELD_U32(a1, 36) + v5, a2);
      result = FIELD_U16(a1, 26);
      v5 += 72;
    }
  }
  return result;
}
