/* sub_607B75CC
 * address: 0x607B75CC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607B75CC(int a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r0
  int v5; // r5
  char v6; // r12

  v2 = FIELD_U32(a1, 1232) | 0x40000000;
  v3 = FIELD_U32(a1, 1228) | 0x500;
  v4 = FIELD_U32(a1, 1216) | 0x201000;
  FIELD_U32(a1, 1232) = v2;
  FIELD_U32(a1, 1228) = v3;
  FIELD_U32(a1, 1216) = v4;
  FIELD_U32(a1, 1224) |= 0x80u;
  FIELD_U32(a1, 1236) |= 4u;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 124) = -1082130432;
  PlayerBase_dispatchVirtual3(a1 + 11356, 0, 0.0);
  *(_DWORD *)(FIELD_U32(a1, 11360) + 208) |= 0x20u;
  FIELD_U32(a1, 9944) = 55;
  FIELD_U32(a1, 9940) = 0;
  if ( (FIELD_U8(a1, 1217) & 0x10) != 0 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B374 & ~(1618704040 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v5 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B370) == 1 )
        FIELD_U32(a1, 7104) = FIELD_U32(v5, 7104);
    }
  }
}
