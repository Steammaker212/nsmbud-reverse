/* sub_60234268
 * address: 0x60234268   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60234268(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BD9540;
  sub_6042FE94(dword_60C9C2D0, a1 + 10);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
