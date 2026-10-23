/* sub_602361D4
 * address: 0x602361D4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602361D4(int a1, float a2)
{
  int result; // r0
  int v4; // r2
  int v5; // t1
  bool v7; // zf
  __int64 v8; // d1

  v5 = FIELD_U32(a1, 52);
  result = a1 + 52;
  v4 = v5;
  if ( v5 )
  {
    if ( FIELD_U32(a1, 56) == FIELD_U32(v4, 32) )
    {
      result = sub_60881DE8(result);
      if ( FIELD_S32(result, 352) >= 1 )
      {
        v7 = result == 0;
        if ( result )
          v7 = FIELD_U8(result, 8) == 0;
        if ( !v7 )
        {
          result += 240;
          v8 = FIELD_U64(result, 8);
          *((float *)&v8 + 1) = a2;
          *(_QWORD *)result = *(_QWORD *)result;
          FIELD_U64(result, 8) = v8;
        }
      }
    }
  }
  return result;
}
