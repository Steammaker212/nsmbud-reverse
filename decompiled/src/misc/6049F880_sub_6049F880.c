/* sub_6049F880
 * address: 0x6049F880   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049F880(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1
  int v3; // r1
  int result; // r0

  v1 = a1[5069];
  if ( FIELD_U8(v1, 2689) )
    FIELD_U8(v1, 2697) = 1;
  v2 = a1[5070];
  if ( FIELD_U8(v2, 2689) )
    FIELD_U8(v2, 2697) = 1;
  v3 = a1[5071];
  if ( FIELD_U8(v3, 2689) )
    FIELD_U8(v3, 2697) = 1;
  result = a1[5072];
  if ( FIELD_U8(result, 2689) )
    FIELD_U8(result, 2697) = 1;
  return result;
}
