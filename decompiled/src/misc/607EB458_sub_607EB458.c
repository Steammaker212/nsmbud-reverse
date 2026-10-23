/* sub_607EB458
 * address: 0x607EB458   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EB458(int a1, int a2)
{
  CourseLoadFaderTask_ref(a1, a2);
  *(_DWORD *)a1 = off_60C26D18;
  sub_60560B78(a1 + 568);
  FIELD_U16(a1, 64540) = 0;
  sub_608EC968(a1, 62, 10, 62);
  FIELD_U32(a1, 64544) = 45;
  FIELD_U32(a1, 64548) = 30;
  return a1;
}
