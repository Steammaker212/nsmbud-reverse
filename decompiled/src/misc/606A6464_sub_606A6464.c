/* sub_606A6464
 * address: 0x606A6464   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A6464(int a1)
{
  int v1; // r2

  if ( FIELD_U8(a1, 6785) )
  {
    v1 = FIELD_U8(a1, 6785) - 1;
    FIELD_U8(a1, 6785) = v1;
    if ( !v1 )
      FIELD_U8(a1, 6784) = 1;
  }
  return ShapedCollider_execute((ColliderBase *)(a1 + 6120));
}
