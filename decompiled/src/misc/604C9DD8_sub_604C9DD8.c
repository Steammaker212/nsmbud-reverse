/* sub_604C9DD8
 * address: 0x604C9DD8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C9DD8(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int *v4; // r1
  StateMethodExecuter *v5; // [sp+4h] [bp-14h]

  v5 = *(StateMethodExecuter **)(a1 + 35272);
  v2 = dword_60C99DEC;
  result = v5;
  if ( v5 == (StateMethodExecuter *)2 )
  {
    v4 = &dword_60CA3398;
  }
  else
  {
    if ( v5 != (StateMethodExecuter *)1 )
      return result;
    FIELD_U32(a1, 615704) = 5;
    FIELD_U32(v2, 508) = 2;
    sub_603FCFD8((_DWORD *)(v2 + 16));
    FIELD_U16(v2, 526) = FIELD_U32(a1, 615700);
    FIELD_U8(v2, 512) = 0;
    v4 = &dword_60CA3298;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
}
