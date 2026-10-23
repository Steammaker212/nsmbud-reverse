/* sub_609885EC
 * address: 0x609885EC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609885EC(int result, int a2, int a3, int *a4, _DWORD *a5, unsigned int a6, const void *a7, int a8)
{
  if ( FIELD_U16(a2, 4)
    || *(_BYTE *)(FIELD_U32(result, 44) + 44) && (result = FIELD_U8(result, 52) & 1, (_BYTE)result) )
  {
    result = *a4;
    if ( *a4 + a8 < a6 )
    {
      qmemcpy((void *)(a3 + 2 * result), a7, 2 * a8);
      *a4 += a8;
      result = FIELD_U16(a2, 4);
      if ( !FIELD_U16(a2, 4) )
      {
        *a5 += FIELD_U16(a2, 10) >> 1;
        return (int)a5;
      }
    }
  }
  return result;
}
