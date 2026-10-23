/* sub_607AF368
 * address: 0x607AF368   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AF368(int a1)
{
  _DWORD *v1; // r0
  int v2; // t1

  v2 = FIELD_U32(a1, 13056);
  v1 = (_DWORD *)(a1 + 13056);
  if ( !v2 )
    return 0;
  *v1 = 5;
  return 1;
}
