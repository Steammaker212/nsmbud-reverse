/* sub_6080A430
 * address: 0x6080A430   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_6080A430(int a1, int a2)
{
  int v2; // r0
  bool v3; // zf

  v2 = FIELD_U32(a1, 88);
  v3 = v2 == 0;
  if ( v2 )
  {
    a2 = FIELD_U32(v2, 92);
    v3 = a2 == 0;
  }
  if ( v3 )
    return 0;
  else
    return FIELD_U64(a2, 72);
}
