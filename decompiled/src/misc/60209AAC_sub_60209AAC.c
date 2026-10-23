/* sub_60209AAC
 * address: 0x60209AAC   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60209AAC(int a1)
{
  int result; // r0
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  float *v8; // r0
  float v9; // r1
  float v10; // r2
  float *v11; // r0
  float v12; // r1
  float v13; // r2
  int v14; // r5
  int v15; // t1
  int v16; // r1
  char *v17; // r0
  bool v18; // cc
  int v19; // r0
  bool v20; // zf
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  bool v24; // zf
  _DWORD *v25; // r1
  _DWORD *v26; // r4
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  int v29; // r1
  unsigned int v30; // r2
  unsigned int v31; // r0
  signed int v32; // r1
  float v33[4]; // [sp+8h] [bp-30h] BYREF
  float v34[8]; // [sp+18h] [bp-20h] BYREF

  result = FIELD_U32(a1, 400);
  switch ( result )
  {
    case 0:
      v3 = FIELD_U32(a1, 520);
      FIELD_U32(a1, 180) = v3;
      FIELD_U32(a1, 192) = v3;
      FIELD_U32(a1, 200) = 1091567616;
      v4 = *(_DWORD **)(a1 + 408);
      v5 = v4[3];
      v6 = v4[2];
      v7 = v4[17];
      if ( v6 > v7 )
        v5 += 4 * v7;
      *(_DWORD *)(*(_DWORD *)v5 + 24) = 1075000115;
      FIELD_U32(a1, 400) = 1;
      goto LABEL_5;
    case 1:
LABEL_5:
      v8 = *(float **)(a1 + 372);
      v9 = v8[18];
      v10 = v8[19];
      v34[2] = v8[20];
      v34[1] = v10;
      v34[0] = v9;
      v11 = *(float **)(a1 + 376);
      v12 = v11[18];
      v13 = v11[19];
      v33[2] = v11[20];
      v33[1] = v13;
      v33[0] = v12;
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      sub_60169030(a1, v34, v33, 6u);
      if ( sub_60168910((float *)a1, v34, v33) != 1 )
      {
        EffectWrapper_update((EffectWrapper *)(a1 + 412), 1140, (Vec3 *)(a1 + 80), 0, 0);
        result = FIELD_U32(a1, 364);
        if ( result >= 0 )
          return result;
        result = sub_601E4EA4(dword_60C8B13C, 201, 0, a1 + 80, 1);
        goto LABEL_49;
      }
      v14 = FIELD_U32(a1, 376);
      v15 = FIELD_U32(v14, 4);
      v14 += 4;
      (*(void (__fastcall **)(int))(v15 + 12))(v14);
      v16 = 0;
      v17 = *(char **)(v14 + 4);
      while ( v17[v16] )
      {
        if ( !v17[v16 + 1] )
        {
          ++v16;
          break;
        }
        if ( !v17[v16 + 2] )
        {
          v16 += 2;
          break;
        }
        v18 = v16 + 2 < 0x80000;
        v16 += 3;
        if ( !v18 )
        {
          v16 = 0;
          break;
        }
      }
      if ( v16 < 0 )
        v17 = &byte_60B3BA34;
      if ( *v17 == 75 )
      {
        v19 = sub_60178694(FIELD_U32(a1, 376), 0);
        v20 = v19 == 0;
        if ( v19 )
          v20 = v19 == FIELD_U32(a1, 372);
        if ( !v20 )
          goto LABEL_43;
        v19 = sub_60178694(FIELD_U32(a1, 376), 1u);
        v21 = v19 == 0;
        if ( v19 )
          v21 = v19 == FIELD_U32(a1, 372);
        if ( !v21 )
          goto LABEL_43;
        v19 = sub_60178694(FIELD_U32(a1, 376), 2u);
        v22 = v19 == 0;
        if ( v19 )
          v22 = v19 == FIELD_U32(a1, 372);
        if ( !v22 )
          goto LABEL_43;
        v19 = sub_60178694(FIELD_U32(a1, 376), 3u);
        v23 = v19 == 0;
        if ( v19 )
          v23 = v19 == FIELD_U32(a1, 372);
        if ( !v23 )
          goto LABEL_43;
        v19 = sub_60178694(FIELD_U32(a1, 376), 4u);
        v24 = v19 == 0;
        if ( v19 )
          v24 = v19 == FIELD_U32(a1, 372);
        if ( !v24 )
          goto LABEL_43;
        v19 = sub_60178694(FIELD_U32(a1, 376), 5u);
        if ( v19 )
        {
          if ( v19 != FIELD_U32(a1, 372) )
          {
LABEL_43:
            v25 = *(_DWORD **)(a1 + 376);
            FIELD_U32(a1, 372) = v25;
            FIELD_U32(a1, 376) = v19;
LABEL_44:
            FIELD_U32(a1, 80) = v25[18];
            v26 = (_DWORD *)(a1 + 80);
            v26[1] = v25[19];
            v26[2] = v25[20];
            result = sub_608332B0(v26, v19 + 72);
            v26[28] = result;
            v26[25] = result;
            return result;
          }
        }
        else
        {
          v19 = FIELD_U32(a1, 372);
        }
        v25 = (_DWORD *)v19;
        v19 = FIELD_U32(a1, 376);
        goto LABEL_44;
      }
      v27 = *(_DWORD **)(a1 + 376);
      FIELD_U32(a1, 372) = v27;
      FIELD_U32(a1, 520) = -524940447;
      FIELD_U32(a1, 80) = v27[18];
      FIELD_U32(a1, 84) = v27[19];
      FIELD_U32(a1, 88) = v27[20];
      FIELD_U32(a1, 376) = 0;
      v28 = *(_DWORD **)(a1 + 408);
      v29 = v28[3];
      v30 = v28[2];
      v31 = v28[17];
      if ( v30 > v31 )
        v29 += 4 * v31;
      *(_DWORD *)(*(_DWORD *)v29 + 24) = 1065353216;
      FIELD_U32(a1, 308) = *(_DWORD *)(FIELD_U32(a1, 372) + 96);
      FIELD_U32(a1, 316) = 6;
      sub_60186FC0(dword_60CC6D78 + 984, FIELD_U32(a1, 240), FIELD_U32(a1, 352), a1 + 300);
      FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
      result = 2;
      FIELD_U32(a1, 400) = 2;
      v32 = FIELD_U32(a1, 364);
      if ( v32 >= 0 )
      {
        sub_601E4F60(dword_60C8B13C, v32);
        result = -1;
LABEL_49:
        FIELD_U32(a1, 364) = result;
      }
      return result;
    case 2:
      FIELD_U32(a1, 180) = FIELD_U32(a1, 520);
      FIELD_U32(a1, 400) = 3;
      goto LABEL_13;
    case 3:
LABEL_13:
      sub_6020AE7C(a1);
      return (int)StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C8E4);
    default:
      return result;
  }
}
