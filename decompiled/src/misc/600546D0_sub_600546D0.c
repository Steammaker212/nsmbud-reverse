/* sub_600546D0
 * address: 0x600546D0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600546D0(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  int v5; // r1
  _DWORD *v7; // r0
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0

  v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(v2, 6121) == 0;
  if ( v3 )
  {
    v7 = *(_DWORD **)(a1 + 6300);
    v8 = v7[3];
    v9 = v7[2];
    v10 = v7[17];
    if ( v9 > v10 )
      v8 += 4 * v10;
    FIELD_U16(a1, 6276) = (int)*(float *)(*(_DWORD *)v8 + 8) + 15;
    return PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6424);
  }
  else
  {
    FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 112) + -48.0;
    FIELD_U32(a1, 6316) = 2;
    v4 = FIELD_U32(a1, 80);
    FIELD_U32(a1, 80) = v4 ^ 1;
    v5 = 0x20000000;
    if ( !v4 )
      v5 = -536870912;
    FIELD_U32(a1, 160) = v5;
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6424);
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C808E0);
  }
}
