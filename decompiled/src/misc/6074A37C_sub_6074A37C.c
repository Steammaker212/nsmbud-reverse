/* sub_6074A37C
 * address: 0x6074A37C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074A37C(int a1)
{
  StateMethodExecuter *result; // r0
  int a5; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+4h] [bp-Ch] BYREF

  v4 = sub_60748FA0(a1, FIELD_U32(a1, 80));
  a5 = 100663296 * byte_60B0A5B0[FIELD_U32(a1, 80)];
  result = (StateMethodExecuter *)sub_6083246C((int *)(a1 + 160), &v4, &a5);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 712), &stru_60CBE840);
  return result;
}
