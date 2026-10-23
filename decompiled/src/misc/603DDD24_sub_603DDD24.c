/* sub_603DDD24
 * address: 0x603DDD24   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DDD24(int a1)
{
  _BYTE *v2; // r5
  int v3; // r1
  int result; // r0

  v2 = (_BYTE *)(a1 + 6661);
  if ( FIELD_U8(a1, 6661) )
    v3 = 3;
  else
    v3 = 2;
  sub_603DF65C(a1, v3);
  FIELD_U32(a1, 6336) = 0;
  result = (unsigned __int8)*v2;
  if ( !*v2 )
  {
    FIELD_U32(a1, 6316) = 240;
    return 6316;
  }
  return result;
}
