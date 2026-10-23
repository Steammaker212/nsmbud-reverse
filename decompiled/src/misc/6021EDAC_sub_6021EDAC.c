/* sub_6021EDAC
 * address: 0x6021EDAC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021EDAC(int a1)
{
  int result; // r0

  FIELD_U8(a1, 57) = 1;
  if ( sub_6021EE50(6, 0) != -1 )
    sub_6021FDA8(a1, 0);
  if ( sub_6021EE50(6, 1) != -1 )
    sub_6021FDA8(a1, 1);
  if ( sub_6021EE50(6, 2) != -1 )
    sub_6021FDA8(a1, 2);
  if ( sub_6021EE50(6, 3) != -1 )
    sub_6021FDA8(a1, 3);
  result = sub_6021EE50(6, 4);
  if ( result != -1 )
    return sub_6021FDA8(a1, 4);
  return result;
}
