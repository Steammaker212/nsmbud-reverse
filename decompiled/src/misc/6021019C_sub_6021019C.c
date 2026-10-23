/* sub_6021019C
 * address: 0x6021019C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021019C(int a1)
{
  FIELD_U8(a1, 216) &= ~2u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 292))(a1);
  return sub_601E4C88((_DWORD *)dword_60C8B13C, 144, (_DWORD *)(a1 + 80));
}
