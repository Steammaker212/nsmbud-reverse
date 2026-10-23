/* sub_60236D5C
 * address: 0x60236D5C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236D5C(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r2
  int v8; // t1
  int v9; // r0

  v8 = FIELD_U32(a1, 52);
  result = a1 + 52;
  v7 = v8;
  if ( v8 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v7, 32) )
    {
      v9 = sub_60881DE8(result);
      return sub_60881DA8(v9, a3, a2);
    }
  }
  return result;
}
