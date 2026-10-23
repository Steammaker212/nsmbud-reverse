/* sub_607B773C
 * address: 0x607B773C   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B773C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  char v4; // r12
  int v5; // r7
  int v6; // r8
  int v7; // r0
  int v8; // r1

  FIELD_U32(a1, 156) = 0;
  if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
  {
    v2 = (_DWORD *)(a1 + 9952);
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B374 & ~(1618704284 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
    {
      Player_ReleaseCarryableEnemy((_DWORD *)v3, a1);
      v5 = FIELD_U32(v3, 112);
      v6 = FIELD_U32(v3, 116);
      FIELD_F32(a1, 584) = ((float (__fastcall *)(int, float))loc_6075EE20)(a1, FIELD_F32(v3, 108));
      FIELD_U32(a1, 588) = v5;
      FIELD_U32(a1, 592) = v6;
    }
  }
  else
  {
    v2 = (_DWORD *)(a1 + 9952);
  }
  v7 = FIELD_U32(a1, 1216);
  v8 = FIELD_U32(a1, 1228);
  FIELD_U32(a1, 1232) &= ~0x40000000u;
  FIELD_U32(a1, 1208) &= ~0x400u;
  FIELD_U32(a1, 1216) = v7 & 0xFBDFEFFF;
  FIELD_U32(a1, 1224) &= ~0x80u;
  FIELD_U32(a1, 1236) &= ~4u;
  FIELD_U32(a1, 1228) = v8 & 0xFFDFFAFF;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1092))(a1);
  FIELD_U32(a1, 1212) &= ~0x40u;
  FIELD_U32(a1, 9580) = 20;
  *(_DWORD *)(FIELD_U32(a1, 11360) + 208) &= ~0x400u;
  sub_60794954(a1 + 11356, 6, 0.0, 0.0);
  *(_DWORD *)(FIELD_U32(a1, 11360) + 208) &= ~0x20u;
  *v2 = 0;
  sub_607865BC(a1 + 688, 2);
  return sub_60763400(a1);
}
