/* sub_601E299C
 * address: 0x601E299C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *sub_601E299C()
{
  _DWORD *v0; // r4

  v0 = (_DWORD *)operator_new(0x5D4u);
  *v0 = &off_60BD6C74;
  sub_601E29E0(v0);
  dword_60C8B13C = (int)v0;
  return v0;
}
