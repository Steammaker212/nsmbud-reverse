/* sub_602C0590
 * address: 0x602C0590   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C0590(int result)
{
  char v1; // r2
  int v2; // r3

  if ( FIELD_U8(result, 6485) )
  {
    v1 = FIELD_U8(result, 6485) - 1;
    if ( FIELD_U8(result, 6485) == 1 )
      v2 = 0;
    else
      v2 = FIELD_U32(result, 160) + dword_60C911E4;
    FIELD_U32(result, 160) = v2;
    FIELD_U8(result, 6485) = v1;
  }
  if ( --FIELD_U8(result, 6481) == 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60C9133C);
  return result;
}
