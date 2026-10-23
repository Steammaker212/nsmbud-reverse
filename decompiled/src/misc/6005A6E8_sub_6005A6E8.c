/* sub_6005A6E8
 * address: 0x6005A6E8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005A6E8(int a1)
{
  int *v2; // r6
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0
  StateBase *CurrentState; // r0
  int v11; // r5
  bool v12; // zf
  int v13; // r2
  int *v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r0

  v2 = (int *)(a1 + 7204);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  v3 = FIELD_U16(a1, 6276);
  v4 = v3 == 120;
  if ( v3 != 120 )
    v4 = v3 == 30;
  if ( v4 )
  {
    v5 = *(_DWORD *)(*v2 + 28);
    if ( *(_DWORD *)(*v2 + 24) > 1u )
      v5 += 4;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v5 + 4));
    v6 = *(_DWORD *)(*v2 + 28);
    if ( *(_DWORD *)(*v2 + 24) > 1u )
      v6 += 4;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
    v7 = *(_DWORD *)(*v2 + 28);
    if ( *(_DWORD *)(*v2 + 24) > 2u )
      v7 += 8;
    sub_6041838C((ModelAnimation *)(*(_DWORD *)v7 + 4));
    v8 = *(_DWORD *)(*v2 + 28);
    if ( *(_DWORD *)(*v2 + 24) > 2u )
      v8 += 8;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  }
  result = (int)sub_60052784();
  if ( result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(result + 6084));
    v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C80900 + 8))();
    v12 = v11 == result;
    if ( v11 == result )
    {
      result = FIELD_U16(a1, 6276);
      v12 = result == 0;
    }
    if ( v12 )
    {
      result = *v2;
      v13 = *(_DWORD *)(*v2 + 28);
      if ( *(_DWORD *)(*v2 + 24) > 1u )
        v13 += 4;
      if ( (*(_BYTE *)(*(_DWORD *)v13 + 28) & 0x20) != 0 )
      {
        v14 = *(int **)(result + 12);
        v15 = FIELD_U32(result, 8);
        v16 = FIELD_U32(result, 68);
        if ( v15 > v16 )
          v14 += v16;
        result = *v14;
        if ( *(float *)(*v14 + 20) == 0.0 )
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80C38);
      }
    }
  }
  return result;
}
