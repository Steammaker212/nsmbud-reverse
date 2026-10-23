/* sub_600BEB0C
 * address: 0x600BEB0C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600BEB0C(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r1
  int *v5; // r5
  unsigned int i; // r6
  unsigned int v7; // r0
  int v8; // r0
  StateMethodExecuter *result; // r0
  int v10; // r1

  FIELD_U32(dword_60CC6484, 264) = FIELD_U32(a1, 7496);
  v3 = (_DWORD *)(a1 + 7424);
  v2 = FIELD_U32(a1, 7424);
  v5 = v3 + 5;
  v4 = v3[5];
  if ( v2 || v4 > 3 )
  {
    *v3 = v2 - 1;
    if ( v4 < 1 )
      goto LABEL_14;
    goto LABEL_8;
  }
  if ( (unsigned int)v4 >= 4 )
    v4 = 0;
  SE_OBJ_BOSS_WARP_CANNON_SHOT_ref(a1, *(_DWORD *)(a1 + 4 * v4 + 7448));
  *v3 = 5;
  v4 = *v5 + 1;
  *v5 = v4;
  if ( v4 >= 1 )
  {
LABEL_8:
    for ( i = 0; (int)i < v4; ++i )
    {
      v7 = 0;
      if ( i < 4 )
        v7 = i;
      v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32);
      if ( v8 )
      {
        sub_6079D134(FIELD_F32(v8, 144) + -0.035);
        v4 = *v5;
      }
    }
  }
LABEL_14:
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6100));
  --FIELD_U32(a1, 7416);
  result = (StateMethodExecuter *)(a1 + 7420);
  v10 = FIELD_U32(a1, 7420);
  if ( !v10 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C838E4);
  FIELD_U32(result, 0x0) = (void *)(v10 - 1);
  return result;
}
