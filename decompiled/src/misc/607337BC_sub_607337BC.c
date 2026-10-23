/* sub_607337BC
 * address: 0x607337BC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607337BC(int a1)
{
  int result; // r0
  _BYTE *v3; // r9
  signed int v4; // r5
  signed int v5; // r5
  unsigned int v6; // r5
  int v7; // r7
  StateBase *CurrentState; // r0
  int v9; // r6
  bool v10; // zf

  v3 = (_BYTE *)(a1 + 6101);
  result = FIELD_U8(a1, 6101);
  if ( !result )
  {
    if ( FIELD_S32(a1, 6112) >= 1 )
    {
      v5 = 0;
      do
        *(_BYTE *)(sub_6072EFA0(a1, v5++) + 6349) = 1;
      while ( v5 < FIELD_U32(a1, 6112) );
    }
    result = 1;
    goto LABEL_22;
  }
  if ( result != 1 )
  {
    if ( result != 2 )
      return result;
    if ( FIELD_S32(a1, 6112) >= 1 )
    {
      v4 = 0;
      do
        *(_BYTE *)(sub_6072EFA0(a1, v4++) + 6349) = 0;
      while ( v4 < FIELD_U32(a1, 6112) );
    }
    result = 3;
    goto LABEL_22;
  }
  if ( FIELD_S32(a1, 6112) < 1 )
  {
LABEL_21:
    result = 2;
LABEL_22:
    *v3 = result;
    return result;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = sub_6072EFA0(a1, v6);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (__fastcall **)(int *))(dword_60CBD8FC + 8))(&dword_60CBD8FC);
    if ( v9 != result )
      return result;
    result = FIELD_U8(v7, 6304);
    v10 = result == 0;
    if ( !FIELD_U8(v7, 6304) )
    {
      result = FIELD_U8(v7, 6305);
      v10 = result == 0;
    }
    if ( !v10 )
      return result;
    result = FIELD_U8(v7, 6350);
    if ( !FIELD_U8(v7, 6350) )
      return result;
    if ( (signed int)++v6 >= FIELD_U32(a1, 6112) )
      goto LABEL_21;
  }
}
