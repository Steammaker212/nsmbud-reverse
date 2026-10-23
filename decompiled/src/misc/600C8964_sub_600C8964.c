/* sub_600C8964
 * address: 0x600C8964   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600C8964(int a1)
{
  int v1; // r0
  int result; // r0
  int v3; // r1

  FIELD_U32(a1, 6220) = 0;
  FIELD_U32(a1, 6216) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6244), (StateBase *)&dword_60C83EA0);
  v1 = dword_60C99D88;
  FIELD_U32(dword_60C99D88, 32) = 0;
  FIELD_U8(v1, 31) = 1;
  FIELD_U8(dword_60C9CF0C, 1393) = 0;
  FIELD_U32(dword_60C99DD4, 1376) &= ~2u;
  result = dword_60C99DE4;
  v3 = FIELD_U32(dword_60C99DE4, 16);
  if ( v3 )
    FIELD_U32(dword_60C99DE4, 16) = v3 - 1;
  return result;
}
