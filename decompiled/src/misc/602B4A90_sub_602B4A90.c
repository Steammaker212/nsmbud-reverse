/* sub_602B4A90
 * address: 0x602B4A90   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B4A90(int a1, int a2, int a3)
{
  float v4; // r0
  float v5; // r1
  int v7; // r7
  _BOOL4 v8; // r0
  unsigned int v9; // r6
  int v10; // r5
  int v11; // r0
  signed int v12; // r1
  float v14[9]; // [sp+4h] [bp-24h] BYREF

  v4 = FIELD_F32(a2, 84);
  v5 = FIELD_F32(a2, 88);
  v14[0] = v4;
  v14[1] = v5;
  v14[2] = 0.0;
  sub_602A38A4(a1, v14);
  v7 = FIELD_U32(a3, 64);
  v8 = sub_6000ADDC(a1, v7);
  v9 = FIELD_S8(v7, 84);
  v10 = v8;
  if ( v9 <= 3 )
  {
    v11 = *(_DWORD *)(PlayerMgr_instance + 4 * v9 + 32);
    if ( v11 )
    {
      v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 1192))(v11);
      SE_EMY_KAME_HIT_ref(v7, v12, FIELD_U32(a1, 6292) == 2);
    }
  }
  sub_602A6024(a1, v10, v9, -1);
  return 1;
}
