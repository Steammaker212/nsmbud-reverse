/* sub_60348E44
 * address: 0x60348E44   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60348E44(int a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r6
  StateBase *CurrentState; // r0
  int v7; // r9
  StateBase *v8; // r0
  int v9; // r9
  StateBase *v10; // r0
  int v11; // r8
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r1
  void (__fastcall *v15)(int, _DWORD *); // r2
  _DWORD v17[11]; // [sp+4h] [bp-2Ch] BYREF

  v3 = FIELD_U32(a3, 64);
  v5 = FIELD_S8(v3, 84);
  if ( (unsigned __int8)v5 > 3u )
  {
LABEL_7:
    v14 = FIELD_U32(v3, 112);
    v15 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 416);
    v17[0] = FIELD_U32(v3, 108);
    v17[1] = v14;
    v17[2] = 1166843904;
    v15(a1, v17);
    FIELD_U8(a1, 84) = v5;
    FIELD_U32(a1, 80) = sub_6000ADDC(a1, v3);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C949D0);
    return 1;
  }
  if ( !*(_WORD *)(a1 + 2 * v5 + 6140) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*(int (**)(void))(dword_60C94948 + 8))()
      || (v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8),
          v9 == (*(int (**)(void))(dword_60C94968 + 8))())
      || (v10 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
          v11 == (*(int (**)(void))(dword_60C949F0 + 8))()) )
    {
      v12 = sub_602A3358(a1, v3);
      v13 = sub_602856EC((int *)(a1 + 6292), v12);
      sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v13, v5);
    }
    goto LABEL_7;
  }
  return 1;
}
