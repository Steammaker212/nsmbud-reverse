/* sub_600C88A8
 * address: 0x600C88A8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600C88A8(_DWORD *a1)
{
  StateMgr *v2; // r4
  int v3; // r0

  v2 = (StateMgr *)(a1 + 1561);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 244))(a1);
  v3 = dword_60C99D88;
  FIELD_U32(dword_60C99D88, 32) = 1;
  FIELD_U8(v3, 31) = 0;
  ++FIELD_U32(dword_60C99DE4, 16);
  FIELD_U8(dword_60C9CF0C, 1393) = 1;
  FIELD_U32(dword_60C99DD4, 1376) |= 2u;
  a1[1532] = 0;
  a1[1555] = 0;
  a1[1554] = 0;
  return StateMgr__changeState(v2, (StateBase *)&dword_60C83EC0);
}
