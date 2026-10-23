/* sub_60190994
 * address: 0x60190994   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60190994(int a1)
{
  int v1; // r5
  int v2; // r6
  int v3; // r4
  char v4; // r12
  _DWORD *v5; // r5
  char v6; // r12
  _DWORD *i; // r4
  int v8; // r4
  char v9; // r12
  int v10; // r4
  char v11; // r12

  v1 = 0;
  v2 = a1 + 1304;
  do
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(v2 + 4 * v1));
    if ( ((unsigned int)&dword_60C88AA0 & ~(1612253716 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
    {
      dword_60C88A9C = (int)&off_60BD4BB0;
      _cxa_guard_release(&dword_60C88AA0);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C88A9C) == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 76))(v3);
    ++v1;
  }
  while ( v1 != 18 );
  v5 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  if ( ((unsigned int)&dword_60C88AB8 & ~(1612253856 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
  {
    dword_60C88AB4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AB8);
  }
  (*(void (__fastcall **)(_DWORD *, int *))*v5)(v5, &dword_60C88AB4);
  (*(void (__fastcall **)(_DWORD *))(*v5 + 76))(v5);
  for ( i = (_DWORD *)v5[68]; i; i = (_DWORD *)i[68] )
    (*(void (__fastcall **)(_DWORD *))(*i + 76))(i);
  v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 1388));
  if ( ((unsigned int)&dword_60C88AA0 & ~(1612254048 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
  {
    dword_60C88A9C = (int)&off_60BD4BB0;
    _cxa_guard_release(&dword_60C88AA0);
  }
  if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C88A9C) == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 76))(v8);
  v10 = sub_601FEE28(dword_60C8C188);
  if ( ((unsigned int)&dword_60C88AA0 & ~(1612254200 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
  {
    dword_60C88A9C = (int)&off_60BD4BB0;
    _cxa_guard_release(&dword_60C88AA0);
  }
  if ( v10 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C88A9C) == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 76))(v10);
  }
}
