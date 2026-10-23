/* sub_608D4C8C
 * address: 0x608D4C8C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D4C8C(int a1, unsigned int a2)
{
  int v2; // r2

  v2 = 0;
  if ( FIELD_U32(a1, 20) > a2 )
    return a1 + 20 + *(_DWORD *)(a1 + 8 * a2 + 28);
  return v2;
}
