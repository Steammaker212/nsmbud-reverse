/* sub_6000B17C
 * address: 0x6000B17C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6000B17C()
{
  int (**v1)(); // [sp+4h] [bp-Ch] BYREF

  v1 = &off_60BC04B8;
  return *(_DWORD *)sub_60008D1C(
                      ActorMgr__instance + 27168,
                      (int (__fastcall ***)(_DWORD))&v1,
                      *(_DWORD *)(ActorMgr__instance + 27172));
}
