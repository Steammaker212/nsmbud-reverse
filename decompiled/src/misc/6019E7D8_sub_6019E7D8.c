/* sub_6019E7D8
 * address: 0x6019E7D8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019E7D8(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r4
  char v5; // r12
  char v6; // r12
  int v8; // [sp+4h] [bp-1Ch] BYREF
  int v9; // [sp+8h] [bp-18h]
  int v10; // [sp+Ch] [bp-14h]

  v2 = sub_601CF9C0(dword_60C8AEF0);
  if ( !v2 )
    return 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v3 = v2 + 1032;
  sub_6019EC34(&v8, v2 + 1032);
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 544));
  if ( ((unsigned int)dword_60C89DB8 & ~(1612310608 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C89DB8) )
  {
    dword_60C89DB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C89DB8);
  }
  if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C89DB4) != 1 || FIELD_U32(v4, 240) != v8 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    sub_6019EC34(&v8, v3);
    v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 548));
    if ( ((unsigned int)dword_60C89DB8 & ~(1612310800 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C89DB8) )
    {
      dword_60C89DB4 = (int)&off_60BD4BA4;
      _cxa_guard_release(dword_60C89DB8);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C89DB4) == 1 )
    {
      if ( FIELD_U32(v4, 240) != v8 )
        return 0;
      return v4;
    }
    return 0;
  }
  return v4;
}
