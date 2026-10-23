/* Actor_tsurara_build
 * address: 0x6061F728   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_tsurara_build(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)operator_new(0x1A20u);
  sub_60620F98(v2, a1);
  *v2 = off_60C11080;
  sub_602A8564(v2 + 1660, v2[2]);
  return v2;
}
