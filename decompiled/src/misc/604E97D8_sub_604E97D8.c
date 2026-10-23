/* sub_604E97D8
 * address: 0x604E97D8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E97D8(int a1)
{
  sub_60473DE4(*(_DWORD **)(a1 + 4), 2u, &dword_60CA5CEC, 0);
  return SE_SYS_CH_TARGET_MEDAL_ref(a1, FIELD_U32(a1, 544));
}
