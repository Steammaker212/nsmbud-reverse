/* SE_OBJ_RC_CONTROL_ON_ref_2
 * address: 0x6064DF44   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_RC_CONTROL_ON_ref_2(int a1)
{
  int v2; // r8
  int v3; // r0
  char *v4; // r5
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r1
  signed __int8 v8; // r0
  bool v9; // cf
  float v10; // r1
  int v11; // r6
  int result; // r0
  unsigned __int8 v13; // [sp+Fh] [bp-31h] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF
  Vec3 position; // [sp+18h] [bp-28h] BYREF

  v2 = sub_6064D988(a1, &v13);
  v4 = (char *)(a1 + 6552);
  v3 = FIELD_S8(a1, 6552);
  v5 = (unsigned __int8)v3;
  if ( v2 )
  {
    if ( (unsigned __int8)v3 != 255 && (byte_60B07570[v3] & (unsigned __int8)v2) == 0 )
    {
      if ( SE_OBJ_RC_CONTROL_OFF_ref_2(a1, (char)v3) )
      {
        *v4 = -1;
        goto LABEL_11;
      }
      v5 = (unsigned __int8)*v4;
    }
    if ( (v5 & 0x80u) == 0 )
    {
LABEL_14:
      if ( v5 == v13 )
        FIELD_U16(a1, 7268) = 1;
      goto LABEL_16;
    }
LABEL_11:
    v7 = 0;
    FIELD_U8(a1, 7324) = 0;
    v8 = v13;
    v9 = v13 >= 4u;
    *v4 = v13;
    if ( !v9 )
      v7 = v8;
    FIELD_U32(a1, 7304) = sub_604551F0(dword_60C9CF0C + 312 * v7 + 16, 59637760, 1.0);
    FIELD_U32(a1, 7284) = 1;
    v10 = FIELD_F32(a1, 112);
    v11 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v10;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v11, "SE_OBJ_RC_CONTROL_ON", &out.x, 0);
    sub_604005D0(AreaRumbleMgr_instance, *v4, 5, 2, 0, 0);
    v5 = (unsigned __int8)*v4;
    goto LABEL_14;
  }
  if ( SE_OBJ_RC_CONTROL_OFF_ref_2(a1, (char)v3) )
  {
    *v4 = -1;
    v6 = (_DWORD *)(a1 + 7284);
LABEL_21:
    *v6 = 0;
    goto LABEL_22;
  }
  v5 = (unsigned __int8)*v4;
LABEL_16:
  v6 = (_DWORD *)(a1 + 7284);
  if ( v5 == 255 )
    goto LABEL_21;
  if ( *v6 && (!sub_603F056C(dword_60C99D6C, (char)v5) || sub_603F0658(dword_60C99D6C, *v4)) )
    sub_603EFEAC(dword_60C99D6C, *v4, 0);
LABEL_22:
  result = FIELD_U8(EnemyCounterMaybe_instance, 20);
  if ( !FIELD_U8(EnemyCounterMaybe_instance, 20) )
    return SE_OBJ_RC_SEESAW_MOVE_ref(a1, v2);
  return result;
}
