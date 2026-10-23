/* sub_608CDC68
 * address: 0x608CDC68   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CDC68(int result, int a2)
{
  int v2; // r3

  if ( FIELD_S32(result, 28) >= 1 )
  {
    v2 = 0;
    do
    {
      *(_DWORD *)(a2 + 4 * v2) = *(_DWORD *)(result + 48 + 4 * v2);
      ++v2;
    }
    while ( v2 < FIELD_U32(result, 28) );
  }
  return result;
}
