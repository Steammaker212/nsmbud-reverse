/* sub_60333938
 * address: 0x60333938   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60333938(int a1)
{
  int v2; // r4
  float v3; // r10
  float v4; // r8
  float v5; // r9
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  int v9; // r4
  int ProfileId; // r5
  int v11; // r0
  bool v12; // zf
  ActorBuildInfo buildInfo; // [sp+4h] [bp-2Ch] BYREF
  float v15; // [sp+30h] [bp+0h] BYREF
  float v16; // [sp+34h] [bp+4h]
  int v17; // [sp+38h] [bp+8h] BYREF
  int v18; // [sp+3Ch] [bp+Ch]

  v2 = 0;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 116);
  v6 = a1 + 652;
  v15 = v4;
  v16 = v3 + -6.0;
  while ( sub_6015DF58(v6, &v17, (int)&v15) == 1 )
  {
    v7 = v18 & 0xF;
    v8 = v7 == 3;
    if ( v7 != 3 )
      v8 = v7 == 0;
    if ( v8 )
      break;
    ++v2;
    v16 = v16 + -1.0;
    if ( v2 >= 20 )
      goto LABEL_9;
  }
  v3 = v16;
LABEL_9:
  v9 = FIELD_U32(a1, 20);
  ProfileId = Actor__getProfileId((Actor *)a1);
  memset(&buildInfo.settings2, 0, 40);
  buildInfo.settings1 = (16 * v9) & 0x10 | ((ProfileId == 668) << 8);
  v11 = FIELD_U32(a1, 12);
  v12 = v11 == 0;
  if ( v11 )
  {
    v11 = FIELD_U32(v11, 12);
    v12 = v11 == 0;
  }
  if ( v12 || (FIELD_U8(v11, 32) & 2) == 0 )
    buildInfo.parentId = FIELD_U32(a1, 8);
  buildInfo.profile = Profile__get(0x29Du);
  buildInfo.position.x = v4;
  buildInfo.position.y = v3;
  buildInfo.position.z = v5;
  buildInfo.field_1C = 3;
  return *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0) + 2);
}
