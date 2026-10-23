/* sub_60870678
 * address: 0x60870678   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870678(int a1, void (__fastcall *a2)(int *, int, int), int a3)
{
  int v6; // r11
  int v7; // r8
  int v8; // r7
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v13; // [sp+0h] [bp-38h] BYREF
  __int64 v14; // [sp+8h] [bp-30h]

  v6 = FIELD_U16(a1, 118);
  if ( !FIELD_U16(a1, 118) )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( !*(_DWORD *)(FIELD_U32(a1, 56) + 4 * v7) || *(_QWORD *)(FIELD_U32(a1, 88) + 8 * v7) == -1 )
    {
      a2(&v13, *(_DWORD *)(FIELD_U32(a1, 64) + 8 * v7) + 2, a3);
      *(_DWORD *)(FIELD_U32(a1, 56) + 4 * v7) = v13;
      v9 = HIDWORD(v14);
      v10 = FIELD_U32(a1, 88);
      *(_DWORD *)(v10 + 8 * v7) = v14;
      *(_DWORD *)(v10 + 8 * v7 + 4) = v9;
      v11 = 0x10000;
      if ( v14 != -1 )
        v11 = 1;
      if ( !v13 )
        v11 = 0x10000;
      v8 |= v11;
    }
    ++v7;
  }
  while ( v7 != v6 );
  return v8;
}
