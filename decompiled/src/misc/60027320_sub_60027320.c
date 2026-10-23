/* sub_60027320
 * address: 0x60027320   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60027320(int a1, int a2, int a3)
{
  _BYTE *result; // r0
  int v4; // t1

  v4 = FIELD_U8(a1, 6120);
  result = (_BYTE *)(a1 + 6120);
  if ( !v4 )
  {
    *result = 1;
    sub_60816D48(dword_60CC6B68, 1, a3);
    return (_BYTE *)sub_6078A870(PlayerMgr_instance);
  }
  return result;
}
