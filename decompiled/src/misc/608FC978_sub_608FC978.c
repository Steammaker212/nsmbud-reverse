/* sub_608FC978
 * address: 0x608FC978   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FC978(int *a1, _DWORD *a2)
{
  unsigned int v4; // r0
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int i; // r1

  v4 = 0;
  while ( 1 )
  {
    v5 = v4;
    v6 = sub_6081D400(v4);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v7 = a2[1];
    if ( v6 == v7 )
      break;
    for ( i = 1; *(unsigned __int8 *)(v6 + i - 1) == *(unsigned __int8 *)(v7 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v6 + i - 1) )
        goto LABEL_15;
      if ( i > 0x80000 || *(unsigned __int8 *)(v6 + i) != *(unsigned __int8 *)(v7 + i) )
        break;
      if ( !*(_BYTE *)(v6 + i) )
        goto LABEL_15;
    }
    v4 = v5 + 1;
    if ( v5 > 15 )
      v4 = 16;
    if ( v4 == 16 )
      return 0;
  }
LABEL_15:
  *a1 = v5;
  return 1;
}
