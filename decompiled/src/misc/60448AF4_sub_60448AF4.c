/* sub_60448AF4
 * address: 0x60448AF4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60448AF4(int result, int a2)
{
  int v2; // r12
  int v3; // r3

  if ( FIELD_U32(result, 136) )
  {
    v2 = FIELD_U32(result, 88);
    v3 = (*(_DWORD *)(v2 + 4 * a2) >> 15) & 0x7FFF;
    if ( v3 != 0x7FFF )
    {
      *(_DWORD *)(v2 + 4 * v3) |= 0xC0007FFF;
      result = FIELD_U32(result, 88);
      *(_DWORD *)(result + 4 * a2) |= 0x3FFF8000u;
    }
  }
  return result;
}
