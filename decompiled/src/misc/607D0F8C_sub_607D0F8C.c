/* sub_607D0F8C
 * address: 0x607D0F8C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D0F8C(int a1)
{
  int v2; // r5
  char v3; // r12
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r0
  int result; // r0
  int v8; // r1

  FIELD_U32(a1, 1236) &= ~0x400000u;
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618808788 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
    {
      v4 = *(_DWORD **)(v2 + 620);
      if ( v4 )
      {
        v4[3] = 2;
        v5 = FIELD_S8(a1, 84);
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, FIELD_U32(a1, 11420));
        (*(void (__fastcall **)(_DWORD *, int))(*v4 + 28))(v4, a1);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 68))(a1, v5);
      }
    }
  }
  v6 = sub_607CBC00(a1);
  if ( v6 )
    FIELD_U32(v6, 324) = 2;
  FIELD_U32(a1, 1236) &= ~0x200000u;
  if ( FIELD_S32(a1, 11464) >= 5 || (result = FIELD_U8(a1, 11468), FIELD_U8(a1, 11468)) )
  {
    sub_607D7EEC(a1);
    v8 = FIELD_U32(a1, 1236);
    FIELD_U32(a1, 1204) |= 0x10u;
    FIELD_U32(a1, 1236) = v8 | 0xA000000;
    FIELD_F32(a1, 11440) = sub_60793BF8(FIELD_U32(a1, 11368));
    sub_60793C0C(FIELD_U32(a1, 11368), 0.0);
    return sub_60778050(dword_60CBFA90, a1);
  }
  return result;
}
