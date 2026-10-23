/* calc_instance_ref
 * address: 0x60447E64   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall calc_instance_ref(int a1, int a2, int a3, int a4)
{
  int v6; // r4
  unsigned int result; // r0
  int v8; // r2
  bool v9; // zf
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int *v14; // r4
  int v15; // t1
  int v16; // r7
  int v17; // r6
  int v18; // r5
  int v19; // r4
  _BYTE v20[428]; // [sp+8h] [bp-420h] BYREF
  _DWORD v21[3]; // [sp+1B4h] [bp-274h] BYREF
  _BYTE v22[24]; // [sp+1C0h] [bp-268h] BYREF
  int v23; // [sp+1D8h] [bp-250h]
  const char *v24; // [sp+404h] [bp-24h]

  v6 = a1 + 28 * (a3 + 4 * a2);
  result = 0;
  v8 = FIELD_U32(v6, 16);
  v9 = v8 == 0;
  if ( v8 )
    v9 = a2 == 16;
  if ( !v9 && (FIELD_U8(a1, 2480) & 1) == 0 )
  {
    v10 = dword_60C9CCB8;
    untitled_ref(v22);
    v24 = "calc instance";
    sub_60440C2C(v21, v10);
    v11 = sub_60440CA4();
    sub_60918E08(v22, v21, v11);
    v12 = sub_60913508(v20);
    sub_60913564(v12, v22);
    if ( sub_60918EB8(v22) == 1 )
    {
      v15 = FIELD_U32(v6, 24);
      v14 = (int *)(v6 + 24);
      v13 = v15;
      if ( FIELD_S32(v15, 260) >= 1 )
      {
        v16 = 0;
        v17 = 4;
        v18 = FIELD_U32(dword_60CD0A14, 28);
        do
        {
          sub_60920FDC(v18, v20, v13 + v17, 0, 1);
          v13 = *v14;
          ++v16;
          v17 += 16;
        }
        while ( v16 < *(_DWORD *)(*v14 + 260) );
      }
      sub_60918FC4(v22);
      if ( a4 )
        sub_60919544(v22);
    }
    sub_60440C9C(dword_60C9CCB8);
    v19 = v23;
    sub_60913598(v20);
    sub_60918DB8(v22);
    return (v19 + 3) & 0xFFFFFFFC;
  }
  return result;
}
