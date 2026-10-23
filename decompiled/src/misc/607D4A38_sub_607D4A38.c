/* sub_607D4A38
 * address: 0x607D4A38   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D4A38(int a1, int a2, int a3)
{
  int result; // r0

  *(_DWORD *)(**(_DWORD **)(a1 + 240) + 32) = a2;
  result = **(_DWORD **)(a1 + 240);
  FIELD_U32(result, 36) = a3;
  return result;
}
