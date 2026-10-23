/* sub_60530D3C
 * address: 0x60530D3C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60530D3C(signed int result, int a2, int a3)
{
  signed int v3; // r9
  unsigned int v5; // r7
  unsigned int v6; // r0
  _DWORD *v7; // r4
  unsigned int v8; // r5
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2

  v3 = result;
  FIELD_U32(result, 64) = a2;
  if ( a2 >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = 0;
      if ( v5 < 4 )
        v6 = v5;
      v7 = (_DWORD *)(a3 + 12 * v6);
      v8 = v3 + 80 * v6;
      v9 = v7[1];
      v10 = v7[2];
      FIELD_U32(v8, 132) = *v7;
      FIELD_U32(v8, 136) = v9;
      FIELD_U32(v8, 140) = v10;
      sub_60531178(v8 + 68);
      StateMgr__changeState((StateMgr *)(v8 + 88), (StateBase *)&dword_60CAAB14);
      v11 = v7[1];
      v12 = v7[2];
      FIELD_U32(v8, 452) = *v7;
      FIELD_U32(v8, 456) = v11;
      FIELD_U32(v8, 460) = v12;
      sub_60531178(v8 + 388);
      StateMgr__changeState((StateMgr *)(v8 + 408), (StateBase *)&dword_60CAAB14);
      result = FIELD_U32(v3, 64);
      ++v5;
    }
    while ( (int)v5 < result );
  }
  return result;
}
