/* sub_604ECFC4
 * address: 0x604ECFC4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ECFC4(int a1, unsigned int a2)
{
  int v2; // r2

  v2 = 0;
  if ( !FIELD_U8(a1, 15438) && FIELD_U8(a1, 15436) )
  {
    if ( a2 >= 3 )
      a2 = 0;
    FIELD_U32(a1, 15424) = *(_DWORD *)(a1 + 4 * a2 + 16476);
    sub_60502694(a1 + 14396);
    return 1;
  }
  return v2;
}
