/* sub_60991414
 * address: 0x60991414   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991414(int a1, unsigned int a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r3
  unsigned int v5; // r2

  v3 = *(_DWORD **)(a1 + 44);
  if ( (FIELD_U8(a1, 30) & 0x40) != 0 )
  {
    v4 = (_DWORD *)v3[2];
    v5 = a2 + 1;
    if ( v3[1] > a2 + 1 )
      v4 += v5;
    if ( !*v4 )
      v5 = a2;
    a2 = v5;
  }
  return sub_6098A304(v3, a2);
}
