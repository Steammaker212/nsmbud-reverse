/* sub_601A602C
 * address: 0x601A602C   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A602C(int a1)
{
  StateMethodExecuter *result; // r0
  float *v3; // r0
  float v4; // r1
  float v5; // r2
  float *v6; // r0
  float v7; // r1
  float v8; // r2
  int v9; // r5
  int v10; // t1
  int v11; // r1
  char *v12; // r0
  bool v13; // cc
  int v14; // r0
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  _DWORD *v20; // r1
  _DWORD *v21; // r0
  float v22[4]; // [sp+0h] [bp-30h] BYREF
  float v23[8]; // [sp+10h] [bp-20h] BYREF

  result = *(StateMethodExecuter **)(a1 + 448);
  if ( result == (StateMethodExecuter *)2 )
  {
    result = (StateMethodExecuter *)sub_601CFA84(dword_60C8AEF0);
    if ( !result )
    {
      sub_6020AE7C(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A14C);
    }
  }
  else
  {
    if ( result != (StateMethodExecuter *)1 )
    {
      if ( result )
        return result;
      FIELD_U32(a1, 192) = FIELD_U32(a1, 432);
      FIELD_U32(a1, 200) = 1089470464;
      FIELD_U32(a1, 448) = 1;
    }
    v3 = *(float **)(a1 + 372);
    v4 = v3[18];
    v5 = v3[19];
    v23[2] = v3[20];
    v23[1] = v5;
    v23[0] = v4;
    v6 = *(float **)(a1 + 376);
    v7 = v6[18];
    v8 = v6[19];
    v22[2] = v6[20];
    v22[0] = v7;
    v22[1] = v8;
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    sub_60169030(a1, v23, v22, 6u);
    result = (StateMethodExecuter *)sub_60168910((float *)a1, v23, v22);
    if ( result == (StateMethodExecuter *)1 )
    {
      v9 = FIELD_U32(a1, 376);
      v10 = FIELD_U32(v9, 4);
      v9 += 4;
      (*(void (__fastcall **)(int))(v10 + 12))(v9);
      v11 = 0;
      v12 = *(char **)(v9 + 4);
      while ( v12[v11] )
      {
        if ( !v12[v11 + 1] )
        {
          ++v11;
          break;
        }
        if ( !v12[v11 + 2] )
        {
          v11 += 2;
          break;
        }
        v13 = v11 + 2 < 0x80000;
        v11 += 3;
        if ( !v13 )
        {
          v11 = 0;
          break;
        }
      }
      if ( v11 < 0 )
        v12 = &byte_60B3BA34;
      if ( *v12 == 75 )
      {
        v14 = sub_60178694(FIELD_U32(a1, 376), 0);
        v15 = v14 == 0;
        if ( v14 )
          v15 = v14 == FIELD_U32(a1, 372);
        if ( !v15 )
          goto LABEL_42;
        v14 = sub_60178694(FIELD_U32(a1, 376), 1u);
        v16 = v14 == 0;
        if ( v14 )
          v16 = v14 == FIELD_U32(a1, 372);
        if ( !v16 )
          goto LABEL_42;
        v14 = sub_60178694(FIELD_U32(a1, 376), 2u);
        v17 = v14 == 0;
        if ( v14 )
          v17 = v14 == FIELD_U32(a1, 372);
        if ( !v17 )
          goto LABEL_42;
        v14 = sub_60178694(FIELD_U32(a1, 376), 3u);
        v18 = v14 == 0;
        if ( v14 )
          v18 = v14 == FIELD_U32(a1, 372);
        if ( !v18 )
          goto LABEL_42;
        v14 = sub_60178694(FIELD_U32(a1, 376), 4u);
        v19 = v14 == 0;
        if ( v14 )
          v19 = v14 == FIELD_U32(a1, 372);
        if ( !v19
          || (v14 = sub_60178694(FIELD_U32(a1, 376), 5u), v20 = *(_DWORD **)(a1 + 372), v14)
          && (v15 = v14 == (_DWORD)v20, v20 = (_DWORD *)v14, !v15) )
        {
LABEL_42:
          v20 = *(_DWORD **)(a1 + 376);
          FIELD_U32(a1, 372) = v20;
          FIELD_U32(a1, 376) = v14;
        }
        FIELD_U32(a1, 80) = v20[18];
        FIELD_U32(a1, 84) = v20[19];
        result = (StateMethodExecuter *)v20[20];
        FIELD_U32(a1, 88) = result;
      }
      else
      {
        v21 = *(_DWORD **)(a1 + 376);
        FIELD_U32(a1, 372) = v21;
        FIELD_U32(a1, 432) = 0;
        FIELD_U32(a1, 80) = v21[18];
        FIELD_U32(a1, 84) = v21[19];
        FIELD_U32(a1, 88) = v21[20];
        FIELD_U32(a1, 376) = 0;
        FIELD_U32(a1, 308) = v21[24];
        FIELD_U32(a1, 316) = 6;
        sub_60186FC0(dword_60CC6D78 + 984, FIELD_U32(a1, 240), FIELD_U32(a1, 352), a1 + 300);
        FIELD_U32(a1, 248) = FIELD_U32(a1, 308);
        sub_6020AE7C(a1);
        return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A14C);
      }
    }
  }
  return result;
}
