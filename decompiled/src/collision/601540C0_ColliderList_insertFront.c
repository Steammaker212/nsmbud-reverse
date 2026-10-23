/* ColliderList_insertFront
 * address: 0x601540C0   size: 52   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ColliderList_insertFront(int result, int a2)
{
  int v2; // r2

  if ( a2 )
  {
    v2 = FIELD_U32(result, 4);
    if ( v2 )
    {
      FIELD_U32(v2, 8) = a2;
      FIELD_U32(a2, 4) = FIELD_U32(result, 4);
    }
    else
    {
      FIELD_U32(result, 8) = a2;
    }
    FIELD_U32(result, 4) = a2;
  }
  return result;
}
