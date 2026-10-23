/* sub_60448B4C
 * address: 0x60448B4C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60448B4C(int result)
{
  int v1; // r12
  int v2; // r2

  v1 = FIELD_U16(result, 96);
  if ( FIELD_U16(result, 96) )
  {
    v2 = 0;
    do
    {
      *(_DWORD *)(FIELD_U32(result, 88) + 4 * v2) &= 0x3FFFFFFFu;
      *(_DWORD *)(FIELD_U32(result, 88) + 4 * v2++) |= 0xC0000000;
    }
    while ( v1 != v2 );
  }
  return result;
}
