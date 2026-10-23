/* sub_60190CEC
 * address: 0x60190CEC   size: 968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60190CEC(int a1)
{
  int v1; // r7
  int v2; // r5
  int v3; // r6
  int v4; // r5
  char v5; // r12
  int v6; // r1
  int result; // r0
  int v8; // r6
  int v9; // r4
  char v10; // r12
  int v11; // r4
  _DWORD *v12; // r5
  char v13; // r12
  _DWORD *i; // r4
  int v15; // r0
  int v16; // r5
  char v17; // r12

  v1 = a1;
  v2 = 0;
  v3 = 1;
  FIELD_U16(a1, 1384) = 0;
  if ( !FIELD_U8(dword_60C8C188, 3225) )
  {
    v8 = a1 + 1304;
    while ( 1 )
    {
      v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)(v8 + 4 * v2));
      if ( ((unsigned int)&dword_60C88AA0 & ~(1612254892 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
      {
        dword_60C88A9C = (int)&off_60BD4BB0;
        _cxa_guard_release(&dword_60C88AA0);
      }
      if ( v9
        && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C88A9C) == 1
        && (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 68))(v9) != 1 )
      {
        break;
      }
      if ( ++v2 == 18 )
      {
        v11 = 1;
        goto LABEL_28;
      }
    }
    v11 = 0;
LABEL_28:
    v1 = a1;
    v12 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
    if ( ((unsigned int)&dword_60C88AB8 & ~(1612255104 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB8) )
    {
      dword_60C88AB4 = (int)&off_60BD4BA4;
      _cxa_guard_release(&dword_60C88AB8);
    }
    (*(void (__fastcall **)(_DWORD *, int *))*v12)(v12, &dword_60C88AB4);
    v3 = v11 & (*(int (__fastcall **)(_DWORD *))(*v12 + 68))(v12);
    for ( i = (_DWORD *)v12[68]; i; v3 &= v15 )
    {
      v15 = (*(int (__fastcall **)(_DWORD *))(*i + 68))(i);
      i = (_DWORD *)i[68];
    }
    v16 = sub_601FEE28(dword_60C8C188);
    if ( ((unsigned int)&dword_60C88AA0 & ~(1612255288 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
    {
      dword_60C88A9C = (int)&off_60BD4BB0;
      _cxa_guard_release(&dword_60C88AA0);
    }
    if ( v16 && (**(int (__fastcall ***)(int, int *))v16)(v16, &dword_60C88A9C) == 1 )
      v3 &= (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 68))(v16);
  }
  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(v1, 1388));
  if ( ((unsigned int)&dword_60C88AA0 & ~(1612254544 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA0) )
  {
    dword_60C88A9C = (int)&off_60BD4BB0;
    _cxa_guard_release(&dword_60C88AA0);
  }
  if ( !v4 || !(**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C88A9C) )
  {
    if ( !v3 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (v3 & (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 68))(v4)) == 1 )
  {
LABEL_10:
    sub_60190994(v1);
    ++FIELD_U32(v1, 1376);
  }
LABEL_11:
  if ( FIELD_U32(v1, 1296) )
  {
    v6 = FIELD_U32(v1, 1376);
    if ( *(_DWORD *)(*((_DWORD *)&unk_60BD5514 + 2 * FIELD_U32(v1, 1296) + 1) + 8 * v6) == 343 )
    {
      FIELD_U32(v1, 1296) = 0;
      return 1;
    }
  }
  else
  {
    v6 = FIELD_U32(v1, 1376);
  }
  result = 0;
  if ( FIELD_U32(v1, 1380) != v6 )
  {
    FIELD_U8(v1, 1384) = 1;
    FIELD_U32(v1, 1380) = v6;
  }
  return result;
}
