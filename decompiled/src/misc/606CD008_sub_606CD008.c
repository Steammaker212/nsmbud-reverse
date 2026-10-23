/* sub_606CD008
 * address: 0x606CD008   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CD008(int a1)
{
  _BOOL4 v2; // r1
  int result; // r0

  v2 = StoneEye_vf11((Actor *)a1);
  result = 0;
  if ( v2 )
  {
    result = FIELD_U8(a1, 8024);
    if ( FIELD_U8(a1, 8024) )
      return 1;
  }
  return result;
}
