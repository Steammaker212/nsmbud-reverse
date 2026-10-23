/* Faild_to_initialize_primitive_Index_d_ref
 * address: 0x60886D3C   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Faild_to_initialize_primitive_Index_d_ref(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r8
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  int v7; // r2
  bool v8; // zf
  int v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r7
  int v13; // r1
  int v14; // r7
  unsigned __int8 *v15; // r5
  int v16; // r0
  unsigned __int8 *v17; // r0
  int v18; // r1
  _DWORD *v19; // r6
  int v20; // r0
  int v21; // r8
  int v22; // r4
  unsigned __int8 *v23; // r6
  int v24; // r0
  int v25; // r4
  int v26; // r7
  int v27; // r0
  int v28; // [sp+8h] [bp-30h] BYREF
  int v29; // [sp+Ch] [bp-2Ch]
  int v30; // [sp+10h] [bp-28h]
  int v31; // [sp+14h] [bp-24h]

  v2 = a2;
  v4 = *((_DWORD *)a2 + 2);
  v5 = v4 == -1;
  if ( v4 != -1 )
  {
    a2 += v4;
    v5 = &v2[v4] == 0;
  }
  if ( v5 )
  {
    FIELD_U32(a1, 56) = 0;
LABEL_23:
    FIELD_U32(a1, 60) = 0;
    FIELD_U32(a1, 64) = 0;
    return;
  }
  v6 = 0;
  do
  {
    v7 = *((_DWORD *)a2 + 3);
    if ( (*a2 | (a2[1] << 8) | (a2[2] << 16) | (a2[3] << 24)) == 0x4D495250 )
      ++v6;
    v8 = v7 == -1;
    if ( v7 != -1 )
    {
      a2 += v7;
      v8 = a2 == 0;
    }
  }
  while ( !v8 );
  FIELD_U32(a1, 56) = v6;
  if ( !v6 )
    goto LABEL_23;
  v9 = 112 * v6 + 32;
  v10 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 948) + 8))(FIELD_U32(a1, 948), v9, 128);
  FIELD_U32(a1, 952) += v9;
  ++FIELD_U32(a1, 956);
  FIELD_U32(a1, 60) = v10;
  v11 = FIELD_U32(a1, 56);
  if ( v11 )
  {
    v12 = v10;
    v13 = v10 + 112 * v11;
    do
    {
      *(_DWORD *)v12 = off_60C5A9D4;
      FIELD_U8(v12, 4) = 0;
      FIELD_U32(v12, 8) = 0;
      FIELD_U32(v12, 12) = 0;
      FIELD_U32(v12, 16) = 0;
      FIELD_U32(v12, 40) = 0;
      FIELD_U32(v12, 36) = 0;
      FIELD_U32(v12, 32) = 0;
      FIELD_U32(v12, 28) = 0;
      FIELD_U32(v12, 24) = 0;
      FIELD_U32(v12, 48) = 0;
      FIELD_U32(v12, 52) = 0;
      FIELD_U32(v12, 56) = 0;
      FIELD_U32(v12, 60) = 0;
      FIELD_U32(v12, 64) = 0;
      FIELD_U32(v12, 68) = 0;
      FIELD_U32(v12, 72) = 0;
      FIELD_U32(v12, 76) = 0;
      v12 += 112;
    }
    while ( v12 != v13 );
  }
  FIELD_U32(a1, 64) = v10;
  v14 = 0;
  v15 = 0;
  v16 = *((_DWORD *)v2 + 2);
  if ( v16 != -1 )
  {
    v17 = &v2[v16];
    v15 = 0;
    if ( v17 )
    {
      while ( (*v17 | (v17[1] << 8) | (v17[2] << 16) | (v17[3] << 24)) != 0x4D495250 )
      {
        v18 = *((_DWORD *)v17 + 3);
        v17 += v18;
        if ( v18 == -1 )
          v17 = 0;
        if ( !v17 )
        {
          v15 = 0;
          goto LABEL_25;
        }
      }
      v15 = v17;
    }
  }
LABEL_25:
  v19 = *(_DWORD **)(a1 + 8);
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  sub_6083D5B0(&v28);
  v29 = 4;
  v20 = sub_608352A0(v19, (int)&v28);
  if ( v15 )
  {
    v21 = -v20;
    v22 = v20 - 1;
    v14 = 0;
    v23 = v15;
    do
    {
      v14 += (v22 + sub_608A40DC(v23)) & v21;
      v24 = *((_DWORD *)v23 + 3);
      v23 += v24;
      if ( v24 == -1 )
        v23 = 0;
    }
    while ( v23 );
  }
  if ( sub_6089632C(a1 + 536, FIELD_U32(a1, 8), a1 + 944, 4, v14) )
    sub_60835528(a1 + 536, a1 + 920);
  v25 = 0;
  FIELD_U32(a1, 936) = 0;
  FIELD_U32(a1, 940) = sub_608354C4(a1 + 536);
  if ( v15 )
  {
    v26 = 0;
    do
    {
      if ( sub_608A4180(FIELD_U32(a1, 64) + v25, a1 + 536, v15) )
        FIELD_U32(a1, 116) += *((_DWORD *)v15 + 1);
      else
        debugPrintRelated3("Faild to initialize primitive: Index %d \n");
      v27 = *((_DWORD *)v15 + 3);
      v25 += 112;
      ++v26;
      v15 += v27;
      if ( v27 == -1 )
        v15 = 0;
    }
    while ( v15 );
  }
  sub_608354E0(a1 + 536);
  nullsub_66();
}
