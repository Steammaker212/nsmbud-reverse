/* sub_60889A38
 * address: 0x60889A38   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60889A38(int a1)
{
  int v1; // r1
  int result; // r0
  int v3; // r1

  v1 = FIELD_U32(a1, 732);
  if ( !FIELD_U8(v1, 16) )
    return 0;
  v3 = FIELD_U32(v1, 20);
  result = FIELD_U32(a1, 44);
  while ( v3 )
  {
    v3 = FIELD_U32(v3, 92);
    ++result;
  }
  return result;
}
