/* sub_6026831C
 * address: 0x6026831C   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6026831C(int a1)
{
  unsigned int v2; // r5
  _BYTE *v3; // r8
  int v4; // r0
  int v5; // r0
  ActiveColliderMgr *v6; // r7
  ActiveColliderMgr *v7; // r5
  int v8; // s2

  sub_602685FC(a1);
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_U32(a1, 6924) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 100) = -1107296256;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1082130432;
  FIELD_U32(a1, 128) = 0;
  v2 = FIELD_U32(a1, 20);
  v3 = (_BYTE *)(a1 + 6970);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1) == 1 )
  {
    *v3 = 1;
    FIELD_U16(a1, 6968) = 15 * BYTE1(v2);
    FIELD_U8(a1, 534) = 0;
    v4 = 15 * (v2 & 0xF);
  }
  else
  {
    *v3 = 0;
    FIELD_U32(a1, 6948) = (v2 >> 8) & 1;
    v4 = 60 * (v2 & 0xF);
  }
  FIELD_U32(a1, 6944) = v4;
  FIELD_U32(a1, 80) = HIWORD(v2) & 1;
  v5 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 628))(a1, FIELD_U32(a1, 24));
  FIELD_U32(a1, 6940) = 16 * v5;
  if ( 16 * v5 )
    FIELD_U8(a1, 6975) = 1;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1134559232;
  FIELD_U32(a1, 504) = 1134559232;
  FIELD_U32(a1, 508) = 1098907648;
  FIELD_U32(a1, 512) = 1098907648;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60BDBECC, a1 + 6424);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6432), (StageActor *)a1, (ActiveColliderInfo *)&unk_60AFDA44, a1 + 6424);
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6432))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 6432)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 6432));
  }
  FIELD_U32(a1, 6360) = 5;
  FIELD_U32(a1, 620) = a1 + 6344;
  FIELD_U32(a1, 6412) = 1;
  FIELD_U32(a1, 624) = a1 + 6384;
  FIELD_U32(a1, 6244) = 1;
  FIELD_F64(a1, 6316) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6312))(a1 + 6312);
  FIELD_U32(a1, 6324) = v8;
  LightSource_update1((LightSource *)(a1 + 6736), 29, (Vec3 *)(a1 + 6912), 0, 0, 0, 0, 0, 0);
  if ( *v3 == 1 && FIELD_U16(a1, 6968) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E67C);
  else
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8E69C);
  return 1;
}
