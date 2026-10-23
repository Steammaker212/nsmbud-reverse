/* sub_6014F61C
 * address: 0x6014F61C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6014F61C(int a1)
{
  int v1; // r5
  int v3; // r1
  int result; // r0
  int v5; // r1
  int v6; // r3
  bool v7; // vf
  __int16 v8; // [sp+4h] [bp-1Ch] BYREF
  char v9; // [sp+6h] [bp-1Ah]
  char v10; // [sp+7h] [bp-19h]
  int v11; // [sp+8h] [bp-18h]
  int v12; // [sp+Ch] [bp-14h]

  v1 = 0;
  v8 = 0;
  v9 = **(_BYTE **)(a1 + 2212);
  v10 = **(_BYTE **)(a1 + 2216);
  v11 = 0;
  v12 = a1 + 80;
  sub_6015D144((TileCheck *)(a1 + 4), (int)&v8);
  v3 = FIELD_U32(a1, 2196);
  FIELD_U32(a1, 12) = v3;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  result = FIELD_U32(a1, 24);
  if ( result >= 1 )
  {
    FIELD_U32(a1, 32) = 1;
    **(_DWORD **)(a1 + 20) = v3;
    result = FIELD_U32(a1, 24);
    v1 = FIELD_U32(a1, 32);
  }
  if ( v1 < result )
  {
    v5 = FIELD_U32(a1, 2200);
    FIELD_U32(a1, 32) = v1 + 1;
    v6 = FIELD_U32(a1, 28) + v1;
    v7 = __OFSUB__(v6, result);
    result = v6 - result;
    if ( result < 0 != v7 )
      result = FIELD_U32(a1, 28) + v1;
    *(_DWORD *)(FIELD_U32(a1, 20) + 4 * result) = v5;
  }
  return result;
}
