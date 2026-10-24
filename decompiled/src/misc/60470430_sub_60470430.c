/* sub_60470430
 * address: 0x60470430   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60470430(Actor *a1)
{
  int v1; // r5
  unsigned int *v3; // r6
  unsigned int v4; // r0
  int v5; // r0
  unsigned int v6; // r7
  _DWORD v8[3]; // [sp+0h] [bp-28h] BYREF
  int v9; // [sp+Ch] [bp-1Ch] BYREF

  v1 = 0;
  v9 = 0;
  if ( sub_60463998(a1, &v9, 1, 0) == 1 )
  {
    v3 = (unsigned int *)&FIELD_U32(a1 + (77) * 80, 0x30);
    sub_6046395C((int)a1, FIELD_U32(a1 + (77) * 80, 0x30));
    v4 = FIELD_U32(a1 + (77) * 80, 0x30);
    v1 = 0;
    if ( v4 >= 4 )
      v4 = 0;
    v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 48);
    if ( v5 )
    {
      sub_607AA630(v5);
      v6 = 0;
      memset(v8, 0, sizeof(v8));
      if ( sub_60022A80(dword_60C7F52C, v8, *v3) == 1 )
        sub_603F7A98(dword_60C99DC0, (int)v8, 2, *v3);
      v1 = 1;
      sub_600221A0(dword_60C7F52C, 9, *v3, 1);
      if ( *v3 < 4 )
        v6 = *v3;
      *(_DWORD *)(dword_60C9A1E0 + 36 * v6 + 556) += 3;
      sub_603FFE10(dword_60C99DD4 + 852);
      sub_604635F4((int)a1);
      SE_SYS_NICE_S_ref();
      FIELD_U8(a1, 0x13) = 1;
    }
  }
  return v1;
}
