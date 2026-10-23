/* sub_6048DD94
 * address: 0x6048DD94   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048DD94(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r6
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r0
  _DWORD *v10; // r1
  int v11; // r0
  int (**v13)(); // [sp+4h] [bp-24h] BYREF
  int v14; // [sp+8h] [bp-20h]
  unsigned int v15; // [sp+Ch] [bp-1Ch]

  v15 = a2;
  v3 = 0;
  v4 = a1 + 905;
  v5 = dword_60C9FDD0[0];
  if ( dword_60C9FDD0[0] >= 3u )
    v5 = 0;
  *(_BYTE *)(v4[v5] + 64) &= ~1u;
  v6 = dword_60C9FDD4;
  if ( (unsigned int)dword_60C9FDD4 >= 3 )
    v6 = 0;
  *(_BYTE *)(v4[v6] + 64) &= ~1u;
  v7 = dword_60C9FDD8;
  if ( (unsigned int)dword_60C9FDD8 >= 3 )
    v7 = 0;
  *(_BYTE *)(v4[v7] + 64) &= ~1u;
  v13 = &sead__SafeStringBase__vtable;
  v14 = sub_60492F00(4);
  sub_60473DE4(a1, 2u, &v13, 0);
  v8 = v15;
  if ( v15 >= 3 )
    v8 = 0;
  v9 = dword_60C9FDD0[v8];
  if ( v9 < 3 )
    v3 = v9;
  *(_BYTE *)(v4[v3] + 64) |= 1u;
  v10 = (_DWORD *)a1[878];
  if ( a1[877] > 2u )
    v10 += 10;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v10 + 108))(*v10);
  v11 = sub_60492F00(5);
  v13 = &sead__SafeStringBase__vtable;
  v14 = v11;
  return sub_60473DE4(a1, 3u, &v13, 1);
}
