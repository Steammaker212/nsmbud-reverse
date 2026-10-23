/* sub_60466800
 * address: 0x60466800   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60466800(int a1, int a2, int a3, int a4)
{
  int v6; // r4
  int v7; // r0
  _DWORD *v8; // r10
  int v9; // lr
  int v10; // r8
  int v11; // r5
  int v12; // r9
  int *v13; // r3
  Vec3 *v14; // r1
  int v15; // r0
  int v22; // r0
  char v23; // [sp+0h] [bp-30h]

  v6 = a4;
  v7 = FIELD_U32(a2, 8);
  if ( a4 >= 4 )
    v6 = 4;
  v8 = (_DWORD *)(a2 + 24);
  v9 = FIELD_U32(a2, 56);
  v10 = FIELD_U32(a2, 48);
  v11 = FIELD_U32(a2, 20);
  v12 = FIELD_U32(a2, 40);
  if ( a4 < 0 )
    v6 = 0;
  v13 = &dword_60AF28C4[v6];
  v14 = *(Vec3 **)a2;
  if ( v7 == 1 )
    v13 = (int *)(a2 + 60);
  v23 = FIELD_U8(a2, 12);
  v15 = (v11 << 12) & 0x3000
      | (*v13 << 31)
      | (*v8 << 14) & 0x4000
      | (unsigned __int16)((unsigned __int16)FIELD_U32(a2, 28) << 15)
      | (FIELD_U32(a2, 32) << 16) & 0x30000
      | (FIELD_U32(a2, 36) << 18) & 0xC0000
      | (v12 << 20) & 0x300000;
  _R2 = dword_60AF2614[v6] << 22;
  __asm { UXTB16          R2, R2 }
  v22 = v15 | _R2 | (v10 << 24) & 0x1F000000 | (v9 << 30) & 0x40000000;
  sub_604663F4(v22, v14, v22 | 0x20000000, a3, v23, 0);
}
