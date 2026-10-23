/* sub_603C6760
 * address: 0x603C6760   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C6760(int a1, int a2, int a3)
{
  float v4; // r0
  float v5; // r1
  int v6; // r5
  int v8; // r7
  unsigned int v9; // r6
  char v10; // r3
  _BOOL4 v11; // r5
  int v12; // r8
  signed int v13; // r1
  int v14; // r0
  float v16[11]; // [sp+4h] [bp-2Ch] BYREF

  v4 = FIELD_F32(a2, 84);
  v5 = FIELD_F32(a2, 88);
  v6 = 0;
  v16[0] = v4;
  v16[1] = v5;
  v16[2] = 0.0;
  sub_602A38A4(a1, v16);
  v8 = FIELD_U32(a3, 64);
  if ( v8 )
  {
    v9 = FIELD_S8(v8, 84);
    v10 = -1;
    v11 = FIELD_F32(v8, 120) <= 0.0;
    if ( v9 <= 3 )
    {
      v12 = *(_DWORD *)(PlayerMgr_instance + 4 * v9 + 32);
      if ( v12 )
      {
        v13 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 1192))(*(_DWORD *)(PlayerMgr_instance + 4 * v9 + 32));
        SE_EMY_KAME_HIT_ref(v8, v13, FIELD_U32(a1, 6292) == 2);
        v14 = sub_60285510(v12);
        v10 = sub_602856EC((int *)(a1 + 6292), v14);
      }
    }
    sub_602A6024(a1, v11, v9, v10);
    return 1;
  }
  return v6;
}
