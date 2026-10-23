/* sub_601945E4
 * address: 0x601945E4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601945E4(StateMgr *a1)
{
  int v2; // r6
  int v3; // r5
  int result; // r0
  int v5; // [sp+4h] [bp-14h]

  v2 = *(_DWORD *)a1[16].lastState[1].id;
  v3 = dword_60C8996C;
  v5 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v3, 1384) )
  {
    if ( v5 == 82 )
    {
      sub_60193EE4((int)a1, v2 + 4);
    }
    else if ( v5 == 237 )
    {
      StateMgr__changeState(a1 + 19, &stru_60C89A98);
    }
  }
  result = v5;
  if ( v5 == 82 )
  {
    result = FIELD_U8(v2, 28);
    if ( (result & 0x10) == 0 )
      return result;
    FIELD_U8(dword_60CC6D78, 109056) = 1;
    return ((int (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
  }
  if ( v5 != 237 )
  {
    if ( v5 != 238 )
      return ((int (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
    result = (int)a1[20].executer;
    if ( result == 18 )
      return ((int (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
  }
  return result;
}
