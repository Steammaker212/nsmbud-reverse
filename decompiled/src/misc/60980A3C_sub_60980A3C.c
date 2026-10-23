/* sub_60980A3C
 * address: 0x60980A3C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60980A3C(int a1, int a2)
{
  int v2; // r0

  v2 = sub_6085768C(a1, a2);
  if ( v2 )
    return FIELD_U32(v2, 180);
  else
    return 0;
}
