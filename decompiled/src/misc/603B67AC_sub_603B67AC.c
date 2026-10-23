/* sub_603B67AC
 * address: 0x603B67AC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B67AC(int result)
{
  int v1; // t1
  int v2; // r2
  int v3; // r3

  if ( FIELD_U8(result, 22613) )
  {
    FIELD_U8(result, 22614) ^= 1u;
    v1 = FIELD_U32(result, 22616);
    result += 22616;
    v2 = FIELD_U32(result, 4);
    v3 = FIELD_U32(result, 16);
    FIELD_U32(result, 4) = FIELD_U32(result, 20);
    *(_DWORD *)result = v3;
    FIELD_U32(result, 16) = v1;
    FIELD_U32(result, 20) = v2;
  }
  return result;
}
