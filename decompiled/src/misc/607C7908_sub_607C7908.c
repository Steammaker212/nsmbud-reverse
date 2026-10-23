/* sub_607C7908
 * address: 0x607C7908   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C7908(int a1)
{
  int v2; // r5
  char v3; // r12
  _DWORD *v4; // r6
  int (__fastcall ***v5)(_DWORD, int *); // r5
  char v6; // r12
  int v7; // r1

  FIELD_U32(a1, 156) = 0;
  if ( (FIELD_U8(a1, 1218) & 8) != 0 )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B408 & ~(1618770264 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B404) == 1 )
      FIELD_U8(a1, 1313) = FIELD_U8(v2, 1313);
  }
  if ( (FIELD_U8(a1, 1218) & 8) != 0 )
  {
    v4 = (_DWORD *)(a1 + 9952);
    v5 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                ActorMgr__instance + 27168,
                                                FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B408 & ~(1618770448 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( v5 && (**v5)(v5, &dword_60C7B404) == 1 )
      sub_607D6E48(v5);
  }
  else
  {
    v4 = (_DWORD *)(a1 + 9952);
  }
  *v4 = 0;
  sub_607865BC(a1 + 688, 2);
  FIELD_U32(a1, 1216) &= ~0x80000u;
  v7 = FIELD_U32(a1, 1236);
  FIELD_U32(a1, 1232) &= ~0x20000000u;
  FIELD_U32(a1, 1228) &= ~0x100u;
  FIELD_U32(a1, 1236) = v7 & 0xFFFEFFFB;
  FIELD_U32(a1, 9580) = 10;
  sub_6078AABC(PlayerMgr_instance);
  sub_60763400(a1);
  FIELD_U32(a1, 13052) = 30;
  return 13052;
}
