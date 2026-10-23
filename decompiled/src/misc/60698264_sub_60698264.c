/* sub_60698264
 * address: 0x60698264   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60698264(int a1)
{
  unsigned int v2; // r0
  float v3; // s22
  float v4; // r1
  float v5; // s4
  float v6; // s24
  float v7; // s18
  float v8; // s22
  ActiveColliderMgr *v9; // r6

  v2 = FIELD_U32(a1, 20);
  v3 = (float)((v2 & 0xF0) + 16);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 6132) = v4;
  v6 = v3 * 0.5;
  v7 = (float)(((v2 >> 4) & 0xF0) + 16) * 0.5;
  FIELD_F32(a1, 6136) = v5 - (float)((float)(v3 * 0.5) + (float)(v3 * 0.5));
  FIELD_F32(a1, 6140) = v4 + (float)(v7 + v7);
  FIELD_F32(a1, 6144) = v5;
  FIELD_U16(a1, 6124) = BYTE2(v2) & 7;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C17EDC, 0);
  FIELD_F32(a1, 304) = v7;
  v8 = v3 * -0.5;
  FIELD_F32(a1, 308) = v8;
  FIELD_F32(a1, 312) = v7;
  FIELD_F32(a1, 316) = v6;
  v9 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 188));
  }
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB93D0);
  FIELD_F32(a1, 492) = v7;
  FIELD_F32(a1, 496) = v8;
  FIELD_F32(a1, 500) = v7 + v7;
  FIELD_F32(a1, 504) = v6 + v6;
  FIELD_U32(a1, 516) = 1141374976;
  FIELD_U32(a1, 520) = 1141374976;
  FIELD_U32(a1, 524) = 1136132096;
  FIELD_U32(a1, 528) = 1136132096;
  return 1;
}
