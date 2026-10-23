/* LetterAnimOn_ref_98530C
 * address: 0x6098530C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall LetterAnimOn_ref_98530C(_DWORD *a1, int a2, int a3)
{
  int v5; // r7
  const char **v6; // r0
  float v7; // s16
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r7
  int v13; // t1
  _DWORD *v14; // r6
  int v15; // t1

  sub_6085CD2C((int)a1, a2, FIELD_U32(dword_60CCF464, 36));
  *a1 = off_60C5FC24;
  a1[67] = 0;
  v5 = FIELD_U32(a3, 72);
  if ( v5 )
  {
    v6 = sub_6085982C((int)a1, "LetterAnimOn");
    if ( v6 )
    {
      v7 = *(float *)&v6[1][(_DWORD)v6];
      v8 = sub_60855BC8(88);
      v9 = v8;
      if ( v8 )
        v8 = sub_60993EB0(v8);
      else
        v9 = 0;
      v10 = sub_609908C0(v8);
      sub_60993F54(v9, v10, a1, a3);
      sub_60994728(v9, v7);
      v13 = FIELD_U32(v5, 32);
      v12 = v5 + 32;
      v11 = v13;
      v15 = FIELD_U32(v9, 4);
      v14 = (_DWORD *)(v9 + 4);
      *v14 = v11;
      FIELD_U32(v15, 4) = v12;
      *(_DWORD *)(*(_DWORD *)v12 + 4) = v14;
      *(_DWORD *)v12 = v15;
    }
  }
  return a1;
}
