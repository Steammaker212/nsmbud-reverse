/* sub_60992D00
 * address: 0x60992D00   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60992D00(int result, int a2)
{
  int v3; // r5
  unsigned int v4; // r2
  int i; // r6

  v3 = result + 4;
  v4 = FIELD_U32(result, 28) & 0xFFFFFFFB;
  if ( a2 )
    v4 = FIELD_U32(result, 28) | 4;
  FIELD_U32(result, 28) = v4;
  for ( i = FIELD_U32(result, 8); i != v3; i = FIELD_U32(i, 4) )
    result = sub_60991174(i - 4, a2);
  return result;
}
