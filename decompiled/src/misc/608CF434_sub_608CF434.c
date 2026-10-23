/* sub_608CF434
 * address: 0x608CF434   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF434(int *a1, int a2, void *a3, int a4, unsigned __int8 a5)
{
  int *v6; // r5
  int v7; // r0
  int v8; // r1
  int result; // r0

  a1[4] = a2;
  a1[2] = (int)a3;
  a1[3] = a4;
  a1[7] = a5;
  if ( (a5 & 2) != 0 )
    memset(a3, (unsigned __int8)byte_60C5B588, a4 - (_DWORD)a3);
  v6 = (int *)&off_60C5B580;
  v7 = sub_608CF3DC((int)&off_60C5B580, (unsigned int)a1);
  v8 = *a1;
  if ( v7 )
    v6 = (int *)(v7 + 20);
  *a1 = *v6;
  FIELD_U32(v8, 4) = v6;
  result = *v6;
  *(_DWORD *)(*v6 + 4) = a1;
  *v6 = v8;
  return result;
}
