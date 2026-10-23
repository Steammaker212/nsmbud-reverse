/* sub_604E278C
 * address: 0x604E278C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E278C(StateMethodExecuter *result, unsigned int a2, void **a3)
{
  int v3; // r12
  unsigned int v4; // r1
  int v5; // r3
  int v6; // r1
  int v7; // r1

  if ( (char *)*a3 - 25 >= (char *)2 )
  {
    if ( *a3 == (void *)8 )
      a2 = 0;
    v3 = dword_60C99DD4;
    result[477].vtable = (void *)a2;
    if ( a2 >= 6 )
      a2 = 0;
    v4 = v3 + 72 * a2;
    result[476].vtable = *a3;
    v5 = FIELD_U32(v4, 300);
    v6 = FIELD_U32(v4, 304);
    if ( v6 > 5 )
      v6 = 0;
    v7 = 5 * v6;
    result[475].vtable = (void *)dword_60B02FDC[2 * v7 + v5];
    result[475].owner = (void *)dword_60B030CC[2 * v7 + v5];
    result[475].currentState = 0;
    result[478].vtable = (void *)-1;
    BYTE2(result[478].currentState) = 1;
    BYTE1(result[478].currentState) = 0;
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA553C);
  }
  return result;
}
