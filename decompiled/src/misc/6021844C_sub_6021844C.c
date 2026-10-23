/* sub_6021844C
 * address: 0x6021844C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6021844C(int a1)
{
  sub_601E4C88((_DWORD *)dword_60C8B13C, 70, (_DWORD *)(a1 + 80));
  FIELD_U8(a1, 533) = 0;
  FIELD_U8(a1, 216) &= ~2u;
  JUMPOUT(0x602184A4);
}
