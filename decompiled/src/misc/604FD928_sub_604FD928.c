/* sub_604FD928
 * address: 0x604FD928   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FD928(int a1, unsigned int a2, int a3, char a4)
{
  _BYTE *v6; // r9
  StateMgr *v7; // r6
  int *v8; // r1
  int v9; // r11
  int v10; // r0
  unsigned int v11; // lr
  _DWORD *v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r5
  int v16; // r6
  int v17; // r7
  int v18; // r3
  int v19; // r4
  int v20; // r5
  int v21; // r6
  int v22; // r7
  int v23; // r0

  FIELD_U32(a1, 40104) = a3;
  FIELD_U8(a1, 40113) = a4;
  v6 = (_BYTE *)(a1 + 40112);
  if ( FIELD_U8(a1, 40112) )
  {
    v7 = (StateMgr *)(a1 + 24);
    v8 = &dword_60CA71D8;
  }
  else
  {
    v7 = (StateMgr *)(a1 + 24);
    if ( !FIELD_U8(a1, 40098) )
      goto LABEL_6;
    v8 = &dword_60CA70D8;
  }
  StateMgr__changeState(v7, (StateBase *)v8);
LABEL_6:
  StateMgr__execute(v7);
  sub_6050229C(a1 + 35508);
  v9 = a1 + 40108;
  if ( FIELD_U32(a1, 40108) )
  {
    v10 = sub_60473B4C(a1 + 31900);
    v11 = a2;
    v13 = *(_DWORD *)(*(_DWORD *)v9 + 84);
    v14 = *(_DWORD *)(*(_DWORD *)v9 + 88);
    v15 = *(_DWORD *)(*(_DWORD *)v9 + 92);
    v16 = *(_DWORD *)(*(_DWORD *)v9 + 96);
    v17 = *(_DWORD *)(*(_DWORD *)v9 + 100);
    v12 = (_DWORD *)(*(_DWORD *)v9 + 104);
    FIELD_U32(v10, 80) = *(_DWORD *)(*(_DWORD *)v9 + 80);
    FIELD_U32(v10, 84) = v13;
    FIELD_U32(v10, 88) = v14;
    FIELD_U32(v10, 92) = v15;
    FIELD_U32(v10, 96) = v16;
    FIELD_U32(v10, 100) = v17;
    v18 = v12[1];
    v19 = v12[2];
    v20 = v12[3];
    v21 = v12[4];
    v22 = v12[5];
    FIELD_U32(v10, 104) = *v12;
    FIELD_U32(v10, 108) = v18;
    FIELD_U32(v10, 112) = v19;
    FIELD_U32(v10, 116) = v20;
    FIELD_U32(v10, 120) = v21;
    FIELD_U32(v10, 124) = v22;
    FIELD_U8(v10, 64) |= 0x40u;
    *(_BYTE *)(FIELD_U32(a1, 37592) + 65) = *(_BYTE *)(*(_DWORD *)v9 + 66);
    v23 = FIELD_U32(dword_60CD0B40, 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > v11 )
      v23 += 4 * v11;
    sub_604739E8(
      (_DWORD *)(a1 + 31900),
      (__int64 *)(*(_DWORD *)(*(_DWORD *)v23 + 72) + 4),
      (__int64 *)(*(_DWORD *)v9 + 80));
  }
  else
  {
    sub_60473B58((_DWORD *)(a1 + 31900), a2, 0);
  }
  *v6 = 0;
  return 0;
}
