/* sub_60819E3C
 * address: 0x60819E3C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60819E3C(int result)
{
  int v1; // r1

  v1 = FIELD_U32(result, 28) - 1;
  FIELD_U32(result, 28) = v1;
  if ( !(FIELD_U32(result, 20) | v1) )
  {
    FIELD_U32(result, 20) = 1;
    FIELD_U32(result, 24) = 0;
    return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(result + 36) + 12))(
             FIELD_U32(result, 36),
             1,
             0);
  }
  return result;
}
