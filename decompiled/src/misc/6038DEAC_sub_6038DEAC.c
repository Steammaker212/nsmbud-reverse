/* sub_6038DEAC
 * address: 0x6038DEAC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6038DEAC(int a1)
{
  int v1; // r1
  int v2; // r1
  int result; // r0

  if ( FIELD_U8(a1, 8286) == 1 )
  {
    v1 = FIELD_U32(a1, 6308);
    FIELD_U32(v1, 20) = 0;
    FIELD_U32(v1, 28) |= 2u;
    *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 0;
  }
  v2 = FIELD_U32(a1, 6312);
  FIELD_U32(v2, 20) = 0;
  FIELD_U32(v2, 28) |= 2u;
  result = FIELD_U32(a1, 6312);
  FIELD_U32(result, 24) = 0;
  return result;
}
