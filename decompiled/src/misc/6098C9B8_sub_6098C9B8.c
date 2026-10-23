/* sub_6098C9B8
 * address: 0x6098C9B8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098C9B8(_DWORD **a1)
{
  int v2; // r1

  if ( ((int (__fastcall *)(_DWORD **))(*a1)[4])(a1) == 1 )
  {
    if ( FIELD_U32(dword_60CCF448, 212) )
      v2 = **(_DWORD **)(dword_60CCF448 + 220);
    else
      v2 = 0;
    sub_6090A030(a1[12], v2, 1);
  }
}
