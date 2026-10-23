/* sub_6099145C
 * address: 0x6099145C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099145C(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r1
  _DWORD *v4; // r2
  int v5; // r0

  sub_60991CE8();
  v2 = *(_DWORD **)(a1 + 44);
  if ( (FIELD_U8(a1, 30) & 0x40) != 0 )
  {
    v4 = (_DWORD *)v2[2];
    v3 = 1;
    if ( v2[1] > 1u )
      ++v4;
    if ( !*v4 )
      v3 = 0;
  }
  else
  {
    v3 = 0;
  }
  v5 = sub_6098A304(v2, v3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 108))(v5);
}
