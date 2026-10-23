/* sub_600B2FD4
 * address: 0x600B2FD4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600B2FD4(int a1, int a2, __int16 a3)
{
  int v3; // r4
  int v4; // lr
  int v5; // r3
  bool v6; // zf
  bool v7; // zf
  int v8; // r3
  bool v9; // zf
  int v10; // r12
  int v11; // r2
  bool v12; // zf
  int v13; // r2
  bool v14; // zf
  int v15; // r3
  int v16; // r1
  bool v17; // zf

  v4 = 0;
  v5 = FIELD_U32(PlayerMgr_instance, 36);
  v6 = v5 == 0;
  if ( v5 )
  {
    a3 = FIELD_U16(PlayerMgr_instance, 66);
    v6 = (a3 & 2) == 0;
  }
  if ( !v6 )
  {
    v3 = FIELD_U32(PlayerMgr_instance, 32);
    v4 = 1;
    v7 = v3 == 0;
    if ( v3 )
      v7 = (a3 & 1) == 0;
    if ( !v7 )
      v4 = fabsf(FIELD_F32(a1, 108) - FIELD_F32(v5, 108)) < fabsf(FIELD_F32(a1, 108) - FIELD_F32(v3, 108));
  }
  v8 = FIELD_U32(PlayerMgr_instance, 40);
  v9 = v8 == 0;
  if ( v8 )
  {
    v3 = FIELD_U16(PlayerMgr_instance, 66);
    v9 = (v3 & 4) == 0;
  }
  if ( v9 )
    goto LABEL_16;
  v10 = 2;
  v11 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
  v12 = v11 == 0;
  if ( v11 )
    v12 = (v3 & (1 << v4)) == 0;
  if ( !v12 )
  {
    if ( fabsf(FIELD_F32(a1, 108) - FIELD_F32(v8, 108)) < fabsf(FIELD_F32(a1, 108) - FIELD_F32(v11, 108)) )
      v4 = 2;
LABEL_16:
    v10 = v4;
  }
  v13 = FIELD_U32(PlayerMgr_instance, 44);
  v14 = v13 == 0;
  if ( v13 )
  {
    v3 = FIELD_U16(PlayerMgr_instance, 66);
    v14 = (v3 & 8) == 0;
  }
  if ( v14 )
    return v10;
  v15 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 32);
  v16 = 3;
  v17 = v15 == 0;
  if ( v15 )
    v17 = (v3 & (1 << v10)) == 0;
  if ( !v17 )
  {
    if ( fabsf(FIELD_F32(a1, 108) - FIELD_F32(v13, 108)) < fabsf(FIELD_F32(a1, 108) - FIELD_F32(v15, 108)) )
      return 3;
    return v10;
  }
  return v16;
}
