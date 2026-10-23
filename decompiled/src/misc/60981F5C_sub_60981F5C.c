/* sub_60981F5C
 * address: 0x60981F5C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60981F5C(int a1)
{
  int v1; // r4
  _DWORD *v2; // r0
  _DWORD *result; // r0

  v1 = FIELD_U32(a1, 72);
  v2 = (_DWORD *)sub_60855BC8(84);
  if ( !v2 )
    return 0;
  result = nn__ui2d__Layout__ctor(v2);
  *result = off_60C5F76C;
  result[14] = 0;
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  result[18] = v1;
  result[19] = 0;
  *((_BYTE *)result + 80) = 0;
  *((_BYTE *)result + 81) = 2;
  return result;
}
