/* sub_60834F34
 * address: 0x60834F34   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60834F34(unsigned int result, int a2, _DWORD *a3)
{
  int v3; // r5
  int v5; // r2
  bool v6; // zf
  int v7; // r0
  int v8; // r1
  float v9[3]; // [sp+0h] [bp-28h] BYREF
  _DWORD v10[7]; // [sp+Ch] [bp-1Ch] BYREF

  if ( a3 )
  {
    if ( !dword_60CD0B40 )
      goto LABEL_9;
    v5 = FIELD_U32(dword_60CD0B40, 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > result )
      v5 += 4 * result;
    v6 = *(_DWORD *)v5 == 0;
    if ( *(_DWORD *)v5 )
    {
      v3 = *(_DWORD *)(*(_DWORD *)v5 + 72);
      v6 = v3 == 0;
    }
    if ( v6 )
    {
LABEL_9:
      *a3 = 0;
      a3[1] = 0;
      a3[2] = 0;
      return 0;
    }
    else
    {
      v7 = FIELD_U32(a2, 92);
      v8 = FIELD_U32(a2, 108);
      v10[0] = v7;
      v10[1] = v8;
      sub_6090A260(v3, v9);
      *(float *)&v10[2] = -v9[2];
      return sub_6090A384(v3, a3, v10);
    }
  }
  return result;
}
