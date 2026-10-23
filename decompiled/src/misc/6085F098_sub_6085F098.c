/* sub_6085F098
 * address: 0x6085F098   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F098(int a1, int *a2, int a3)
{
  _BYTE *v5; // r0
  bool v6; // zf
  _DWORD v8[22]; // [sp+8h] [bp-58h] BYREF

  FIELD_U32(a1, 16) = a3;
  v5 = *(_BYTE **)(a3 + 128);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *v5 == 0;
  if ( v6 )
  {
    sub_6083D24C(
      (int)v5,
      a2,
      (unsigned __int8 *)(a3 + 16),
      *(_DWORD **)(FIELD_U32(a3, 104) + 40),
      *(_DWORD *)(FIELD_U32(a3, 104) + 48) - (*(_DWORD *)(FIELD_U32(a3, 104) + 16) + 16) + **(_DWORD **)(a3 + 112),
      FIELD_U32(a3, 80));
    memset(v8, 0, 64);
    sub_60998F30(v8);
    LOBYTE(v8[0]) = FIELD_U8(a3, 92);
    v8[2] = FIELD_U32(a3, 88);
    v8[1] = FIELD_U32(a3, 28);
    v8[12] = FIELD_U32(a3, 128);
    v8[9] = FIELD_U32(a3, 48);
    HIWORD(v8[4]) = FIELD_U16(a3, 22);
    sub_6083D338(FIELD_U32(a3, 136), (int)a2, (unsigned __int8 *)v8);
  }
  return 1;
}
