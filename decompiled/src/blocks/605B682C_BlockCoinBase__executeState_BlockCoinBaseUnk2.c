/* BlockCoinBase__executeState_BlockCoinBaseUnk2
 * address: 0x605B682C   size: 44   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
_DWORD *__fastcall BlockCoinBase__executeState_BlockCoinBaseUnk2(_DWORD *result)
{
  int v1; // r2
  int v2; // r2

  v1 = result[1704];
  if ( !v1 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 220))(result);
  v2 = v1 - 1;
  result[1704] = v2;
  if ( !v2 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 220))(result);
  return result;
}
