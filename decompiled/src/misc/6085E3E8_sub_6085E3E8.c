/* sub_6085E3E8
 * address: 0x6085E3E8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6085E3E8(int a1, const char *a2, unsigned int a3)
{
  int v6; // r1
  signed int v7; // r5
  _BYTE *result; // r0
  bool v9; // zf
  unsigned int v10; // r2
  bool v11; // cc
  unsigned __int16 v12; // r1

  result = (_BYTE *)strlen(a2);
  v6 = FIELD_U32(a1, 188);
  v7 = (signed int)result;
  LOWORD(result) = 0;
  v9 = v6 == 0;
  if ( v6 )
  {
    v6 = FIELD_U32(a1, 172);
    v9 = v6 == 0;
  }
  if ( !v9 )
  {
    v10 = FIELD_U16(a1, 212);
    v11 = v10 != 0;
    if ( FIELD_U16(a1, 212) )
    {
      v10 = (unsigned __int16)(v10 - 1);
      v11 = v10 > a3;
    }
    if ( v11 )
    {
      if ( (int)(v10 - a3) < v7 )
        v7 = v10 - a3;
      qmemcpy((void *)(v6 + a3), a2, v7);
      result = *(_BYTE **)(a1 + 172);
      v12 = (unsigned __int8)*result;
      if ( *result )
        v12 = v7 + a3;
      FIELD_U16(a1, 214) = v12;
      result[v12] = 0;
      FIELD_U16(a1, 216) |= 4u;
      FIELD_U8(a1, 68) &= ~0x10u;
      LOWORD(result) = v7;
    }
  }
  return (_BYTE *)(unsigned __int16)result;
}
