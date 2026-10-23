/* sub_601D6FB8
 * address: 0x601D6FB8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D6FB8(int a1)
{
  _DWORD *v2; // r0
  int result; // r0

  FIELD_U8(a1, 280) = 0;
  FIELD_U32(a1, 1124) = 15;
  (*(void (__fastcall **)(int, _DWORD, int, float))(*(_DWORD *)a1 + 336))(a1, 0, -1, 0.0);
  FIELD_U32(a1, 200) = 0;
  v2 = (_DWORD *)sub_601E0040(a1 + 1032);
  FIELD_U32(a1, 80) = *v2;
  FIELD_U32(a1, 84) = v2[1];
  result = v2[2];
  FIELD_U32(a1, 88) = result;
  FIELD_U32(a1, 1112) = 0;
  return result;
}
