/* sub_607F2EC4
 * address: 0x607F2EC4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607F2EC4(int a1)
{
  FIELD_U8(a1, 44) = 0;
  FIELD_U32(a1, 48) = 1;
  return sub_604B63E0((_DWORD *)(dword_60C99DD0 + 16), 35, FIELD_U32(a1, 40));
}
