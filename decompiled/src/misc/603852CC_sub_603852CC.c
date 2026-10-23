/* sub_603852CC
 * address: 0x603852CC   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603852CC(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r6
  RevealMaskRelated *v6; // r0
  RevealMaskRelated *v7; // r0
  int v8; // r5
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  unsigned int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r1
  float v17; // s0
  int v18; // r7
  int v19; // r6
  float v20; // s2
  EnemyFreezeMgr_Flags v22; // [sp+0h] [bp-40h] BYREF
  _DWORD v23[15]; // [sp+4h] [bp-3Ch] BYREF

  v2 = FIELD_U32(a1, 20);
  v3 = operator_new(0x10u);
  v4 = sub_6038631C(v3);
  if ( (v2 & 0x100) != 0 )
  {
    *(_DWORD *)v4 = &off_60BF39E4;
    FIELD_U32(a1, 6300) = v4;
    v5 = (_DWORD *)(a1 + 6300);
  }
  else
  {
    *(_DWORD *)v4 = &off_60BF39CC;
    FIELD_U32(a1, 6300) = v4;
    v5 = (_DWORD *)(a1 + 6300);
    v6 = (RevealMaskRelated *)operator_new(0x28u);
    v7 = LightMask__ctor(v6);
    FIELD_U32(a1, 6316) = v7;
    v8 = 2;
    (*(void (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v7, 0x0))(v7, 0, 2);
    v4 = FIELD_U32(a1, 6300);
    if ( !v4 )
      return v8;
  }
  v8 = 2;
  if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, 0) == 1 )
  {
    v9 = (_DWORD *)operator_new(0x24u);
    v10 = sub_6000BAC8(v9, FIELD_U32(a1, 8));
    v10[4] = 3;
    FIELD_U32(a1, 620) = v10;
    v11 = (_DWORD *)operator_new(0x24u);
    v12 = sub_6000B63C(v11, FIELD_U32(a1, 8));
    v8 = 1;
    *v12 = off_60BF38AC;
    FIELD_U32(a1, 624) = v12;
    v12[7] = 1;
    v13 = FIELD_U32(a1, 20);
    FIELD_U32(a1, 6284) = v13 & 1;
    FIELD_U32(a1, 6308) = (v13 >> 12) & 3;
    FIELD_U32(a1, 6312) = HIWORD(v13) & 0xF;
    FIELD_U32(a1, 6328) = (v13 >> 20) & 1;
    FIELD_U32(a1, 6304) = (v13 >> 9) & 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96B64);
    v22.field_0 = 0;
    v22.field_1 = 7;
    v22.field_2 = 4;
    EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), &v22);
    v23[0] = FIELD_U32(a1, 108);
    v23[1] = FIELD_U32(a1, 112);
    v23[2] = FIELD_U32(a1, 116);
    v14 = FIELD_U32(a1, 160);
    v15 = FIELD_U32(a1, 164);
    v23[3] = FIELD_U32(a1, 156);
    v23[4] = v14;
    v23[5] = v15;
    v23[6] = FIELD_U32(a1, 144);
    v23[7] = FIELD_U32(a1, 148);
    v23[8] = FIELD_U32(a1, 152);
    sub_60386364(*v5, v23, FIELD_U32(a1, 6304), 0);
    v16 = FIELD_U32(a1, 6316);
    if ( v16 )
    {
      v17 = FIELD_F32(a1, 112);
      v18 = FIELD_U32(a1, 116);
      v19 = FIELD_U32(a1, 108);
      v20 = FIELD_F32(a1, 6320);
      FIELD_U32(v16, 4) = FIELD_U32(a1, 6324);
      FIELD_U32(v16, 12) = v19;
      FIELD_F32(v16, 16) = v17 + v20;
      FIELD_U32(v16, 20) = v18;
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6316) + 4))(FIELD_U32(a1, 6316));
    }
  }
  return v8;
}
