/* sub_6073C500
 * address: 0x6073C500   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073C500(int a1)
{
  _BYTE *v2; // r5
  int result; // r0

  FIELD_U32(a1, 6260) |= 0x10000000u;
  v2 = (_BYTE *)(a1 + 8080);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 8008) = 0;
  result = FIELD_U8(a1, 8057) + FIELD_U8(a1, 8056);
  *v2 = result;
  return result;
}
