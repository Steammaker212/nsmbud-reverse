/* sub_60361714
 * address: 0x60361714   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60361714(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  int v4; // r0
  int v5; // r1
  int result; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  _DWORD v10[2]; // [sp+8h] [bp-20h] BYREF
  _DWORD v11[6]; // [sp+10h] [bp-18h] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 164) = (FIELD_U32(a1, 20) << 8) & 0xF0000000;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B001E8, a1 + 7072);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  v4 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_F32(v4, 20) = (float)(FIELD_U32(dword_60C99DD4, 1052) % (unsigned int)FIELD_F32(v4, 8));
  FIELD_U32(v4, 28) |= 2u;
  FIELD_U32(a1, 6572) = FIELD_U32(a1, 164);
  v5 = FIELD_U32(a1, 576);
  v11[0] = FIELD_U32(a1, 572);
  v11[1] = v5;
  v10[0] = 1119879168;
  v10[1] = 1119879168;
  result = sub_6069AFA0(a1 + 6984, a1 + 108, v11, v10, a1 + 6328);
  if ( result == 1 )
  {
    v7 = FIELD_U32(a1, 108);
    v8 = FIELD_U32(a1, 112);
    v9 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v7;
    FIELD_U32(a1, 588) = v8;
    FIELD_U32(a1, 592) = v9;
    FIELD_U32(a1, 608) = v7;
    FIELD_U32(a1, 612) = v8;
    FIELD_U32(a1, 616) = v9;
    return sub_60160948((_DWORD *)(a1 + 6328));
  }
  return result;
}
