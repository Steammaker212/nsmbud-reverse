/* sub_602859BC
 * address: 0x602859BC   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602859BC(int a1)
{
  ActiveCollider *v2; // r5
  float v3; // s0
  unsigned __int8 *v4; // r7
  ActiveColliderMgr *v5; // r6
  float v6; // s0
  float v7; // s6
  float v8; // s2
  float v9; // s4
  float v10; // s10
  float *v11; // r5
  _DWORD *v12; // r8
  float *v13; // r6
  float v14; // s8
  signed int v16; // [sp+4h] [bp-24h] BYREF
  signed int v17; // [sp+8h] [bp-20h] BYREF
  signed int v18; // [sp+Ch] [bp-1Ch] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U8(a1, 6340) = FIELD_U8(a1, 28);
  if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
  {
    ActiveCollider__init(v2, (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDE010, 0);
    v3 = 16.0;
  }
  else
  {
    ActiveCollider__init(v2, (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDDFE4, 0);
    v3 = 8.0;
  }
  FIELD_F32(a1, 576) = v3;
  v4 = (unsigned __int8 *)(a1 + 6340);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v5, v2) )
    ActiveColliderMgr_addToCreateList(v5, v2);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  sub_60285C54(a1);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1094713344;
  if ( sub_606D4384(&v16, *v4) )
  {
    if ( sub_606D4384(&v18, *v4) )
    {
      sub_606D45B8(a1 + 6344, a1 + 6324);
      v6 = FIELD_F32(a1, 112);
      v7 = FIELD_F32(a1, 576);
      v8 = FIELD_F32(a1, 108);
      v9 = FIELD_F32(a1, 572);
      v10 = FIELD_F32(a1, 6324);
      v11 = (float *)(a1 + 6336);
      v12 = (_DWORD *)(a1 + 112);
      v13 = (float *)(a1 + 6332);
      v14 = FIELD_F32(a1, 6328);
      FIELD_F32(a1, 6332) = (float)(v8 + v9) - v10;
      FIELD_F32(a1, 6336) = (float)(v6 + v7) - v14;
    }
    else
    {
      v6 = FIELD_F32(a1, 112);
      v8 = FIELD_F32(a1, 108);
      v9 = FIELD_F32(a1, 572);
      v7 = FIELD_F32(a1, 576);
      v11 = (float *)(a1 + 6336);
      v12 = (_DWORD *)(a1 + 112);
      v13 = (float *)(a1 + 6332);
      v14 = FIELD_F32(a1, 6328);
      v10 = FIELD_F32(a1, 6324);
    }
    FIELD_F32(a1, 6348) = sqrtf(
                              (float)((float)((float)(v9 + v8) - v10) * (float)((float)(v9 + v8) - v10))
                            + (float)((float)((float)(v7 + v6) - v14) * (float)((float)(v7 + v6) - v14)));
    sub_606D4384(&v17, *v4);
    sub_606D465C(a1 + 6308, a1 + 6320);
    FIELD_U32(a1, 6352) = sub_6000F7B8(*v13, *v11);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F158);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 6308);
    *v12 = FIELD_U32(a1, 6312);
    sub_60285E04(a1);
  }
  else
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F138);
  }
  return 1;
}
