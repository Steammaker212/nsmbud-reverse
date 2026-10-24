/* sub_6073C048
 * address: 0x6073C048   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073C048(StateMethodExecuter *result)
{
  int v1; // r1
  bool v2; // zf

  v1 = (int)result[567].vtable & 1;
  if ( v1 )
    FIELD_U32(result + (10) * 12, 0x4) = 0;
  if ( !HIWORD(result[669].currentState) )
  {
    v2 = v1 == 0;
    if ( v1 )
      v2 = result[672].currentState == 0;
    if ( !v2 )
      return sub_605D79D0((int)result, (StateBase *)&dword_60CBE088, 0);
  }
  return result;
}
