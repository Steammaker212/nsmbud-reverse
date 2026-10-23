/* Actor_CSmusasabi_build
 * address: 0x601A5D4C   size: 84   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_CSmusasabi_build(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)operator_new(0x1C8u);
  sub_6020AB88(v2, a1);
  *v2 = off_60BD6014;
  memset(v2 + 102, 0, 45);
  v2[32] = 1075838976;
  v2[33] = 1075838976;
  v2[34] = 1075838976;
  return v2;
}
