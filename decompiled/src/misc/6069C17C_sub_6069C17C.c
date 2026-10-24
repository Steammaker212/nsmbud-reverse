/* sub_6069C17C
 * address: 0x6069C17C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069C17C(StageActor *a1)
{
  int v2; // r0

  StageActor__cullCheck(a1, 0);
  if ( !v2 )
    sub_6069E56C(&FIELD_U32(a1 + (1) * 644, 0x4), a1);
  return 1;
}
