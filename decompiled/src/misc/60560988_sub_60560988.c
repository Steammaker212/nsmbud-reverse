/* sub_60560988
 * address: 0x60560988   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60560988(int a1)
{
  unsigned int v2; // r0
  int result; // r0
  unsigned int v4; // r0

  if ( FIELD_U32(a1, 40) != 8 )
  {
    sub_605612AC(a1 + 60);
    if ( FIELD_U32(a1, 40) == 4 )
      sub_605612AC(a1 + 32016);
    if ( FIELD_F32(a1, 56) != 1.0 )
    {
      v2 = FIELD_U32(a1, 68);
      if ( v2 >= 9 )
        v2 = 0;
      sub_604745EC(a1 + 3548 * v2 + 76, 0, 0);
    }
  }
  FIELD_U8(a1, 53) = 1;
  FIELD_U8(a1, 54) = 1;
  if ( FIELD_U32(a1, 32008) == 1 )
    FIELD_U32(a1, 48) = FIELD_U32(dword_60CBFA90, 440);
  if ( ((0x66u >> FIELD_U32(a1, 44)) & 1) != 0 )
    sub_60023FA8(0);
  result = FIELD_U32(a1, 40);
  if ( result == 4 )
  {
    v4 = FIELD_U32(a1, 32024);
    if ( v4 >= 9 )
      v4 = 0;
    result = sub_60473B4C(a1 + 3548 * v4 + 32032);
    FIELD_U32(result, 24) = 0;
    FIELD_U32(result, 28) = 0;
    FIELD_U32(result, 32) = 0;
    FIELD_U8(result, 64) |= 0x10u;
  }
  return result;
}
