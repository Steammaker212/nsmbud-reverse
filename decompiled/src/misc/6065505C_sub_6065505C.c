/* sub_6065505C
 * address: 0x6065505C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6065505C(int a1)
{
  unsigned int v2; // r5
  unsigned int v3; // r6
  StateMethodExecuter *result; // r0

  FIELD_F32(a1, 108) = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
  v2 = sub_605BF5E0(a1 + 7448);
  v3 = FIELD_U8(a1, 9533);
  result = (StateMethodExecuter *)((int (__fastcall *)(int, unsigned int, int))loc_60656868)(a1 + 6820, 1 - v2 + v3, a1);
  if ( v2 > v3 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB63E4);
  return result;
}
