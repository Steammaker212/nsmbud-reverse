/* sub_60307A50
 * address: 0x60307A50   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60307A50(int a1)
{
  char v1; // r12
  int v3; // r1
  int v4; // r5
  char v5; // r12
  int v6; // r1
  int v7; // r2

  v3 = FIELD_S8(a1, 6596);
  if ( FIELD_U32(a1, 6564) )
  {
    v4 = sub_607891A0(PlayerMgr_instance, v3);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613789844 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) != 1 )
      goto LABEL_16;
LABEL_15:
    sub_60775394(v4, a1 + 108);
    v6 = FIELD_U32(v4, 160);
    v7 = FIELD_U32(v4, 164);
    FIELD_U32(a1, 156) = FIELD_U32(v4, 156);
    FIELD_U32(a1, 160) = v6;
    FIELD_U32(a1, 164) = v7;
    FIELD_U32(a1, 80) = FIELD_U32(v4, 80);
    goto LABEL_16;
  }
  if ( (unsigned __int8)v3 >= 4u )
    v3 = 0;
  v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613789984 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) )
    goto LABEL_15;
LABEL_16:
  FIELD_U32(a1, 6548) = FIELD_U32(a1, 160);
  FIELD_U32(a1, 124) = -1077936128;
  FIELD_U32(a1, 6572) = 1;
  return 6572;
}
