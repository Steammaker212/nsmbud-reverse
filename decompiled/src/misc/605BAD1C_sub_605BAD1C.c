/* sub_605BAD1C
 * address: 0x605BAD1C   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BAD1C(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r8
  int result; // r0
  _BOOL4 v5; // r1
  int v6; // r5
  int v7; // r6
  int ResArchiveById; // r0
  int v9; // r1
  StateMgr *v10; // r0
  StateBase *v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  int v14; // r1
  ShapedColliderInfo v15[2]; // [sp+8h] [bp-58h] BYREF

  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 8173) = v2 & 0xF;
  v3 = (v2 >> 8) & 1;
  if ( v3 )
  {
    result = 2;
    if ( FIELD_U32(dword_60C99DD4, 764) != 3 )
      return result;
    FIELD_U32(a1, 116) = 1141473280;
  }
  else
  {
    v5 = sub_604092B0(dword_60C9A1F0, v2 & 0xF);
    result = 2;
    if ( !v5 )
      return result;
  }
  v6 = (FIELD_U32(a1, 24) & 0xF) + 1;
  v7 = ((FIELD_U32(a1, 24) >> 8) & 0xF) + 1;
  FIELD_U32(a1, 492) = 1123024896;
  FIELD_U32(a1, 496) = -1024458752;
  FIELD_U32(a1, 580) = 0;
  FIELD_F32(a1, 572) = (float)(unsigned int)v7 * 8.0;
  FIELD_F32(a1, 576) = (float)(unsigned int)v6 * -8.0;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), v3);
  sub_605BB524(a1 + 6100, ResArchiveById, &dword_60CB0700[2 * v3 + 3], v7, v6);
  v15[0].distToCenter.x = -8.0;
  v15[0].distToCenter.y = 8.0;
  memset(&v15[0].field_8, 0, 16);
  v15[0].bottomRight.x = (float)(unsigned int)v7 * 16.0;
  v15[0].bottomRight.y = (float)(unsigned int)v6 * -16.0;
  v15[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 7456), (StageActor *)a1, v15);
  FIELD_U32(a1, 7768) = sub_605BAF84;
  v9 = FIELD_U32(a1, 576);
  FIELD_U32(a1, 8152) = FIELD_U32(a1, 572);
  FIELD_U32(a1, 8156) = v9;
  FIELD_F32(a1, 8160) = (float)((float)(unsigned int)v7 * 16.0) + 64.0;
  FIELD_F32(a1, 8164) = (float)((float)(unsigned int)v6 * 16.0) + 64.0;
  if ( v3 )
  {
    v10 = (StateMgr *)(a1 + 6084);
    v11 = (StateBase *)&dword_60CB0638;
  }
  else
  {
    v12 = FIELD_U32(a1, 20);
    v13 = (v12 >> 4) & 3;
    if ( v13 == 2 )
    {
      v10 = (StateMgr *)(a1 + 6084);
      v11 = (StateBase *)&unk_60CB0698;
    }
    else if ( v13 == 1 )
    {
      v10 = (StateMgr *)(a1 + 6084);
      v11 = (StateBase *)&unk_60CB0658;
    }
    else
    {
      v14 = (v12 >> 4) & 3;
      v10 = (StateMgr *)(a1 + 6084);
      if ( v14 == 3 )
        v11 = (StateBase *)&unk_60CB06B8;
      else
        v11 = (StateBase *)&dword_60CB0638;
    }
  }
  StateMgr__changeState(v10, v11);
  return 1;
}
