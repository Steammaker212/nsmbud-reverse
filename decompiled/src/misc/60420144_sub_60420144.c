/* sub_60420144
 * address: 0x60420144   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420144(int a1)
{
  void *v2; // r5
  int v3; // r6
  _DWORD v5[13]; // [sp+4h] [bp-9Ch] BYREF
  char v6; // [sp+38h] [bp-68h]
  char v7; // [sp+39h] [bp-67h]
  char v8; // [sp+3Ah] [bp-66h]

  v2 = *(void **)(a1 + 196);
  v3 = FIELD_U32(a1, 200);
  sub_60418774((int)v5, a1 + 8);
  v6 = 1;
  if ( FIELD_U32(a1, 100) == 2 )
  {
    v7 = 0;
    v8 = 1;
  }
  FIELD_U32(a1, 4) = sub_6041AFBC(v5, v2, v3);
  FIELD_U8(a1, 188) = 0;
  return 0;
}
