/* GoombaBase__vf2B8
 * address: 0x6033DB5C   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall GoombaBase__vf2B8(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C944DC + 8))();
  if ( v2 != result )
  {
    FIELD_U32(a1, 120) = 0;
    result = FIELD_U32(a1, 80) ^ 1;
    FIELD_U32(a1, 80) = result;
  }
  return result;
}
