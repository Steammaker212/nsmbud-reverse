/* sub_604B1FD4
 * address: 0x604B1FD4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B1FD4(int a1, int a2)
{
  int v2; // r0

  FIELD_U8(a1, 38106) = a2;
  v2 = a1 + 3608;
  if ( a2 == 1 )
    return sub_60502B04(v2, &unk_60B02E68, 1);
  else
    return sub_60502C84(v2, &unk_60B02E68, 0);
}
