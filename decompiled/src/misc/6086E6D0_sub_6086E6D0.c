/* sub_6086E6D0
 * address: 0x6086E6D0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086E6D0(int a1, float a2)
{
  return *(_DWORD *)(FIELD_U32(a1, 8) + 4 * ((int)a2 - (int)FIELD_F32(a1, 24)));
}
