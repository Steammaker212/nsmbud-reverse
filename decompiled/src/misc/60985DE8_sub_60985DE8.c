/* sub_60985DE8
 * address: 0x60985DE8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60985DE8(int a1)
{
  float v2; // s16
  _BYTE v4[52]; // [sp+4h] [bp-6Ch] BYREF
  int v5; // [sp+38h] [bp-38h]

  v2 = 0.0;
  if ( FIELD_U16(a1, 214) && sub_6085E5DC(a1) )
  {
    sub_6084E138((int)v4);
    (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)a1 + 140))(a1, v4);
    v5 = 2139095039;
    v2 = ((float (__fastcall *)(_BYTE *, _DWORD, _DWORD))loc_6084E1C8)(
           v4,
           FIELD_U32(a1, 172),
           FIELD_U16(a1, 214));
    j_nullsub_88_0();
  }
  return v2;
}
