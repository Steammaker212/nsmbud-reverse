/* sub_605C5E58
 * address: 0x605C5E58   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C5E58(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  _BYTE *v6; // r0
  int v7; // r5
  float v9[3]; // [sp+4h] [bp-6Ch] BYREF
  float v10; // [sp+10h] [bp-60h]
  float v11; // [sp+14h] [bp-5Ch]
  float v12; // [sp+18h] [bp-58h]
  float v13; // [sp+1Ch] [bp-54h]
  float v14; // [sp+20h] [bp-50h]
  float v15; // [sp+24h] [bp-4Ch]
  float v16; // [sp+28h] [bp-48h]
  float v17; // [sp+2Ch] [bp-44h]
  float v18; // [sp+30h] [bp-40h]
  ActorBuildInfo v19; // [sp+34h] [bp-3Ch] BYREF

  memset(&v19.settings2, 0, 40);
  sub_605EAB0C(a1 + 6064, v9, 4);
  v10 = v10 + (float)((float)((float)(v9[1] * 7.0) + (float)(v9[0] * 4.0)) + (float)(v9[2] * 0.0));
  v19.position.x = v10;
  v14 = v14 + (float)((float)((float)(v12 * 7.0) + (float)(v11 * 4.0)) + (float)(v13 * 0.0));
  v19.position.y = v14;
  v19.position.z = v18 + (float)((float)((float)(v16 * 7.0) + (float)(v15 * 4.0)) + (float)(v17 * 0.0));
  v19.settings1 = FIELD_U32(a1, 80) | (16 * FIELD_S8(a1, 84)) | (FIELD_U32(a1, 8048) << 8);
  v19.profile = Profile__get(0x1C3u);
  v4 = FIELD_U32(a2, 12);
  v5 = 0;
  v19.field_1C = v4;
  v19.field_20 = FIELD_U8(a1, 86);
  v6 = ActorMgr__create((void *)ActorMgr__instance, &v19, 0);
  if ( v6 )
  {
    v7 = FIELD_U32(a1, 636);
    FIELD_U32(a1, 636) = FIELD_U32(a1, 8064);
    ((void (__fastcall *)(_BYTE *, int))loc_605D4920)(v6, a1);
    v5 = 1;
    FIELD_U32(a1, 636) = v7;
  }
  return v5;
}
