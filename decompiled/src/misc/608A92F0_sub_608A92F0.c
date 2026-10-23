/* sub_608A92F0
 * address: 0x608A92F0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A92F0(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v8; // r7
  _DWORD v9[15]; // [sp+4h] [bp-3Ch] BYREF

  result = 0;
  if ( !FIELD_U8(a1, 52) )
  {
    v8 = 0;
    if ( sub_608A9E10(a2, v9) == 1 )
      v8 = (v9[2] + v9[0] + v9[5]) << 6;
    sub_608C65AC(a1 + 8, a3, a4, 64, 16);
    FIELD_U32(a1, 48) = a4 - v8;
    FIELD_U8(a1, 52) = 1;
    return 1;
  }
  return result;
}
