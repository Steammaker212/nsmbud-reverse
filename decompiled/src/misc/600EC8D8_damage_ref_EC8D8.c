/* damage_ref_EC8D8
 * address: 0x600EC8D8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall damage_ref_EC8D8(int a1)
{
  signed int v2; // r0
  int v3; // r6
  _DWORD *v4; // r1
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  bool v12; // zf

  FIELD_U32(a1, 116) = 1153138688;
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U8(a1, 6136) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1086324736;
  FIELD_U32(a1, 128) = 0;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v3;
  FIELD_U32(a1, 7176) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1352))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1696))(a1);
  v4 = (_DWORD *)PlayerMgr_instance;
  v5 = FIELD_U32(PlayerMgr_instance, 32);
  v6 = v5 == 0;
  if ( v5 )
    v6 = FIELD_U8(a1, 8200) == 0;
  if ( !v6 )
  {
    sub_607A1FFC(v5);
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  v7 = v4[9];
  v8 = v7 == 0;
  if ( v7 )
    v8 = FIELD_U8(a1, 8201) == 0;
  if ( !v8 )
  {
    sub_607A1FFC(v7);
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  v9 = v4[10];
  v10 = v9 == 0;
  if ( v9 )
    v10 = FIELD_U8(a1, 8202) == 0;
  if ( !v10 )
  {
    sub_607A1FFC(v9);
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  v11 = v4[11];
  v12 = v11 == 0;
  if ( v11 )
    v12 = FIELD_U8(a1, 8203) == 0;
  if ( !v12 )
    sub_607A1FFC(v11);
  FIELD_U32(a1, 7092) = 0;
  return 7092;
}
