/* sub_6036147C
 * address: 0x6036147C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036147C(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  int v4; // r0
  int v5; // r1
  _DWORD v7[2]; // [sp+8h] [bp-20h] BYREF
  _DWORD v8[6]; // [sp+10h] [bp-18h] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1065353216;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B001E8, a1 + 7072);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  v4 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
  FIELD_F32(v4, 20) = (float)(FIELD_U32(dword_60C99DD4, 1052) % (unsigned int)FIELD_F32(v4, 8));
  FIELD_U32(v4, 28) |= 2u;
  v5 = FIELD_U32(a1, 576);
  v8[0] = FIELD_U32(a1, 572);
  v8[1] = v5;
  v7[0] = 1119879168;
  v7[1] = 1119879168;
  return sub_6069AFA0(a1 + 6984, a1 + 108, v8, v7, a1 + 6328);
}
