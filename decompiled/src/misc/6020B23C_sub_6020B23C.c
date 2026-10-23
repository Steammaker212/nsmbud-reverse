/* sub_6020B23C
 * address: 0x6020B23C   size: 1016   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020B23C(int a1)
{
  StateMethodExecuter *result; // r0
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
  float v19; // r0
  int v20; // r0
  bool v21; // zf
  bool v22; // zf
  bool v23; // zf
  bool v24; // zf
  bool v25; // zf
  _DWORD *v26; // r1
  _DWORD *v27; // r4
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  int v30; // r1
  unsigned int v31; // r2
  unsigned int v32; // r0
  signed int v33; // r1
  float v34[4]; // [sp+8h] [bp-40h] BYREF
  float v35[4]; // [sp+18h] [bp-30h] BYREF
  Vec3 v36; // [sp+28h] [bp-20h] BYREF

  result = *(StateMethodExecuter **)(a1 + 536);
  switch ( (unsigned int)result )
  {
    case 0u:
      v3 = FIELD_U32(a1, 524);
      FIELD_U32(a1, 180) = v3;
      FIELD_U32(a1, 192) = v3;
      FIELD_U32(a1, 200) = 1089470464;
      v4 = *(_DWORD **)(a1 + 408);
      v5 = v4[3];
      v6 = v4[2];
      v7 = v4[17];
      if ( v6 > v7 )
        v5 += 4 * v7;
      *(_DWORD *)(*(_DWORD *)v5 + 24) = 1075838976;
      FIELD_U32(a1, 536) = 1;
      goto LABEL_5;
    case 1u:
LABEL_5:
      v8 = *(float **)(a1 + 372);
      v9 = v8[18];
      v10 = v8[19];
      v35[2] = v8[20];
      v35[1] = v10;
      v35[0] = v9;
      v11 = *(float **)(a1 + 376);
      v12 = v11[18];
      v13 = v11[19];
      v34[2] = v11[20];
      v34[1] = v13;
      v34[0] = v12;
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      sub_60169030(a1, v35, v34, 6u);
      if ( sub_60168910((float *)a1, v35, v34) == 1 )
      {
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
          v20 = sub_60178694(FIELD_U32(a1, 376), 0);
          v21 = v20 == 0;
          if ( v20 )
            v21 = v20 == FIELD_U32(a1, 372);
          if ( !v21 )
            goto LABEL_44;
          v20 = sub_60178694(FIELD_U32(a1, 376), 1u);
          v22 = v20 == 0;
          if ( v20 )
            v22 = v20 == FIELD_U32(a1, 372);
          if ( !v22 )
            goto LABEL_44;
          v20 = sub_60178694(FIELD_U32(a1, 376), 2u);
          v23 = v20 == 0;
          if ( v20 )
            v23 = v20 == FIELD_U32(a1, 372);
          if ( !v23 )
            goto LABEL_44;
          v20 = sub_60178694(FIELD_U32(a1, 376), 3u);
          v24 = v20 == 0;
          if ( v20 )
            v24 = v20 == FIELD_U32(a1, 372);
          if ( !v24 )
            goto LABEL_44;
          v20 = sub_60178694(FIELD_U32(a1, 376), 4u);
          v25 = v20 == 0;
          if ( v20 )
            v25 = v20 == FIELD_U32(a1, 372);
          if ( !v25 )
            goto LABEL_44;
          v20 = sub_60178694(FIELD_U32(a1, 376), 5u);
          if ( v20 )
          {
            if ( v20 != FIELD_U32(a1, 372) )
            {
LABEL_44:
              v26 = *(_DWORD **)(a1 + 376);
              FIELD_U32(a1, 372) = v26;
              FIELD_U32(a1, 376) = v20;
LABEL_45:
              FIELD_U32(a1, 80) = v26[18];
              v27 = (_DWORD *)(a1 + 80);
              v27[1] = v26[19];
              v27[2] = v26[20];
              result = (StateMethodExecuter *)sub_608332B0(v27, v20 + 72);
              v27[28] = result;
              v27[25] = result;
              return result;
            }
          }
          else
          {
            v20 = FIELD_U32(a1, 372);
          }
          v26 = (_DWORD *)v20;
          v20 = FIELD_U32(a1, 376);
          goto LABEL_45;
        }
        v28 = *(_DWORD **)(a1 + 376);
        FIELD_U32(a1, 372) = v28;
        FIELD_U32(a1, 524) = 0;
        FIELD_U32(a1, 80) = v28[18];
        FIELD_U32(a1, 84) = v28[19];
        FIELD_U32(a1, 88) = v28[20];
        FIELD_U32(a1, 376) = 0;
        v29 = *(_DWORD **)(a1 + 408);
        v30 = v29[3];
        v31 = v29[2];
        v32 = v29[17];
        if ( v31 > v32 )
          v30 += 4 * v32;
        *(_DWORD *)(*(_DWORD *)v30 + 24) = 1065353216;
        FIELD_U32(a1, 308) = *(_DWORD *)(FIELD_U32(a1, 372) + 96);
        FIELD_U32(a1, 316) = 6;
        sub_60186FC0(dword_60CC6D78 + 984, FIELD_U32(a1, 240), FIELD_U32(a1, 352), a1 + 300);
        FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
        v33 = FIELD_U32(a1, 364);
        if ( v33 >= 0 )
        {
          sub_601E4F60(dword_60C8B13C, v33);
          FIELD_U32(a1, 364) = -1;
        }
        FIELD_U32(a1, 180) = FIELD_U32(a1, 524);
        sub_6020AE7C(a1);
        return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CAB4);
      }
      else
      {
        v36.x = FIELD_F32(a1, 80);
        v19 = FIELD_F32(a1, 84);
        v36.z = FIELD_F32(a1, 88);
        v36.y = v19;
        EffectWrapper_update((EffectWrapper *)(a1 + 416), 1141, &v36, 0, 0);
        result = *(StateMethodExecuter **)(a1 + 364);
        if ( (int)result < 0 )
        {
          result = (StateMethodExecuter *)sub_601E4EA4(dword_60C8B13C, 200, 0, a1 + 80, 1);
          FIELD_U32(a1, 364) = result;
        }
      }
      return result;
    case 2u:
      FIELD_U32(a1, 180) = FIELD_U32(a1, 524);
      FIELD_U32(a1, 536) = 3;
      goto LABEL_13;
    case 3u:
LABEL_13:
      sub_6020AE7C(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CAB4);
    default:
      return result;
  }
}
