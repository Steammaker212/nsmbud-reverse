/* STRM_BGM_ref_3_helper
 * address: 0x608090B8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_3_helper(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r5
  _BYTE v8[20]; // [sp+4h] [bp-14h] BYREF

  v5 = a1 + 68;
  v4 = FIELD_U32(a1, 68);
  if ( v4 )
    sub_608AF208(v4, 0);
  FIELD_U8(a1, 46) = 1;
  v6 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 24))(a1, v5, a2);
  if ( v6 == 1 )
  {
    sub_608A8604(v8, v5);
    sub_608B7364(7, 100);
    sub_608A86F0(v8);
  }
  return v6;
}
