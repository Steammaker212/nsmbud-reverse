/* sub_60895C80
 * address: 0x60895C80   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60895C80(__int64 *a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r0
  __int64 v5; // r0
  int v6; // r0
  int v7; // r5

  result = *((unsigned __int8 *)a1 + 28);
  if ( result )
  {
    v3 = *((_DWORD *)a1 + *(_DWORD *)a1 + 3);
    v4 = (int)&a1[51 * *(_DWORD *)a1 + 4];
    if ( *((_DWORD *)a1 + 2) < v3 )
      *((_DWORD *)a1 + 2) = v3;
    sub_608354E0(v4);
    nullsub_66();
    v5 = *a1;
    if ( *((_DWORD *)a1 + 1) != 3 )
      HIDWORD(v5) = 2;
    v6 = (*(_DWORD *)a1 + 1) % SHIDWORD(v5);
    v7 = (int)&a1[51 * v6 + 4];
    *(_DWORD *)a1 = v6;
    FIELD_U32(v7, 400) = 0;
    FIELD_U32(v7, 404) = sub_608354C4(v7);
    result = (int)a1 + 4 * *(_DWORD *)a1;
    FIELD_U32(result, 12) = 0;
  }
  return result;
}
