/* sub_601E0E04
 * address: 0x601E0E04   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0E04(int a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r9
  int v6; // r0
  int v7; // r7
  int v8; // r10
  unsigned int v9; // r6
  int v10; // r4
  int v11; // r0
  int v12; // r7
  int v13; // r4

  v4 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, FIELD_U32(a1, 4));
  v5 = 0;
  if ( !sub_6018301C(v4, FIELD_U32(a1, 8), 2) )
  {
    v5 = 1;
    if ( !sub_6018301C(v4, FIELD_U32(a1, 8), 4) )
    {
      v5 = 2;
      if ( !sub_6018301C(v4, FIELD_U32(a1, 8), 8) )
      {
        v5 = 3;
        if ( !sub_6018301C(v4, FIELD_U32(a1, 8), 16) )
        {
          v5 = 4;
          if ( !sub_6018301C(v4, FIELD_U32(a1, 8), 32) )
            v5 = -1;
        }
      }
    }
  }
  if ( FIELD_U32(dword_60CC6D78, 416) )
  {
    v6 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, 0);
    v7 = v6;
    if ( !v6 )
      return 0;
    if ( FIELD_S32(v6, 32) >= 1 )
    {
      v8 = 0;
      v9 = 0;
      v10 = dword_60AFD13C[v5];
      while ( !sub_6018301C(v7, v9, v10) )
      {
        if ( (signed int)++v9 >= FIELD_U32(v7, 32) )
          goto LABEL_13;
      }
      goto LABEL_21;
    }
  }
LABEL_13:
  if ( FIELD_U32(dword_60CC6D78, 416) == 1 )
    return 0;
  v11 = sub_601A443C(dword_60C89E18, *(_DWORD *)a1, 1);
  v12 = v11;
  if ( !v11 || FIELD_S32(v11, 32) < 1 )
    return 0;
  v9 = 0;
  v13 = dword_60AFD13C[v5];
  while ( !sub_6018301C(v12, v9, v13) )
  {
    if ( (signed int)++v9 >= FIELD_U32(v12, 32) )
      return 0;
  }
  v8 = 1;
LABEL_21:
  *a2 = *(_DWORD *)a1;
  a2[1] = v8;
  a2[2] = v9;
  return 1;
}
