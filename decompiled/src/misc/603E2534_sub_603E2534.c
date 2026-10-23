/* sub_603E2534
 * address: 0x603E2534   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603E2534(float *a1)
{
  _BYTE *result; // r0
  int v3; // r1

  sub_6070C124();
  a1[37] = a1[1579] + a1[37];
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 640))(a1);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 636))(a1);
  result = a1 + 2059;
  v3 = *((unsigned __int8 *)a1 + 8236);
  if ( v3 == 2 )
  {
    result = a1 + 1577;
    if ( a1[1577] >= (float)(a1[1598] * 0.9) )
      return (_BYTE *)(*(int (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C994D0);
  }
  else if ( v3 == 1 && a1[1577] >= (float)(a1[1598] * 0.75) )
  {
    a1[1581] = 0.002;
    *result = 2;
  }
  return result;
}
