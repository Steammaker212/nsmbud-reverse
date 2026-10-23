/* sub_608DF11C
 * address: 0x608DF11C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DF11C(int *a1, int *a2)
{
  int v2; // r2
  int v3; // r3
  int *v4; // lr
  int v5; // r3
  int v6; // r2
  int v7; // r12
  bool v8; // zf
  int *v9; // r2
  int result; // r0

  v2 = *a2;
  if ( *a2 && *(int **)(v2 + 4) == a2 )
  {
    v5 = a2[2];
    v4 = a2 + 3;
    FIELD_U32(v2, 4) = v5;
    v7 = a2[2];
    if ( v7 )
    {
      FIELD_U32(v7, 12) = a2[3];
      v5 = 0;
      a2[2] = 0;
    }
  }
  else
  {
    v4 = a2 + 3;
    v3 = a2[3];
    if ( v3 )
      FIELD_U32(v3, 8) = a2[2];
    v5 = a2[2];
    if ( v5 )
    {
      FIELD_U32(v5, 12) = a2[3];
      a2[2] = 0;
    }
    else
    {
      v5 = *a2;
      if ( *a2 )
      {
        v6 = FIELD_U32(v5, 4);
        v5 = *v4;
        FIELD_U32(v6, 12) = *v4;
      }
    }
  }
  *v4 = 0;
  *a2 = 0;
  v8 = *a1 == 0;
  if ( *a1 )
  {
    v5 = *(_DWORD *)(*a1 + 4);
    v8 = v5 == 0;
  }
  if ( v8 )
  {
    do
    {
      v9 = a1;
      a1 = (int *)a1[2];
    }
    while ( a1 );
  }
  else
  {
    v9 = *(int **)(v5 + 12);
    FIELD_U32(v5, 12) = a2;
  }
  v9[2] = (int)a2;
  a2[3] = (int)v9;
  result = *v9;
  *a2 = *v9;
  return result;
}
