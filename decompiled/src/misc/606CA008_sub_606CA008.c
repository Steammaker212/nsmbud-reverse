/* sub_606CA008
 * address: 0x606CA008   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CA008(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r2
  signed int v7; // [sp+4h] [bp-14h] BYREF

  v2 = sub_606D4384(&v7, FIELD_U8(a1, 6144));
  result = 6148;
  FIELD_U32(a1, 6148) = v7;
  if ( v2 )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, v2);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 196))(a1, v2);
    v4 = FIELD_U32(a1, 108);
    v5 = FIELD_U32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v4;
    FIELD_U32(a1, 588) = v5;
    FIELD_U32(a1, 592) = v6;
    FIELD_U32(a1, 608) = v4;
    FIELD_U32(a1, 612) = v5;
    FIELD_U32(a1, 616) = v6;
    FIELD_U32(a1, 6136) = FIELD_U32(a1, 6132);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1);
    return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBADDC);
  }
  return result;
}
