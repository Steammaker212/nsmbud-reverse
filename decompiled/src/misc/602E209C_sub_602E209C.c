/* sub_602E209C
 * address: 0x602E209C   size: 1264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602E209C(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  ActiveCollider *v5; // r10
  int v6; // r2
  int v7; // r8
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6
  int v10; // r11
  ActiveColliderMgr *v11; // r6
  ActiveColliderMgr *v12; // r6
  ActiveColliderMgr *v13; // r6
  ActiveColliderMgr *v14; // r6
  int v15; // r8
  ActiveColliderMgr *v16; // r6
  ActiveColliderMgr *v17; // r6
  ActiveColliderMgr *result; // r0
  ActiveCollider *v19; // [sp+3Ch] [bp-34h]
  int v20; // [sp+40h] [bp-30h]

  v2 = (ActiveCollider *)(a1 + 188);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE7008, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v3, v2) )
    ActiveColliderMgr_addToCreateList(v3, v2);
  ActiveCollider__init((ActiveCollider *)(a1 + 10784), (StageActor *)a1, &stru_60AFEC64, a1 + 15476);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10784))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 10784)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 10784));
  }
  v5 = (ActiveCollider *)(a1 + 6528);
  v6 = 0;
  do
  {
    v7 = 4;
    v20 = v6;
    v19 = v5;
    do
    {
      ActiveCollider__init(v5, (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE7034, 0);
      v8 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5)
        && !ActiveColliderMgr_isInCreateList(v8, v5) )
      {
        ActiveColliderMgr_addToCreateList(v8, v5);
      }
      ActiveCollider__init(v5 + 15, (StageActor *)a1, &stru_60AFEC64, a1 + 15472);
      v9 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5 + 15)
        && !ActiveColliderMgr_isInCreateList(v9, v5 + 15) )
      {
        ActiveColliderMgr_addToCreateList(v9, v5 + 15);
      }
      --v7;
      ++v5;
    }
    while ( v7 );
    v10 = a1 + 1824 * v20;
    ActiveCollider__init((ActiveCollider *)(v10 + 7744), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE7060, 0);
    if ( !FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(v10, 7896) |= 0x100u;
    v11 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v10 + 7744))
      && !ActiveColliderMgr_isInCreateList(v11, (ActiveCollider *)(v10 + 7744)) )
    {
      ActiveColliderMgr_addToCreateList(v11, (ActiveCollider *)(v10 + 7744));
    }
    ActiveCollider__init((ActiveCollider *)(v10 + 12304), (StageActor *)a1, &stru_60AFEC64, a1 + 15472);
    v12 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v10 + 12304))
      && !ActiveColliderMgr_isInCreateList(v12, (ActiveCollider *)(v10 + 12304)) )
    {
      ActiveColliderMgr_addToCreateList(v12, (ActiveCollider *)(v10 + 12304));
    }
    ActiveCollider__init((ActiveCollider *)(v10 + 8048), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE7060, 0);
    if ( !FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(v10, 8200) |= 0x100u;
    v13 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v10 + 8048))
      && !ActiveColliderMgr_isInCreateList(v13, (ActiveCollider *)(v10 + 8048)) )
    {
      ActiveColliderMgr_addToCreateList(v13, (ActiveCollider *)(v10 + 8048));
    }
    ActiveCollider__init((ActiveCollider *)(v10 + 12608), (StageActor *)a1, &stru_60AFEC64, a1 + 15472);
    v14 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v10 + 12608))
      && !ActiveColliderMgr_isInCreateList(v14, (ActiveCollider *)(v10 + 12608)) )
    {
      ActiveColliderMgr_addToCreateList(v14, (ActiveCollider *)(v10 + 12608));
    }
    v15 = a1 + 304 * v20;
    ActiveCollider__init((ActiveCollider *)(v15 + 10176), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE7060, 0);
    v16 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v15 + 10176))
      && !ActiveColliderMgr_isInCreateList(v16, (ActiveCollider *)(v15 + 10176)) )
    {
      ActiveColliderMgr_addToCreateList(v16, (ActiveCollider *)(v15 + 10176));
    }
    ActiveCollider__init((ActiveCollider *)(v15 + 14736), (StageActor *)a1, &stru_60AFEC64, a1 + 15472);
    v17 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(
                                    ActiveColliderMgr_instance,
                                    (ActiveCollider *)(v15 + 14736));
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v17, (ActiveCollider *)(v15 + 14736));
      if ( !result )
        result = ActiveColliderMgr_addToCreateList(v17, (ActiveCollider *)(v15 + 14736));
    }
    v6 = v20 + 1;
    v5 = v19 + 6;
  }
  while ( v20 != 1 );
  return result;
}
