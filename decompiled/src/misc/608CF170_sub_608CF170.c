/* sub_608CF170
 * address: 0x608CF170   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608CF170(int a1, int a2, int a3)
{
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r7
  int v9; // r3
  unsigned int v10; // r5
  unsigned int v11; // r6
  unsigned int v12; // r7
  int v13; // r1

  nullsub_101();
  v6 = (a2 + 3) & 0xFFFFFFFC;
  if ( !a2 )
    v6 = 4;
  if ( a3 < 0 )
  {
    v13 = FIELD_U32(a1, 36);
    v11 = (v13 - v6) & a3;
    v10 = 0;
    if ( v11 >= FIELD_U32(a1, 32) )
    {
      sub_608CF550(a1, v11, v13 - v11);
      FIELD_U32(a1, 36) = v11;
      goto LABEL_8;
    }
  }
  else
  {
    v7 = FIELD_U32(a1, 32);
    v8 = -a3;
    v9 = a3 + v7;
    v10 = 0;
    v11 = (v9 - 1) & v8;
    v12 = v11 + v6;
    if ( v11 + v6 <= FIELD_U32(a1, 36) )
    {
      sub_608CF550(a1, v7, v12 - v7);
      FIELD_U32(a1, 32) = v12;
LABEL_8:
      v10 = v11;
    }
  }
  nullsub_102(a1);
  return v10;
}
