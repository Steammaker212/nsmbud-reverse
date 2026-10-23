/* sub_6041AADC
 * address: 0x6041AADC   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6041AADC(int a1, int a2)
{
  _DWORD *v3; // r5
  int ExpressionCount; // r0
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r0
  unsigned int v11; // r7
  int v12; // r0
  unsigned int v13; // r6
  int v14; // r0
  unsigned int v15; // r6
  int v16; // r0
  int v17; // r4
  int v18; // r7
  _BYTE v20[36]; // [sp+18h] [bp-130h] BYREF
  int v21; // [sp+3Ch] [bp-10Ch]
  int v22; // [sp+40h] [bp-108h]
  int v23; // [sp+58h] [bp-F0h] BYREF

  v3 = (_DWORD *)dword_60C9BAF4;
  ExpressionCount = nn__mii__GetExpressionCount(*(nn__mii **)(a1 + 48), a2);
  if ( FIELD_U8(a1, 53) )
  {
    if ( (FIELD_U32(a1, 32) & 7) == 4 )
    {
      v5 = v3[201];
      v6 = v3[202];
    }
    else
    {
      v5 = v3[198];
      v6 = v3[199];
    }
    v8 = v5 + v6 + 4736 + 160 * ExpressionCount + sub_6083DA78(a1 + 4);
    v9 = v8 + sub_6083DA90(a1 + 4);
    v10 = sub_6083DAA8(dword_60C9BAF4 + 32);
    v11 = v9 + ((sub_609159A8(v10) + 0xFFFF) & 0xFFFF0000);
    v12 = sub_6083DAAC(dword_60C9BAF4 + 32);
    v13 = v11 + ((sub_609159B8(v12) + 0xFFFF) & 0xFFFF0000);
    v14 = sub_6083DAB0(FIELD_U32(dword_60CCFC8C, 24), a1 + 4);
    v15 = v13 + ((sub_609159A8(v14) + 0xFFFF) & 0xFFFF0000);
    v16 = sub_6083DAB4(FIELD_U32(dword_60CCFC8C, 24), a1 + 4);
    v7 = v15 + ((sub_609159B8(v16) + 0xFFFF) & 0xFFFF0000) + 394096;
  }
  else
  {
    v7 = 4736;
  }
  if ( FIELD_U8(a1, 54) )
  {
    agl_TextureData_ref(v20);
    sub_6091FDB0(v20, 1, 29, FIELD_U32(a1, 56), FIELD_U32(a1, 60), 1, 1, 2, 0, 1);
    v17 = v21;
    v18 = v22;
    sub_609175E4(&v23);
    v7 += ((v18 + 0xFFFF) & 0xFFFF0000) + ((v17 + 0xFFFF) & 0xFFFF0000) + 69660;
  }
  return v7;
}
