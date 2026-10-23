/* sub_604746E4
 * address: 0x604746E4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604746E4(int a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r6
  _DWORD *v6; // r0
  unsigned int v7; // r11
  int v8; // r9
  int v9; // r7
  int v10; // r5
  int v11; // r1
  int i; // r2
  int (**v14)(); // [sp+4h] [bp-3Ch] BYREF
  int v15; // [sp+8h] [bp-38h]
  _DWORD v16[13]; // [sp+Ch] [bp-34h] BYREF

  v4 = FIELD_U32(a1, 16);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = (_DWORD *)sub_60980818(v4, a2[1]);
  sub_60851BDC(v16, v6);
  v7 = sub_60851D10(v16);
  v8 = sub_60851D24(v16);
  if ( !v7 )
    return -1;
  v9 = 0;
  while ( 1 )
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = v8 + 36 * v9;
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v10 = a3[1];
    ((void (__fastcall *)(int (***)()))v14[3])(&v14);
    if ( v10 == v15 )
      break;
    v11 = a3[1];
    for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(v15 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v11 + i - 1) )
        return v9;
      if ( i > 0x80000 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v15 + i) )
        break;
      if ( !*(_BYTE *)(v11 + i) )
        return v9;
    }
    if ( ++v9 >= v7 )
      return -1;
  }
  return v9;
}
