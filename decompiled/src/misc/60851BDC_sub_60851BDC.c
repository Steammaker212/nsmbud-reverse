/* sub_60851BDC
 * address: 0x60851BDC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60851BDC(_DWORD *a1, _DWORD *a2)
{
  int *result; // r0
  _DWORD *v5; // r12
  _DWORD *v6; // lr
  _DWORD *v7; // r6
  int v8; // r5
  int v9; // r7
  _DWORD *v10; // r3
  char v11; // [sp+20h] [bp-120h] BYREF

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  if ( *a2 != 1312902214 )
    nn__util__SNPrintf(
      (nn__util *)&v11,
      (char *)0x100,
      (unsigned int)"Signature check failed ('%c%c%c%c' must be '%c%c%c%c').",
      (const char *)HIBYTE(*a2),
      (unsigned __int8)BYTE2(*a2),
      BYTE1(*a2),
      (unsigned __int8)*a2,
      78,
      65,
      76,
      70);
  *a1 = a2;
  result = (int *)*((unsigned __int16 *)a2 + 8);
  if ( *((_WORD *)a2 + 8) )
  {
    v5 = a1 + 1;
    v6 = a1 + 3;
    v7 = a1 + 2;
    v8 = 0;
    result = (_DWORD *)((char *)a2 + *((unsigned __int16 *)a2 + 3));
    while ( 1 )
    {
      v9 = *result;
      v10 = v7;
      if ( *result == 829710704 )
        goto LABEL_10;
      if ( v9 == 828989808 )
        break;
      if ( v9 == 828924272 )
      {
        v10 = v6;
LABEL_10:
        *v10 = result;
      }
      ++v8;
      result = (int *)((char *)result + result[1]);
      if ( v8 >= *((unsigned __int16 *)a2 + 8) )
        return result;
    }
    v10 = v5;
    goto LABEL_10;
  }
  return result;
}
