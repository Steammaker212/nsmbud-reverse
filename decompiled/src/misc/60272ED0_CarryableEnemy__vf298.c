/* CarryableEnemy__vf298
 * address: 0x60272ED0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x603A3618 : ShellEnemy
int __fastcall CarryableEnemy__vf298(int *a1)
{
  unsigned int v2; // r0
  int v3; // r5
  char v4; // r1
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r0
  float v13; // s0
  float v14; // s0
  unsigned int v15; // r0
  int v16; // [sp+4h] [bp-1Ch] BYREF
  int v17; // [sp+8h] [bp-18h]
  int v18; // [sp+Ch] [bp-14h]

  v2 = *((char *)a1 + 6340);
  if ( v2 > 3 || (v3 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32)) == 0 )
  {
    v10 = *a1;
    v11 = 0;
    return (*(int (__fastcall **)(int *, int))(v10 + 652))(a1, v11);
  }
  v4 = *((_BYTE *)a1 + 538);
  if ( (v4 & 1) == 0 )
  {
    v5 = FIELD_U32(v3, 160);
    a1[40] = sub_607BA5CC(*(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32)) + v5;
    sub_60273034(a1, &v16, v3);
    v6 = v16;
    a1[27] = v16;
    v7 = v17;
    a1[28] = v17;
    v8 = v18;
    a1[29] = v18;
    a1[146] = v6;
    a1[147] = v7;
    a1[148] = v8;
    a1[152] = v6;
    a1[153] = v7;
    a1[154] = v8;
    return ((int (__fastcall *)(int *, int *, int))loc_6027326C)(a1, a1 + 47, v3);
  }
  v12 = a1[139];
  a1[20] = v12;
  a1[40] = Enemy_CommonRotations[v12];
  if ( (v4 & 2) != 0 )
    *((float *)a1 + 27) = *((float *)a1 + 27) + (float)((float)byte_60AFE3F4[v12] * 6.0);
  v13 = ((float (__fastcall *)(int *, int))loc_602720FC)(a1, v3);
  v14 = CollisionMgr_process((_BYTE *)a1 + 648, v13);
  v15 = *((unsigned __int8 *)a1 + 538);
  if ( (v15 & 2) == 0 )
  {
    v10 = *a1;
    v11 = v3;
    return (*(int (__fastcall **)(int *, int))(v10 + 652))(a1, v11);
  }
  return (*(int (__fastcall **)(int *, int, unsigned int, float))(*a1 + 656))(a1, v3, (v15 >> 2) & 1, v14);
}
