/* SumoBroLightning_vf49
 * address: 0x60335604   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SumoBroLightning_vf49(int a1, int a2, int a3)
{
  return FIELD_U32(a3, 140) == 2
      && (FIELD_U8(a2, 148) & 4) != 0
      && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1) != 0;
}
