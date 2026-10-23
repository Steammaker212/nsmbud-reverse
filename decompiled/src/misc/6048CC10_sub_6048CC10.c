/* sub_6048CC10
 * address: 0x6048CC10   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048CC10(int a1)
{
  int v1; // r6
  int v2; // r11
  int v3; // r4
  int v4; // r0
  _DWORD *v5; // r7
  int result; // r0
  int v7; // r1
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r0
  _DWORD *v12; // r1
  _DWORD v13[11]; // [sp+4h] [bp-2Ch] BYREF

  v1 = 0;
  v2 = a1 + 13800;
  v3 = dword_60CC6E04;
  do
  {
    v4 = sub_60828E70(v3, v1);
    v5 = *(_DWORD **)(v2 + 4 * v1);
    if ( (unsigned int)(v4 - 3) >= 3 )
    {
      v7 = dword_60C9FDD0[0];
      v8 = v5 + 905;
      if ( dword_60C9FDD0[0] >= 3u )
        v7 = 0;
      *(_BYTE *)(v8[v7] + 64) &= ~1u;
      v9 = dword_60C9FDD4;
      if ( (unsigned int)dword_60C9FDD4 >= 3 )
        v9 = 0;
      *(_BYTE *)(v8[v9] + 64) &= ~1u;
      v10 = dword_60C9FDD8;
      if ( (unsigned int)dword_60C9FDD8 >= 3 )
        v10 = 0;
      *(_BYTE *)(v8[v10] + 64) &= ~1u;
      v11 = sub_60492F00(4);
      v13[0] = &sead__SafeStringBase__vtable;
      v13[1] = v11;
      sub_60473DE4(v5, 2u, v13, 0);
      v12 = (_DWORD *)v5[878];
      if ( v5[877] > 2u )
        v12 += 10;
      result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v12 + 104))(*v12);
    }
    else
    {
      result = sub_6048DD94(*(_DWORD *)(v2 + 4 * v1), 5 - v4);
    }
    ++v1;
  }
  while ( v1 != 4 );
  return result;
}
