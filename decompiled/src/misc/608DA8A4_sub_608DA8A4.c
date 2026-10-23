/* sub_608DA8A4
 * address: 0x608DA8A4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608DA8A4(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  char *v4; // r6
  int v5; // r7
  bool v6; // zf
  char *v7; // r7
  int v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  int v12; // r0
  int v13; // r0

  *a1 = off_60C5BB60;
  a1[2] = off_60C5BBA4;
  v3 = a1 + 2;
  a1[106] = &off_60C5BBC0;
  v4 = *(char **)(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619896560 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v5 = (int)(v4 + 192);
  if ( !(**(int (__fastcall ***)(char *, int *))v4)(v4, &dword_60CC6AE4) )
    v5 = 192;
  v6 = *(_BYTE *)v5 == 0;
  if ( *(_BYTE *)v5 )
  {
    v4 = (char *)a1[10];
    v6 = v4 == 0;
  }
  if ( !v6 )
  {
    v7 = 0;
    do
    {
      v8 = sub_608AB144((int)v3, (int)(v7 + 0x4000000));
      sub_608AC690(v8, 0);
      ++v7;
    }
    while ( v4 != v7 );
  }
  v9 = (void *)a1[107];
  if ( v9 )
  {
    operator_delete_8DE3FC(v9);
    a1[107] = 0;
  }
  v10 = (void *)a1[109];
  if ( v10 )
  {
    operator_delete_8DE3FC(v10);
    a1[109] = 0;
  }
  v11 = (void *)a1[112];
  if ( v11 )
  {
    operator_delete_8DE3FC(v11);
    a1[112] = 0;
  }
  v12 = a1[115];
  if ( v12 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
    a1[115] = 0;
  }
  v13 = a1[114];
  if ( v13 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    a1[114] = 0;
  }
  sead__CriticalSection__dtor(a1 + 117);
  sub_608AA558(v3);
  return a1;
}
