/* sub_60905760
 * address: 0x60905760   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60905760(int a1)
{
  _DWORD *v2; // r5
  char *v3; // r5
  signed int i; // r6
  signed int v5; // r0

  *(_DWORD *)a1 = off_60C5CD1C;
  FIELD_U32(a1, 8) = a1 + 16;
  FIELD_U32(a1, 4) = &BufferedSafeStringBase_char_vtable_probably;
  v2 = (_DWORD *)(a1 + 4);
  FIELD_U32(a1, 12) = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 4);
  *v2 = &off_60C5C94C;
  v3 = *(char **)(a1 + 8);
  if ( v3 != " \t\r\n" )
  {
    for ( i = 0; asc_60AEA85F[i]; i += 2 )
    {
      if ( i >= 0x80000 )
      {
        i = 0;
        break;
      }
      if ( !asc_60AEA85F[i + 1] )
      {
        ++i;
        break;
      }
    }
    v5 = FIELD_U32(a1, 12);
    if ( i >= v5 )
      i = v5 - 1;
    qmemcpy(*(void **)(a1 + 8), " \t\r\n", i);
    v3[i] = 0;
  }
  FIELD_U32(a1, 4) = &off_60BD95A8;
  return a1;
}
