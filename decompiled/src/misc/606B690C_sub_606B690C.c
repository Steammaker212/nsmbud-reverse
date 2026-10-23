/* sub_606B690C
 * address: 0x606B690C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void sub_606B690C()
{
  char v0; // r12
  int i; // r4
  int v2; // r6
  float v3; // s0
  Vec3 v4; // [sp+14h] [bp-3Ch] BYREF

  for ( i = 0; i != 4; ++i )
  {
    v2 = *(_DWORD *)(PlayerMgr_instance + 4 * i + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617652124 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v2
      && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B378) == 1
      && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << i)) != 0
      && (FIELD_U8(v2, 1219) & 8) == 0 )
    {
      v3 = FIELD_F32(dword_60CC6484, 124);
      v4.x = FIELD_F32(v2, 108);
      v4.y = v3 + 2.0;
      v4.z = 650.0;
      sub_60466938(dword_60C9D3E4, &v4, 2, i);
    }
  }
}
