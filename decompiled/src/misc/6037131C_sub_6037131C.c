/* sub_6037131C
 * address: 0x6037131C   size: 584   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037131C(int a1)
{
  int *v2; // r1
  int v3; // r0
  ActiveColliderInfo *v4; // r0
  _DWORD *v5; // r7
  ActiveColliderMgr *v6; // r6
  CollisionMgr_Sensor *v7; // r2
  int v8; // r1
  unsigned int v9; // r2
  int *v10; // r5
  signed int v11; // r0
  int v12; // r2
  int v13; // r0

  ((void (*)(void))loc_60371580)();
  v2 = dword_60371564;
  LOWORD(v3) = 0;
  if ( (FIELD_U32(a1, 20) & 0x10000000) == 0 )
    v2 = &dword_60371564[1];
  HIWORD(v3) = 17024;
  FIELD_U32(a1, 500) = *v2;
  FIELD_U32(a1, 504) = v3;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  v4 = (ActiveColliderInfo *)sub_60373ABC(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, v4, a1 + 11756);
  v5 = (_DWORD *)(a1 + 11956);
  if ( FIELD_U32(a1, 11956) == 1 )
  {
    FIELD_U32(a1, 312) = 1092616192;
    FIELD_U32(a1, 316) = 1092616192;
  }
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  v7 = (CollisionMgr_Sensor *)sub_60373ACC(a1);
  if ( *v5 == 1 )
    v7 = (CollisionMgr_Sensor *)&unk_60B004AC;
  CollisionMgr_init((CollisionMgr *)(a1 + 6304), (StateActor *)a1, v7, v7 + 1, v7 + 2);
  if ( *v5 == 1 )
  {
    FIELD_U32(a1, 11764) = 2;
    FIELD_U32(a1, 144) = 1069547520;
    FIELD_U32(a1, 148) = 1069547520;
    FIELD_U32(a1, 152) = 1069547520;
  }
  v8 = 1;
  FIELD_U32(a1, 624) = a1 + 11720;
  FIELD_U32(a1, 11748) = 1;
  v9 = FIELD_U32(a1, 20);
  v10 = (int *)(a1 + 11688);
  v11 = v9 >> 31;
  if ( (v9 & 0x100000) != 0 )
    goto LABEL_20;
  v12 = *v10;
  if ( (unsigned int)*v10 > 0xA )
  {
LABEL_17:
    v8 = FIELD_U32(a1, 80);
    goto LABEL_22;
  }
  if ( ((1 << v12) & 0x103) != 0 )
  {
    v8 = 1;
    if ( v11 )
      goto LABEL_21;
    v11 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
LABEL_20:
    v8 = v11;
    goto LABEL_21;
  }
  if ( ((1 << v12) & 0x600) == 0 )
  {
    if ( v12 != 3 )
      goto LABEL_17;
    goto LABEL_20;
  }
LABEL_21:
  FIELD_U32(a1, 80) = v8;
LABEL_22:
  FIELD_U32(a1, 11968) = v8;
  FIELD_U32(a1, 160) = sub_603737E4(a1);
  v13 = *v10;
  if ( (unsigned int)*v10 <= 0xA )
  {
    if ( ((1 << v13) & 0x601) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C960D8);
    }
    else if ( ((1 << v13) & 0x102) != 0 )
    {
      FIELD_U32(a1, 11692) = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C960FC);
    }
    else if ( v13 == 3 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C96224);
    }
  }
  return 1;
}
