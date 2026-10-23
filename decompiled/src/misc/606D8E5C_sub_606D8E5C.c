/* sub_606D8E5C
 * address: 0x606D8E5C   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D8E5C(int a1)
{
  int v2; // r8
  int v3; // r1
  int result; // r0
  _DWORD *v5; // r1
  int v6; // r7
  int v7; // r0
  int v8; // r1
  int *v9; // r1
  StateMgr *v10; // r0

  FIELD_U32(a1, 6104) = dword_60AF4EF0[HIWORD(FIELD_U32(a1, 24)) & 7];
  v2 = FIELD_U8(a1, 28);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  result = 2;
  if ( v3 == 1 )
  {
    v5 = (_DWORD *)(a1 + 112);
    if ( FIELD_U32(a1, 6116) < 2u )
      v5 = (_DWORD *)(a1 + 108);
    FIELD_U32(a1, 6108) = *v5;
    v6 = FIELD_U32(ActorMgr__instance, 27180);
    v7 = sub_60008598(ActorMgr__instance, 51, FIELD_U32(ActorMgr__instance, 27172));
    if ( v7 == v6 )
      goto LABEL_10;
    while ( 1 )
    {
      v8 = *(_DWORD *)v7;
      if ( *(unsigned __int8 *)(*(_DWORD *)v7 + 28) == v2 )
        break;
      v7 = sub_60008598(ActorMgr__instance, 51, v7 + 4);
      if ( v7 == v6 )
        goto LABEL_10;
    }
    if ( !v8 )
    {
LABEL_10:
      v10 = (StateMgr *)(a1 + 6084);
      v9 = &dword_60CBB7C8;
    }
    else
    {
      FIELD_U32(a1, 6100) = FIELD_U32(v8, 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
      v9 = &dword_60CBB7E8;
      v10 = (StateMgr *)(a1 + 6084);
    }
    StateMgr__changeState(v10, (StateBase *)v9);
    return 1;
  }
  return result;
}
