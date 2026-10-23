/* sub_60237FD0
 * address: 0x60237FD0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237FD0(int a1)
{
  int i; // r7
  _DWORD *v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int (**v9)(); // [sp+4h] [bp-2Ch] BYREF
  int v10; // [sp+8h] [bp-28h]

  sub_602380BC(a1);
  for ( i = 0; i != 7; ++i )
  {
    v3 = *(_DWORD **)(a1 + 16);
    v9 = &off_60BD95E0;
    v4 = v3[889];
    v10 = *(_DWORD *)(v4 + 4 * i);
    if ( !*(_DWORD *)(v4 + 4 * i) )
      nn__diag__detail__OnAssertionFailure(2, &byte_60ABC94D, &byte_60ABC94D, &byte_60ABC94D, 0, v9, v10);
    v5 = *(_DWORD *)(v3[26] + 4 * i);
    if ( v5 )
    {
      v6 = FIELD_U8(v5, 5);
      if ( FIELD_U8(v5, 5) )
        v6 = *(_DWORD *)(v3[26] + 4 * i);
    }
    else
    {
      v6 = 0;
    }
    sub_60887828(v6, v3[1838], 0);
    sub_6088FAAC(v3, &v9, i);
    *(_DWORD *)(v3[889] + 4 * i) = 0;
  }
  v7 = FIELD_U32(a1, 216);
  if ( v7 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  return a1;
}
