/* Actor_CSW1_Item_build
 * address: 0x6020836C   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_CSW1_Item_build(unsigned __int8 *a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)operator_new(0x198u);
  sub_6018668C((int)v2, a1);
  *v2 = off_60BD891C;
  memset(v2 + 93, 0, 33);
  return v2;
}
