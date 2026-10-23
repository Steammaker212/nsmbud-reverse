/* SE_OBJ_RC_CONTROL_ON_ref_3
 * address: 0x6064EFE0   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_RC_CONTROL_ON_ref_3(int a1)
{
  char v2; // r12
  int v3; // r5
  _DWORD *i; // r4
  int v5; // r6
  int v6; // r0
  char *v7; // r7
  char v8; // r0
  int v9; // r1
  int *v10; // r4
  float v11; // r1
  int v12; // r5
  int result; // r0
  char v14; // [sp+13h] [bp-35h] BYREF
  Vec2 out; // [sp+14h] [bp-34h] BYREF
  Vec3 position; // [sp+1Ch] [bp-2Ch] BYREF

  sub_6064D988(a1, &v14);
  v3 = 0;
  for ( i = *(_DWORD **)(a1 + 6360); i; i = (_DWORD *)i[1] )
  {
    if ( *i )
    {
      v5 = *(_DWORD *)(*i + 2196);
      v6 = FIELD_U8(v5, 533);
      if ( v6 == 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1617227880 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v5 )
          (**(void (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B378);
        ++v3;
      }
      else if ( v6 == 2 )
      {
        ++v3;
      }
    }
  }
  v7 = (char *)(a1 + 6552);
  v8 = v14;
  if ( v14 < 0 )
  {
    v8 = -1;
  }
  else
  {
    v9 = *v7;
    if ( v9 >= 0 )
      goto LABEL_18;
  }
  LOBYTE(v9) = v8;
  *v7 = v8;
LABEL_18:
  v10 = (int *)(a1 + 7544);
  if ( v3 >= FIELD_U8(a1, 7564) )
  {
    *v10 = 1;
    v11 = FIELD_F32(a1, 112);
    v12 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v11;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v12, "SE_OBJ_RC_CONTROL_ON", &out.x, 0);
    sub_604005D0(AreaRumbleMgr_instance, *v7, 5, 2, 0, 0);
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB6170);
    LOBYTE(v9) = *v7;
  }
  if ( (unsigned __int8)v9 == 255 )
  {
    *v10 = 0;
    return 0;
  }
  else
  {
    result = *v10;
    if ( *v10 )
    {
      if ( !sub_603F056C(dword_60C99D6C, (char)v9) )
        return sub_603EFEAC(dword_60C99D6C, *v7, 13);
      result = sub_603F0658(dword_60C99D6C, *v7);
      if ( result != 13 )
        return sub_603EFEAC(dword_60C99D6C, *v7, 13);
    }
  }
  return result;
}
