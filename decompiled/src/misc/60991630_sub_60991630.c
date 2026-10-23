/* sub_60991630
 * address: 0x60991630   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991630(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r1
  _DWORD *v5; // r2
  bool v6; // cf
  bool v7; // zf
  int v8; // r0

  v2 = *(_DWORD **)(a1 + 44);
  if ( (FIELD_U8(a1, 30) & 0x40) != 0 )
  {
    v4 = v2[1];
    v5 = (_DWORD *)v2[2];
    v6 = v4 >= 5;
    v7 = v4 == 5;
    v3 = 5;
    if ( !v7 && v6 )
      v5 += 5;
    if ( !*v5 )
      v3 = 4;
  }
  else
  {
    v3 = 4;
  }
  v8 = sub_6098A304(v2, v3);
  return (*(int (__fastcall **)(int, _DWORD, float))(*(_DWORD *)v8 + 84))(v8, 0, 1.0);
}
