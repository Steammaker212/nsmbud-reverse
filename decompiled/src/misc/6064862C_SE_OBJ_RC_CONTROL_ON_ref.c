/* SE_OBJ_RC_CONTROL_ON_ref
 * address: 0x6064862C   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_RC_CONTROL_ON_ref(int a1)
{
  int v2; // r0
  char *v3; // r7
  int v4; // r1
  _DWORD *v5; // r0
  float v6; // r1
  int v7; // r5
  _BYTE *v8; // r4
  int v9; // t1
  int result; // r0
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r1
  _BYTE v15[7]; // [sp+8h] [bp-30h] BYREF
  char v16; // [sp+Fh] [bp-29h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  sub_6064D988(a1, &v16);
  v2 = sub_6064B5E8(a1, v15);
  v3 = (char *)(a1 + 6552);
  if ( v16 < 0 )
  {
    LOBYTE(v4) = -1;
    *v3 = -1;
  }
  else
  {
    v4 = *v3;
    if ( v4 < 0 )
    {
      LOBYTE(v4) = v16;
      *v3 = v16;
    }
    FIELD_U8(a1, 7257) = 1;
  }
  if ( v2 >= FIELD_U8(a1, 7435) )
  {
    v5 = (_DWORD *)(a1 + 7408);
    if ( (v4 & 0x80u) != 0 )
    {
LABEL_14:
      *v5 = 0;
      goto LABEL_15;
    }
    *v5 = 1;
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v7, "SE_OBJ_RC_CONTROL_ON", &out.x, 0);
    sub_604005D0(AreaRumbleMgr_instance, *v3, 5, 2, 0, 0);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB5FE0);
    LOBYTE(v4) = *v3;
  }
  v5 = (_DWORD *)(a1 + 7408);
  if ( (unsigned __int8)v4 == 255 )
    goto LABEL_14;
  if ( *v5 && (!sub_603F056C(dword_60C99D6C, (char)v4) || sub_603F0658(dword_60C99D6C, *v3) != 12) )
    sub_603EFEAC(dword_60C99D6C, *v3, 12);
LABEL_15:
  if ( FIELD_U8(a1, 7312) )
  {
    v9 = FIELD_U8(a1, 7441);
    v8 = (_BYTE *)(a1 + 7441);
    result = (int)(v8 - 25);
    v11 = *(_DWORD *)(v8 - 25);
    if ( v9 )
    {
      v12 = v11 - dword_60CB6060;
      *(_DWORD *)result = v11 - dword_60CB6060;
      if ( v12 <= 0 )
      {
        *(_DWORD *)result = 0;
        *v8 = 0;
      }
    }
    else
    {
      v13 = dword_60CB6064;
      v14 = v11 + dword_60CB6060;
      *(_DWORD *)result = v11 + dword_60CB6060;
      if ( v14 >= v13 )
      {
        *(_DWORD *)result = v13;
        *v8 = 1;
        return 1;
      }
    }
  }
  else
  {
    FIELD_U32(a1, 7416) = 0;
    FIELD_U8(a1, 7441) = 0;
    return 7441;
  }
  return result;
}
