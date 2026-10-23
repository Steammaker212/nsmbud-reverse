/* Enemy__vf164
 * address: 0x602A77AC   size: 404   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall Enemy__vf164(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int v7; // r7
  _BOOL4 v8; // r8
  char v9; // r12
  int v10; // r0
  char v11; // r6
  char v12; // r9
  int v13; // r5
  signed int v14; // r1
  int v15; // r0
  char *v16; // r0
  int v17; // r1
  int v19; // [sp+0h] [bp-40h] BYREF
  int v20; // [sp+4h] [bp-3Ch]
  int v21; // [sp+8h] [bp-38h]
  int v22; // [sp+Ch] [bp-34h]
  StateVirtual *v23; // [sp+10h] [bp-30h]
  char v24; // [sp+14h] [bp-2Ch]
  _BOOL4 v25; // [sp+18h] [bp-28h]
  char v26; // [sp+1Ch] [bp-24h]

  v4 = FIELD_U32(a2, 84);
  v5 = FIELD_U32(a2, 88);
  v19 = v4;
  v20 = v5;
  v21 = 0;
  sub_602A38A4(a1, (float *)&v19);
  v7 = FIELD_U32(a3, 64);
  v8 = sub_6000ADDC(a1, v7);
  v10 = FIELD_S8(v7, 84);
  v11 = -1;
  v12 = v10;
  if ( (unsigned __int8)v10 <= 3u )
  {
    v13 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 32);
    if ( v13 )
    {
      v14 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v13 + 1192))(*(_DWORD *)(PlayerMgr_instance + 4 * v10 + 32));
      SE_EMY_KAME_HIT_ref(v7, v14, FIELD_U32(a1, 6292) == 2);
      v15 = sub_60285510(v13);
      v11 = sub_602856EC((int *)(a1 + 6292), v15);
    }
  }
  if ( ((unsigned int)&dword_60C907F4 & ~(1613396096 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C907F4) )
  {
    dword_60C9081C = 1.5;
    dword_60C90820 = 3.9;
    dword_60C90824 = -1.5;
    dword_60C90828 = 3.9;
    _cxa_guard_release(&dword_60C907F4);
  }
  v16 = (char *)&unk_60C907F0 + 8 * v8;
  v17 = *((_DWORD *)v16 + 11);
  v20 = *((_DWORD *)v16 + 12);
  v19 = v17;
  v21 = -1065353216;
  v22 = unk_60C906E8;
  v23 = &stru_60C90710;
  v24 = v11;
  v25 = v8;
  v26 = v12;
  sub_602A852C(a1 + 6104, &v19);
  return 1;
}
