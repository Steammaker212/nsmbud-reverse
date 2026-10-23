/* sub_604E2ED4
 * address: 0x604E2ED4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E2ED4(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 40);
  sub_60473DE4((_DWORD *)(a1 + 40), 1u, &dword_60CA56A4, 0);
  sub_604745EC((int)v2, 1u, 0);
  sub_6047455C((int)v2, 1u, (float)(FIELD_U32(a1, 20512) - 1));
  return sub_60473DE4(v2, 0, &dword_60CA56BC, 0);
}
