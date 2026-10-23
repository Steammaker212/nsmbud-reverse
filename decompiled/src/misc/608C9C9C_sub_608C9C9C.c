/* sub_608C9C9C
 * address: 0x608C9C9C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9C9C(int a1, int a2)
{
  int v3; // r0
  int result; // r0
  int v5; // r6
  int v6; // r5

  FIELD_U32(a1, 452) = a2;
  v3 = sub_608CAEDC(a1);
  sub_608CB3EC(v3, a1);
  result = FIELD_U32(a1, 400);
  if ( result >= 1 )
  {
    v5 = 0;
    v6 = a1;
    do
    {
      sub_608CB5B4(v6, FIELD_U32(a1, 452));
      result = FIELD_U32(a1, 400);
      ++v5;
      v6 += 200;
    }
    while ( v5 < result );
  }
  return result;
}
