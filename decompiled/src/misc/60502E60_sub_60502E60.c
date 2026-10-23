/* sub_60502E60
 * address: 0x60502E60   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502E60(int a1, _DWORD *a2)
{
  int v2; // r11
  int v4; // r9
  int (***v5)(); // r5
  int v6; // r0
  int (**v7)(); // r1
  int v8; // r0
  int (**v9)(); // r10
  int v10; // r8
  int v11; // r1
  int (***v12)(); // r7
  int i; // r2
  int v15; // [sp+4h] [bp-34h]
  int v16; // [sp+8h] [bp-30h]
  int (**v17)(); // [sp+Ch] [bp-2Ch] BYREF
  int v18; // [sp+10h] [bp-28h]

  v2 = FIELD_U32(a1, 56);
  if ( v2 == a1 + 52 )
    return 256;
  v4 = 0;
  v5 = &v17;
  v15 = FIELD_U32(a1, 64);
  v16 = a1 + 52 - v15;
  v6 = v2 - v15;
  v7 = &sead__SafeStringBase__vtable;
  while ( 1 )
  {
    v8 = FIELD_U32(v6, 88);
    v17 = v7;
    v9 = v7;
    v18 = v8;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v10 = a2[1];
    ((void (__fastcall *)(int (***)()))v17[3])(v5);
    if ( v10 == v18 )
      break;
    v11 = a2[1];
    v12 = v5;
    for ( i = 1; ; i += 2 )
    {
      v5 = v12;
      if ( *(unsigned __int8 *)(v11 + i - 1) != *(unsigned __int8 *)(v18 + i - 1) )
        break;
      if ( !*(_BYTE *)(v11 + i - 1) )
        return v4;
      if ( i > 0x80000 )
        break;
      v5 = v12;
      if ( *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v18 + i) )
        break;
      if ( !*(_BYTE *)(v11 + i) )
        return v4;
    }
    v2 = FIELD_U32(v2, 4);
    ++v4;
    v6 = v2 - v15;
    v7 = v9;
    if ( v2 - v15 == v16 )
      return 256;
  }
  return v4;
}
