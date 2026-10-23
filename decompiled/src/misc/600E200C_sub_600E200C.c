/* sub_600E200C
 * address: 0x600E200C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E200C(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r1
  int v5; // r2
  float v6; // r1
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // t1
  Vec3 v11; // [sp+4h] [bp-1Ch] BYREF

  if ( FIELD_U8(a1, 6552) )
  {
    v3 = FIELD_U32(a1, 56);
    if ( ((unsigned int)&dword_60C84B44 & ~(1611538492 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
    {
      dword_60C84B40 = (int)&off_60BC8314;
      _cxa_guard_release(&dword_60C84B44);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B40) == 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(v3, 108);
      FIELD_U32(a1, 80) = FIELD_U32(v3, 80);
      v4 = FIELD_U32(v3, 160);
      v5 = FIELD_U32(v3, 164);
      FIELD_U32(a1, 156) = FIELD_U32(v3, 156);
      FIELD_U32(a1, 160) = v4;
      FIELD_U32(a1, 164) = v5;
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( sub_60235E50(a1 + 7072) == 1 )
  {
    v6 = FIELD_F32(a1, 112);
    v11.x = FIELD_F32(a1, 108);
    v11.y = v6;
    v11.z = 4500.0;
    EffectData_update((EffectData *)(a1 + 7072), &v11, 0, 0);
  }
  sub_600E35E0(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  CircularCollider_execute(a1 + 6104);
  v9 = FIELD_U32(a1, 6548);
  v8 = (_DWORD *)(a1 + 6548);
  v7 = v9;
  if ( v9 >= 1 )
    *v8 = v7 - 1;
  return 1;
}
