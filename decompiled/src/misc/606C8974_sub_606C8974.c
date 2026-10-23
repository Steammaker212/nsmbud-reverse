/* sub_606C8974
 * address: 0x606C8974   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606C8974(int a1)
{
  char v1; // r12
  int v2; // r4
  int v3; // r7
  int v4; // r5
  float v5; // s0
  int v6; // [sp+Ch] [bp-4Ch]
  Vec3 v7; // [sp+1Ch] [bp-3Ch] BYREF

  v2 = a1 + 7104;
  v3 = 0;
  v6 = a1 + 7120;
  do
  {
    if ( *(_DWORD *)(v2 + 4 * v3) )
    {
      v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617725988 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v4
        && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1
        && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v3)) != 0
        && (FIELD_U8(v4, 1219) & 8) == 0 )
      {
        v5 = FIELD_F32(dword_60CC6484, 124);
        v7.x = FIELD_F32(v4, 108);
        v7.y = v5 + 2.0;
        v7.z = 0.0;
        sub_604668FC(dword_60C9D3E4, &v7, *(_DWORD *)(v6 + 4 * v3), v3);
      }
    }
    ++v3;
  }
  while ( v3 != 4 );
}
