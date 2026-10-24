/* sub_601F466C
 * address: 0x601F466C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F466C(StateMgr *a1)
{
  StateMethodExecuter *result; // r0
  _DWORD v3[2]; // [sp+4h] [bp-1Ch] BYREF
  int v4; // [sp+Ch] [bp-14h]

  result = (StateMethodExecuter *)sub_60190968(dword_60C8996C);
  if ( !result )
  {
    v3[0] = -1;
    v3[1] = -1;
    v4 = -1;
    sub_601FA238(dword_60C8BF58, v3, 0x80000, 7);
    FIELD_U32(a1 + (15) * 16, 0x8) = (StateMethodExecuter *)v4;
    FIELD_U32(a1 + (15) * 16, 0x0) = (StateExecuter *)7;
    FIELD_U32(a1 + (37) * 16, 0x0) = 0;
    sub_6019EC34((_DWORD *)(dword_60CC6D78 + 456), v3);
    return StateMgr__changeState(a1 + 18, (StateBase *)&dword_60C8BA6C);
  }
  return result;
}
