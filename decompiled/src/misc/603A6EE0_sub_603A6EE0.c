/* sub_603A6EE0
 * address: 0x603A6EE0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A6EE0(int result)
{
  __int16 v1; // r1

  v1 = FIELD_U16(result, 23588) - 1;
  FIELD_U16(result, 23588) = v1;
  if ( !v1 )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 192))(result, FIELD_U32(result, 23592));
  return result;
}
