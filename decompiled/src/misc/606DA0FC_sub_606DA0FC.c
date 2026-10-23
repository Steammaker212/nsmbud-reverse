/* sub_606DA0FC
 * address: 0x606DA0FC   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606DA0FC(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  bool v4; // zf
  _DWORD *v5; // r2
  int v6; // r3
  int v7; // r3
  _BYTE *v8; // r12
  int v9; // lr
  char v10; // r2
  int v11; // r1
  bool v12; // zf

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U8(a1, 6554) = 1;
  result = (StateMethodExecuter *)(a1 + 6512);
  v3 = FIELD_U32(a1, 6512);
  v4 = v3 == 0;
  if ( v3 )
    v4 = FIELD_U8(a1, 6554) == 0;
  if ( !v4 )
  {
    *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6108) + 12) + 24) = 1065353216;
    v5 = (_DWORD *)(a1 + 6532);
    v6 = FIELD_U32(a1, 6532);
    if ( !v6 || (v7 = v6 - 1, (*v5 = v7) == 0) )
    {
      v8 = (_BYTE *)(a1 + 6552);
      if ( FIELD_U32(a1, 6536) )
      {
        v9 = (unsigned __int8)*v8;
        *v5 = dword_60B08FF4[v9];
        v10 = v9 + 1;
        if ( (unsigned __int8)(v9 + 1) > 4u )
          v10 = 0;
        *v8 = v10;
      }
      else
      {
        *v8 = 0;
        FIELD_U32(a1, 6536) = 1;
      }
      v11 = **(_DWORD **)(FIELD_U32(a1, 6108) + 12);
      FIELD_U32(v11, 20) = 0;
      FIELD_U32(v11, 28) |= 2u;
    }
  }
  v12 = FIELD_U8(a1, 6557) == 0;
  if ( FIELD_U8(a1, 6557) )
    v12 = FIELD_U8(a1, 6554) == 0;
  if ( !v12 )
  {
    FIELD_U8(a1, 6569) = 1;
    if ( !FIELD_U32(result, 0x0) )
      sub_606DC1F0(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBB93C);
  }
  return result;
}
