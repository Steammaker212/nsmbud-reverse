/* sub_60497A80
 * address: 0x60497A80   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60497A80(int a1)
{
  int *v2; // r6
  _DWORD *v3; // r5
  float v4; // s16
  int v5; // r0
  unsigned int v6; // r7
  unsigned int v7; // r5
  int v8; // r5
  int v9; // t1
  int (**v11)(); // [sp+8h] [bp-30h] BYREF
  int v12; // [sp+Ch] [bp-2Ch]

  v11 = &sead__SafeStringBase__vtable;
  v12 = dword_60CA0718;
  v2 = (int *)(a1 + 146864);
  v3 = (_DWORD *)(a1 + 64);
  v4 = (float)(FIELD_U32(a1, 146864) - 1);
  if ( sub_6047467C((_DWORD *)(a1 + 64), 1u, &v11, (int)&dword_60CA0704, 1.0, 0) == 1 )
  {
    v5 = sub_6047482C((int)v3, 1u);
    if ( v5 )
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v5 + 96))(v5, v4);
  }
  v11 = &sead__SafeStringBase__vtable;
  v12 = dword_60CA0710;
  if ( sub_6047467C(v3, 0, &v11, (int)&dword_60CA06FC, 1.0, 0) == 1 )
    sub_6047482C((int)v3, 0);
  FIELD_U32(a1, 95204) |= 2u;
  FIELD_U8(a1, 146868) = 0;
  FIELD_U8(a1, 146873) = 0;
  FIELD_U8(a1, 146872) = 0;
  FIELD_U8(a1, 146871) = 0;
  FIELD_U8(a1, 146870) = 0;
  FIELD_U8(a1, 146869) = 0;
  FIELD_U8(a1, 146874) = 0;
  if ( *v2 >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = 0;
      if ( v6 < 4 )
        v7 = v6;
      ++v6;
      v8 = a1 + 20556 * v7;
      v9 = FIELD_U32(v8, 5728);
      v8 += 5728;
      *(_DWORD *)v8 = v9 | 4;
      FIELD_U8(v8, 20543) = 1;
    }
    while ( (int)v6 < *v2 );
  }
  sub_60499FB8(a1);
  sub_605025FC(a1 + 3648);
  FIELD_U16(a1, 4700) = 0;
  return sub_6047EABC((_DWORD *)(a1 + 3688));
}
