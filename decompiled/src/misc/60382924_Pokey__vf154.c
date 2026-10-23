/* Pokey__vf154
 * address: 0x60382924   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7148
// 
// Overridden by: None
int __fastcall Pokey__vf154(_DWORD *a1, int a2, int a3)
{
  float v5; // r1
  int v6; // r0
  int v7; // r2
  int v8; // r1
  int v9; // r0
  int *v10; // r1
  int v11; // r2
  unsigned int v12; // r0
  int v13; // r5
  signed int v14; // r1
  int *v15; // r4
  int v16; // t1
  int v17; // r0
  char v18; // r0
  float v19; // s2
  float v20; // s0
  char v21; // r1
  float v23[3]; // [sp+4h] [bp-3Ch] BYREF
  _DWORD v24[5]; // [sp+10h] [bp-30h] BYREF
  char v25; // [sp+24h] [bp-1Ch]
  _BOOL4 v26; // [sp+28h] [bp-18h]
  char v27; // [sp+2Ch] [bp-14h]

  v5 = FIELD_F32(a3, 88);
  v23[0] = FIELD_F32(a3, 84);
  v23[1] = v5;
  v23[2] = 4500.0;
  sub_602A38A4((int)a1, v23);
  v6 = a1[1575];
  if ( v6 )
  {
    v7 = 0;
    v8 = a1[1576];
    if ( (v6 & 1) != 0 )
    {
      *(_BYTE *)(*(_DWORD *)v8 + 242) |= 2u;
      v7 = 1;
    }
    if ( v6 != 1 )
    {
      v9 = v6 - v7;
      v10 = (int *)(v8 + 4 * v7 + 4);
      do
      {
        v9 -= 2;
        *(_BYTE *)(*(v10 - 1) + 242) |= 2u;
        v11 = *v10;
        v10 += 2;
        FIELD_U8(v11, 242) |= 2u;
      }
      while ( v9 );
    }
  }
  v12 = *(unsigned __int8 *)(FIELD_U32(a3, 64) + 84);
  if ( v12 <= 3 )
  {
    v13 = *(_DWORD *)(PlayerMgr_instance + 4 * v12 + 32);
    if ( v13 )
    {
      v14 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v13 + 1192))(*(_DWORD *)(PlayerMgr_instance + 4 * v12 + 32));
      v16 = a1[1573];
      v15 = a1 + 1573;
      SE_EMY_KAME_HIT_ref(v13, v14, v16 == 2);
      v17 = sub_60285510(v13);
      v18 = sub_602856EC(v15, v17);
      v19 = FIELD_F32(v13, 108);
      v20 = *((float *)v15 - 1546);
      v21 = FIELD_U8(v13, 84);
      memset(v24, 0, 16);
      v24[4] = &unk_60C96A1C;
      v25 = v18;
      v26 = v19 >= v20;
      v27 = v21;
      sub_602A852C((int)(v15 - 47), v24);
    }
  }
  return 1;
}
