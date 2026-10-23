/* sub_603BEF10
 * address: 0x603BEF10   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BEF10(int a1)
{
  signed int v2; // r1
  int result; // r0

  v2 = Enemy__beforeExecute((CollisionActor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    FIELD_U8(a1, 6676) = FIELD_U8(a1, 6675);
    FIELD_U8(a1, 6677) = 1;
    return 1;
  }
  return result;
}
