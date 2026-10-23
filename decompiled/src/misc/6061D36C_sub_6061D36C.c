/* sub_6061D36C
 * address: 0x6061D36C   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061D36C(int a1)
{
  return Animation_update(**(_DWORD **)(FIELD_U32(a1, 6100) + 28));
}
