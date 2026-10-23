/* sub_605BF51C
 * address: 0x605BF51C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BF51C(int a1)
{
  _DWORD *v1; // r1
  int result; // r0
  bool v3; // zf

  v1 = *(_DWORD **)(a1 + 1280);
  result = 0;
  while ( v1 )
  {
    v3 = *v1 == 0;
    if ( *v1 )
      v3 = *(_DWORD *)(*v1 + 2196) == 0;
    if ( !v3 )
      return 1;
    v1 = (_DWORD *)v1[1];
  }
  return result;
}
