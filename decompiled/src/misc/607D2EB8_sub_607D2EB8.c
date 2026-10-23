/* sub_607D2EB8
 * address: 0x607D2EB8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D2EB8(int a1)
{
  char v2; // r1
  int v3; // r0
  int v4; // r5
  int result; // r0

  FIELD_U32(a1, 1236) |= 0x80000000;
  v2 = FIELD_U8(a1, 6900);
  v3 = a1 + 11364;
  if ( (v2 & 1) != 0 )
  {
    v4 = 0;
    PlayerBase_dispatchVirtual3(v3, 0, 0.0);
  }
  else
  {
    sub_60794954(v3, 6, 0.0, 0.0);
    v4 = 1;
  }
  FIELD_U32(a1, 9940) = v4;
  if ( !FIELD_U32(a1, 11356) )
    sub_607CFB38(a1, (StateBase *)&dword_60CC5398);
  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 104) = 0;
  result = FIELD_U32(a1, 124);
  FIELD_U32(a1, 1268) = result;
  return result;
}
