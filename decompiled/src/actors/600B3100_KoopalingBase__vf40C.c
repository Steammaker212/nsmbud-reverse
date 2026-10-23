/* KoopalingBase__vf40C
 * address: 0x600B3100   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall KoopalingBase__vf40C(int a1)
{
  int v2; // r4
  unsigned int v3; // r0
  int v4; // r0
  float v5; // s0
  int v6; // r6
  int v7; // r7
  int v8; // r7
  int v10; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  v2 = 0;
  v3 = FIELD_U32(a1, 7124);
  if ( v3 >= 4 )
    v3 = 0;
  v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
  if ( v4 )
  {
    v5 = FIELD_F32(a1, 108);
    FIELD_U32(a1, 80) = FIELD_F32(v4, 108) < v5;
    v6 = (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 1108))(a1, v5);
    v7 = byte_60AFE3F4[FIELD_U32(a1, 80)];
    v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v7;
    v10 = v6;
    target = v8;
    moveValueTo((int *)(a1 + 160), &target, &v10);
    return v8 == FIELD_U32(a1, 160);
  }
  return v2;
}
