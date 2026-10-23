/* sub_60582938
 * address: 0x60582938   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60582938(int a1, int a2)
{
  _DWORD *v2; // r0
  int v3; // r2
  _DWORD *v5; // r2
  _DWORD *v6; // r3

  v2 = (_DWORD *)(a1 + 6200);
  v3 = 0;
  while ( *(v2 - 7) )
  {
    if ( !*v2 )
    {
      v5 = v2 - 3;
      v6 = v2;
      goto LABEL_8;
    }
    v3 += 2;
    v2 += 14;
    if ( v3 >= 512 )
      return 3;
  }
  v6 = v2 - 7;
  v5 = v2 - 10;
LABEL_8:
  *v5 = *(_DWORD *)a2;
  v5[1] = FIELD_U32(a2, 4);
  v5[2] = FIELD_U32(a2, 8);
  *v6 = FIELD_U32(a2, 12);
  *((_BYTE *)v5 + 24) = FIELD_U8(a2, 24);
  v5[4] = FIELD_U32(a2, 16);
  v5[5] = FIELD_U32(a2, 20);
  return 4;
}
