/* sub_603CC15C
 * address: 0x603CC15C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CC15C(int a1, int a2)
{
  int v4; // r6
  int v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r6
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  int v13; // r0
  int v14; // r5
  int v15; // r6

  v4 = a1 + 648;
  if ( !a2 )
    v4 = a1 + 6368;
  if ( sub_60001B14((StageActor *)a1, v4) == 1 )
  {
    if ( FIELD_U32(a1, 6300) == 1 )
    {
      sub_600020C4(a1, v4);
      return 0;
    }
    v14 = sub_6014B69C(v4);
    v15 = sub_6014B6F8(v4);
    if ( !v14 || (v6 = 0, !sub_600020BC()) )
    {
      if ( v15 )
      {
        v13 = sub_600020BC();
        v6 = 0;
LABEL_22:
        if ( !v13 )
          return 1;
        return v6;
      }
      return 1;
    }
  }
  else
  {
    v6 = 0;
    if ( a2 != 1 || (FIELD_U32(v4, 2224) & 0x10400) != 0x400 || (FIELD_U8(a1, 14192) & 1) == 0 )
      return v6;
    v7 = sub_6014B69C(a1 + 11968);
    v8 = sub_6014B6F8(v4);
    v9 = v8;
    v10 = v7 == 0;
    if ( v7 )
      v10 = v8 == 0;
    if ( v10 )
      return 1;
    v11 = FIELD_U32(a1, 17276) & 0xFF00;
    v12 = v11 == 0xB00;
    if ( v11 == 0xB00 )
      v12 = FIELD_U32(v9, 300) == 17;
    if ( !v12 )
      return 1;
    if ( !sub_600020BC() )
    {
      v13 = sub_600020BC();
      goto LABEL_22;
    }
  }
  return v6;
}
