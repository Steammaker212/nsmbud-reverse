/* LetterAnimOn_ref
 * address: 0x60985240   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LetterAnimOn_ref(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  __int16 v7; // r1
  int v8; // r3
  int v9; // r0

  sub_6085C340(a1, 0, FIELD_U32(dword_60CCF464, 36), a5, a2, a3, a4);
  *(_DWORD *)a1 = off_60C5FC24;
  FIELD_U32(a1, 268) = 0;
  v7 = FIELD_U16(a1, 216);
  FIELD_U16(a1, 216) = v7 & 0xFFBF;
  v8 = FIELD_U32(a1, 208);
  v9 = *(_DWORD *)(FIELD_U32(a4, 20) + 8);
  FIELD_U16(a1, 216) = v7 & 0xFFBB | (4 * ((v8 != v9) | ((unsigned __int16)(v7 & 0xFFBF) >> 2) & 1));
  if ( v8 != v9 )
    FIELD_U32(a1, 208) = v9;
  if ( sub_6085982C(a1, "LetterAnimOn") )
    a5[3] += 10;
  return a1;
}
