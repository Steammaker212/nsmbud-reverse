/* sub_60551A50
 * address: 0x60551A50   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60551A50(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r0
  int result; // r0

  FIELD_U16(a1, 40) = 0;
  FIELD_U8(a1, 18883) = 0;
  v3 = (_DWORD *)(a1 + 70220);
  v2 = FIELD_U32(a1, 70220);
  if ( v2 )
  {
    sub_60555628(v2, FIELD_U32(a1, 17812));
    *v3 = 0;
  }
  v4 = FIELD_U32(a1, 70224);
  if ( v4 )
  {
    sub_60555628(v4, FIELD_U32(a1, 17816));
    FIELD_U32(a1, 70224) = 0;
  }
  result = FIELD_U32(a1, 70228);
  if ( result )
  {
    sub_60555628(result, FIELD_U32(a1, 17820));
    FIELD_U32(a1, 70228) = 0;
    return 0;
  }
  return result;
}
