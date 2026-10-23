/* sub_602C89C4
 * address: 0x602C89C4   size: 784   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C89C4(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  Actor *v7; // r4
  int v8; // r6
  char v9; // r12
  float v10; // s0
  float v11; // s2
  int v12; // r0
  bool v13; // zf
  float CenterX; // s16
  float v15; // s20
  float CenterY; // s18
  float v17; // s18
  float v18; // s0
  float v19; // s0
  char v20; // r12
  float v22; // [sp+0h] [bp-38h] BYREF
  float v23; // [sp+4h] [bp-34h]

  v7 = &FIELD_U32(a3, 0x40);
  if ( ((unsigned int)dword_60C7B430 & ~(1613531632 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  v8 = 1;
  if ( v7
    && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &Enemy_RTTI) == 1
    && (Actor__getProfileId(v7) == 563 || Actor__getProfileId(v7) == 564) )
  {
    v10 = FIELD_F32(a1, 108);
    v11 = *(float *)&v7[1].movementId;
    v12 = FIELD_U32(a1, 80);
    if ( v11 < v10 == v12 )
      goto LABEL_13;
    v13 = v11 == v10;
    if ( v11 == v10 )
      v13 = v7[1].vtable == v12;
    if ( v13 )
    {
LABEL_13:
      if ( FIELD_F32(a1, 28100) <= 0.0 )
      {
        FIELD_U32(a1, 80) = v12 ^ 1;
        FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
        FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
        if ( ((unsigned int)&dword_60C91794 & ~(1613531920 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C91794) )
        {
          dword_60C91790 = (int)&off_60BE5584;
          _cxa_guard_release(&dword_60C91794);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &dword_60C91790) == 1 )
        {
          LOBYTE(v7[351].childCount) = 1;
          CenterX = ActiveCollider_getCenterX(a3);
          v15 = CenterX - ActiveCollider_getCenterX(a2);
          v22 = v15;
          CenterY = ActiveCollider_getCenterY(a3);
          v17 = CenterY - ActiveCollider_getCenterY(a2);
          v23 = v17;
          v18 = sqrtf((float)(v15 * v15) + (float)(v17 * v17));
          if ( v18 > 0.0 )
          {
            v19 = 32.0 / v18;
            v15 = v19 * v15;
            v17 = v19 * v17;
            v22 = v15;
            v23 = v17;
          }
          v22 = FIELD_F32(a1, 108) + v15;
          v23 = FIELD_F32(a1, 112) + v17;
          (*(void (__fastcall **)(Actor *, float *))(FIELD_U32(v7, 0x0) + 676))(v7, &v22);
        }
        if ( !FIELD_U8(a1, 6312) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 660))(a1);
          FIELD_U8(a1, 6312) = 1;
          if ( ((unsigned int)&dword_60C91794 & ~(1613532252 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C91794) )
          {
            dword_60C91790 = (int)&off_60BE5584;
            _cxa_guard_release(&dword_60C91794);
          }
          if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v7, 0x0))(v7, &dword_60C91790) == 1 )
            LOBYTE(v7[78].field_48) = 1;
        }
      }
      return 0;
    }
  }
  return v8;
}
