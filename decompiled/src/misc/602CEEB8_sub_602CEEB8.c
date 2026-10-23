/* sub_602CEEB8
 * address: 0x602CEEB8   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_602CEEB8(StageActor *a1)
{
  int v2; // r10
  int v3; // r9
  int *v4; // r11
  char *v5; // r7
  ActiveCollider *v6; // r5
  ActiveColliderMgr *v7; // r6
  float v8; // s0
  int v9; // r0
  ActiveColliderMgr *v10; // r5
  ActiveColliderMgr *result; // r0
  int *v12; // [sp+Ch] [bp-3Ch]

  v2 = 0;
  v3 = 0;
  v12 = &a1[10].aCollider.field_114;
  v4 = &a1[14].field_270;
  do
  {
    v5 = (char *)&v12[v2];
    v6 = (ActiveCollider *)&v12[v2 - 76];
    ActiveCollider__init(v6, a1, (ActiveColliderInfo *)&unk_60BE62A8, 0);
    *((_DWORD *)v5 - 45) = 1087373312;
    *((_DWORD *)v5 - 44) = 1087373312;
    *((_DWORD *)v5 - 43) = 1;
    *((_DWORD *)v5 - 50) = v3;
    *((_DWORD *)v5 - 48) = v4;
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6) && !ActiveColliderMgr_isInCreateList(v7, v6) )
      ActiveColliderMgr_addToCreateList(v7, v6);
    ActiveCollider__init((ActiveCollider *)v5, a1, (ActiveColliderInfo *)&unk_60BE62A8, 0);
    v8 = 6.0;
    *((_DWORD *)v5 + 33) = 0;
    LOWORD(v9) = 0;
    if ( (v3 | 8) == 8 )
      v8 = 3.0;
    HIWORD(v9) = 16512;
    *((float *)v5 + 31) = v8;
    *((_DWORD *)v5 + 32) = v9;
    *((_DWORD *)v5 + 26) = v3 + 1;
    *((_DWORD *)v5 + 28) = v4;
    v10 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v5);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)v5);
      if ( !result )
        result = ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)v5);
    }
    v2 += 152;
    v3 += 2;
  }
  while ( v2 != 760 );
  return result;
}
