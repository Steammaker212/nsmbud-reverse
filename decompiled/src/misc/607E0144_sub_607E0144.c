/* sub_607E0144
 * address: 0x607E0144   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607E0144(_DWORD *a1)
{
  CourseLoadFaderTask_ref();
  *a1 = off_60C26654;
  sub_60516844((int)(a1 + 142));
  a1[1061] = 5;
  sub_608EC968(a1, 1000, 75, 1000);
  return a1;
}
