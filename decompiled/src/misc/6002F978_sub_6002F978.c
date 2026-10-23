/* sub_6002F978
 * address: 0x6002F978   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002F978(int a1)
{
  float v2; // r10
  float v3; // r8
  float v4; // r9
  float v5; // s0
  int v6; // r6
  bool v7; // zf
  ActorBuildInfo v9; // [sp+0h] [bp-68h] BYREF
  int v10; // [sp+30h] [bp-38h] BYREF
  float v11; // [sp+34h] [bp-34h]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 116);
  v5 = v2;
  if ( v2 >= -680.0 )
  {
    v6 = 0;
    v10 = FIELD_U32(a1, 108);
    v2 = v2 + -6.0;
    v11 = v5 + -6.0;
    while ( sub_6015DF58(a1 + 652, &v9, &v10) == 1 )
    {
      v7 = (v9.settings2 & 0xF) == 0;
      if ( (v9.settings2 & 0xF) != 0 )
        v7 = (v9.settings2 & 0xF) == 3;
      if ( v7 || LOWORD(v9.settings1) == 0x1F )
        break;
      ++v6;
      v11 = v11 + -1.0;
      if ( v6 >= 20 )
        goto LABEL_11;
    }
    v2 = v11;
  }
LABEL_11:
  memset(&v9, 0, sizeof(v9));
  v9.parentId = FIELD_U32(a1, 8);
  v9.profile = Profile__get(0x2C6u);
  v9.position.x = v3;
  v9.position.y = v2;
  v9.position.z = v4;
  v9.field_1C = 3;
  return *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v9, 0) + 2);
}
