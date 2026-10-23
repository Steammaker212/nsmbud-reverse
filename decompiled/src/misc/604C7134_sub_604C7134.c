/* sub_604C7134
 * address: 0x604C7134   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C7134(int a1)
{
  int v2; // r6
  unsigned int v3; // r7
  int v4; // r1
  int v5; // r5
  int v6; // r8
  int v7; // r9
  int v8; // r0
  int result; // r0
  int *v10; // r0

  v2 = FIELD_U32(dword_60C89E18, 20);
  v3 = v2 - 24;
  v4 = v2;
  v5 = dword_60CC6D78;
  v6 = FIELD_U32(dword_60CC6D78, 412);
  v7 = FIELD_U32(dword_60CC6D78, 424);
  if ( FIELD_U8(dword_60CC6D78, 512) )
    FIELD_U32(dword_60CC6D78, 412) = 150;
  if ( v3 <= 0x1D )
  {
    v4 = v2;
    if ( ((1 << v3) & 0x3FC0007F) != 0 )
    {
      v8 = sub_601DAB64();
      v4 = 26;
      if ( v8 == 0x2000 )
        v4 = 25;
      if ( v8 == 4096 )
        v4 = 24;
    }
  }
  FIELD_U32(v5, 424) = v4;
  sub_6047E0EC(&dword_60CA2B24, FIELD_U32(a1, 13836), 0);
  FIELD_U32(v5, 424) = v2;
  if ( v2 < 0 || (unsigned int)(v2 - 34) <= 0x17 && ((1 << (v2 - 34)) & 0x800009) != 0 || v3 <= 6 )
  {
    result = FIELD_U32(a1, 13840);
    FIELD_U8(result, 64) &= ~1u;
  }
  else
  {
    *(_BYTE *)(FIELD_U32(a1, 13840) + 64) |= 1u;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v10 = &dword_60CA2B34;
    else
      v10 = &dword_60CA2B2C;
    result = sub_6047E0EC(v10, FIELD_U32(a1, 13840), 0);
  }
  FIELD_U32(v5, 412) = v6;
  FIELD_U32(v5, 424) = v7;
  return result;
}
