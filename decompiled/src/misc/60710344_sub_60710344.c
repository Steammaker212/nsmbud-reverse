/* sub_60710344
 * address: 0x60710344   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60710344(int a1)
{
  int v2; // r0
  float v3; // s2
  float v4; // s4
  float v5; // s0
  float v6; // s2
  _BOOL4 v7; // r2
  int v8; // r5

  v2 = a1 + 6104;
  v3 = FIELD_F32(a1, 6800);
  v4 = FIELD_F32(a1, 6840);
  v5 = FIELD_F32(a1, 6844);
  if ( v3 <= v5 )
  {
    v6 = v4 + v3;
    if ( v6 >= v5 )
      goto LABEL_6;
LABEL_5:
    sub_6069E608(v2, a1, v6);
    return;
  }
  v6 = v3 - v4;
  if ( v6 > v5 )
    goto LABEL_5;
LABEL_6:
  v7 = (FIELD_U8(a1, 6849) & 1) == 0;
  FIELD_U8(a1, 6849) = v7;
  FIELD_U32(a1, 6844) = *(_DWORD *)(a1 + 4 * v7 + 6832);
  v8 = FIELD_U8(a1, 6850);
  sub_6069E608(v2, a1, v5);
  if ( v8 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBD1E8);
}
