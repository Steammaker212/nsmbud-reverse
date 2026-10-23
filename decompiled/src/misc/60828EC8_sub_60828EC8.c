/* sub_60828EC8
 * address: 0x60828EC8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60828EC8(int result, int a2)
{
  int v2; // r1
  _BYTE *v3; // r1
  int v4; // t1

  v2 = FIELD_U32(result, 40) + 104 * a2;
  v4 = FIELD_U8(v2, 6264);
  v3 = (_BYTE *)(v2 + 6264);
  if ( v4 == 1 )
  {
    *v3 = 2;
    FIELD_U8(result, 45) = 1;
  }
  return result;
}
