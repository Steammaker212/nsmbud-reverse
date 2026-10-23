/* sub_60532EF0
 * address: 0x60532EF0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60532EF0(int a1)
{
  *(_BYTE *)(FIELD_U32(a1, 52644) + 64) &= ~1u;
  nullsub_4390();
  nullsub_4390();
  nullsub_4390();
  FIELD_U32(a1, 83588) = 0;
  FIELD_U32(a1, 4056) = 0;
  FIELD_U32(a1, 8068) = 0;
  FIELD_U32(a1, 12080) = 0;
  FIELD_U8(a1, 83630) = 0;
  return sub_60473B58((_DWORD *)(a1 + 12092), 5u, 0);
}
