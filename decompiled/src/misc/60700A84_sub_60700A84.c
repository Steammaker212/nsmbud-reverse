/* sub_60700A84
 * address: 0x60700A84   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60700A84(int a1)
{
  char v2; // r0

  StageActor__cullCheck((StageActor *)a1, 2);
  FIELD_U8(a1, 6140) = v2;
  return 0;
}
