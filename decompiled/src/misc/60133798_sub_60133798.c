/* sub_60133798
 * address: 0x60133798   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60133798(int a1)
{
  int v2; // r0

  if ( FIELD_U8(a1, 6476) )
  {
    StageActor__cullCheck((StageActor *)a1, 0);
    if ( v2 == 1 )
      FIELD_U8(a1, 19) = 1;
  }
}
