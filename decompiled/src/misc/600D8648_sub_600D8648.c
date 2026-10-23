/* sub_600D8648
 * address: 0x600D8648   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_600D8648(int a1)
{
  _DWORD v2[11]; // [sp+0h] [bp-38h] BYREF

  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 7096) + 108))(**(_DWORD **)(a1 + 7096), 17, v2);
  return COERCE_DOUBLE(__PAIR64__(v2[7], v2[3]));
}
