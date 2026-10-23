/* BlockCoinBase__beginState_BumpDown2
 * address: 0x605B6B38   size: 76   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockCoinBase__beginState_BumpDown2(int a1)
{
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 2.0;
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 124) = -1073741824;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  FIELD_U32(a1, 6880) = 2;
  return 6880;
}
