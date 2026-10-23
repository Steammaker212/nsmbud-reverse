/* sub_60405ADC
 * address: 0x60405ADC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60405ADC(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 16);
  return !v1 || *(_DWORD *)(FIELD_U32(v1, 4) + 164) == 5;
}
