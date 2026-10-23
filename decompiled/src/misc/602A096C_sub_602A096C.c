/* sub_602A096C
 * address: 0x602A096C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A096C(int a1)
{
  FIELD_U32(a1, 6104) = 1126170624;
  FIELD_U32(a1, 6108) = 1098907648;
  FIELD_U32(a1, 6116) = (FIELD_U32(a1, 20) & 0xF) + 1;
  FIELD_U8(a1, 6128) = 1;
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C902B8);
  return 1;
}
