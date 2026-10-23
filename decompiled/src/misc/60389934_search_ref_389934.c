/* search_ref_389934
 * address: 0x60389934   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall search_ref_389934(int a1)
{
  int v2; // r0
  float v3; // s18
  float v4; // s20
  float v5; // s0
  float v6; // s0
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "search";
  sub_6040F4B8(v2, v8, 1);
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 104) = 1040187392;
  v3 = FIELD_F32(a1, 8160);
  v4 = FIELD_F32(a1, 8156);
  v5 = sqrtf((float)(v3 * v3) + (float)(v4 * v4));
  if ( v5 > 0.0 )
  {
    v6 = 1.0 / v5;
    v3 = v3 * v6;
    v4 = v4 * v6;
  }
  FIELD_U32(a1, 8180) = 1056964608;
  FIELD_U32(a1, 0x2000) = 1075838976;
  FIELD_U32(a1, 128) = 0;
  FIELD_F32(a1, 120) = v4 * 0.5;
  FIELD_F32(a1, 124) = v3 * 0.5;
  FIELD_U32(a1, 8216) = 1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
}
