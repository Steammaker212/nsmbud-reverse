/* sub_60102978
 * address: 0x60102978   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60102978(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int result; // r0
  int v6; // r5
  char v7; // r12

  v2 = a1 + 1576;
  j_ModelWrapper_updateAnims(a1[1576]);
  CollisionMgr_process((_BYTE *)v2 - 5656);
  v3 = *(_DWORD *)(*v2 + 12);
  v4 = *(_DWORD *)(*v2 + 68);
  if ( *(_DWORD *)(*v2 + 8) > v4 )
    v3 += 4 * v4;
  result = *(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( (result & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 780))(a1, 0);
    v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 628))(a1);
    if ( ((unsigned int)dword_60C81768 & ~(1611672060 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
    {
      dword_60C81764 = (int)&off_60BC2CB4;
      _cxa_guard_release(dword_60C81768);
    }
    if ( v6 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C81764) == 1 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60C84148);
    }
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C85E94);
  }
  return result;
}
