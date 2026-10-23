/* sub_60536070
 * address: 0x60536070   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60536070(int a1)
{
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAADF4, 0);
  sub_605390B8(a1, FIELD_U32(a1, 52500));
  sub_60531DEC(a1 + 56);
  sub_60531DEC(a1 + 4068);
  sub_60531DEC(a1 + 8080);
  *(_BYTE *)(FIELD_U32(a1, 52612) + 64) |= 1u;
  FIELD_U8(a1, 83625) = 1;
  return 83625;
}
