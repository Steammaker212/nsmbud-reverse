/* sub_60431F1C
 * address: 0x60431F1C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60431F1C(_DWORD *a1)
{
  int v1; // r1
  int v2; // r0
  int v3; // r1
  int *v4; // r4
  int *v5; // r8
  int v6; // r9
  int v7; // r10
  unsigned int i; // r11
  int v9; // r0
  int v10; // r5
  int v13; // [sp+8h] [bp-30h]
  int v14; // [sp+Ch] [bp-2Ch]
  int v15; // [sp+10h] [bp-28h]

  *a1 = &off_60BFA734;
  a1[4] = off_60BFA810;
  v14 = a1[60];
  if ( v14 )
  {
    v1 = 0;
    v13 = a1[61];
    do
    {
      v15 = v1;
      v2 = v13 + 120 * v1;
      v4 = (int *)(v2 + 112);
      v3 = FIELD_U32(v2, 112);
      if ( v3 >= 1 )
      {
        v5 = (int *)(v2 + 116);
        v6 = v3 - 1;
        v7 = 0;
        for ( i = 0; ; ++i )
        {
          v9 = *v5;
          if ( v3 > i )
            v9 += v7;
          v10 = FIELD_U32(v9, 64);
          sub_60835494();
          if ( v10 )
            sub_60836614(v10, FIELD_U32(dword_60CCFC8C, 24));
          if ( v6 == i )
            break;
          v3 = *v4;
          v7 += 72;
        }
      }
      v1 = v15 + 1;
    }
    while ( v15 + 1 != v14 );
  }
  nullsub_68(a1 + 114);
  return sub_60430044((int)a1);
}
