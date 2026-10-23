/* sub_608D6D04
 * address: 0x608D6D04   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D6D04(int a1, int a2, int *a3)
{
  int v3; // r0
  int v4; // t1

  v4 = *(unsigned __int8 *)(a1 + a2);
  v3 = a1 + a2;
  if ( v4 == 254 )
  {
    a2 += 3;
    *a3 = FIELD_U8(v3, 2) | (FIELD_U8(v3, 1) << 8) | 1;
  }
  else
  {
    *a3 = 1;
  }
  return a2;
}
