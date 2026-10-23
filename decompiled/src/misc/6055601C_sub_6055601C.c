/* sub_6055601C
 * address: 0x6055601C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055601C(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 44);
  sub_604741D8((_DWORD *)(a1 + 44), 0, &dword_60CAD448, 0);
  sub_604741D8(v2, 1u, &dword_60CAD460, 0);
  FIELD_U8(a1, 3648) = 1;
  FIELD_U8(a1, 3649) = 1;
  FIELD_U8(a1, 11586) = 1;
  return sub_60502548(a1 + 5820);
}
