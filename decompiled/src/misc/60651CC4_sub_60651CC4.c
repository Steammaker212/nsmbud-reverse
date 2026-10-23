/* sub_60651CC4
 * address: 0x60651CC4   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60651CC4(int a1)
{
  float *v2; // r0

  v2 = (float *)(a1 + 6828);
  return FIELD_F32(dword_60CC6484, 40) > v2[2]
      || *v2 > FIELD_F32(dword_60CC6484, 48)
      || FIELD_F32(dword_60CC6484, 44) > v2[3]
      || v2[1] > FIELD_F32(dword_60CC6484, 52);
}
