/* sub_60829034
 * address: 0x60829034   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829034(int result, int a2)
{
  int v2; // r1
  _BYTE *v3; // r1
  int v4; // t1

  v2 = FIELD_U32(result, 40) + a2;
  v4 = FIELD_U8(v2, 19712);
  v3 = (_BYTE *)(v2 + 19712);
  if ( v4 == 1 )
  {
    *v3 = 2;
    FIELD_U8(result, 46) = 1;
  }
  return result;
}
