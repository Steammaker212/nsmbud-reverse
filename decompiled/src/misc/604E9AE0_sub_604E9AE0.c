/* sub_604E9AE0
 * address: 0x604E9AE0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E9AE0(int a1)
{
  StateMethodExecuter *result; // r0
  void *v3; // [sp+4h] [bp-Ch] BYREF

  result = (StateMethodExecuter *)sub_60409268((_BYTE *)dword_60C9A1F0, &v3);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = (StateMethodExecuter *)(a1 + 4552);
    if ( *(void **)(a1 + 4552) != v3 )
    {
      FIELD_U32(result, 0x0) = v3;
      return StateMgr__changeState((StateMgr *)(a1 + 4536), (StateBase *)&dword_60CA5E24);
    }
  }
  return result;
}
