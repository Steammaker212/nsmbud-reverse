/* sub_60555A90
 * address: 0x60555A90   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60555A90(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  int v18; // r1
  int v19; // r2
  unsigned int v20; // r0
  bool v21; // zf
  StateMethodExecuter **v22; // r1
  int v23; // r2
  bool v24; // zf
  bool v25; // cc

  result = (StateMethodExecuter *)FIELD_U8(a1, 6862);
  if ( result )
    return result;
  if ( sub_60557B04(a1) == 1 )
  {
LABEL_3:
    FIELD_U32(a1, 18820) = 0;
    return (StateMethodExecuter *)18820;
  }
  if ( FIELD_U8(a1, 6863) )
  {
    FIELD_U32(a1, 40) = &dword_60CAD508;
    v3 = &dword_60CAD4E8;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
  }
  if ( (FIELD_U8(a1, 18813) & 0x40) != 0 )
  {
    FIELD_U32(a1, 6848) = 2;
    FIELD_U32(a1, 40) = &dword_60CAD508;
    v3 = &dword_60CAD4C8;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
  }
  v4 = FIELD_U32(a1, 5672);
  v5 = v4 == 0;
  if ( v4 )
    v5 = FIELD_U8(v4, 2689) == 0;
  if ( !v5 && !FIELD_U8(a1, 5700) )
    goto LABEL_3;
  v6 = FIELD_U32(a1, 5676);
  v7 = v6 == 0;
  if ( v6 )
    v7 = FIELD_U8(v6, 2689) == 0;
  if ( !v7 && !FIELD_U8(a1, 5701) )
    goto LABEL_3;
  v8 = FIELD_U32(a1, 5680);
  v9 = v8 == 0;
  if ( v8 )
    v9 = FIELD_U8(v8, 2689) == 0;
  if ( !v9 && !FIELD_U8(a1, 5702) )
    goto LABEL_3;
  v10 = FIELD_U32(a1, 5684);
  v11 = v10 == 0;
  if ( v10 )
    v11 = FIELD_U8(v10, 2689) == 0;
  if ( !v11 && !FIELD_U8(a1, 5703) )
    goto LABEL_3;
  v12 = FIELD_U32(a1, 5688);
  v13 = v12 == 0;
  if ( v12 )
    v13 = FIELD_U8(v12, 2689) == 0;
  if ( !v13 && !FIELD_U8(a1, 5704) )
    goto LABEL_3;
  v14 = FIELD_U32(a1, 5692);
  v15 = v14 == 0;
  if ( v14 )
    v15 = FIELD_U8(v14, 2689) == 0;
  if ( !v15 && !FIELD_U8(a1, 5705) )
    goto LABEL_3;
  v16 = FIELD_U32(a1, 5696);
  v17 = v16 == 0;
  if ( v16 )
    v17 = FIELD_U8(v16, 2689) == 0;
  if ( !v17 && !FIELD_U8(a1, 5706) )
    goto LABEL_3;
  v18 = FIELD_U32(a1, 5708);
  if ( !v18 )
  {
    v20 = 2;
    goto LABEL_45;
  }
  v19 = FIELD_U32(a1, 5712);
  v20 = 2;
  v21 = v19 == 0;
  if ( v19 )
    v21 = FIELD_U32(a1, 5716) == 0;
  if ( !v21 && FIELD_U32(a1, 5720) )
  {
    v23 = FIELD_U32(a1, 5724);
    v24 = v23 == 0;
    if ( v23 )
      v24 = FIELD_U32(a1, 5728) == 0;
    if ( !v24 )
    {
      v20 = 1;
      if ( !FIELD_U32(a1, 5732) )
        v20 = 2;
      if ( v18 == 1 )
        goto LABEL_59;
LABEL_45:
      if ( FIELD_U32(a1, 5712) != 1
        && FIELD_U32(a1, 5716) != 1
        && FIELD_U32(a1, 5720) != 1
        && FIELD_U32(a1, 5724) != 1
        && FIELD_U32(a1, 5728) != 1
        && FIELD_U32(a1, 5732) != 1 )
      {
        v22 = (StateMethodExecuter **)(a1 + 18820);
LABEL_60:
        *v22 = 0;
        return 0;
      }
      goto LABEL_59;
    }
  }
  if ( v18 != 1 )
    goto LABEL_45;
LABEL_59:
  v22 = (StateMethodExecuter **)(a1 + 18820);
  if ( v20 <= 1 )
    goto LABEL_60;
  result = *v22;
  v25 = (int)*v22 < 59;
  *v22 = (StateMethodExecuter *)((char *)*v22 + 1);
  if ( !v25 )
  {
    v3 = &dword_60CAD548;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
  }
  return result;
}
