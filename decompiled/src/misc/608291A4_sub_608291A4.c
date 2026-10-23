/* sub_608291A4
 * address: 0x608291A4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608291A4(int a1, unsigned int a2, unsigned int a3)
{
  int result; // r0
  int v7; // kr00_4
  int v8; // r1
  _BYTE *v9; // r1
  int v10; // r2
  int v11; // t1

  result = sub_6040E218(a2);
  if ( !result )
  {
    v7 = sub_6040E5B0(a2, a3, 1);
    result = v7 & 7;
    v8 = FIELD_U32(a1, 40) + v7 / 8;
    v11 = FIELD_U8(v8, 44108);
    v9 = (_BYTE *)(v8 + 44108);
    v10 = v11;
    if ( (v11 & (1 << (v7 & 7))) == 0 )
    {
      result = v10 | (1 << result);
      *v9 = result;
      FIELD_U8(a1, 47) = 1;
    }
  }
  return result;
}
