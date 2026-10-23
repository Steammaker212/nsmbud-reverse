/* sub_6085E53C
 * address: 0x6085E53C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6085E53C(_BYTE *result, const void *a2, unsigned int a3, signed int a4)
{
  _BYTE *v4; // r5
  int v7; // r2
  bool v8; // zf
  unsigned int v9; // r3
  bool v10; // cc
  unsigned __int16 v11; // r1

  v4 = result;
  LOWORD(result) = 0;
  v7 = *((_DWORD *)v4 + 47);
  v8 = v7 == 0;
  if ( v7 )
  {
    v7 = *((_DWORD *)v4 + 43);
    v8 = v7 == 0;
  }
  if ( !v8 )
  {
    v9 = *((unsigned __int16 *)v4 + 106);
    v10 = v9 != 0;
    if ( *((_WORD *)v4 + 106) )
    {
      v9 = (unsigned __int16)(v9 - 1);
      v10 = v9 > a3;
    }
    if ( v10 )
    {
      if ( (int)(v9 - a3) < a4 )
        a4 = v9 - a3;
      qmemcpy((void *)(v7 + a3), a2, a4);
      result = *((_BYTE **)v4 + 43);
      v11 = (unsigned __int8)*result;
      if ( *result )
        v11 = a4 + a3;
      *((_WORD *)v4 + 107) = v11;
      result[v11] = 0;
      *((_WORD *)v4 + 108) |= 4u;
      v4[68] &= ~0x10u;
      LOWORD(result) = a4;
    }
  }
  return (_BYTE *)(unsigned __int16)result;
}
