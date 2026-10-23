/* sub_605A2F78
 * address: 0x605A2F78   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A2F78(int a1)
{
  int v1; // r2
  _BYTE *v2; // r12
  float *v3; // r1
  float v4; // s2
  float v5; // s0
  float v6; // s2
  float v7; // s0
  int v8; // r1
  int *v9; // lr
  unsigned int v10; // r6
  int v11; // r5
  int v12; // r4
  _QWORD *v13; // r3
  __int64 v14; // r8
  int v15; // r2
  int v16; // r7
  float v17; // s0
  __int64 *v18; // lr
  __int64 v19; // r6
  __int64 v20; // r4
  __int64 *v21; // r10
  __int64 v22; // r8
  int v23; // r1
  int v24; // r3
  unsigned int v25; // r1
  int v26; // r1
  float v27; // s0
  float v28; // s4
  float v29; // s2
  float v30; // r1
  float v31; // r3
  int v32; // r7
  _DWORD v34[4]; // [sp+0h] [bp-40h] BYREF
  char v35; // [sp+10h] [bp-30h]

  v2 = (_BYTE *)(a1 + 72323);
  v1 = FIELD_U8(a1, 72323);
  if ( FIELD_U8(a1, 72323) )
  {
    v3 = (float *)(a1 + 6876);
    v4 = FIELD_F32(a1, 6868);
    v5 = FIELD_F32(a1, 6876);
    if ( v1 == 1 )
    {
      v6 = v4 + v5;
      LOBYTE(v1) = 1;
      *v3 = v6;
      v7 = FIELD_F32(a1, 72308);
      if ( fabsf(v6) >= v7 )
      {
        LOBYTE(v1) = 0;
        *v3 = v7;
        *v2 = 0;
      }
      goto LABEL_29;
    }
    v17 = v5 - v4;
    *v3 = v17;
    if ( v17 <= 0.0 )
    {
      LOBYTE(v1) = 0;
      *v3 = 0.0;
      goto LABEL_28;
    }
    v18 = (__int64 *)(a1 + 72288);
    LODWORD(v19) = FIELD_U32(a1, 72288);
    LODWORD(v20) = FIELD_U32(a1, 72280);
    HIDWORD(v19) = FIELD_U32(a1, 72284);
    HIDWORD(v20) = FIELD_U32(a1, 72292);
    v21 = (__int64 *)(a1 + 72296);
    v22 = FIELD_U64(EventMgr__instance, 16);
    while ( 1 )
    {
      v23 = v20 & v22;
      v24 = HIDWORD(v19) & HIDWORD(v22);
      if ( (v20 & v19) != 0 )
      {
        if ( !(v23 | v24) )
        {
          *v18 = v20 ^ v19;
          v26 = FIELD_U32(a1, 72300) >> 1;
          *(_DWORD *)v21 = *v21 >> 1;
          FIELD_U32(a1, 72300) = v26;
          goto LABEL_25;
        }
      }
      else if ( v23 | v24 )
      {
        *v18 = v20 | v19;
        *v21 *= 2;
LABEL_27:
        LOBYTE(v1) = 1;
LABEL_28:
        *v2 = v1;
        goto LABEL_29;
      }
      HIDWORD(v19) = (2 * HIDWORD(v19)) | ((unsigned int)v20 >> 31);
      if ( HIDWORD(v19) | (2 * (_DWORD)v20) )
      {
        LODWORD(v20) = 2 * v20;
        if ( *v21 >= __PAIR64__(HIDWORD(v19), v20) )
          continue;
      }
      goto LABEL_29;
    }
  }
  v9 = (int *)(a1 + 72288);
  v8 = FIELD_U32(a1, 72288);
  v10 = FIELD_U32(a1, 72280);
  v11 = FIELD_U32(a1, 72284);
  v12 = FIELD_U32(a1, 72292);
  v13 = (_QWORD *)(a1 + 72296);
  v14 = FIELD_U64(EventMgr__instance, 16);
  do
  {
    v15 = v10 & v14;
    v16 = v11 & HIDWORD(v14);
    if ( v10 & v8 | v11 & v12 )
    {
      if ( !(v15 | v16) )
      {
        *v9 = v10 ^ v8;
        FIELD_U32(a1, 72292) = v11 ^ v12;
        v25 = FIELD_U32(a1, 72300);
        FIELD_U32(a1, 72296) = *(__int64 *)(a1 + 72296) >> 1;
        FIELD_U32(a1, 72300) = v25 >> 1;
LABEL_25:
        LOBYTE(v1) = -1;
        goto LABEL_28;
      }
    }
    else if ( v15 | v16 )
    {
      *v9 = v10 | v8;
      FIELD_U32(a1, 72292) = v11 | v12;
      *v13 *= 2LL;
      goto LABEL_27;
    }
    v11 = (2 * v11) | (v10 >> 31);
    LOBYTE(v1) = 0;
    if ( !(v11 | (2 * v10)) )
      break;
    v10 *= 2;
  }
  while ( *v13 >= __PAIR64__(v11, v10) );
LABEL_29:
  v27 = FIELD_F32(a1, 112);
  v28 = FIELD_F32(a1, 6876);
  v29 = v27 + v28;
  FIELD_F32(a1, 6844) = v27 + v28;
  if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
    FIELD_F32(a1, 6916) = v29;
  FIELD_F32(a1, 6128) = v29;
  FIELD_F32(a1, 6860) = (float)(v29 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
  if ( FIELD_U32(a1, 6836) )
  {
    v30 = v28;
    v31 = v27;
  }
  else
  {
    FIELD_F32(TileMgr_instance, 24) = v29;
    LOBYTE(v1) = *v2;
    v30 = FIELD_F32(a1, 6876);
    v31 = FIELD_F32(a1, 112);
  }
  v32 = FIELD_U32(a1, 72288);
  v34[1] = FIELD_U32(a1, 72292);
  v34[0] = v32;
  *(float *)&v34[2] = v31;
  *(float *)&v34[3] = v30;
  v35 = v1;
  return ((int (__fastcall *)(int, _DWORD, _DWORD *))sub_6072A794)(
           EventMgr__instance,
           FIELD_U8(a1, 72322),
           v34);
}
