/* SumoBrosBoss__damageFromUnder
 * address: 0x60030A80   size: 872   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A1E1C
// 
// Overridden by: None
int __fastcall SumoBrosBoss__damageFromUnder(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int result; // r0
  StateBase *CurrentState; // r0
  int v6; // r6
  StateBase *v7; // r0
  int v8; // r6
  _DWORD *v9; // r0
  int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  StateBase *v13; // r0
  int v14; // r6
  StateBase *v15; // r0
  int v16; // r6
  StateBase *v17; // r0
  int v18; // r6
  StateBase *v19; // r0
  int v20; // r6
  StateBase *v21; // r0
  int v22; // r6
  StateBase *v23; // r0
  int v24; // r6
  StateBase *v25; // r0
  int v26; // r6
  StateBase *v27; // r0
  int v28; // r5
  int v29; // r1
  int v30[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    || (result = ActiveColliderMgr_isInCreateList(v3, v2), result == 1) )
  {
    result = FIELD_U32(a1, 6300);
    if ( result >= 1 )
    {
      CollisionMgr_process((_BYTE *)(a1 + 648));
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 == (*(int (**)(void))(dword_60C7F908 + 8))() )
        goto LABEL_5;
      v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
      if ( v8 != (*(int (**)(void))(dword_60C7F928 + 8))() || FIELD_U8(a1, 7426) != 15 )
        goto LABEL_12;
      v9 = *(_DWORD **)(a1 + 7096);
      v10 = v9[3];
      v11 = v9[2];
      v12 = v9[17];
      if ( v11 > v12 )
        v10 += 4 * v12;
      if ( *(float *)(*(_DWORD *)v10 + 20) < 55.0 )
      {
LABEL_5:
        result = a1 + 7424;
        if ( !FIELD_U16(a1, 7424) )
        {
          FIELD_U32(a1, 124) = 1077936128;
          *(_WORD *)result = 21;
        }
      }
      else
      {
LABEL_12:
        v13 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v13, 0x0) + 2))(v13);
        result = (*(int (**)(void))(dword_60C7F948 + 8))();
        if ( v14 != result )
        {
          v15 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
          result = (*(int (**)(void))(dword_60C7F968 + 8))();
          if ( v16 != result )
          {
            v17 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
            v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
            result = (*(int (**)(void))(dword_60C7F988 + 8))();
            if ( v18 != result )
            {
              v19 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
              v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
              result = (*(int (**)(void))(dword_60C7F928 + 8))();
              if ( v20 != result )
              {
                v21 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
                v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21);
                result = (*(int (**)(void))(dword_60C7F9C8 + 8))();
                if ( v22 != result )
                {
                  v23 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
                  v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
                  result = (*(int (**)(void))(dword_60C7F9EC + 8))();
                  if ( v24 != result )
                  {
                    v25 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
                    v26 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v25, 0x0) + 2))(v25);
                    result = (*(int (**)(void))(dword_60C7FA7C + 8))();
                    if ( v26 != result )
                    {
                      v27 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
                      v28 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v27, 0x0) + 2))(v27);
                      if ( v28 != (*(int (**)(void))(dword_60C7F848 + 8))()
                        || (result = FIELD_U8(a1, 7427), (unsigned int)result <= 0xA) )
                      {
                        FIELD_U32(a1, 80) = FIELD_U32(a1, 548);
                        v29 = FIELD_U32(a1, 112);
                        v30[0] = FIELD_U32(a1, 108);
                        v30[1] = v29;
                        v30[2] = 0;
                        sub_602A38A4(a1, v30);
                        sub_60813430(a1 + 6332, "SE_EMY_DOWN", 0);
                        sub_60813430(a1 + 6332, "SE_VOC_BKK_DAMAGE_FROM_UNDER", 0);
                        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F8C8);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
