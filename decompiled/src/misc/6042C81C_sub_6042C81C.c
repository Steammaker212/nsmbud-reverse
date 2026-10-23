/* sub_6042C81C
 * address: 0x6042C81C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042C81C(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v8; // r0
  unsigned int v9; // r2
  _DWORD *result; // r0
  _DWORD *v11; // r1
  float v12; // [sp+0h] [bp-18h] BYREF
  float v13; // [sp+4h] [bp-14h] BYREF

  v8 = *a1;
  v9 = FIELD_U32(v8, 608);
  result = *(_DWORD **)(v8 + 612);
  v11 = result;
  v12 = (float)a3;
  if ( v9 > 3 )
    v11 = result + 9;
  if ( *v11 != -1 )
  {
    sub_6091B890(v11, a2, 1, &v12);
    v9 = *(_DWORD *)(*a1 + 608);
    result = *(_DWORD **)(*a1 + 612);
  }
  if ( v9 > 4 )
    result += 12;
  v13 = (float)a4;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 1, &v13);
  return result;
}
