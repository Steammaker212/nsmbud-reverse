/* sub_601A1A04
 * address: 0x601A1A04   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A1A04(int a1)
{
  _BYTE *v1; // r1

  v1 = (_BYTE *)(a1 + 299218);
  if ( FIELD_U8(dword_60CC6B68, 65) )
  {
    *v1 = 0;
  }
  else
  {
    *v1 = 1;
    sub_6081699C();
  }
  return sub_604B63E0(dword_60C99DD0 + 16, 6, 0);
}
