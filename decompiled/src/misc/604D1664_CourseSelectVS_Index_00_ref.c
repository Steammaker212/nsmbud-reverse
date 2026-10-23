/* CourseSelectVS_Index_00_ref
 * address: 0x604D1664   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectVS_Index_00_ref(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int result; // r0
  _DWORD v9[4]; // [sp+0h] [bp-10h] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "CourseSelectVS_Index_00";
  v2 = a1[943];
  v3 = a1[153922];
  if ( v3 < 0 )
  {
    FIELD_U8(v2, 64) &= ~1u;
  }
  else
  {
    sub_6047E0EC(v9, v2, 1, dword_60B02F74[v3]);
    *(_BYTE *)(a1[943] + 64) |= 1u;
  }
  v4 = a1[944];
  v5 = a1[153923];
  if ( v5 < 0 )
  {
    FIELD_U8(v4, 64) &= ~1u;
  }
  else
  {
    sub_6047E0EC(v9, v4, 1, dword_60B02F74[v5]);
    *(_BYTE *)(a1[944] + 64) |= 1u;
  }
  v6 = a1[945];
  v7 = a1[153924];
  if ( v7 < 0 )
  {
    result = FIELD_U8(v6, 64) & 0xFE;
    FIELD_U8(v6, 64) = result;
  }
  else
  {
    sub_6047E0EC(v9, v6, 1, dword_60B02F74[v7]);
    result = a1[945];
    FIELD_U8(result, 64) |= 1u;
  }
  return result;
}
