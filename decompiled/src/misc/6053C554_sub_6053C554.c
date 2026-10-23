/* sub_6053C554
 * address: 0x6053C554   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053C554(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAB484, 0);
  sub_6053F30C(a1, FIELD_U32(a1, 52480));
  sub_60531DEC(a1 + 56);
  sub_60531DEC(a1 + 4068);
  sub_60531DEC(a1 + 8080);
  *(_BYTE *)(FIELD_U32(a1, 52572) + 64) |= 1u;
  FIELD_U8(a1, 83565) = 1;
  return 83565;
}
