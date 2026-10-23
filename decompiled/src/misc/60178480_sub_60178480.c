/* sub_60178480
 * address: 0x60178480   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60178480(int a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r7
  int *v6; // r7
  int v7; // t1
  int v8; // r0
  int v9; // r1
  int i; // r2

  v4 = 0;
  while ( 1 )
  {
    v5 = a1 + 104 * v4;
    (*(void (__fastcall **)(int))(FIELD_U32(v5, 24) + 12))(v5 + 24);
    (*(void (__fastcall **)(int))(FIELD_U32(v5, 24) + 12))(v5 + 24);
    v7 = FIELD_U32(v5, 28);
    v6 = (int *)(v5 + 28);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v8 = a2[1];
    if ( v7 == v8 )
      break;
    v9 = *v6;
    for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(v8 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v9 + i - 1) )
        return v4;
      if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(v8 + i) )
        break;
      if ( !*(_BYTE *)(v9 + i) )
        return v4;
    }
    if ( ++v4 >= 256 )
      return -1;
  }
  return v4;
}
