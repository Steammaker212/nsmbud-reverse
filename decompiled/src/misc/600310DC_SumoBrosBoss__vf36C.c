/* SumoBrosBoss__vf36C
 * address: 0x600310DC   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268D0
// 
// Overridden by: None
int __fastcall SumoBrosBoss__vf36C(_BYTE *a1)
{
  _BYTE *v2; // r5
  _DWORD *v3; // r1
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  int result; // r0
  bool v11; // zf

  v2 = a1 + 6332;
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 728))(a1) != 1 )
    return sub_60813430(v2, "SE_VOC_BKK_DAMAGE_S", 0);
  sub_60813430(v2, "SE_VOC_BKK_DAMAGE_L", 0);
  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, (int)(a1 + 6644));
  v3 = (_DWORD *)PlayerMgr_instance;
  v4 = FIELD_U32(PlayerMgr_instance, 32);
  v5 = v4 == 0;
  if ( v4 )
    v5 = a1[7436] == 0;
  if ( !v5 )
  {
    sub_607A1FFC(v4);
    v3 = (_DWORD *)PlayerMgr_instance;
  }
  v6 = v3[9];
  v7 = v6 == 0;
  if ( v6 )
    v7 = a1[7437] == 0;
  if ( !v7 )
  {
    sub_607A1FFC(v6);
    v3 = (_DWORD *)PlayerMgr_instance;
  }
  v8 = v3[10];
  v9 = v8 == 0;
  if ( v8 )
    v9 = a1[7438] == 0;
  if ( !v9 )
  {
    sub_607A1FFC(v8);
    v3 = (_DWORD *)PlayerMgr_instance;
  }
  result = v3[11];
  v11 = result == 0;
  if ( result )
    v11 = a1[7439] == 0;
  if ( !v11 )
    return sub_607A1FFC(result);
  return result;
}
