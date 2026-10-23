/* sub_605E12F8
 * address: 0x605E12F8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E12F8(int a1, int a2)
{
  int v3; // r0
  bool v4; // zf
  int v5; // r5
  int v6; // r6
  char v7; // r12
  unsigned int v8; // r0
  int v9; // r2

  v3 = FIELD_U32(a1, 6260);
  if ( (v3 & 0x400) != 0 )
  {
    v6 = sub_605DBDAC(a1);
LABEL_12:
    v5 = 0;
    if ( v6 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 640))(v6, 3) == 1 )
    {
      v8 = FIELD_U32(v6, 1228);
      v5 = 1;
      FIELD_U32(a1, 6784) = FIELD_U8(v6, 533);
      v9 = 1;
      if ( (v8 & 0x2000000) == 0 )
        v9 = (v8 >> 23) & 2;
      FIELD_U32(a1, 8020) = v9;
      StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18C0);
    }
    return v5;
  }
  v4 = (v3 & 0x800) == 0;
  v5 = 0;
  if ( (v3 & 0x800) != 0 )
  {
    a2 = FIELD_U32(a1, 620);
    v4 = a2 == 0;
  }
  if ( !v4 )
  {
    v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a2, 8));
    if ( ((unsigned int)&dword_60C7B37C & ~(1616778068 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
      goto LABEL_12;
  }
  return v5;
}
