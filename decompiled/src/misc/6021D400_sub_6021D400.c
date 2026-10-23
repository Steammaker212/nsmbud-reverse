/* sub_6021D400
 * address: 0x6021D400   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6021D400(_DWORD *a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // s1
  float v5; // s0
  float v6; // s1
  float v7; // s0
  float v8; // s1
  float v9; // s0
  float v10; // s1
  int v11; // r0
  int v13; // [sp+8h] [bp-28h]
  int v14; // [sp+Ch] [bp-24h]
  int v15; // [sp+10h] [bp-20h]
  _DWORD v16[7]; // [sp+14h] [bp-1Ch] BYREF

  v2 = sub_601CF9C0(dword_60C8AEF0);
  memset(v16, 255, 12);
  sub_6019EC34(v16, (_DWORD *)(v2 + 1032));
  sub_60833AF0(v3, v4);
  sub_60833AF0(v5, v6);
  a1[198] = 0;
  a1[196] = v13;
  a1[335] = v14;
  a1[195] = v15;
  sub_60833AF0(v7, v8);
  sub_60833AF0(v9, v10);
  v11 = a1[215];
  a1[215] = v11 + 1;
  return v11 >= a1[216];
}
