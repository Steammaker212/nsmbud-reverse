/* sub_600DB0D0
 * address: 0x600DB0D0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DB0D0(int a1)
{
  __int16 v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1076))(a1);
  return (__int16)(v1 + ((unsigned __int16)(v1 & 0x8000) >> 15)) >> 1;
}
