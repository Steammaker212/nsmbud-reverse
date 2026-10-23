/* sub_60551970
 * address: 0x60551970   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60551970(int a1)
{
  FIELD_U32(dword_60CC6D78, 44) &= ~8u;
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CAD008, 0);
  return sub_60473DE4((_DWORD *)(a1 + 3652), 0, &dword_60CAD008, 0);
}
