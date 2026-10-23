/* sub_6085D12C
 * address: 0x6085D12C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085D12C(int a1, unsigned int a2)
{
  unsigned __int8 *v2; // r0

  v2 = (unsigned __int8 *)(a1 + ((2 * (a2 + (a2 >> 31))) & 0xFFFFFFFC));
  return v2[180] | (v2[181] << 8) | ((v2[182] | (v2[183] << 8)) << 16);
}
