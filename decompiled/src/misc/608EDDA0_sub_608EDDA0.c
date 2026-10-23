/* sub_608EDDA0
 * address: 0x608EDDA0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_608EDDA0(int a1)
{
  sead_IDisposer *v2; // r0

  v2 = (sead_IDisposer *)operator_new_8DE25C(0xE0u, *(void **)(*(_DWORD *)a1 + 4 * *(_DWORD *)(*(_DWORD *)a1 + 20)), 4);
  return sead__ControllerMgr__ctor(v2, a1);
}
