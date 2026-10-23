/* sub_607A01BC
 * address: 0x607A01BC   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A01BC(int a1, ActiveCollider *a2)
{
  char v2; // r12
  int v5; // r4
  bool v6; // zf
  char v7; // r12
  StageActor *owner; // r7
  int v9; // r1
  char v10; // r12
  _BOOL4 result; // r0
  float CenterY; // s16
  int v13; // r8

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618608608 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( !v5 || (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B370) != 1 || sub_60766708(v5) )
    return 0;
  v6 = (FIELD_U8(v5, 1218) & 0x20) == 0;
  if ( (FIELD_U8(v5, 1218) & 0x20) == 0 )
    v6 = (FIELD_U8(v5, 1234) & 0x10) == 0;
  if ( !v6 || (FIELD_U8(v5, 1224) & 4) == 0 || sub_607781EC(dword_60CBFA90) )
    return 0;
  owner = FIELD_U32(a2, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1618608800 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( !owner || (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B378) != 1 )
    return 0;
  v9 = (*(int (__fastcall **)(StageActor *, int, ActiveCollider *))(FIELD_U32(owner, 0x0).vtable + 1032))(owner, a1, a2);
  result = 1;
  if ( v9 )
    return result;
  if ( FIELD_F32(v5, 124) > 0.0 )
    return 0;
  if ( ((unsigned int)&dword_60C7B408 & ~(1618608980 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B404) == 1
    && !owner[17].aCollider.field_E0 )
  {
    CenterY = ActiveCollider_getCenterY((ActiveCollider *)a1);
    if ( CenterY > ActiveCollider_getBottom(a2) && (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1440))(v5) == 1 )
    {
      v13 = 1;
      if ( SE_VOC_YS_YOSHI_ref_2(owner, v5, 0) )
        return v13;
    }
    v13 = 0;
    if ( !sub_6075EDF8(v5) )
      return v13;
  }
  if ( sub_6076598C(v5, a1, (int)a2) != 1 || owner[14].field_234 )
    return 0;
  if ( (owner[1].field_230 & 0x2000000) != 0 && FIELD_U32(owner, 0x78).y > 0.0 )
  {
    v13 = 1;
    ((void (__fastcall *)(int, int, float))loc_60765E78)(v5, 1, FIELD_F32(a1, 240));
    sub_60765DD0((float *)&FIELD_U32(owner, 0x0).vtable, v5);
    return v13;
  }
  return ((int (__fastcall *)(int, StageActor *))loc_60770484)(v5, owner) == 1;
}
