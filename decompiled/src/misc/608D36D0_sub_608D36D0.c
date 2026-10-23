/* sub_608D36D0
 * address: 0x608D36D0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D36D0(int *a1, int a2, int a3)
{
  int v6; // r7
  int *v7; // r0
  int v8; // r1
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r4
  _BYTE v14[20]; // [sp+4h] [bp-C4h] BYREF
  _DWORD v15[2]; // [sp+18h] [bp-B0h] BYREF
  int v16; // [sp+20h] [bp-A8h]
  int v17; // [sp+24h] [bp-A4h]
  int v18; // [sp+A0h] [bp-28h] BYREF

  v6 = 0;
  v7 = sub_608B4894(&v18, a1[376], 0);
  v8 = sub_608B4A8C((int)v7, *(_DWORD *)a3);
  if ( v8 )
  {
    v6 = 0;
    v9 = (_DWORD *)sub_608B4B98((int)v14, v8, 0);
    if ( sub_608B4C78(v9, (int)v15) == 1 )
    {
      v10 = v16;
      v6 = 0;
      if ( v16 >= 2 )
        v10 = 2;
      v11 = sub_608C7D98(v10, 128, 0, (int)a1);
      v12 = v11;
      if ( v11 )
      {
        *(_DWORD *)(FIELD_U32(v11, 364) + 552) = a1[377];
        sub_608CA470(*(_DWORD **)(v11 + 364), a1[8]);
        sub_608C7828(
          v12,
          v15,
          FIELD_U32(a3, 8),
          (__int64)(v17 * (unsigned __int64)FIELD_U32(a3, 12)) / 1000,
          0);
        v6 = 1;
        FIELD_U32(a2, 4) = v12;
        *(_BYTE *)a2 = 1;
      }
    }
  }
  return v6;
}
