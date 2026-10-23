/* sub_6046A078
 * address: 0x6046A078   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046A078(int a1)
{
  int v2; // r5
  unsigned int *v3; // r6
  char v4; // r12
  unsigned int v5; // r0
  int (__fastcall ***v6)(_DWORD, int *); // r5
  unsigned int v7; // r0
  _DWORD v9[3]; // [sp+0h] [bp-20h] BYREF
  int v10; // [sp+Ch] [bp-14h] BYREF

  v2 = 0;
  if ( sub_60463998((Actor *)a1, &v10, 1, 0) == 1 )
  {
    v3 = (unsigned int *)(a1 + 6208);
    sub_6046395C(a1, FIELD_U32(a1, 6208));
    v5 = FIELD_U32(a1, 6208);
    if ( v5 >= 4 )
      v5 = 0;
    v6 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v5 + 48);
    if ( ((unsigned int)&dword_60C7B374 & ~(1615241444 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v6 && (**v6)(v6, &dword_60C7B370) == 1 )
      sub_607AA630(v6);
    if ( sub_60022A80(dword_60C7F52C, v9, *v3) == 1 )
      sub_603F7A98(dword_60C99DC0, (int)v9, 1, *v3);
    v7 = *v3;
    v2 = 1;
    if ( *v3 >= 4 )
      v7 = 0;
    ++*(_DWORD *)(dword_60C9A1E0 + 36 * v7 + 556);
    sub_600221A0(dword_60C7F52C, 8, *v3, 1);
    sub_604635F4(a1);
    if ( (FIELD_U8(a1, 23) & 0x40) != 0 )
      SE_SYS_NICE_S_ref();
    FIELD_U8(a1, 19) = 1;
  }
  return v2;
}
