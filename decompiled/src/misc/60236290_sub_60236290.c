/* sub_60236290
 * address: 0x60236290   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236290(int a1, int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // t1
  bool v7; // zf
  unsigned int v8; // r1

  v6 = FIELD_U32(a1, 52);
  result = a1 + 52;
  v5 = v6;
  if ( v6 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v5, 32) )
    {
      result = sub_60881DE8(result);
      if ( FIELD_S32(result, 352) >= 1 )
      {
        v7 = result == 0;
        if ( result )
          v7 = FIELD_U8(result, 8) == 0;
        if ( !v7 )
        {
          result += 208;
          v8 = FIELD_U32(a2, 8);
          *(_QWORD *)result = *(_QWORD *)a2;
          FIELD_U64(result, 8) = v8;
        }
      }
    }
  }
  return result;
}
