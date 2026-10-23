/* sub_602B5C14
 * address: 0x602B5C14   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B5C14(int a1, int a2)
{
  ActiveCollider *v3; // r6
  ActiveColliderMgr *v4; // r5
  char v5; // r12
  float v6; // r1
  int v7; // r2
  _DWORD v9[8]; // [sp+8h] [bp-20h] BYREF

  v3 = (ActiveCollider *)(FIELD_U32(a1, 36) + 188);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v3);
  ActiveColldierMgr_removeFromCreateList(v4, v3);
  ActiveColldierMgr_removeFromList3(v4, (int)v3);
  if ( ((unsigned int)&dword_60C7B408 & ~(1613454440 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( a2 && (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404) == 1 )
  {
    v6 = FIELD_F32(a2, 112);
    v7 = FIELD_U32(a2, 116);
    v9[0] = FIELD_U32(a2, 108);
    v9[2] = v7;
    *(float *)&v9[1] = v6 + 40.0;
    sub_60407E74(dword_60C9A1E8, v9, 27, -1, 0, FIELD_U32(a2, 8));
    sub_607D15C8(a2);
  }
  return 1;
}
