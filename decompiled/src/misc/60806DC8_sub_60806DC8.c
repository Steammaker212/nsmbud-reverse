/* sub_60806DC8
 * address: 0x60806DC8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60806DC8(int a1, int a2, int a3, int a4)
{
  int v5; // r1
  _DWORD v7[5]; // [sp+8h] [bp-48h] BYREF
  int v8; // [sp+1Ch] [bp-34h]
  int v9; // [sp+20h] [bp-30h]
  int v10; // [sp+24h] [bp-2Ch]
  int v11; // [sp+28h] [bp-28h]
  int v12; // [sp+2Ch] [bp-24h]
  int v13; // [sp+30h] [bp-20h]
  int v14; // [sp+34h] [bp-1Ch]
  int v15; // [sp+38h] [bp-18h]
  int v16; // [sp+3Ch] [bp-14h]

  v5 = FIELD_U32(a3, 32);
  v7[0] = 1065353216;
  v7[1] = 1065353216;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = -1;
  v8 = 0;
  v9 = 0;
  v10 = -1;
  v11 = 1065353216;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  (*(void (__fastcall **)(int, _DWORD *, int, int, int, int))(*(_DWORD *)a1 + 16))(
    a1,
    v7,
    a2,
    a3,
    a4,
    v5 & 2 | 0x1000000);
  return v8;
}
