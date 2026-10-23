/* sub_6069E56C
 * address: 0x6069E56C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_6069E56C(int a1, _DWORD *a2)
{
  double result; // d0

  if ( !FIELD_U8(a1, 709) )
  {
    FIELD_U32(a1, 284) = FIELD_U32(a1, 704);
    ShapedCollider_execute((ColliderBase *)(a1 + 40));
  }
  *(_QWORD *)&result = sub_6069E178(a1, a2).n128_u64[0];
  return result;
}
