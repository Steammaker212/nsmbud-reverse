/* sub_609912D0
 * address: 0x609912D0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_609912D0(int a1, int a2)
{
  int *result; // r0
  int v3; // r2

  result = *(int **)(a1 + 48);
  if ( result )
  {
    v3 = *result;
    if ( a2 == 1 )
      return (int *)(*(int (**)(void))(v3 + 108))();
    else
      return (int *)(*(int (**)(void))(v3 + 104))();
  }
  return result;
}
