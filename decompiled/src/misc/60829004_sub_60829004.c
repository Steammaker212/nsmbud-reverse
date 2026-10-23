/* sub_60829004
 * address: 0x60829004   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60829004(int result, int a2)
{
  int v2; // r2
  int v3; // r1
  _BYTE *v4; // r1
  int v5; // t1

  v2 = FIELD_U32(result, 40);
  v3 = v2 + a2;
  v5 = FIELD_U8(v3, 19712);
  v4 = (_BYTE *)(v3 + 19712);
  if ( !v5 )
  {
    *v4 = 1;
    FIELD_U8(v2, 19580) = 1;
    FIELD_U8(result, 46) = 1;
  }
  return result;
}
