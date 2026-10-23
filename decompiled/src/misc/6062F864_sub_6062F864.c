/* sub_6062F864
 * address: 0x6062F864   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6062F864(int a1)
{
  int v2; // r0
  StateMethodExecuter **v3; // r5
  int v4; // r0
  bool v5; // cc
  StateMethodExecuter *result; // r0

  if ( FIELD_U32(a1, 6100) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB4128);
  v3 = (StateMethodExecuter **)(a1 + 6120);
  v2 = FIELD_U32(a1, 6120);
  if ( !v2 || (result = (StateMethodExecuter *)(v2 - 1), (*v3 = result) == 0) )
  {
    sub_6062FA08(
      a1,
      &dword_60B06B2C[48 * FIELD_U32(a1, 6108) + 3 * ((FIELD_U32(a1, 6112) + FIELD_U32(a1, 6116)) % 16)]);
    v4 = FIELD_U32(a1, 6112) + 1;
    v5 = FIELD_U32(a1, 6112) < 15;
    FIELD_U32(a1, 6112) = v4;
    if ( !v5 )
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB4128);
    result = (StateMethodExecuter *)dword_60B06B2C[48 * FIELD_U32(a1, 6108)
                                                 + 1
                                                 + 3 * ((FIELD_U32(a1, 6116) + v4) % 16)];
    *v3 = result;
  }
  return result;
}
