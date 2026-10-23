/* PlayerBase_ctor_helper_7501D0
 * address: 0x607501D0   size: 32   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_ctor_helper_7501D0(int result)
{
  FIELD_U8(result, 20) = 0;
  *(_DWORD *)result = 0;
  FIELD_U32(result, 4) = 0;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = 0;
  return result;
}
