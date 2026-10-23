/* sub_604B5520
 * address: 0x604B5520   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604B5520(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)a1[5];
  if ( result == (_DWORD *)1 )
  {
    if ( FIELD_U8(dword_60CBC000, 148) == 1 )
    {
      sub_606EB5C8(dword_60CBC000, 0);
      sub_60473DE4(a1 + 1043, 0, &dword_60CA1B8C, 0);
      v3 = a1 + 158;
      goto LABEL_7;
    }
  }
  else
  {
    if ( result )
      return result;
    if ( !FIELD_U8(dword_60CBC000, 148) )
    {
      sub_606EB5C8(dword_60CBC000, 1);
      sub_60473DE4(a1 + 158, 0, &dword_60CA1B8C, 0);
      v3 = a1 + 1043;
LABEL_7:
      sub_604741D8(v3, 0, &dword_60CA1B8C, 0);
      sub_604B4FF8((int)a1);
    }
  }
  return sub_6047EB5C(a1 + 6);
}
