/* sub_60879ECC
 * address: 0x60879ECC   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60879ECC(int result, _DWORD *a2, float a3)
{
  int v5; // r5
  int v6; // r0

  v5 = result;
  if ( fabsf(a3) >= 0.001 )
  {
    FIELD_U32(result, 8) &= ~4u;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = FIELD_U32(v5, 8) & 2 | (*(_DWORD *)(a2[17] + 72) >> 12) & 7;
    if ( FIELD_U32(v5, 16) )
      v6 |= 4u;
    return ((int (__fastcall *)(int, _DWORD *, float))*(&off_60C5A888 + 2 * v6))(
             v5 + ((int)*(&off_60C5A888 + 2 * v6 + 1) >> 1),
             a2,
             a3);
  }
  return result;
}
