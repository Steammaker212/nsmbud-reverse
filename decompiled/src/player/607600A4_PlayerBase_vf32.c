/* PlayerBase_vf32
 * address: 0x607600A4   size: 72   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_vf32(int result)
{
  if ( (FIELD_U8(result, 1211) & 0x10) == 0 )
    return (*(int (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)result + 748))(
             result,
             1,
             0,
             0,
             3.628 + 0.2815,
             FIELD_F32(result, 88));
  return result;
}
