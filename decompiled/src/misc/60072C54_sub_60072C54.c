/* sub_60072C54
 * address: 0x60072C54   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60072C54(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  _DWORD *v9; // r0
  _DWORD *v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r5
  float v20; // s0
  int v21; // r1
  StateBase *v23; // r0
  int v24; // r6
  _DWORD *v25; // r0
  _DWORD *v26; // r1
  unsigned int v27; // r2
  unsigned int v28; // r0
  StateBase *v29; // r0
  int v30; // r6
  _DWORD *v31; // r0
  int v32; // r6
  _DWORD *v33; // r1
  unsigned int v34; // r2
  unsigned int v35; // r0
  _DWORD *v36; // r1
  unsigned int v37; // r0

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C813AC + 8))()
    || (v5 = StateMgr__getCurrentState(v2),
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
        v6 == (*(int (**)(void))(dword_60C813CC + 8))())
    || (v7 = StateMgr__getCurrentState(v2),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C814CC + 8))()) )
  {
    v9 = *(_DWORD **)(a1 + 7112);
    v10 = (_DWORD *)v9[3];
    v11 = v9[2];
    v12 = v9[17];
    if ( v11 > v12 )
      v10 += v12;
    if ( sub_60418548(*v10 + 4) )
    {
LABEL_7:
      v13 = 7444;
      v14 = 7456;
LABEL_13:
      v19 = 1;
      v20 = *(float *)(a1 + v14);
      v21 = FIELD_U32(a1, 112);
      FIELD_F32(a1, 7512) = (float)(*(float *)(a1 + v13) + v20) * 0.5;
      FIELD_U32(a1, 7516) = v21;
      FIELD_U32(a1, 7520) = 1166843904;
      return v19;
    }
    v15 = *(_DWORD **)(a1 + 7112);
LABEL_9:
    v16 = (_DWORD *)v15[3];
    v17 = v15[2];
    v18 = v15[17];
    if ( v17 > v18 )
      v16 += v18;
    v19 = 0;
    if ( sub_60418548(*v16 + 4) )
      goto LABEL_12;
    return v19;
  }
  v23 = StateMgr__getCurrentState(v2);
  v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
  if ( v24 == (*(int (**)(void))(dword_60C8156C + 8))() )
  {
    v25 = *(_DWORD **)(a1 + 7112);
    v26 = (_DWORD *)v25[3];
    v27 = v25[2];
    v28 = v25[17];
    if ( v27 > v28 )
      v26 += v28;
    if ( sub_60418548(*v26 + 4) )
      goto LABEL_7;
    v15 = *(_DWORD **)(a1 + 7112);
    goto LABEL_9;
  }
  v29 = StateMgr__getCurrentState(v2);
  v30 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v29, 0x0) + 2))(v29);
  v19 = 0;
  if ( v30 != (*(int (**)(void))(dword_60C8158C + 8))() )
    return v19;
  v32 = a1 + 7112;
  v31 = *(_DWORD **)(a1 + 7112);
  v33 = (_DWORD *)v31[3];
  v34 = v31[2];
  v35 = v31[17];
  if ( v34 > v35 )
    v33 += v35;
  if ( sub_60418548(*v33 + 4) )
    goto LABEL_7;
  v36 = *(_DWORD **)(*(_DWORD *)v32 + 12);
  v37 = *(_DWORD *)(*(_DWORD *)v32 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v32 + 8) > v37 )
    v36 += v37;
  if ( sub_60418548(*v36 + 4) )
  {
LABEL_12:
    v13 = 7420;
    v14 = 7432;
    goto LABEL_13;
  }
  return v19;
}
