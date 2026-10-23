/* GiantWiggler_onCreate_helper_255B24
 * address: 0x60255B24   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall GiantWiggler_onCreate_helper_255B24(StageActor *a1)
{
  int v2; // r10
  int v3; // r9
  int *v4; // r11
  char *v5; // r7
  ActiveCollider *v6; // r5
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r5
  ActiveColliderMgr *result; // r0
  int *v10; // [sp+10h] [bp-28h]

  v2 = 0;
  v3 = 0;
  v10 = &a1[16].aCollider.field_D8;
  v4 = &a1[20].field_234;
  do
  {
    v5 = (char *)&v10[v2];
    v6 = (ActiveCollider *)&v10[v2 - 76];
    ActiveCollider__init(v6, a1, (ActiveColliderInfo *)&unk_60BDAAB8, 0);
    *((_DWORD *)v5 - 45) = 1103101952;
    *((_DWORD *)v5 - 44) = 1103101952;
    *((_DWORD *)v5 - 43) = 1;
    *((_DWORD *)v5 - 50) = v3;
    *((_DWORD *)v5 - 48) = v4;
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v6) && !ActiveColliderMgr_isInCreateList(v7, v6) )
      ActiveColliderMgr_addToCreateList(v7, v6);
    ActiveCollider__init((ActiveCollider *)v5, a1, (ActiveColliderInfo *)&unk_60BDAAB8, 0);
    *((_DWORD *)v5 + 31) = 1098907648;
    *((_DWORD *)v5 + 32) = 1092616192;
    *((_DWORD *)v5 + 33) = 0;
    *((_DWORD *)v5 + 26) = v3 + 1;
    *((_DWORD *)v5 + 28) = v4;
    v8 = ActiveColliderMgr_instance;
    result = (ActiveColliderMgr *)ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v5);
    if ( !result )
    {
      result = (ActiveColliderMgr *)ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)v5);
      if ( !result )
        result = ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)v5);
    }
    v2 += 152;
    v3 += 2;
  }
  while ( v2 != 760 );
  return result;
}
