/* sub_60916668
 * address: 0x60916668   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916668(int a1, int a2)
{
  int v4; // r4
  int v5; // r2
  unsigned int v6; // r0
  int v7; // r6
  __int16 v8; // r0

  v4 = a1 + 116;
  sead__CriticalSection__lock(a1 + 116);
  v5 = FIELD_U32(a1, 192);
  v6 = a2 - FIELD_U16(a1, 196);
  v7 = 0;
  if ( FIELD_U32(a1, 188) > v6 )
    v5 += 104 * v6;
  v8 = FIELD_U16(v5, 96) - 1;
  FIELD_U16(v5, 96) = v8;
  if ( !v8 )
  {
    v7 = 1;
    --FIELD_U16(a1, 228);
  }
  sead__CriticalSection__unlock(v4);
  return v7;
}
