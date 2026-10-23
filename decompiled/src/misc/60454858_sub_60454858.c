/* sub_60454858
 * address: 0x60454858   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60454858(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  unsigned __int8 v8; // r6
  int v9; // r0
  char v10; // r12
  unsigned __int8 v11; // r3
  int v12; // r0
  int *v13; // r4
  int *v14; // r10
  unsigned __int8 v15; // r2
  int v16; // r6
  int v17; // r0
  bool v18; // zf
  int result; // r0
  int v20; // [sp+8h] [bp-48h]
  int v21; // [sp+Ch] [bp-44h]
  int v22; // [sp+10h] [bp-40h]
  int v23; // [sp+1Ch] [bp-34h] BYREF
  int v24; // [sp+20h] [bp-30h] BYREF
  int v25; // [sp+24h] [bp-2Ch] BYREF
  int v26; // [sp+28h] [bp-28h] BYREF

  *(_BYTE *)a2 = 0;
  v4 = FIELD_U32(PlayerMgr_instance, 48);
  if ( v4 )
    *(_BYTE *)a2 = sub_608335E8(v4 + 108);
  FIELD_U8(a2, 1) = 0;
  v5 = FIELD_U32(PlayerMgr_instance, 52);
  if ( v5 )
    FIELD_U8(a2, 1) = sub_608335E8(v5 + 108);
  FIELD_U8(a2, 2) = 0;
  v6 = FIELD_U32(PlayerMgr_instance, 56);
  if ( v6 )
    FIELD_U8(a2, 2) = sub_608335E8(v6 + 108);
  FIELD_U8(a2, 3) = 0;
  v7 = FIELD_U32(PlayerMgr_instance, 60);
  if ( v7 )
    FIELD_U8(a2, 3) = sub_608335E8(v7 + 108);
  v8 = 0;
  FIELD_U32(a2, 4) = 0;
  sead__Random__getContext_const((_DWORD *)(a1 + 1340), &v23, &v24, &v25, &v26);
  FIELD_U32(a2, 4) |= sub_6083359C(v26);
  v23 = FIELD_U32(dword_60CC6484, 112);
  v24 = FIELD_U32(dword_60CC6484, 124);
  FIELD_U32(a2, 4) |= 16 * sub_608335C8(&v23);
  v9 = sub_608335B0(FIELD_F32(dword_60CC6484, 104));
  v11 = 0;
  v12 = FIELD_U32(a2, 4) | (v9 << 8);
  FIELD_U32(a2, 4) = v12;
  v13 = *(int **)(ActorMgr__instance + 27172);
  v14 = *(int **)(ActorMgr__instance + 27180);
  v15 = 0;
  if ( v13 != v14 )
  {
    v21 = 0;
    v20 = 0;
    v22 = 0;
    do
    {
      v16 = *v13;
      if ( ((unsigned int)&dword_60C7B364 & ~(1615153820 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v16 )
      {
        v17 = (**(int (__fastcall ***)(int, int *))v16)(v16, &StageActor_RTTI);
        v18 = v17 == 1;
        if ( v17 == 1 )
          v18 = FIELD_U8(v16, 19) == 0;
        if ( v18 )
        {
          switch ( FIELD_U8(v16, 533) )
          {
            case 0:
              v21 ^= sub_608335E8(v16 + 108);
              break;
            case 2:
            case 4:
              v22 ^= sub_608335E8(v16 + 108);
              break;
            case 3:
              v20 ^= sub_608335E8(v16 + 108);
              break;
            default:
              break;
          }
        }
      }
      ++v13;
    }
    while ( v14 != v13 );
    v12 = FIELD_U32(a2, 4);
    v15 = v20;
    v11 = v21;
    v8 = v22;
  }
  result = (v15 << 16) | (v8 << 20) | (v11 << 12) | v12;
  FIELD_U32(a2, 4) = result;
  return result;
}
