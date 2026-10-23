/* sub_608DA1D4
 * address: 0x608DA1D4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_608DA1D4(_DWORD *a1, int a2)
{
  char *v2; // r0
  int v3; // t1
  int v4; // r2

  v3 = *(_DWORD *)((char *)a1 + *a1);
  v2 = (char *)a1 + *a1;
  v4 = 0;
  if ( v3 > a2 )
    return &v2[*(_DWORD *)&v2[4 * a2 + 4]];
  return (char *)v4;
}
