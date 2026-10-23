/* sub_60539BC8
 * address: 0x60539BC8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60539BC8(int a1)
{
  *(_BYTE *)(FIELD_U32(a1, 52576) + 64) |= 1u;
  sub_60473DE4((_DWORD *)(a1 + 12092), 1u, &dword_60CAB45C, 0);
  FIELD_U8(a1, 83565) = 1;
  return 83565;
}
