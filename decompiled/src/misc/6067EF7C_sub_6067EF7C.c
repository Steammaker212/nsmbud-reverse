/* sub_6067EF7C
 * address: 0x6067EF7C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067EF7C(int result)
{
  int *v1; // r4
  unsigned int v2; // r5
  int v3; // t1

  v1 = (int *)result;
  v2 = FIELD_U8(result, 3049);
  if ( v2 >= 8 )
    v2 = 8;
  for ( ; v2; --v2 )
  {
    v3 = *v1++;
    result = sub_6067D9D0(v3);
  }
  return result;
}
