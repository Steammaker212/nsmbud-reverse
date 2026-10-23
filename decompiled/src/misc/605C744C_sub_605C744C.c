/* sub_605C744C
 * address: 0x605C744C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605C744C(int a1)
{
  unsigned int result; // r0

  result = FIELD_U32(a1, 2956);
  if ( result == 2 )
  {
    result = (unsigned int)&unk_60B05754 + 4 * FIELD_U8(a1, 2944);
    if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 912) + 12) + 20) >= *(float *)result )
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 1024), (StateBase *)&dword_60CB0BC4);
  }
  else if ( result == 1 )
  {
    result = FIELD_U8(a1, 2942);
    if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 912) + 12) + 20) >= (float)result )
    {
      SE_PLY_CANNON_SHOT_ref(a1);
      result = 2;
      FIELD_U32(a1, 2956) = 2;
    }
  }
  return result;
}
