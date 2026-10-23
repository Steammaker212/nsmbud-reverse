/* sub_607666EC
 * address: 0x607666EC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607666EC(int a1, char a2)
{
  return (FIELD_U32(a1, 9700) & (1 << a2)) != 0;
}
