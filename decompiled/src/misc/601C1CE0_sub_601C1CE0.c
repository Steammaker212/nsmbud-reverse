/* sub_601C1CE0
 * address: 0x601C1CE0   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C1CE0(int a1, int a2)
{
  int v4; // r5
  float v5; // s2
  float v6; // s16
  int v7; // r1
  int v8; // r0
  int v9; // r1
  float v10; // s0
  float v11; // s6
  float v12; // s2
  float v13; // s8
  float v14; // s4
  float v15; // s10
  int v16; // [sp+4h] [bp-4Ch] BYREF
  float32x2_t v17; // [sp+8h] [bp-48h] BYREF
  int v18; // [sp+10h] [bp-40h]
  float v19; // [sp+14h] [bp-3Ch]
  int v20; // [sp+18h] [bp-38h]
  int v21; // [sp+1Ch] [bp-34h]
  int v22; // [sp+20h] [bp-30h]
  float v23; // [sp+24h] [bp-2Ch]
  int v24; // [sp+28h] [bp-28h]
  int v25; // [sp+2Ch] [bp-24h]
  int v26; // [sp+30h] [bp-20h]
  float v27; // [sp+34h] [bp-1Ch]

  if ( (FIELD_U32(a1, 264) & 0xFFFFFFFE) == 6 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v4 = sub_601C505C(a1, a2);
  FIELD_U32(a1, 80) = FIELD_U32(v4, 80);
  v5 = FIELD_F32(v4, 84);
  FIELD_F32(a1, 84) = v5;
  FIELD_U32(a1, 88) = FIELD_U32(v4, 88);
  FIELD_F32(a1, 84) = v5 + 15.0;
  v6 = FIELD_F32(a1, 352);
  if ( sub_601C5B74(a1) != 1 )
  {
    if ( v6 < 0.0 || FIELD_F32(a1, 352) >= 0.0 )
      goto LABEL_11;
    v8 = a1;
    v9 = 8;
    goto LABEL_10;
  }
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 68))(v4) )
  {
    sub_601C59E4(a1, v7);
    v8 = a1;
    v9 = 7;
LABEL_10:
    sub_601BA0F8(v8, v9, 0.0, 0.0);
    goto LABEL_11;
  }
  FIELD_U32(a1, 1108) &= ~0x80u;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 176) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
LABEL_11:
  v10 = FIELD_F32(a1, 80);
  v11 = FIELD_F32(a1, 372);
  v12 = FIELD_F32(a1, 84);
  v13 = FIELD_F32(a1, 376);
  v14 = FIELD_F32(a1, 88);
  v15 = FIELD_F32(a1, 380);
  v17.n64_u64[0] = FIELD_U32(a1, 128);
  v20 = 0;
  v24 = 0;
  v21 = FIELD_U32(a1, 132);
  v25 = 0;
  v18 = 0;
  v22 = 0;
  v26 = FIELD_U32(a1, 136);
  v19 = v10 + v11;
  v23 = v12 + v13;
  v27 = v14 + v15;
  v16 = FIELD_U32(v4, 180) + FIELD_U32(a1, 180);
  Mtx34_rotateY(&v17, (unsigned int *)&v16);
  Mtx34_rotateX(&v17, (unsigned int *)(a1 + 176));
  Mtx34_rotateZ(&v17, (unsigned int *)(a1 + 184));
  return ((int (__fastcall *)(_DWORD, float32x2_t *))loc_60793FF0)(
           *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4),
           &v17);
}
