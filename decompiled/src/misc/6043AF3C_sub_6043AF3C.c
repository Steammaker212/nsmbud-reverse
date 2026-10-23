/* sub_6043AF3C
 * address: 0x6043AF3C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043AF3C(int a1, int a2, int a3)
{
  int v3; // r7
  int v5; // r5
  int v6; // r6
  int result; // r0

  v3 = FIELD_U32(a1, 24);
  if ( !v3 )
    return 0;
  v5 = FIELD_U32(a1, 28);
  v6 = FIELD_U32(a3, 12);
  while ( 1 )
  {
    result = sub_6043F0B8(v5, a2, v6);
    if ( result )
      break;
    --v3;
    v5 += 48;
    if ( !v3 )
      return 0;
  }
  return result;
}
