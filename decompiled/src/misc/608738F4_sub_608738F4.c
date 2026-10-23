/* sub_608738F4
 * address: 0x608738F4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608738F4(int a1, int a2)
{
  int *v4; // r0
  int v5; // r9
  char *v6; // r7
  char *v7; // r6
  size_t v8; // r5
  int v9; // r1
  unsigned int v10; // r10

  v4 = *(int **)a1;
  v5 = *v4;
  if ( !*(_BYTE *)(*v4 + 219) )
    goto LABEL_8;
  v6 = *(char **)(a1 + 4);
  v7 = *(char **)(a1 + 12);
  v8 = 4 * *(unsigned __int8 *)(*v4 + 219);
  v9 = 0;
  while ( *(_DWORD *)&v6[v9] == *(_DWORD *)&v7[v9] )
  {
    v9 += 4;
    if ( v8 == v9 )
      goto LABEL_8;
  }
  v10 = sub_608717BC(*v4, v4 + 4, FIELD_U32(a1, 4));
  if ( v10 != -1 )
  {
    memmove(v7, v6, v8);
    FIELD_U32(a1, 16) = FIELD_U32(v5, 120) + 56 * v10;
LABEL_8:
    sub_608713BC(FIELD_U32(a1, 16), a2);
    return 1;
  }
  sub_60871790(v5, *(void **)(a1 + 12));
  FIELD_U32(a1, 16) = 0;
  return 0;
}
