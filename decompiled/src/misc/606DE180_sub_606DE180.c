/* sub_606DE180
 * address: 0x606DE180   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DE180(int a1)
{
  signed int v2; // r1
  int result; // r0
  unsigned int v4; // r0
  int v5; // r2
  int v6; // r1
  float v7; // s0

  v2 = sub_605ADFF0(a1);
  result = 2;
  if ( v2 == 1 )
  {
    v4 = FIELD_U32(a1, 20);
    v5 = (16 * v4) & 0xFF0;
    v6 = (v4 >> 4) & 0xFF0;
    FIELD_U16(a1, 6784) = v5;
    FIELD_U16(a1, 6786) = v6;
    if ( !v5 )
      FIELD_U16(a1, 6784) = 64;
    if ( !v6 )
      FIELD_U16(a1, 6786) = 112;
    LODWORD(v7) = (int)(*(float (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
    FIELD_U32(a1, 164) = LODWORD(v7) << 30;
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 252))(a1, v7);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBBB2C);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
    return 1;
  }
  return result;
}
