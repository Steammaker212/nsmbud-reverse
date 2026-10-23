/* sub_606BAB1C
 * address: 0x606BAB1C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BAB1C(int *a1, int *a2, int a3)
{
  _DWORD *v3; // r7
  int i; // r6

  v3 = *(_DWORD **)(a3 + 256);
  for ( i = 0; v3; v3 = (_DWORD *)v3[1] )
  {
    if ( *v3 )
      i |= sub_606BA968(a1, a2, *(_DWORD *)(*v3 + 2196));
  }
  return i;
}
