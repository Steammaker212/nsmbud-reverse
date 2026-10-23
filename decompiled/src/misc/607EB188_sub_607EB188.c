/* sub_607EB188
 * address: 0x607EB188   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607EB188(_DWORD *a1, int a2)
{
  CourseLoadFaderTask_ref((int)a1, a2);
  *a1 = off_60C26C8C;
  sub_605188C8((int)(a1 + 142));
  a1[1046] = 5;
  sub_608EC968(a1, 1000, 90, 1000);
  return a1;
}
