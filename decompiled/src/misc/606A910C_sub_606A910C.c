/* sub_606A910C
 * address: 0x606A910C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A910C(int a1)
{
  signed int v2; // r1
  int result; // r0

  v2 = StageActor__befreDraw((Actor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    result = FIELD_U8(a1, 6112);
    if ( FIELD_U8(a1, 6112) )
      return 1;
  }
  return result;
}
