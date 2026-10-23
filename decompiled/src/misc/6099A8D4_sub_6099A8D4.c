/* sub_6099A8D4
 * address: 0x6099A8D4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6099A8D4(int a1, int a2)
{
  unsigned int result; // r0
  int v5; // r7
  char v6; // r0
  int v7; // r1
  int v8; // r1

  result = FIELD_U8(a1, 40);
  if ( !result )
  {
    v5 = FIELD_U32(a1, 12) + *(_DWORD *)(FIELD_U32(a1, 16) + 12);
    v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 132))(a1);
    v7 = FIELD_U32(v5, 20);
    if ( v7 )
      v8 = FIELD_U32(a1, 12) + v7;
    else
      v8 = 0;
    sub_608500C8(a1 + 24, v8, FIELD_U16(v5, 10), FIELD_U16(v5, 16), FIELD_U16(v5, 18), v6, 1);
    result = FIELD_U16(a1, 36);
    if ( (result & 0x3FFC) <= 0x13 )
    {
      result &= 0x3FFFu;
      if ( result > 7 || ((1 << result) & 0xC2) == 0 )
        return sub_6099AA58(
                 a1 + 24,
                 a2,
                 FIELD_U32(a1, 72),
                 FIELD_U32(a1, 28) - FIELD_U32(a1, 8) + FIELD_U32(a1, 76),
                 FIELD_U32(a1, 80));
    }
  }
  return result;
}
