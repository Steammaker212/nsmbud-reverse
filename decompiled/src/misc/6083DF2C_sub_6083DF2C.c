/* sub_6083DF2C
 * address: 0x6083DF2C   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083DF2C(int *a1, int a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1

  v2 = *a1;
  v3 = 9 * a2;
  v4 = *(unsigned __int8 *)(v2 + a2 + 2040);
  if ( v4 )
    return v2 + 8 * v3;
  return v4;
}
