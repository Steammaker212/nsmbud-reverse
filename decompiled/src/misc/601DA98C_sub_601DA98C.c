/* sub_601DA98C
 * address: 0x601DA98C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DA98C(int a1)
{
  int v2; // r5
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r0
  int v8; // r6
  _DWORD v10[2]; // [sp+4h] [bp-1Ch] BYREF
  int v11; // [sp+Ch] [bp-14h]

  v2 = 0;
  v3 = __ROR4__(a1 - 64, 6);
  if ( v3 <= 7 && ((1 << v3) & 0x8B) != 0 )
  {
    v2 = 0;
    v10[0] = 2;
    v10[1] = 0;
    v11 = -1;
    v4 = sub_601A443C(dword_60C89E18, 2, 0);
    v5 = v4;
    if ( v4 )
    {
      if ( FIELD_S32(v4, 32) >= 1 )
      {
        v6 = 0;
        while ( !sub_60183054(v5, v6, a1) )
        {
          if ( (signed int)++v6 >= FIELD_U32(v5, 32) )
            goto LABEL_8;
        }
        goto LABEL_14;
      }
LABEL_8:
      v2 = 0;
      v7 = sub_601A443C(dword_60C89E18, 2, 0);
      v8 = v7;
      if ( v7 && FIELD_S32(v7, 32) >= 1 )
      {
        v6 = 0;
        while ( !sub_60183054(v8, v6, a1) )
        {
          if ( (signed int)++v6 >= FIELD_U32(v8, 32) )
            return 0;
        }
LABEL_14:
        v11 = v6;
        return sub_601DFFE4(v10);
      }
    }
  }
  return v2;
}
