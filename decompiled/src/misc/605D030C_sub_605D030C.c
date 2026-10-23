/* sub_605D030C
 * address: 0x605D030C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D030C(int a1)
{
  float v2; // [sp+0h] [bp-18h] BYREF
  float v3; // [sp+4h] [bp-14h]
  char v4; // [sp+8h] [bp-10h]
  char v5; // [sp+9h] [bp-Fh]
  __int16 v6; // [sp+Ah] [bp-Eh]
  __int16 v7; // [sp+Ch] [bp-Ch]

  if ( FIELD_U8(a1, 6841) || FIELD_U32(a1, 6824) != 2 )
  {
    v2 = FIELD_F32(a1, 108) + -8.0;
    v3 = FIELD_F32(a1, 112) + 16.0;
    v4 = FIELD_U8(a1, 6849);
    v5 = FIELD_U8(a1, 6850);
    v6 = 0;
    return SE_OBJ_BLOCK_BREAK_ref_3(dword_60CB061C, (int)&v2, 0, FIELD_U8(a1, 6879));
  }
  else
  {
    v2 = FIELD_F32(a1, 108) + -8.0;
    v3 = FIELD_F32(a1, 112) + 16.0;
    v4 = FIELD_U8(a1, 6849);
    v5 = 1;
    LOBYTE(v6) = 1;
    HIBYTE(v6) = FIELD_U8(a1, 6850);
    v7 = 0;
    return SE_OBJ_BLOCK_BREAK_ref_2(dword_60CB061C, (int)&v2, FIELD_U8(a1, 6879));
  }
}
