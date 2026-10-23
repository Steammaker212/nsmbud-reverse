/* sub_60852048
 * address: 0x60852048   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60852048(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r8
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r2
  unsigned int v12; // r0
  unsigned int v13; // r7
  int v14; // r5
  unsigned int i; // r6
  int v16; // r0

  v8 = sub_60856AF0(a3);
  (*(void (__fastcall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)v8 + 36))(
    v8,
    a2,
    a5,
    FIELD_U32(a1, 4),
    FIELD_U16(a1, 56));
  v9 = FIELD_U32(a1, 16);
  if ( v9 )
  {
    v10 = FIELD_U16(v8, 32);
    if ( v10 < FIELD_U16(v8, 34) )
    {
      v11 = FIELD_U32(v8, 28);
      FIELD_U16(v8, 32) = v10 + 1;
      *(_DWORD *)(v11 + 8 * v10) = a4;
      *(_DWORD *)(v11 + 8 * v10 + 4) = v9;
    }
  }
  v12 = (*(int (__fastcall **)(int))(*(_DWORD *)a4 + 40))(a4);
  v13 = FIELD_U8(a1, 58);
  if ( v12 < v13 )
    v13 = v12;
  if ( v13 )
  {
    v14 = a1 + 20;
    for ( i = 0; i < v13; ++i )
    {
      if ( *(_DWORD *)(v14 + 4 * i) )
      {
        v16 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a4 + 44))(a4, i);
        sub_60850658(v8, v16, *(_DWORD *)(v14 + 4 * i));
      }
    }
  }
  return v8;
}
