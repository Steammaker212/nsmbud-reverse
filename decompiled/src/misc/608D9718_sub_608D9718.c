/* sub_608D9718
 * address: 0x608D9718   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9718(int a1)
{
  _DWORD *v1; // r2
  int v2; // r3
  int v4; // r1

  if ( !FIELD_U16(a1, 16) )
    return 0;
  v1 = (_DWORD *)(a1 + 24);
  v2 = 0;
  while ( *((_WORD *)v1 - 2) != 26624 )
  {
    ++v2;
    v1 += 3;
    if ( v2 >= FIELD_U16(a1, 16) )
      return 0;
  }
  v4 = *v1;
  if ( *v1 )
    v4 += a1;
  return v4;
}
