/* sub_609122E8
 * address: 0x609122E8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609122E8(nn__os *this, int a2, unsigned int a3)
{
  int result; // r0

  result = nn__os__AllocateMemoryBlock(this, (unsigned int *)((a2 + 0x1FFFFF) & 0xFFE00000), a3);
  *((_DWORD *)this + 1) = a2;
  return result;
}
