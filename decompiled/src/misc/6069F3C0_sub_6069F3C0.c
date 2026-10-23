/* sub_6069F3C0
 * address: 0x6069F3C0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069F3C0(int a1)
{
  FIELD_U8(a1, 6845) = -1;
  sub_6069E88C(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
