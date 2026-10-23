/* SE_EMY_IBARAMUSHI_KNOCK_UP_ref_2
 * address: 0x602E4998   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_IBARAMUSHI_KNOCK_UP_ref_2(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v5; // r4
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int v7; // r0
  bool v8; // zf
  _BYTE *v9; // r0
  int v10; // r5
  float v11; // r1
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
  if ( ((unsigned int)dword_60C922C8 & ~(1613646264 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C922C8) )
  {
    dword_60C922C4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C922C8);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C922C4);
    if ( v5 )
      v5 = (int)v3;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613646396 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C7B378);
    if ( v5 )
    {
      v9 = (_BYTE *)(v7 ^ 1);
      v8 = v9 == 0;
      if ( !v9 )
      {
        v9 = (_BYTE *)(v5 + 15376);
        v8 = FIELD_U8(v5, 15376) == 0;
      }
      if ( v8 )
      {
        FIELD_U8(v5, 15364) = 1;
        FIELD_U8(v5, 15375) = 4;
        *v9 = 8;
        v10 = Global_BasicSoundActor1;
        v11 = FIELD_F32(v5, 112);
        if ( FIELD_U32(v5, 15388) )
        {
          position.x = FIELD_F32(v5, 108);
          position.y = v11;
          mapPositionToScreen(&out, &position);
          sub_60813810(v10, (int)"SE_EMY_IBARAMUSHI_KNOCK_UP", (int)&out, 1, 0);
          sub_602E4BC8(v5);
        }
        else
        {
          position.x = FIELD_F32(v5, 108);
          position.y = v11;
          mapPositionToScreen(&out, &position);
          sub_60813810(v10, (int)"SE_EMY_IBARAMUSHI_KNOCK_UP", (int)&out, 0, 0);
        }
      }
    }
  }
}
