/* sub_604D29F8
 * address: 0x604D29F8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604D29F8(int a1, int a2)
{
  _DWORD *v4; // r6
  unsigned int v5; // r7
  int v6; // r5
  int v7; // r1
  int v8; // r0
  int v9; // r0

  v4 = (_DWORD *)(a1 + 615700);
  v5 = FIELD_U32(a1, 615700);
  if ( v5 >= 0xA )
    v5 = 0;
  v6 = a1 + 52644 * v5;
  StateMgr__changeState((StateMgr *)(v6 + 89268), (StateBase *)&dword_60CA3DB8);
  v7 = FIELD_U32(v6, 92896);
  if ( v7 )
  {
    v8 = FIELD_U32(v7, 12);
    if ( v8 )
      sub_60858A34(v8);
    *(_DWORD *)(a1 + 52644 * v5 + 141864) = 0;
  }
  if ( a2 )
    LOWORD(v9) = 25872;
  else
    LOWORD(v9) = 25864;
  HIWORD(v9) = 9;
  *v4 = *(_DWORD *)(a1 + v9);
  JUMPOUT(0x604D23A8);
}
