/* sub_60938E68
 * address: 0x60938E68   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60938E68(int a1, signed int a2, int a3, int a4)
{
  signed int v4; // r4
  unsigned int result; // r0
  unsigned int v7; // kr00_4
  unsigned int v8; // r6
  int v9; // r7

  v4 = a2;
  result = -1;
  FIELD_U32(a1, 4) = -1;
  FIELD_U32(a1, 8) = a2;
  if ( a3 )
    v4 = 1;
  FIELD_U8(a1, 16) = a3;
  FIELD_U32(a1, 12) = v4;
  FIELD_U32(a1, 20) = -(a3 ^ 1);
  if ( v4 >= 1 )
  {
    v7 = 28 * v4;
    if ( v7 + 8 >= v7 )
      result = v7 + 8;
    if ( !is_mul_ok(0x1Cu, v4) )
      result = -1;
    result = sub_608DE334(result, a4, 4);
    if ( result )
    {
      *(_DWORD *)result = 28;
      FIELD_U32(result, 4) = v4;
      v8 = result + 8;
      v9 = 28 * v4;
      result += 8;
      do
      {
        v9 -= 28;
        result = sub_60947BCC(result) + 28;
      }
      while ( v9 );
      FIELD_U32(a1, 24) = v4;
      FIELD_U32(a1, 28) = v8;
    }
  }
  return result;
}
