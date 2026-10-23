/* sub_607C90E4
 * address: 0x607C90E4   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_607C90E4(int a1)
{
  char v1; // r12
  int v3; // r2
  int v4; // r2
  int v5; // r6
  int v6; // r5
  int v7; // r4
  int v8; // r0
  int v9; // r4
  int v10; // r6
  float v11; // r1
  float v12; // r2
  int v13; // r5
  ActorBuildInfo v15; // [sp+4h] [bp-54h] BYREF
  Vec3 v16; // [sp+30h] [bp-28h] BYREF

  v3 = FIELD_U32(a1, 15112);
  if ( v3 < 1 )
  {
    v10 = 0;
  }
  else
  {
    v4 = v3 - 1;
    v5 = FIELD_U32(a1, 15108);
    v6 = FIELD_U32(a1, 15104);
    v7 = v5 - v6;
    if ( v5 < v6 )
      v7 = FIELD_U32(a1, 15108);
    v8 = *(_DWORD *)(FIELD_U32(a1, 15100) + 4 * v7);
    v9 = v5 + 1;
    v10 = 0;
    if ( v9 >= v6 )
      v9 = 0;
    FIELD_U32(a1, 15108) = v9;
    FIELD_U32(a1, 15112) = v4;
    if ( v8 != 591 )
    {
      v10 = 1;
      if ( v8 != 592 )
      {
        v10 = 2;
        if ( v8 != 595 )
        {
          v10 = 6;
          if ( v8 != 594 )
          {
            v10 = 4;
            if ( v8 != 593 )
            {
              v10 = 5;
              if ( v8 != 854 )
              {
                v10 = 3;
                if ( v8 != 596 )
                {
                  v10 = 0;
                  if ( v8 == 598 )
                    v10 = 7;
                }
              }
            }
          }
        }
      }
    }
  }
  v11 = FIELD_F32(a1, 112);
  v12 = FIELD_F32(a1, 116);
  v16.x = FIELD_F32(a1, 108);
  v16.y = v11;
  v16.z = v12;
  v13 = FIELD_U32(a1, 11360);
  if ( ((unsigned int)&dword_60CBF6E0 & ~(1618776616 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CBF6E0) )
  {
    dword_60CBF6DC = (int)&off_60C23E4C;
    _cxa_guard_release(&dword_60CBF6E0);
  }
  if ( v13 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 8))(v13, &dword_60CBF6DC) == 1 )
  {
    bottom1_ref_7CB39C(v13, &v16);
    v16.y = v16.y + -8.0;
    v16.z = v16.z + -10.0;
  }
  memset(&v15.settings2, 0, 40);
  v15.settings1 = v10 | (16 * FIELD_S8(a1, 84));
  v15.profile = Profile__get(0x32Cu);
  v15.position = v16;
  v15.field_1C = FIELD_U32(a1, 160);
  v15.field_20 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v15, 0);
}
