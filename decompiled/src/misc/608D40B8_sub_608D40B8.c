/* sub_608D40B8
 * address: 0x608D40B8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608D40B8(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C5B7E4;
  a1[3] = off_60C5B804;
  v2 = a1 + 3;
  if ( !*((_BYTE *)a1 + 609) )
  {
    *((_WORD *)a1 + 304) = 256;
    sub_608B2C20((int)v2, 0);
  }
  sub_608B2C00(v2);
  operator_delete(a1);
}
