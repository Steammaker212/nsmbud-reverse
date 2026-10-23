/* sub_606CDABC
 * address: 0x606CDABC   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_606CDABC(int a1)
{
  _DWORD *result; // r0

  SE_OBJ_CMN_TOUCH_QUAKE_LV_ref_6CABE0(a1);
  result = (_DWORD *)FIELD_U8(a1, 26);
  if ( ((unsigned __int8)result & 1) != 0 )
    return sub_606CAECC((_DWORD *)a1);
  return result;
}
