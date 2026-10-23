/* sub_60203F40
 * address: 0x60203F40   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60203F40(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60C8C5E4;
  if ( !dword_60C8C5E4 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x34u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60BD86D4;
    dword_60C8C5E0 = (int)result;
    *((_WORD *)result + 8) = 0;
    *((_BYTE *)result + 18) = 0;
    *((_WORD *)result + 10) = 0;
    *((_BYTE *)result + 22) = 0;
    *((_WORD *)result + 12) = 0;
    *((_BYTE *)result + 26) = 0;
    *((_WORD *)result + 14) = 0;
    *((_BYTE *)result + 30) = 0;
    *((_WORD *)result + 16) = 0;
    *((_BYTE *)result + 34) = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    dword_60C8C5E4 = (int)result;
  }
  return result;
}
