/* sub_60095658
 * address: 0x60095658   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60095658(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r6
  float v5; // s16
  float v6; // s0
  float v7; // s16
  float v8; // s0
  float v9; // s16
  float v10; // s0
  float v11; // s16
  ActiveCollider *v12; // r5
  float v13; // s0
  float v14; // s16
  float v15; // s0
  float v16; // s16
  float v17; // s0

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611224732 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  v4 = 0;
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81734) == 1 && (FIELD_U8(v2, 7144) & 2) == 0 )
    {
      v5 = FIELD_F32(a1, 108);
      ActiveCollider_getLeft((ActiveCollider *)(v2 + 10660));
      if ( v5 < v6
        || (v7 = FIELD_F32(a1, 108), ActiveCollider_getRight((ActiveCollider *)(v2 + 10660)), v7 > v8)
        || (v9 = FIELD_F32(a1, 112), ActiveCollider_getTop((ActiveCollider *)(v2 + 10660)), v4 = 1, v9 < v10) )
      {
        v11 = FIELD_F32(a1, 108);
        v12 = (ActiveCollider *)(v2 + 7620);
        ActiveCollider_getLeft(v12);
        if ( v11 >= v13 && (v14 = FIELD_F32(a1, 108), ActiveCollider_getRight(v12), v14 <= v15) )
        {
          v16 = FIELD_F32(a1, 112);
          ActiveCollider_getTop(v12);
          return v16 >= v17;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return v4;
}
