/* Actor_neshiku_build
 * address: 0x606A5144   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_neshiku_build(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)operator_new(0x1AA0u);
  sub_606A6130(v2, a1);
  *v2 = off_60C1982C;
  sub_6063044C((int)(v2 + 1698));
  return v2;
}
