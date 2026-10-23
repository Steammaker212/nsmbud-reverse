/* sub_607F709C
 * address: 0x607F709C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607F709C(_DWORD *a1, int a2)
{
  CourseLoadFaderTask_ref((int)a1, a2);
  *a1 = off_60C27944;
  sub_6051B10C((int)(a1 + 142));
  a1[21202] = 5;
  sub_608EC968(a1, 1000, 1, 1000);
  return a1;
}
