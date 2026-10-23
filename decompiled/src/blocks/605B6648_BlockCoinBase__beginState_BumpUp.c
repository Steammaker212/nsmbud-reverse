/* BlockCoinBase__beginState_BumpUp
 * address: 0x605B6648   size: 64   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockCoinBase__beginState_BumpUp(int a1)
{
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 2.0;
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U32(a1, 6812) = 1049616187;
  FIELD_U32(a1, 6880) = 1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
}
