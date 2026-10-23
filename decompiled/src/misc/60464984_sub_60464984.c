/* sub_60464984
 * address: 0x60464984   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60464984(int a1)
{
  int v2; // s0
  int *v3; // r1
  int result; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  char v6; // [sp+4h] [bp-14h] BYREF

  if ( FIELD_U8(a1, 86) == 1 )
  {
    v2 = -987594752;
  }
  else
  {
    v3 = dword_60464AD0;
    if ( FIELD_U32(a1, 6168) == 5 )
      v3 = &dword_60464AD0[1];
    v2 = *v3;
  }
  FIELD_U32(a1, 116) = v2;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1082130432;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 6204) = 8;
  FIELD_U8(a1, 6197) = 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
  FIELD_U32(a1, 6228) = 0;
  FIELD_U32(a1, 6224) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
  result = sub_60462530(a1);
  if ( !result )
  {
    ((void (__fastcall *)(int *, char *, int, _DWORD))checkLiquidCollisions)(
      &v5,
      &v6,
      a1 + 108,
      FIELD_U8(a1, 86));
    result = v5;
    if ( v5 == 1 )
    {
      FIELD_F32(a1, 6048) = -0.0625 * 0.5;
      FIELD_F32(a1, 6040) = FIELD_F32(a1, 124) * 0.4;
      FIELD_F32(a1, 6044) = -1.5 * 0.5;
      FIELD_U8(a1, 6804) = 1;
      return 6804;
    }
  }
  return result;
}
