/* sub_6065BD60
 * address: 0x6065BD60   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6065BD60(int a1, int a2)
{
  float *v4; // r4
  float v5; // s16
  float v6; // s18
  float v7; // s20
  float v8; // s22
  float v9; // s0
  float v10; // s16
  float v11; // s18
  float v12; // s20
  float v13; // s22
  float v14; // s26
  float v15; // s28
  ActorBuildInfo v17; // [sp+0h] [bp-B8h] BYREF
  ActorBuildInfo v18[3]; // [sp+2Ch] [bp-8Ch] BYREF

  v4 = (float *)(a1 + 6136);
  v5 = FIELD_F32(a1, 108);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 116);
  v8 = FIELD_F32(a1, 6136);
  memset(&v18[0].settings2, 0, 40);
  v18[0].settings1 = (FIELD_U32(a1, 6148) << 8) | (a2 << 12) | FIELD_U16(a1, 6160) | 0x10;
  v18[0].profile = Profile__get(0xE6u);
  v9 = v5 + -2.0;
  v10 = v7 + -4.0;
  v18[0].parentId = FIELD_U32(a1, 8);
  v18[0].position.x = v9;
  v18[0].position.y = (float)(v6 - v8) + -8.0;
  v18[0].position.z = v7 + -4.0;
  v18[0].field_1C = 1;
  v18[0].field_20 = FIELD_U8(a1, 86);
  ActorMgr__create((void *)ActorMgr__instance, v18, 0);
  v11 = *v4;
  v12 = FIELD_F32(a1, 6128);
  v13 = FIELD_F32(a1, 6132);
  v14 = FIELD_F32(a1, 108);
  v15 = FIELD_F32(a1, 112);
  memset(&v17.settings2, 0, 40);
  v17.settings1 = FIELD_U16(a1, 6162) | (a2 << 12) | (FIELD_U32(a1, 6148) << 8);
  v17.profile = Profile__get(0xE6u);
  v17.parentId = FIELD_U32(a1, 8);
  v17.position.x = v14 + v12;
  v18[0].field_1C = 0;
  v17.position.y = (float)((float)(v15 - v13) + v11) + -8.0;
  v17.position.z = v10;
  v17.field_20 = FIELD_U8(a1, 86);
  return ActorMgr__create((void *)ActorMgr__instance, &v17, 0);
}
