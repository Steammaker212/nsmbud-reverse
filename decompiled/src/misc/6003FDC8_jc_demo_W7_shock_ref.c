/* jc_demo_W7_shock_ref
 * address: 0x6003FDC8   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W7_shock_ref(int a1)
{
  int v2; // r0
  int *v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  int (**v14)(); // [sp+0h] [bp-28h] BYREF
  const char *v15; // [sp+4h] [bp-24h]

  v3 = (int *)(a1 + 11492);
  v2 = FIELD_U32(a1, 11492);
  switch ( v2 )
  {
    case 3:
      if ( !FIELD_U16(a1, 6278) )
      {
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
        v14 = &sead__SafeStringBase__vtable;
        v15 = "jc_demo_W7_shock";
        sub_60047464(a1, 0, &v14, 0, 0.0, 1.0);
        sub_60037BB0(FIELD_U32(a1, 11456), 21, 0, 0.0, 1.0);
        FIELD_U32(a1, 11800) = 954437120;
        FIELD_U32(a1, 11804) = 59652320;
        v8 = 4;
        goto LABEL_14;
      }
      break;
    case 2:
      v9 = *(_DWORD **)(a1 + 11776);
      v10 = (_DWORD *)v9[3];
      v11 = v9[2];
      v12 = v9[17];
      if ( v11 > v12 )
        v10 += v12;
      if ( sub_60418548(*v10 + 4) )
      {
        *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 11456) + 7916) + 6351) = 1;
        FIELD_U16(a1, 6278) = 35;
        v8 = 3;
        goto LABEL_14;
      }
      break;
    case 1:
      v4 = *(_DWORD **)(a1 + 11776);
      v5 = v4[3];
      v6 = v4[2];
      v7 = v4[17];
      if ( v6 > v7 )
        v5 += 4 * v7;
      if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x10) != 0 )
      {
        v14 = &sead__SafeStringBase__vtable;
        v15 = "jc_demo_W7_punch";
        sub_60047464(a1, 0, &v14, 0, 0.0, 1.0);
        (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 1);
        v8 = 2;
LABEL_14:
        *v3 = v8;
      }
      break;
  }
  return ((int (__fastcall *)(int))loc_60040A94)(a1);
}
