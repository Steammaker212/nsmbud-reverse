/* sub_6063C3D4
 * address: 0x6063C3D4   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063C3D4(int a1, int a2)
{
  int result; // r0
  _BYTE *v4; // r6
  float v5; // s0
  float v6; // s2
  float v7; // s4
  int v8; // r0
  float v9; // s0
  ActorBuildInfo v10; // [sp+0h] [bp-40h] BYREF

  v4 = (_BYTE *)(a1 + 6782);
  result = FIELD_U8(a1, 6782);
  if ( result == 2 )
  {
    v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6776));
    if ( v8 )
    {
      result = FIELD_U8(v8, 536);
      if ( !result )
        return result;
      result = 0;
    }
    else
    {
      result = 1;
    }
LABEL_16:
    *v4 = result;
    return result;
  }
  if ( result == 1 )
  {
    v5 = FIELD_F32(a1, 108);
    result = dword_60CC6484;
    v6 = FIELD_F32(dword_60CC6484, 40);
    if ( v5 >= (float)(v6 + -48.0) )
    {
      v7 = FIELD_F32(dword_60CC6484, 48);
      if ( v5 > (float)(v7 + 48.0) || a2 )
      {
        if ( v5 > (float)(v7 + 48.0) )
          return result;
        goto LABEL_14;
      }
      if ( v5 <= (float)(v6 + -16.0) || v5 >= (float)(v7 + 16.0) )
      {
LABEL_14:
        memset(&v10, 0, sizeof(v10));
        v10.settings2 = 1;
        v10.profile = Profile__get(0x289u);
        v10.position.x = FIELD_F32(a1, 108);
        v9 = FIELD_F32(a1, 112);
        v10.position.z = FIELD_F32(a1, 116);
        v10.position.y = v9 + 4.0;
        result = (int)ActorMgr__create((void *)ActorMgr__instance, &v10, 0);
        if ( !result )
          return result;
        FIELD_U32(a1, 6776) = FIELD_U32(result, 8);
        result = 2;
        goto LABEL_16;
      }
    }
  }
  return result;
}
