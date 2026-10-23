/* sub_608B4894
 * address: 0x608B4894   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608B4894(int *a1, int a2, int a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r6

  *((_BYTE *)a1 + 12) = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( a2 && *(_DWORD *)a2 == 1380013894 )
  {
    v6 = FIELD_U16(a2, 4);
    v7 = v6 == 65279;
    if ( v6 == 65279 )
      v7 = FIELD_U32(a2, 8) == 0x10000;
    if ( v7 )
    {
      *a1 = a2;
      a1[1] = sub_608B47CC(a2) + 8;
      *((_BYTE *)a1 + 12) = 1;
      a1[2] = 0;
      if ( a3 == 1 )
      {
        v8 = *a1;
        if ( *(_DWORD *)(v8 + sub_608B4850(*a1)) == 1413568326 )
          a1[2] = a2 + sub_608B4850(*a1) + 4;
      }
    }
  }
  return a1;
}
