/* sub_600D88F8
 * address: 0x600D88F8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D88F8(_DWORD *a1, int a2, __int16 a3)
{
  char v4; // r12
  unsigned int v5; // r1
  int v6; // r5
  _DWORD *v7; // r4
  int v8; // t1
  int *v9; // r0
  int v10; // r0
  int v11; // r0

  a1[1781] = sub_600B2FD4((int)a1, a2, a3);
  v5 = a1[1784];
  if ( v5 )
    v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
  else
    v6 = 0;
  if ( ((unsigned int)dword_60C81F18 & ~(1611499856 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C81F14) == 1 )
  {
    (*(void (__fastcall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v6 + 224))(
      v6,
      a1 + 2043,
      *((unsigned __int8 *)a1 + 7124));
    v8 = a1[1774];
    v7 = a1 + 1774;
    v9 = *(int **)(v8 + 28);
    if ( FIELD_U32(v8, 24) > 1u )
      ++v9;
    v10 = *v9;
    FIELD_U32(v10, 20) = 0;
    FIELD_U32(v10, 28) |= 2u;
    v11 = *(_DWORD *)(*v7 + 28);
    if ( *(_DWORD *)(*v7 + 24) > 1u )
      v11 += 4;
    *(_DWORD *)(*(_DWORD *)v11 + 24) = 0;
  }
}
