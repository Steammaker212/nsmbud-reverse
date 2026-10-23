/* sub_6098D054
 * address: 0x6098D054   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098D054(int a1, void *a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)operator_new_8DE25C(0x38u, a2, 4);
  return sub_60987E7C(v3, *(_DWORD *)(FIELD_U32(a1, 20) + 852), *(_DWORD *)(FIELD_U32(a1, 20) + 856));
}
