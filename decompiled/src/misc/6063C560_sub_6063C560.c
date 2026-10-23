/* sub_6063C560
 * address: 0x6063C560   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063C560(int a1)
{
  int v2; // r5
  int v3; // r0
  int v5; // [sp+4h] [bp-54h] BYREF
  _BYTE v6[80]; // [sp+8h] [bp-50h] BYREF

  v2 = a1 + 6288;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
  memset(v6, 0, 64);
  v5 = 0;
  v3 = sub_606BAB1C(v6, &v5, v2);
  if ( v3 != FIELD_U16(a1, 6780) )
    FIELD_U32(a1, 6736) = FIELD_U32(a1, 6764);
  FIELD_U16(a1, 6780) = v3;
  FIELD_U32(a1, 156) = sub_608337E0(a1 + 6736);
  sub_6063C10C(a1);
  return sub_6063C3D4(a1, 0);
}
