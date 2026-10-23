/* sub_6060F82C
 * address: 0x6060F82C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060F82C(int a1)
{
  sub_6060F858();
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 644) + 12));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 644));
  return 1;
}
