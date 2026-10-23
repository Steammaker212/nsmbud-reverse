/* sub_6085E320
 * address: 0x6085E320   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_6085E320(_WORD *result, const unsigned __int16 *a2, unsigned int a3)
{
  _WORD *v4; // r4
  signed int v5; // r6
  int v6; // r2
  bool v7; // zf
  unsigned int v8; // r3
  bool v9; // cc
  unsigned __int16 v10; // r1

  v4 = result;
  LOWORD(result) = 0;
  v5 = 0;
  if ( *a2 )
    v5 = wcslen(a2 + 1) + 1;
  v6 = *((_DWORD *)v4 + 47);
  v7 = v6 == 0;
  if ( v6 )
  {
    v6 = *((_DWORD *)v4 + 43);
    v7 = v6 == 0;
  }
  if ( !v7 )
  {
    v8 = (unsigned __int16)v4[106];
    v9 = v8 != 0;
    if ( v4[106] )
    {
      v8 = (unsigned __int16)(v8 - 1);
      v9 = v8 > a3;
    }
    if ( v9 )
    {
      if ( (int)(v8 - a3) < v5 )
        v5 = v8 - a3;
      qmemcpy((void *)(v6 + 2 * a3), a2, 2 * v5);
      result = *((_WORD **)v4 + 43);
      v10 = *result;
      if ( *result )
        v10 = v5 + a3;
      v4[107] = v10;
      result[v10] = 0;
      v4[108] |= 4u;
      *((_BYTE *)v4 + 68) &= ~0x10u;
      LOWORD(result) = v5;
    }
  }
  return (_WORD *)(unsigned __int16)result;
}
