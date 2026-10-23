/* sub_60386654
 * address: 0x60386654   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60386654(char *a1, int a2)
{
  int v4; // r4
  unsigned int v5; // r1
  int (__fastcall *v6)(char *); // r6
  int v7; // r3
  int v8; // r7
  bool v9; // r3
  char *v10; // r0
  int result; // r0

  v5 = *((_DWORD *)a1 + 6);
  v6 = (int (__fastcall *)(char *))*(&off_60BF3908 + 2 * a2);
  v4 = *((_DWORD *)a1 + 7);
  v7 = v4 & 1 | v5;
  v8 = (int)*(&off_60BF3908 + 2 * a2 + 1);
  v9 = v7 != 0;
  if ( (v5 || v4 != 0 && v9)
    && ((int (__fastcall *)(char *))v5 != v6 || v4 != v8 && (((unsigned __int8)v4 | (unsigned __int8)v8) & 1 | v5) != 0) )
  {
    *((_DWORD *)a1 + 8) = 2;
    v10 = &a1[v4 >> 1];
    if ( (v4 & 1) != 0 )
      v5 = *(_DWORD *)(*(_DWORD *)v10 + v5);
    ((void (__fastcall *)(char *))v5)(v10);
  }
  *((_DWORD *)a1 + 6) = v6;
  *((_DWORD *)a1 + 7) = v8;
  *((_DWORD *)a1 + 8) = 0;
  result = v6(&a1[v8 >> 1]);
  *((_DWORD *)a1 + 9) = a2;
  return result;
}
