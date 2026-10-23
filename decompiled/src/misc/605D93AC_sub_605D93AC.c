/* sub_605D93AC
 * address: 0x605D93AC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D93AC(int a1)
{
  int v2; // r1
  int v3; // r0
  StateMethodExecuter *result; // r0
  int a5; // [sp+0h] [bp-18h] BYREF
  int v6; // [sp+4h] [bp-14h] BYREF

  v2 = 0x40000000;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 104) = 0;
  v3 = FIELD_U32(a1, 80);
  if ( v3 == 1 )
    v2 = -1073741824;
  v6 = v2;
  a5 = (unsigned __int8)byte_60B0594C[v3] << 27;
  sub_6083246C((int *)(a1 + 160), &v6, &a5);
  result = (StateMethodExecuter *)FIELD_U8(a1, 6804);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 8004) = 0;
    FIELD_U32(a1, 8008) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 6292), (StateBase *)&dword_60CB1690);
  }
  return result;
}
