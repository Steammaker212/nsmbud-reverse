/* sub_6081DF1C
 * address: 0x6081DF1C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6081DF1C(_DWORD *a1)
{
  int v2; // r7

  *a1 = off_60C2A57C;
  if ( (_DWORD *)dword_60CC6D74 == a1 )
  {
    dword_60CC6D74 = 0;
    v2 = dword_60CC6D78;
    sub_6081FDB4(dword_60CC6D78 + 101848);
    sub_6081FF5C(v2 + 98552);
    dword_60CC6D78 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
