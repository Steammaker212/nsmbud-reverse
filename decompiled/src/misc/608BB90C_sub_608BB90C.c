/* sub_608BB90C
 * address: 0x608BB90C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BB90C(int a1, int a2, int a3)
{
  int v5; // r0
  int result; // r0
  int v7; // r1

  v5 = FIELD_U32(a3, 376);
  if ( v5 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 32))(v5, a1);
  result = FIELD_U32(a3, 380);
  if ( result == a1 )
  {
    result = FIELD_U32(a1, 368);
    FIELD_U32(a3, 380) = result;
  }
  else
  {
    while ( 1 )
    {
      v7 = result;
      result = FIELD_U32(result, 368);
      if ( !result )
        break;
      if ( result == a1 )
      {
        result = FIELD_U32(a1, 368);
        FIELD_U32(v7, 368) = result;
        return result;
      }
    }
  }
  return result;
}
