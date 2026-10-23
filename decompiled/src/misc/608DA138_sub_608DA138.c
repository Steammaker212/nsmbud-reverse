/* sub_608DA138
 * address: 0x608DA138   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA138(int *a1, const char *a2, _DWORD *a3)
{
  int v6; // r4
  size_t v7; // r7
  unsigned int v8; // r6
  char *v9; // r5

  v6 = *a1;
  v7 = strlen(a2);
  if ( v6 < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = 0;
    if ( v6 > v8 )
      v9 = (char *)a1 + a1[2 * v8 + 2];
    if ( !strncmp(a2, v9 + 12, v7) )
      break;
    if ( (int)++v8 >= v6 )
      return 0;
  }
  *a3 = *((_DWORD *)v9 + 1);
  return 1;
}
