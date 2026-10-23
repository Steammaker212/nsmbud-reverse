/* sub_602E9F78
 * address: 0x602E9F78   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602E9F78(int a1, float a2)
{
  int v3; // r0
  bool v4; // zf
  unsigned int v5; // r1
  StateMethodExecuter *result; // r0

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  v3 = FIELD_U32(a1, 2872);
  if ( (v3 & 0x10401) == 0x401 )
    goto LABEL_6;
  v4 = (v3 & 0x20000000) == 0;
  if ( (v3 & 0x20000000) == 0 )
    v4 = (v3 & 0x10000000) == 0 && (v3 & 0x440000) != 0 && (v3 & 0x880000) != 0;
  if ( v4 )
  {
LABEL_6:
    v5 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
    return (StateMethodExecuter *)sub_602EE7D8(a1, v5, -1, 0);
  }
  else if ( sub_60003460(a1) == 1 || FIELD_U8(a1, 7528) )
  {
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C925A4);
  }
  else if ( FIELD_U8(a1, 7526) )
  {
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C92484);
  }
  else
  {
    result = (StateMethodExecuter *)FIELD_U8(a1, 7530);
    FIELD_U8(a1, 7530) = (_BYTE)result - 1;
    if ( result == (StateMethodExecuter *)41 )
    {
      FIELD_U8(a1, 7524) = 1;
      return (StateMethodExecuter *)7524;
    }
    else if ( result == (StateMethodExecuter *)1 )
    {
      return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C92584);
    }
  }
  return result;
}
