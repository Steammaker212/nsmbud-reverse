/* sub_605DECE4
 * address: 0x605DECE4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605DECE4(_DWORD *a1)
{
  _DWORD *v2; // r6
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r0
  _DWORD *v7; // r5
  int v8; // r1
  bool v9; // zf
  int (__fastcall ***v10)(_DWORD, int *); // r5
  char v11; // r12
  int v12; // r2

  v2 = a1 + 1940;
  if ( a1[1940] == 1 )
  {
    v3 = a1[1939];
    if ( !v3 || (v4 = v3 - 1, (a1[1939] = v4) == 0) )
      (*(void (__fastcall **)(_DWORD *))(*a1 + 252))(a1);
  }
  if ( sub_605DBD64((int)a1) )
  {
    v6 = sub_605DBDDC((int)a1);
    goto LABEL_7;
  }
  v9 = (*((_BYTE *)a1 + 6261) & 8) == 0;
  if ( (*((_BYTE *)a1 + 6261) & 8) != 0 )
  {
    v5 = a1[155];
    v9 = v5 == 0;
  }
  if ( !v9 && FIELD_U32(v5, 12) == 2 )
  {
    v10 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v5, 8));
    if ( ((unsigned int)&dword_60C7B408 & ~(1616768492 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( v10 && (**v10)(v10, &dword_60C7B404) == 1 )
    {
      v6 = sub_607D6C28(v10);
LABEL_7:
      v7 = (_DWORD *)v6;
      if ( v6 )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1204))(v6) == 1 )
        {
          v8 = v7[2850];
          if ( *v2 )
          {
            if ( a1[1939] < v8 )
              a1[1939] = v8;
          }
          else
          {
            (*(void (__fastcall **)(_DWORD *, int))(*a1 + 248))(a1, v8);
          }
        }
        v12 = a1[1939];
        if ( v12 )
        {
          if ( v7[2850] < v12 )
            (*(void (__fastcall **)(_DWORD *, int))(*v7 + 1200))(v7, 1);
        }
      }
    }
  }
}
