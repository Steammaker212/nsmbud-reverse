/* sub_604B74E8
 * address: 0x604B74E8   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B74E8(int a1, unsigned int a2)
{
  unsigned int v3; // r8
  int v4; // r0
  bool v5; // cf
  bool v6; // zf
  int v7; // r1
  int v8; // r6
  int v9; // r0
  int v10; // r2
  int v11; // r12
  int i; // r1
  unsigned int v13; // r0
  int result; // r0
  int v15; // [sp+4h] [bp-1Ch] BYREF

  v3 = a2;
  v4 = FIELD_U32(a1, 2128);
  v5 = 1;
  v6 = v4 == 0;
  if ( v4 )
  {
    a2 = FIELD_U32(v4, 3724);
    v5 = a2 >= 0x2C;
    v6 = a2 == 44;
  }
  if ( v6 )
    goto LABEL_19;
  if ( v5 )
    a2 = 0;
  v7 = 9 * a2;
  if ( !&dword_60CA1E08[v7] || (unsigned int)(dword_60CA1E08[v7 + 8] - 1) > 1 )
    goto LABEL_19;
  v8 = dword_60CA24BC;
  v9 = sub_6047482C(v4 + 4, 2u);
  if ( v9 )
  {
    v10 = FIELD_U32(v9, 56);
    if ( v8 != v10 )
    {
      v11 = 1;
      for ( i = 1; *(unsigned __int8 *)(v8 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v8 + i - 1) )
          goto LABEL_17;
        if ( i > 0x80000 || *(unsigned __int8 *)(v8 + i) != *(unsigned __int8 *)(v10 + i) )
          break;
        if ( !*(_BYTE *)(v8 + i) )
          goto LABEL_17;
      }
      goto LABEL_21;
    }
LABEL_17:
    v13 = (unsigned int)FIELD_F32(v9, 16);
    if ( v13 < 4 )
    {
      v11 = 3 * v13 + 1;
      goto LABEL_21;
    }
LABEL_19:
    v15 = 256;
    return 256;
  }
  v11 = 1;
LABEL_21:
  v15 = *(_DWORD *)(a1 + 4 * v11 + 2080);
  result = v15;
  if ( v15 != 256 )
    return sub_605029FC(a1, &v15, v3);
  return result;
}
