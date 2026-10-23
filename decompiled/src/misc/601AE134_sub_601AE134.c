/* sub_601AE134
 * address: 0x601AE134   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601AE134(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  float v4; // s0
  float v5; // s2

  result = *(StateMethodExecuter **)(a1 + 576);
  if ( result == (StateMethodExecuter *)1 )
  {
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    FIELD_U32(a1, 80) = FIELD_U32(a1, 488);
    FIELD_U32(a1, 192) = 0;
    FIELD_U32(a1, 180) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8A72C);
  }
  if ( result )
    return result;
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  if ( FIELD_F32(a1, 204) < 0.0 && FIELD_F32(a1, 84) < FIELD_F32(a1, 492) )
  {
    if ( FIELD_S32(a1, 364) < 0 )
      FIELD_U32(a1, 364) = sub_601E4EA4(dword_60C8B13C, 202, 0, a1 + 80, 1);
    v3 = FIELD_U32(a1, 492);
    FIELD_U32(a1, 204) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 84) = v3;
  }
  v4 = FIELD_F32(a1, 80);
  v5 = FIELD_F32(a1, 488);
  result = *(StateMethodExecuter **)(a1 + 352);
  if ( result != (StateMethodExecuter *)1 )
  {
    if ( v4 <= v5 )
      return result;
    goto LABEL_14;
  }
  if ( v4 < v5 )
  {
LABEL_14:
    result = (StateMethodExecuter *)(FIELD_U32(a1, 576) + 1);
    FIELD_U32(a1, 576) = result;
  }
  return result;
}
