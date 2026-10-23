/* sub_608B6EE8
 * address: 0x608B6EE8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6EE8(int a1, int a2)
{
  int v3; // r1
  int result; // r0

  v3 = sub_608AEE30(a1, a2);
  result = 0;
  if ( v3 == 1 )
  {
    FIELD_U32(a1, 436) = 0;
    FIELD_U8(a1, 446) = 0;
    FIELD_U8(a1, 444) = 1;
    return 1;
  }
  return result;
}
