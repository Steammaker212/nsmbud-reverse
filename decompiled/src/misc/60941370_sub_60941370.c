/* sub_60941370
 * address: 0x60941370   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60941370(int a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // t1
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r6

  v4 = (_DWORD *)(a1 + 12);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 12) + 12))(a1 + 12);
  (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
  v5 = FIELD_U32(a2, 12);
  a2 += 12;
  v6 = v4[1];
  (*(void (__fastcall **)(int))(v5 + 12))(a2);
  v7 = FIELD_U32(a2, 4);
  if ( v6 == v7 )
    return 1;
  v8 = FIELD_U32(a1, 16);
  v9 = 0;
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)(v8 + v9) - *(unsigned __int8 *)(v7 + v9);
    if ( v10 )
      break;
    if ( *(_BYTE *)(v8 + v9) )
    {
      if ( ++v9 < 0x80000 )
        continue;
    }
    return 1;
  }
  return (v10 >> 31) | 1;
}
