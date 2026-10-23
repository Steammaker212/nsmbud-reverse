/* sub_6023615C
 * address: 0x6023615C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023615C(int a1, __int64 *a2)
{
  int result; // r0
  int v5; // r2
  int v6; // t1
  bool v7; // zf
  __int64 v8; // d17
  __int64 v9; // d16

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
          result += 240;
          v8 = FIELD_U64(result, 8);
          v9 = *a2;
          LODWORD(v8) = *((_DWORD *)a2 + 2);
          *(_QWORD *)result = *a2;
          FIELD_U64(result, 8) = v8;
          HIDWORD(v8) = *((_DWORD *)a2 + 3);
          *(_QWORD *)result = v9;
          FIELD_U64(result, 8) = v8;
        }
      }
    }
  }
  return result;
}
