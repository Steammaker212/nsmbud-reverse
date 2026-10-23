/* sub_60869F34
 * address: 0x60869F34   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60869F34(int a1, int a2, int a3)
{
  _DWORD *v3; // r3
  unsigned int v4; // r12
  int v5; // r2
  _DWORD *v6; // r2
  int v7; // r3
  unsigned __int64 v9; // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+10h] [bp-10h]
  int v11; // [sp+14h] [bp-Ch]

  v11 = 0;
  v10 = 0;
  v9 = 0;
  v3 = (_DWORD *)(*(_DWORD *)(FIELD_U32(a3, 192) + 8) + 16 * *(_DWORD *)(FIELD_U32(a3, 192) + 28));
  LODWORD(v9) = *v3;
  v4 = v3[1];
  v5 = v3[2];
  v11 = v3[3];
  v10 = v5;
  HIDWORD(v9) = v4;
  v9 = __PAIR64__(v4, v9) + FIELD_S32(a1, 32);
  v6 = *(_DWORD **)(a1 + 40);
  if ( v6 )
    v7 = *v6 + 560;
  else
    v7 = 560;
  return sub_60836348(
           a2,
           *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 24) + 12) + 4 * FIELD_U8(a1, 51)),
           0,
           &v9,
           v7);
}
