/* sub_603B2148
 * address: 0x603B2148   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B2148(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // t1
  __int64 v5; // r2
  int v6; // r1
  int result; // r0

  if ( !a1[1616] )
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C97D98);
  v4 = a1[1619];
  v3 = a1 + 1619;
  v2 = v4;
  v5 = *(_QWORD *)(v3 - 7);
  v6 = dword_60B00B74[HIDWORD(v5)];
  if ( !(_DWORD)v5 )
    v6 = -v6;
  result = v2 + v6;
  *v3 = result;
  return result;
}
