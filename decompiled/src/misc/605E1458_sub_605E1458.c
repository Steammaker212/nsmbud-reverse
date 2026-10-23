/* sub_605E1458
 * address: 0x605E1458   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1458(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  float v6; // s2
  _DWORD v7[7]; // [sp+Ch] [bp-1Ch] BYREF

  v4 = FIELD_U32(a1, 6264);
  result = a1 + 6264;
  v3 = v4;
  if ( (v4 & 0xE0000) == 0x60000 )
  {
    *(_DWORD *)result = v3 & 0xFFF3FFFF | 0x80000;
    if ( FIELD_U32(a1, 6256) != 1 )
    {
      sub_60021C70(dword_60C7F52C, FIELD_U32(dword_60C99DD4, 764) != 2);
      v5 = FIELD_U32(a1, 116);
      v6 = FIELD_F32(a1, 112);
      v7[0] = FIELD_U32(a1, 108);
      *(float *)&v7[1] = v6 + 64.0;
      v7[2] = v5;
      sub_60407E74(dword_60C9A1E8, (int)v7, 0x15u, -1, 0, 0);
    }
    sub_603FFDBC(dword_60C99DD4 + 852, 1);
    sub_605EAB48(a1 + 6064, 0.0);
    FIELD_U32(a1, 8012) = 7;
    return 8012;
  }
  return result;
}
