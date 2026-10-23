/* sub_60998CD0
 * address: 0x60998CD0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998CD0(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r0
  int v8; // r7
  int v9; // r7
  int v10; // r0
  unsigned __int16 *v11; // r2

  FIELD_U8(a1, 2) = 0;
  FIELD_U8(a1, 1) = 0;
  FIELD_U32(a1, 168) = FIELD_U32(a3, 40);
  v6 = FIELD_U32(a1, 176);
  v7 = sub_6083C504(*(unsigned __int8 **)(a3 + 8));
  sub_6083C52C((_DWORD *)(a1 + 40), v6, v7);
  v8 = FIELD_U32(a1, 176);
  v9 = v8 + sub_6083C504(*(unsigned __int8 **)(a3 + 8));
  v10 = sub_6083C978(*(unsigned __int16 **)(a3 + 32));
  sub_6083C9F4(a1 + 8, v9, v10);
  sub_6083C318(a1 + 80, a2, *(unsigned __int8 **)a3);
  sub_6083C540((int *)(a1 + 40), a2, *(unsigned __int8 **)(a3 + 8));
  sub_6083C7C0(a1 + 128, a2, *(unsigned __int8 **)(a3 + 16));
  sub_6083CA08(a1 + 8, a2, *(unsigned __int16 **)(a3 + 32), FIELD_U32(a3, 40));
  v11 = *(unsigned __int16 **)(a3 + 48);
  if ( v11 )
  {
    sub_6083CD78(a1 + 156, a2, v11);
    FIELD_U8(a1, 2) |= 1u;
  }
  *(_BYTE *)a1 = 1;
  return 1;
}
