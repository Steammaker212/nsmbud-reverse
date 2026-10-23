/* sub_608D3FE4
 * address: 0x608D3FE4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3FE4(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60C5B7E4;
  FIELD_U32(a1, 12) = off_60C5B804;
  v2 = (_DWORD *)(a1 + 12);
  if ( !FIELD_U8(a1, 609) )
  {
    FIELD_U16(a1, 608) = 256;
    sub_608B2C20((int)v2, 0);
  }
  sub_608B2C00(v2);
  return a1;
}
