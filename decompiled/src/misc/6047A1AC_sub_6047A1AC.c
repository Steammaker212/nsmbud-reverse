/* sub_6047A1AC
 * address: 0x6047A1AC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6047A1AC(int a1)
{
  int v1; // r4
  _DWORD *v2; // r0
  _DWORD *result; // r0

  v1 = FIELD_U32(a1, 72);
  v2 = (_DWORD *)sub_60855BC8(84);
  if ( !v2 )
    return 0;
  result = sub_609804BC(v2, v1);
  *result = off_60BFD130;
  return result;
}
